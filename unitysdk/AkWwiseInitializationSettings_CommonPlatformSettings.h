#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkWwiseInitializationSettings_PlatformSettings.h"

class AkCommonAdvancedSettings;
class AkCommonCommSettings;
class AkCommonUserSettings;

#define AKWWISEINITIALIZATIONSETTINGS_COMMONPLATFORMSETTINGS_GETADVANCEDSETTINGS_OFFSET UNITYSDK_OFFSET(0x19C327F0)
#define AKWWISEINITIALIZATIONSETTINGS_COMMONPLATFORMSETTINGS_GETCOMMSSETTINGS_OFFSET UNITYSDK_OFFSET(0x19C32800)
#define AKWWISEINITIALIZATIONSETTINGS_COMMONPLATFORMSETTINGS_GETUSERSETTINGS_OFFSET UNITYSDK_OFFSET(0x19C327E0)
#define AKWWISEINITIALIZATIONSETTINGS_COMMONPLATFORMSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x19C32810)

inline static constexpr unsigned int AkWwiseInitializationSettings_CommonPlatformSettings_TypeDefinitionIndex = 31532;

class AkWwiseInitializationSettings_CommonPlatformSettings : public ::AkWwiseInitializationSettings_PlatformSettings
{
public:
	::AkCommonUserSettings* UserSettings; // 0x30
	::AkCommonAdvancedSettings* AdvancedSettings; // 0x38
	::AkCommonCommSettings* CommsSettings; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKWWISEINITIALIZATIONSETTINGS_COMMONPLATFORMSETTINGS__CTOR_OFFSET))(this);
	}

	::AkCommonUserSettings* GetUserSettings()
	{
		return ((::AkCommonUserSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKWWISEINITIALIZATIONSETTINGS_COMMONPLATFORMSETTINGS_GETUSERSETTINGS_OFFSET))(this);
	}

	::AkCommonAdvancedSettings* GetAdvancedSettings()
	{
		return ((::AkCommonAdvancedSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKWWISEINITIALIZATIONSETTINGS_COMMONPLATFORMSETTINGS_GETADVANCEDSETTINGS_OFFSET))(this);
	}

	::AkCommonCommSettings* GetCommsSettings()
	{
		return ((::AkCommonCommSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKWWISEINITIALIZATIONSETTINGS_COMMONPLATFORMSETTINGS_GETCOMMSSETTINGS_OFFSET))(this);
	}
};
