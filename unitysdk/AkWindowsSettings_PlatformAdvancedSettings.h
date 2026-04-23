#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCommonAdvancedSettings.h"
#include "unitysdk/AkWindowsSettings_PlatformAdvancedSettings_AudioAPI.h"

class AkPlatformInitSettings;

#define AKWINDOWSSETTINGS_PLATFORMADVANCEDSETTINGS_COPYTO_OFFSET UNITYSDK_OFFSET(0x1A66EFD0)
#define AKWINDOWSSETTINGS_PLATFORMADVANCEDSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1A66F190)
#define AKWINDOWSSETTINGS_PLATFORMADVANCEDSETTINGS___IFIXBASEPROXY_COPYTO_OFFSET UNITYSDK_OFFSET(0x1A66F1D0)

inline static constexpr unsigned int AkWindowsSettings_PlatformAdvancedSettings_TypeDefinitionIndex = 40455;

class AkWindowsSettings_PlatformAdvancedSettings : public ::AkCommonAdvancedSettings
{
public:
	::AkWindowsSettings_PlatformAdvancedSettings_AudioAPI m_AudioAPI; // 0x58
	::System::Boolean m_GlobalFocus; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKWINDOWSSETTINGS_PLATFORMADVANCEDSETTINGS__CTOR_OFFSET))(this);
	}

	::System::Void CopyTo(::AkPlatformInitSettings* settings)
	{
		return ((::System::Void(*)(::PVOID, ::AkPlatformInitSettings*))((::PBYTE)hIl2Cpp + AKWINDOWSSETTINGS_PLATFORMADVANCEDSETTINGS_COPYTO_OFFSET))(this, settings);
	}

	::System::Void __iFixBaseProxy_CopyTo(::AkPlatformInitSettings* P0)
	{
		return ((::System::Void(*)(::PVOID, ::AkPlatformInitSettings*))((::PBYTE)hIl2Cpp + AKWINDOWSSETTINGS_PLATFORMADVANCEDSETTINGS___IFIXBASEPROXY_COPYTO_OFFSET))(this, P0);
	}
};
