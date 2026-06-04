#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AkCommonOutputSettings;
class AkCommonUserSettings_SpatialAudioSettings;
class AkDeviceSettings;
class AkInitSettings;
class AkMusicSettings;
class AkPlatformInitSettings;
class AkSpatialAudioInitSettings;
class AkStreamMgrSettings;
class AkUnityPlatformSpecificSettings;
namespace System { class String; }

#define AKCOMMONUSERSETTINGS_COPYTO_1_OFFSET UNITYSDK_OFFSET(0x1B427960)
#define AKCOMMONUSERSETTINGS_COPYTO_2_OFFSET UNITYSDK_OFFSET(0x1B427640)
#define AKCOMMONUSERSETTINGS_COPYTO_3_OFFSET UNITYSDK_OFFSET(0x1B428EA0)
#define AKCOMMONUSERSETTINGS_COPYTO_4_OFFSET UNITYSDK_OFFSET(0x1B428FF0)
#define AKCOMMONUSERSETTINGS_COPYTO_5_OFFSET UNITYSDK_OFFSET(0x1B4291F0)
#define AKCOMMONUSERSETTINGS_COPYTO_6_OFFSET UNITYSDK_OFFSET(0x1B429950)
#define AKCOMMONUSERSETTINGS_COPYTO_OFFSET UNITYSDK_OFFSET(0x1B4285E0)
#define AKCOMMONUSERSETTINGS_GETPLUGINPATH_OFFSET UNITYSDK_OFFSET(0x1B428350)
#define AKCOMMONUSERSETTINGS_SETSAMPLERATE_OFFSET UNITYSDK_OFFSET(0x1B428EF0)
#define AKCOMMONUSERSETTINGS_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1B4299A0)
#define AKCOMMONUSERSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B412EC0)

inline static constexpr unsigned int AkCommonUserSettings_TypeDefinitionIndex = 41219;

class AkCommonUserSettings : public ::System::Object
{
public:
	::System::String* m_BasePath; // 0x10
	::System::String* m_StartupLanguage; // 0x18
	::System::Boolean m_EngineLogging; // 0x20
	::System::UInt32 m_MaximumNumberOfPositioningPaths; // 0x24
	::System::UInt32 m_CommandQueueSize; // 0x28
	::System::UInt32 m_SamplesPerFrame; // 0x2C
	::AkCommonOutputSettings* m_MainOutputSettings; // 0x30
	::System::Int32 m_CallbackManagerBufferSize; // 0x38
	::System::Single m_StreamingLookAheadRatio; // 0x3C
	::System::UInt32 m_SampleRate; // 0x40
	::System::UInt16 m_NumberOfRefillsInVoice; // 0x44
	::AkCommonUserSettings_SpatialAudioSettings* m_SpatialAudioSettings; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCOMMONUSERSETTINGS__CTOR_OFFSET))(this);
	}

	static ::System::String* GetPluginPath()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + AKCOMMONUSERSETTINGS_GETPLUGINPATH_OFFSET))();
	}

	::System::Void CopyTo(::AkInitSettings* a1)
	{
		return ((::System::Void(*)(::PVOID, ::AkInitSettings*))((::PBYTE)hIl2Cpp + AKCOMMONUSERSETTINGS_COPYTO_OFFSET))(this, a1);
	}

	::System::Void CopyTo_1(::AkMusicSettings* a1)
	{
		return ((::System::Void(*)(::PVOID, ::AkMusicSettings*))((::PBYTE)hIl2Cpp + AKCOMMONUSERSETTINGS_COPYTO_1_OFFSET))(this, a1);
	}

	::System::Void CopyTo_2(::AkStreamMgrSettings* a1)
	{
		return ((::System::Void(*)(::PVOID, ::AkStreamMgrSettings*))((::PBYTE)hIl2Cpp + AKCOMMONUSERSETTINGS_COPYTO_2_OFFSET))(this, a1);
	}

	::System::Void CopyTo_3(::AkDeviceSettings* a1)
	{
		return ((::System::Void(*)(::PVOID, ::AkDeviceSettings*))((::PBYTE)hIl2Cpp + AKCOMMONUSERSETTINGS_COPYTO_3_OFFSET))(this, a1);
	}

	::System::Void SetSampleRate(::AkPlatformInitSettings* a1)
	{
		return ((::System::Void(*)(::PVOID, ::AkPlatformInitSettings*))((::PBYTE)hIl2Cpp + AKCOMMONUSERSETTINGS_SETSAMPLERATE_OFFSET))(this, a1);
	}

	::System::Void CopyTo_4(::AkPlatformInitSettings* a1)
	{
		return ((::System::Void(*)(::PVOID, ::AkPlatformInitSettings*))((::PBYTE)hIl2Cpp + AKCOMMONUSERSETTINGS_COPYTO_4_OFFSET))(this, a1);
	}

	::System::Void CopyTo_5(::AkSpatialAudioInitSettings* a1)
	{
		return ((::System::Void(*)(::PVOID, ::AkSpatialAudioInitSettings*))((::PBYTE)hIl2Cpp + AKCOMMONUSERSETTINGS_COPYTO_5_OFFSET))(this, a1);
	}

	::System::Void CopyTo_6(::AkUnityPlatformSpecificSettings* a1)
	{
		return ((::System::Void(*)(::PVOID, ::AkUnityPlatformSpecificSettings*))((::PBYTE)hIl2Cpp + AKCOMMONUSERSETTINGS_COPYTO_6_OFFSET))(this, a1);
	}

	::System::Void Validate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCOMMONUSERSETTINGS_VALIDATE_OFFSET))(this);
	}
};
