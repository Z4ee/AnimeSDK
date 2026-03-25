#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkAndroidSettings_PlatformAdvancedSettings_AudioAPI.h"
#include "unitysdk/AkCommonAdvancedSettings.h"

class AkPlatformInitSettings;

#define AKANDROIDSETTINGS_PLATFORMADVANCEDSETTINGS_COPYTO_OFFSET UNITYSDK_OFFSET(0x18B8CCE0)
#define AKANDROIDSETTINGS_PLATFORMADVANCEDSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x18B8CD30)
#define AKANDROIDSETTINGS_PLATFORMADVANCEDSETTINGS___IFIXBASEPROXY_COPYTO_OFFSET UNITYSDK_OFFSET(0x18B8CDB0)

inline static constexpr unsigned int AkAndroidSettings_PlatformAdvancedSettings_TypeDefinitionIndex = 34544;

class AkAndroidSettings_PlatformAdvancedSettings : public ::AkCommonAdvancedSettings
{
public:
	::AkAndroidSettings_PlatformAdvancedSettings_AudioAPI m_AudioAPI; // 0x58
	::System::Boolean m_RoundFrameSizeToHardwareSize; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKANDROIDSETTINGS_PLATFORMADVANCEDSETTINGS__CTOR_OFFSET))(this);
	}

	::System::Void CopyTo(::AkPlatformInitSettings* settings)
	{
		return ((::System::Void(*)(::PVOID, ::AkPlatformInitSettings*))((::PBYTE)hIl2Cpp + AKANDROIDSETTINGS_PLATFORMADVANCEDSETTINGS_COPYTO_OFFSET))(this, settings);
	}

	::System::Void __iFixBaseProxy_CopyTo(::AkPlatformInitSettings* P0)
	{
		return ((::System::Void(*)(::PVOID, ::AkPlatformInitSettings*))((::PBYTE)hIl2Cpp + AKANDROIDSETTINGS_PLATFORMADVANCEDSETTINGS___IFIXBASEPROXY_COPYTO_OFFSET))(this, P0);
	}
};
