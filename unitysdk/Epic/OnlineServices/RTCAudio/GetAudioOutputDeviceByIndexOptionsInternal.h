#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::RTCAudio { class GetAudioOutputDeviceByIndexOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_RTCAUDIO_GETAUDIOOUTPUTDEVICEBYINDEXOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x283610)
#define EPIC_ONLINESERVICES_RTCAUDIO_GETAUDIOOUTPUTDEVICEBYINDEXOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x9248E0)
#define EPIC_ONLINESERVICES_RTCAUDIO_GETAUDIOOUTPUTDEVICEBYINDEXOPTIONSINTERNAL_SET_DEVICEINFOINDEX_OFFSET UNITYSDK_OFFSET(0x5120D0)
#define EPIC_ONLINESERVICES_RTCAUDIO_GETAUDIOOUTPUTDEVICEBYINDEXOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x916EA0)

namespace Epic::OnlineServices::RTCAudio
{
	inline static constexpr unsigned int GetAudioOutputDeviceByIndexOptionsInternal_TypeDefinitionIndex = 35232;

	struct alignas(4) GetAudioOutputDeviceByIndexOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::UInt32 m_DeviceInfoIndex; // 0x14

		::System::Void set_DeviceInfoIndex(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_GETAUDIOOUTPUTDEVICEBYINDEXOPTIONSINTERNAL_SET_DEVICEINFOINDEX_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::RTCAudio::GetAudioOutputDeviceByIndexOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::RTCAudio::GetAudioOutputDeviceByIndexOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_GETAUDIOOUTPUTDEVICEBYINDEXOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_GETAUDIOOUTPUTDEVICEBYINDEXOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_GETAUDIOOUTPUTDEVICEBYINDEXOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
