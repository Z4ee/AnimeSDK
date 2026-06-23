#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkAndroidSettings_PlatformAdvancedSettings_AudioAPI.h"
#include "unitysdk/AkCommonAdvancedSettings.h"

class AkPlatformInitSettings;
namespace System { class String; }

#define AKANDROIDSETTINGS_PLATFORMADVANCEDSETTINGS_COPYTO_OFFSET UNITYSDK_OFFSET(0x1E3A71F0)
#define AKANDROIDSETTINGS_PLATFORMADVANCEDSETTINGS_GETANDROIDSDKVERSION_OFFSET UNITYSDK_OFFSET(0x1E3A71D0)
#define AKANDROIDSETTINGS_PLATFORMADVANCEDSETTINGS_ISCURRENTAPILEVELSUPPPORTAAUDIO_OFFSET UNITYSDK_OFFSET(0x1E3A71E0)
#define AKANDROIDSETTINGS_PLATFORMADVANCEDSETTINGS_ISMATCH_OFFSET UNITYSDK_OFFSET(0x1E3A6FB0)
#define AKANDROIDSETTINGS_PLATFORMADVANCEDSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3A7200)

inline static constexpr unsigned int AkAndroidSettings_PlatformAdvancedSettings_TypeDefinitionIndex = 33034;

class AkAndroidSettings_PlatformAdvancedSettings : public ::AkCommonAdvancedSettings
{
public:
	::AkAndroidSettings_PlatformAdvancedSettings_AudioAPI m_AudioAPI; // 0x58
	::System::Boolean m_RoundFrameSizeToHardwareSize; // 0x5C
	::System::String* m_DeviceModels; // 0x60
	::System::String* m_DeviceNames; // 0x68
	::System::Int32 aaudioMinApiLevel; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKANDROIDSETTINGS_PLATFORMADVANCEDSETTINGS__CTOR_OFFSET))(this);
	}

	::System::Boolean IsMatch()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKANDROIDSETTINGS_PLATFORMADVANCEDSETTINGS_ISMATCH_OFFSET))(this);
	}

	static ::System::Int32 GetAndroidSDKVersion()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + AKANDROIDSETTINGS_PLATFORMADVANCEDSETTINGS_GETANDROIDSDKVERSION_OFFSET))();
	}

	::System::Boolean IsCurrentApiLevelSuppportAaudio()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKANDROIDSETTINGS_PLATFORMADVANCEDSETTINGS_ISCURRENTAPILEVELSUPPPORTAAUDIO_OFFSET))(this);
	}

	::System::Void CopyTo(::AkPlatformInitSettings* settings)
	{
		return ((::System::Void(*)(::PVOID, ::AkPlatformInitSettings*))((::PBYTE)hIl2Cpp + AKANDROIDSETTINGS_PLATFORMADVANCEDSETTINGS_COPYTO_OFFSET))(this, settings);
	}
};
