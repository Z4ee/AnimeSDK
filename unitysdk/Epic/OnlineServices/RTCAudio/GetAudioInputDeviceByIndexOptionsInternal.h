#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::RTCAudio { class GetAudioInputDeviceByIndexOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_RTCAUDIO_GETAUDIOINPUTDEVICEBYINDEXOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1020)
#define EPIC_ONLINESERVICES_RTCAUDIO_GETAUDIOINPUTDEVICEBYINDEXOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x73410)
#define EPIC_ONLINESERVICES_RTCAUDIO_GETAUDIOINPUTDEVICEBYINDEXOPTIONSINTERNAL_SET_DEVICEINFOINDEX_OFFSET UNITYSDK_OFFSET(0x21F0)
#define EPIC_ONLINESERVICES_RTCAUDIO_GETAUDIOINPUTDEVICEBYINDEXOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x2200)

namespace Epic::OnlineServices::RTCAudio
{
	inline static constexpr unsigned int GetAudioInputDeviceByIndexOptionsInternal_TypeDefinitionIndex = 42249;

	struct alignas(4) GetAudioInputDeviceByIndexOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::UInt32 m_DeviceInfoIndex; // 0x14

		::System::Void set_DeviceInfoIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_GETAUDIOINPUTDEVICEBYINDEXOPTIONSINTERNAL_SET_DEVICEINFOINDEX_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::RTCAudio::GetAudioInputDeviceByIndexOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::RTCAudio::GetAudioInputDeviceByIndexOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_GETAUDIOINPUTDEVICEBYINDEXOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_GETAUDIOINPUTDEVICEBYINDEXOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_GETAUDIOINPUTDEVICEBYINDEXOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
