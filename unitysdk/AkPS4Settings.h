#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkWwiseInitializationSettings_PlatformSettings.h"

class AkCommonAdvancedSettings;
class AkCommonCommSettings;
class AkCommonUserSettings;
class AkPS4Settings_PlatformAdvancedSettings;

#define AKPS4SETTINGS_GETADVANCEDSETTINGS_OFFSET UNITYSDK_OFFSET(0x18BC6D00)
#define AKPS4SETTINGS_GETCOMMSSETTINGS_OFFSET UNITYSDK_OFFSET(0x18BC6D40)
#define AKPS4SETTINGS_GETUSERSETTINGS_OFFSET UNITYSDK_OFFSET(0x18BC6CC0)
#define AKPS4SETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x18BC6B30)

inline static constexpr unsigned int AkPS4Settings_TypeDefinitionIndex = 34631;

class AkPS4Settings : public ::AkWwiseInitializationSettings_PlatformSettings
{
public:
	::AkCommonUserSettings* UserSettings; // 0x30
	::AkPS4Settings_PlatformAdvancedSettings* AdvancedSettings; // 0x38
	::AkCommonCommSettings* CommsSettings; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPS4SETTINGS__CTOR_OFFSET))(this);
	}

	::AkCommonUserSettings* GetUserSettings()
	{
		return ((::AkCommonUserSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPS4SETTINGS_GETUSERSETTINGS_OFFSET))(this);
	}

	::AkCommonAdvancedSettings* GetAdvancedSettings()
	{
		return ((::AkCommonAdvancedSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPS4SETTINGS_GETADVANCEDSETTINGS_OFFSET))(this);
	}

	::AkCommonCommSettings* GetCommsSettings()
	{
		return ((::AkCommonCommSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPS4SETTINGS_GETCOMMSSETTINGS_OFFSET))(this);
	}
};
