#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkWwiseInitializationSettings_PlatformSettings.h"

class AkCommonAdvancedSettings;
class AkCommonCommSettings;
class AkCommonUserSettings;
class AkPellegrinoSettings_PlatformAdvancedSettings;

#define AKPELLEGRINOSETTINGS_GETADVANCEDSETTINGS_OFFSET UNITYSDK_OFFSET(0x1B44CE70)
#define AKPELLEGRINOSETTINGS_GETCOMMSSETTINGS_OFFSET UNITYSDK_OFFSET(0x1B44CEB0)
#define AKPELLEGRINOSETTINGS_GETUSERSETTINGS_OFFSET UNITYSDK_OFFSET(0x1B44CE30)
#define AKPELLEGRINOSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B44CC90)

inline static constexpr unsigned int AkPellegrinoSettings_TypeDefinitionIndex = 41279;

class AkPellegrinoSettings : public ::AkWwiseInitializationSettings_PlatformSettings
{
public:
	::AkCommonUserSettings* UserSettings; // 0x30
	::AkPellegrinoSettings_PlatformAdvancedSettings* AdvancedSettings; // 0x38
	::AkCommonCommSettings* CommsSettings; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPELLEGRINOSETTINGS__CTOR_OFFSET))(this);
	}

	::AkCommonUserSettings* GetUserSettings()
	{
		return ((::AkCommonUserSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPELLEGRINOSETTINGS_GETUSERSETTINGS_OFFSET))(this);
	}

	::AkCommonAdvancedSettings* GetAdvancedSettings()
	{
		return ((::AkCommonAdvancedSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPELLEGRINOSETTINGS_GETADVANCEDSETTINGS_OFFSET))(this);
	}

	::AkCommonCommSettings* GetCommsSettings()
	{
		return ((::AkCommonCommSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPELLEGRINOSETTINGS_GETCOMMSSETTINGS_OFFSET))(this);
	}
};
