#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkWwiseInitializationSettings_PlatformSettings.h"

class AkCommonAdvancedSettings;
class AkCommonCommSettings;
class AkCommonUserSettings;
class AkiOSSettings_PlatformAdvancedSettings;

#define AKIOSSETTINGS_GETADVANCEDSETTINGS_OFFSET UNITYSDK_OFFSET(0x1D2DC720)
#define AKIOSSETTINGS_GETCOMMSSETTINGS_OFFSET UNITYSDK_OFFSET(0x1D2DC760)
#define AKIOSSETTINGS_GETUSERSETTINGS_OFFSET UNITYSDK_OFFSET(0x1D2DC6E0)
#define AKIOSSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2DC570)

inline static constexpr unsigned int AkiOSSettings_TypeDefinitionIndex = 43710;

class AkiOSSettings : public ::AkWwiseInitializationSettings_PlatformSettings
{
public:
	::AkCommonUserSettings* UserSettings; // 0x30
	::AkiOSSettings_PlatformAdvancedSettings* AdvancedSettings; // 0x38
	::AkCommonCommSettings* CommsSettings; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKIOSSETTINGS__CTOR_OFFSET))(this);
	}

	::AkCommonUserSettings* GetUserSettings()
	{
		return ((::AkCommonUserSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKIOSSETTINGS_GETUSERSETTINGS_OFFSET))(this);
	}

	::AkCommonAdvancedSettings* GetAdvancedSettings()
	{
		return ((::AkCommonAdvancedSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKIOSSETTINGS_GETADVANCEDSETTINGS_OFFSET))(this);
	}

	::AkCommonCommSettings* GetCommsSettings()
	{
		return ((::AkCommonCommSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKIOSSETTINGS_GETCOMMSSETTINGS_OFFSET))(this);
	}
};
