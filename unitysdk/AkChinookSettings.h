#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkWwiseInitializationSettings_PlatformSettings.h"

class AkChinookSettings_PlatformAdvancedSettings;
class AkCommonAdvancedSettings;
class AkCommonCommSettings;
class AkCommonUserSettings;

#define AKCHINOOKSETTINGS_GETADVANCEDSETTINGS_OFFSET UNITYSDK_OFFSET(0x1E48C5E0)
#define AKCHINOOKSETTINGS_GETCOMMSSETTINGS_OFFSET UNITYSDK_OFFSET(0x1E48C5F0)
#define AKCHINOOKSETTINGS_GETUSERSETTINGS_OFFSET UNITYSDK_OFFSET(0x1E48C5D0)
#define AKCHINOOKSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E48C450)

inline static constexpr unsigned int AkChinookSettings_TypeDefinitionIndex = 33036;

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
