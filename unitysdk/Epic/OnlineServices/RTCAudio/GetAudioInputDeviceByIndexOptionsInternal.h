#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::RTCAudio { class GetAudioInputDeviceByIndexOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_RTCAUDIO_GETAUDIOINPUTDEVICEBYINDEXOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x296F30)
#define EPIC_ONLINESERVICES_RTCAUDIO_GETAUDIOINPUTDEVICEBYINDEXOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x9F1380)
#define EPIC_ONLINESERVICES_RTCAUDIO_GETAUDIOINPUTDEVICEBYINDEXOPTIONSINTERNAL_SET_DEVICEINFOINDEX_OFFSET UNITYSDK_OFFSET(0x6329D0)
#define EPIC_ONLINESERVICES_RTCAUDIO_GETAUDIOINPUTDEVICEBYINDEXOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x961230)

namespace Epic::OnlineServices::RTCAudio
{
	inline static constexpr unsigned int GetAudioInputDeviceByIndexOptionsInternal_TypeDefinitionIndex = 35887;

	struct alignas(4) GetAudioInputDeviceByIndexOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::UInt32 m_DeviceInfoIndex; // 0x14

		::System::Void set_DeviceInfoIndex(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_GETAUDIOINPUTDEVICEBYINDEXOPTIONSINTERNAL_SET_DEVICEINFOINDEX_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::RTCAudio::GetAudioInputDeviceByIndexOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::RTCAudio::GetAudioInputDeviceByIndexOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_GETAUDIOINPUTDEVICEBYINDEXOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_GETAUDIOINPUTDEVICEBYINDEXOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_GETAUDIOINPUTDEVICEBYINDEXOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
