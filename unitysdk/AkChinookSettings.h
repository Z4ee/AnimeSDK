#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkWwiseInitializationSettings_PlatformSettings.h"

class AkChinookSettings_PlatformAdvancedSettings;
class AkCommonAdvancedSettings;
class AkCommonCommSettings;
class AkCommonUserSettings;

#define AKCHINOOKSETTINGS_GETADVANCEDSETTINGS_OFFSET UNITYSDK_OFFSET(0x1F8BB210)
#define AKCHINOOKSETTINGS_GETCOMMSSETTINGS_OFFSET UNITYSDK_OFFSET(0x1F8BB220)
#define AKCHINOOKSETTINGS_GETUSERSETTINGS_OFFSET UNITYSDK_OFFSET(0x1F8BB200)
#define AKCHINOOKSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1F8BB080)

inline static constexpr unsigned int AkChinookSettings_TypeDefinitionIndex = 33671;

class AkChinookSettings : public ::AkWwiseInitializationSettings_PlatformSettings
{
public:
	::AkCommonUserSettings* UserSettings; // 0x30
	::AkChinookSettings_PlatformAdvancedSettings* AdvancedSettings; // 0x38
	::AkCommonCommSettings* CommsSettings; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCHINOOKSETTINGS__CTOR_OFFSET))(this);
	}

	::AkCommonUserSettings* GetUserSettings()
	{
		return ((::AkCommonUserSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCHINOOKSETTINGS_GETUSERSETTINGS_OFFSET))(this);
	}

	::AkCommonAdvancedSettings* GetAdvancedSettings()
	{
		return ((::AkCommonAdvancedSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCHINOOKSETTINGS_GETADVANCEDSETTINGS_OFFSET))(this);
	}

	::AkCommonCommSettings* GetCommsSettings()
	{
		return ((::AkCommonCommSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCHINOOKSETTINGS_GETCOMMSSETTINGS_OFFSET))(this);
	}
};
