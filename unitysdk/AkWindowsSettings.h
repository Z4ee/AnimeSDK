#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkWwiseInitializationSettings_PlatformSettings.h"

class AkCommonAdvancedSettings;
class AkCommonCommSettings;
class AkCommonUserSettings;
class AkWindowsSettings_PlatformAdvancedSettings;

#define AKWINDOWSSETTINGS_GETADVANCEDSETTINGS_OFFSET UNITYSDK_OFFSET(0x1E7A2D30)
#define AKWINDOWSSETTINGS_GETCOMMSSETTINGS_OFFSET UNITYSDK_OFFSET(0x1E7A2D40)
#define AKWINDOWSSETTINGS_GETUSERSETTINGS_OFFSET UNITYSDK_OFFSET(0x1E7A2D20)
#define AKWINDOWSSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7A2D50)

inline static constexpr unsigned int AkWindowsSettings_TypeDefinitionIndex = 33121;

class AkWindowsSettings : public ::AkWwiseInitializationSettings_PlatformSettings
{
public:
	::AkCommonUserSettings* UserSettings; // 0x30
	::AkWindowsSettings_PlatformAdvancedSettings* AdvancedSettings; // 0x38
	::AkCommonCommSettings* CommsSettings; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKWINDOWSSETTINGS__CTOR_OFFSET))(this);
	}

	::AkCommonUserSettings* GetUserSettings()
	{
		return ((::AkCommonUserSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKWINDOWSSETTINGS_GETUSERSETTINGS_OFFSET))(this);
	}

	::AkCommonAdvancedSettings* GetAdvancedSettings()
	{
		return ((::AkCommonAdvancedSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKWINDOWSSETTINGS_GETADVANCEDSETTINGS_OFFSET))(this);
	}

	::AkCommonCommSettings* GetCommsSettings()
	{
		return ((::AkCommonCommSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKWINDOWSSETTINGS_GETCOMMSSETTINGS_OFFSET))(this);
	}
};
