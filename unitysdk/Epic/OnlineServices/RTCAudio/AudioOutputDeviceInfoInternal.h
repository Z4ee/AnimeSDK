#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::RTCAudio { class AudioOutputDeviceInfo; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOOUTPUTDEVICEINFOINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x730B0)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOOUTPUTDEVICEINFOINTERNAL_GET_DEFAULTDEVICE_OFFSET UNITYSDK_OFFSET(0x72C00)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOOUTPUTDEVICEINFOINTERNAL_GET_DEVICEID_OFFSET UNITYSDK_OFFSET(0x72D60)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOOUTPUTDEVICEINFOINTERNAL_GET_DEVICENAME_OFFSET UNITYSDK_OFFSET(0x72EC0)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOOUTPUTDEVICEINFOINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x73030)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOOUTPUTDEVICEINFOINTERNAL_SET_DEFAULTDEVICE_OFFSET UNITYSDK_OFFSET(0x72CB0)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOOUTPUTDEVICEINFOINTERNAL_SET_DEVICEID_OFFSET UNITYSDK_OFFSET(0x72E10)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOOUTPUTDEVICEINFOINTERNAL_SET_DEVICENAME_OFFSET UNITYSDK_OFFSET(0x72F70)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOOUTPUTDEVICEINFOINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x73020)

namespace Epic::OnlineServices::RTCAudio
{
	inline static constexpr unsigned int AudioOutputDeviceInfoInternal_TypeDefinitionIndex = 42245;

	struct alignas(8) AudioOutputDeviceInfoInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::Int32 m_DefaultDevice; // 0x14
		::System::IntPtr m_DeviceId; // 0x18
		::System::IntPtr m_DeviceName; // 0x20

		::System::Boolean get_DefaultDevice()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOOUTPUTDEVICEINFOINTERNAL_GET_DEFAULTDEVICE_OFFSET))(this);
		}

		::System::Void set_DefaultDevice(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOOUTPUTDEVICEINFOINTERNAL_SET_DEFAULTDEVICE_OFFSET))(this, a1);
		}

		::System::String* get_DeviceId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOOUTPUTDEVICEINFOINTERNAL_GET_DEVICEID_OFFSET))(this);
		}

		::System::Void set_DeviceId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOOUTPUTDEVICEINFOINTERNAL_SET_DEVICEID_OFFSET))(this, a1);
		}

		::System::String* get_DeviceName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOOUTPUTDEVICEINFOINTERNAL_GET_DEVICENAME_OFFSET))(this);
		}

		::System::Void set_DeviceName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOOUTPUTDEVICEINFOINTERNAL_SET_DEVICENAME_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::RTCAudio::AudioOutputDeviceInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::RTCAudio::AudioOutputDeviceInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOOUTPUTDEVICEINFOINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOOUTPUTDEVICEINFOINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOOUTPUTDEVICEINFOINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
