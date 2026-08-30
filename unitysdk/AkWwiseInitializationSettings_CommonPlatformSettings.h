#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkWwiseInitializationSettings_PlatformSettings.h"

class AkCommonAdvancedSettings;
class AkCommonCommSettings;
class AkCommonUserSettings;

#define AKWWISEINITIALIZATIONSETTINGS_COMMONPLATFORMSETTINGS_GETADVANCEDSETTINGS_OFFSET UNITYSDK_OFFSET(0x1D2DB860)
#define AKWWISEINITIALIZATIONSETTINGS_COMMONPLATFORMSETTINGS_GETCOMMSSETTINGS_OFFSET UNITYSDK_OFFSET(0x1D2DB8A0)
#define AKWWISEINITIALIZATIONSETTINGS_COMMONPLATFORMSETTINGS_GETUSERSETTINGS_OFFSET UNITYSDK_OFFSET(0x1D2DB820)
#define AKWWISEINITIALIZATIONSETTINGS_COMMONPLATFORMSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2DB8E0)

inline static constexpr unsigned int AkWwiseInitializationSettings_CommonPlatformSettings_TypeDefinitionIndex = 43667;

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
