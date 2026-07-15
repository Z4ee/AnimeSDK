#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AkCommonAdvancedSettings_SpatialAudioSettings;
class AkDeviceSettings;
class AkInitSettings;
class AkPlatformInitSettings;
class AkSpatialAudioInitSettings;
class AkUnityPlatformSpecificSettings;
namespace System { class String; }

#define AKCOMMONADVANCEDSETTINGS_COPYTO_1_OFFSET UNITYSDK_OFFSET(0x1B95EF60)
#define AKCOMMONADVANCEDSETTINGS_COPYTO_2_OFFSET UNITYSDK_OFFSET(0x1B95F8A0)
#define AKCOMMONADVANCEDSETTINGS_COPYTO_3_OFFSET UNITYSDK_OFFSET(0x1B95F8F0)
#define AKCOMMONADVANCEDSETTINGS_COPYTO_4_OFFSET UNITYSDK_OFFSET(0x1B95FAE0)
#define AKCOMMONADVANCEDSETTINGS_COPYTO_OFFSET UNITYSDK_OFFSET(0x1B95E910)
#define AKCOMMONADVANCEDSETTINGS_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1B95FB30)
#define AKCOMMONADVANCEDSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B94CD00)

inline static constexpr unsigned int AkCommonAdvancedSettings_TypeDefinitionIndex = 42037;

class AkCommonAdvancedSettings : public ::System::Object
{
public:
	::System::UInt32 m_IOMemorySize; // 0x10
	::System::Single m_TargetAutoStreamBufferLengthMs; // 0x14
	::System::Boolean m_UseStreamCache; // 0x18
	::System::UInt32 m_MaximumPinnedBytesInCache; // 0x1C
	::System::Boolean m_EnableGameSyncPreparation; // 0x20
	::System::UInt32 m_ContinuousPlaybackLookAhead; // 0x24
	::System::UInt32 m_MonitorQueuePoolSize; // 0x28
	::System::UInt32 m_MaximumHardwareTimeoutMs; // 0x2C
	::System::Boolean m_DebugOutOfRangeCheckEnabled; // 0x30
	::System::Single m_DebugOutOfRangeLimit; // 0x34
	::AkCommonAdvancedSettings_SpatialAudioSettings* m_SpatialAudioSettings; // 0x38
	::System::Boolean m_RenderDuringFocusLoss; // 0x40
	::System::String* m_SoundBankPersistentDataPath; // 0x48
	::System::Boolean m_UseAsyncOpen; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCOMMONADVANCEDSETTINGS__CTOR_OFFSET))(this);
	}

	::System::Void CopyTo(::AkDeviceSettings* a1)
	{
		return ((::System::Void(*)(::PVOID, ::AkDeviceSettings*))((::PBYTE)hIl2Cpp + AKCOMMONADVANCEDSETTINGS_COPYTO_OFFSET))(this, a1);
	}

	::System::Void CopyTo_1(::AkInitSettings* a1)
	{
		return ((::System::Void(*)(::PVOID, ::AkInitSettings*))((::PBYTE)hIl2Cpp + AKCOMMONADVANCEDSETTINGS_COPYTO_1_OFFSET))(this, a1);
	}

	::System::Void CopyTo_2(::AkPlatformInitSettings* a1)
	{
		return ((::System::Void(*)(::PVOID, ::AkPlatformInitSettings*))((::PBYTE)hIl2Cpp + AKCOMMONADVANCEDSETTINGS_COPYTO_2_OFFSET))(this, a1);
	}

	::System::Void CopyTo_3(::AkSpatialAudioInitSettings* a1)
	{
		return ((::System::Void(*)(::PVOID, ::AkSpatialAudioInitSettings*))((::PBYTE)hIl2Cpp + AKCOMMONADVANCEDSETTINGS_COPYTO_3_OFFSET))(this, a1);
	}

	::System::Void CopyTo_4(::AkUnityPlatformSpecificSettings* a1)
	{
		return ((::System::Void(*)(::PVOID, ::AkUnityPlatformSpecificSettings*))((::PBYTE)hIl2Cpp + AKCOMMONADVANCEDSETTINGS_COPYTO_4_OFFSET))(this, a1);
	}

	::System::Void Validate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCOMMONADVANCEDSETTINGS_VALIDATE_OFFSET))(this);
	}
};
