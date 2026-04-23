#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/RTCAudio/AudioOutputDeviceInfoInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOOUTPUTDEVICEINFO_GET_DEFAULTDEVICE_OFFSET UNITYSDK_OFFSET(0x8F252D0)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOOUTPUTDEVICEINFO_GET_DEVICEID_OFFSET UNITYSDK_OFFSET(0x8F252F0)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOOUTPUTDEVICEINFO_GET_DEVICENAME_OFFSET UNITYSDK_OFFSET(0x8F25310)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOOUTPUTDEVICEINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x8F258E0)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOOUTPUTDEVICEINFO_SET_DEFAULTDEVICE_OFFSET UNITYSDK_OFFSET(0x8F252E0)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOOUTPUTDEVICEINFO_SET_DEVICEID_OFFSET UNITYSDK_OFFSET(0x8F25300)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOOUTPUTDEVICEINFO_SET_DEVICENAME_OFFSET UNITYSDK_OFFSET(0x8F25320)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOOUTPUTDEVICEINFO_SET_OFFSET UNITYSDK_OFFSET(0x8F25330)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOOUTPUTDEVICEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x8F259F0)

namespace Epic::OnlineServices::RTCAudio
{
	inline static constexpr unsigned int AudioOutputDeviceInfo_TypeDefinitionIndex = 41441;

	class AudioOutputDeviceInfo : public ::System::Object
	{
	public:
		::System::String* _DeviceId_k__BackingField; // 0x10
		::System::String* _DeviceName_k__BackingField; // 0x18
		::System::Boolean _DefaultDevice_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOOUTPUTDEVICEINFO__CTOR_OFFSET))(this);
		}

		::System::Boolean get_DefaultDevice()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOOUTPUTDEVICEINFO_GET_DEFAULTDEVICE_OFFSET))(this);
		}

		::System::Void set_DefaultDevice(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOOUTPUTDEVICEINFO_SET_DEFAULTDEVICE_OFFSET))(this, value);
		}

		::System::String* get_DeviceId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOOUTPUTDEVICEINFO_GET_DEVICEID_OFFSET))(this);
		}

		::System::Void set_DeviceId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOOUTPUTDEVICEINFO_SET_DEVICEID_OFFSET))(this, value);
		}

		::System::String* get_DeviceName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOOUTPUTDEVICEINFO_GET_DEVICENAME_OFFSET))(this);
		}

		::System::Void set_DeviceName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOOUTPUTDEVICEINFO_SET_DEVICENAME_OFFSET))(this, value);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::RTCAudio::AudioOutputDeviceInfoInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::RTCAudio::AudioOutputDeviceInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOOUTPUTDEVICEINFO_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOOUTPUTDEVICEINFO_SET_1_OFFSET))(this, other);
		}
	};
}
