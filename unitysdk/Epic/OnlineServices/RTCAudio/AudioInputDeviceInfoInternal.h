#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::RTCAudio { class AudioInputDeviceInfo; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOINPUTDEVICEINFOINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x728A0)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOINPUTDEVICEINFOINTERNAL_GET_DEFAULTDEVICE_OFFSET UNITYSDK_OFFSET(0x723F0)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOINPUTDEVICEINFOINTERNAL_GET_DEVICEID_OFFSET UNITYSDK_OFFSET(0x72550)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOINPUTDEVICEINFOINTERNAL_GET_DEVICENAME_OFFSET UNITYSDK_OFFSET(0x726B0)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOINPUTDEVICEINFOINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x72820)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOINPUTDEVICEINFOINTERNAL_SET_DEFAULTDEVICE_OFFSET UNITYSDK_OFFSET(0x724A0)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOINPUTDEVICEINFOINTERNAL_SET_DEVICEID_OFFSET UNITYSDK_OFFSET(0x72600)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOINPUTDEVICEINFOINTERNAL_SET_DEVICENAME_OFFSET UNITYSDK_OFFSET(0x72760)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOINPUTDEVICEINFOINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x72810)

namespace Epic::OnlineServices::RTCAudio
{
	inline static constexpr unsigned int AudioInputDeviceInfoInternal_TypeDefinitionIndex = 42241;

	struct alignas(8) AudioInputDeviceInfoInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::Int32 m_DefaultDevice; // 0x14
		::System::IntPtr m_DeviceId; // 0x18
		::System::IntPtr m_DeviceName; // 0x20

		::System::Boolean get_DefaultDevice()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOINPUTDEVICEINFOINTERNAL_GET_DEFAULTDEVICE_OFFSET))(this);
		}

		::System::Void set_DefaultDevice(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOINPUTDEVICEINFOINTERNAL_SET_DEFAULTDEVICE_OFFSET))(this, a1);
		}

		::System::String* get_DeviceId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOINPUTDEVICEINFOINTERNAL_GET_DEVICEID_OFFSET))(this);
		}

		::System::Void set_DeviceId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOINPUTDEVICEINFOINTERNAL_SET_DEVICEID_OFFSET))(this, a1);
		}

		::System::String* get_DeviceName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOINPUTDEVICEINFOINTERNAL_GET_DEVICENAME_OFFSET))(this);
		}

		::System::Void set_DeviceName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOINPUTDEVICEINFOINTERNAL_SET_DEVICENAME_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::RTCAudio::AudioInputDeviceInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::RTCAudio::AudioInputDeviceInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOINPUTDEVICEINFOINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOINPUTDEVICEINFOINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOINPUTDEVICEINFOINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
