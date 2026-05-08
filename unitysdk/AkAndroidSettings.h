#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkWwiseInitializationSettings_PlatformSettings.h"

class AkAndroidSettings_PlatformAdvancedSettings;
class AkCommonAdvancedSettings;
class AkCommonCommSettings;
class AkCommonUserSettings;

#define AKANDROIDSETTINGS_GETADVANCEDSETTINGS_OFFSET UNITYSDK_OFFSET(0x1C091680)
#define AKANDROIDSETTINGS_GETCOMMSSETTINGS_OFFSET UNITYSDK_OFFSET(0x1C091690)
#define AKANDROIDSETTINGS_GETUSERSETTINGS_OFFSET UNITYSDK_OFFSET(0x1C091670)
#define AKANDROIDSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0914A0)

inline static constexpr unsigned int AkAndroidSettings_TypeDefinitionIndex = 31482;

class AkAndroidSettings : public ::AkWwiseInitializationSettings_PlatformSettings
{
public:
	::AkCommonUserSettings* UserSettings; // 0x30
	::AkAndroidSettings_PlatformAdvancedSettings* AdvancedSettings; // 0x38
	::AkCommonCommSettings* CommsSettings; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKANDROIDSETTINGS__CTOR_OFFSET))(this);
	}

	::AkCommonUserSettings* GetUserSettings()
	{
		return ((::AkCommonUserSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKANDROIDSETTINGS_GETUSERSETTINGS_OFFSET))(this);
	}

	::AkCommonAdvancedSettings* GetAdvancedSettings()
	{
		return ((::AkCommonAdvancedSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKANDROIDSETTINGS_GETADVANCEDSETTINGS_OFFSET))(this);
	}

	::AkCommonCommSettings* GetCommsSettings()
	{
		return ((::AkCommonCommSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKANDROIDSETTINGS_GETCOMMSSETTINGS_OFFSET))(this);
	}
};
