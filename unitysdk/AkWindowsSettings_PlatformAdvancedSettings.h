#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCommonAdvancedSettings.h"
#include "unitysdk/AkWindowsSettings_PlatformAdvancedSettings_AudioAPI.h"

class AkPlatformInitSettings;

#define AKWINDOWSSETTINGS_PLATFORMADVANCEDSETTINGS_COPYTO_OFFSET UNITYSDK_OFFSET(0x1B6E7650)
#define AKWINDOWSSETTINGS_PLATFORMADVANCEDSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6E7810)

inline static constexpr unsigned int AkWindowsSettings_PlatformAdvancedSettings_TypeDefinitionIndex = 42097;

class AkWindowsSettings_PlatformAdvancedSettings : public ::AkCommonAdvancedSettings
{
public:
	::AkWindowsSettings_PlatformAdvancedSettings_AudioAPI m_AudioAPI; // 0x58
	::System::Boolean m_GlobalFocus; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKWINDOWSSETTINGS_PLATFORMADVANCEDSETTINGS__CTOR_OFFSET))(this);
	}

	::System::Void CopyTo(::AkPlatformInitSettings* a1)
	{
		return ((::System::Void(*)(::PVOID, ::AkPlatformInitSettings*))((::PBYTE)hIl2Cpp + AKWINDOWSSETTINGS_PLATFORMADVANCEDSETTINGS_COPYTO_OFFSET))(this, a1);
	}
};
