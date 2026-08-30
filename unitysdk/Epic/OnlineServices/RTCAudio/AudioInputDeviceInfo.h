#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/RTCAudio/AudioInputDeviceInfoInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOINPUTDEVICEINFO_GET_DEFAULTDEVICE_OFFSET UNITYSDK_OFFSET(0xB3EBFC0)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOINPUTDEVICEINFO_GET_DEVICEID_OFFSET UNITYSDK_OFFSET(0xB3EBFE0)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOINPUTDEVICEINFO_GET_DEVICENAME_OFFSET UNITYSDK_OFFSET(0xB3EC000)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOINPUTDEVICEINFO_SET_1_OFFSET UNITYSDK_OFFSET(0xB3EC5D0)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOINPUTDEVICEINFO_SET_DEFAULTDEVICE_OFFSET UNITYSDK_OFFSET(0xB3EBFD0)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOINPUTDEVICEINFO_SET_DEVICEID_OFFSET UNITYSDK_OFFSET(0xB3EBFF0)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOINPUTDEVICEINFO_SET_DEVICENAME_OFFSET UNITYSDK_OFFSET(0xB3EC010)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOINPUTDEVICEINFO_SET_OFFSET UNITYSDK_OFFSET(0xB3EC020)
#define EPIC_ONLINESERVICES_RTCAUDIO_AUDIOINPUTDEVICEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xB3EC6F0)

namespace Epic::OnlineServices::RTCAudio
{
	inline static constexpr unsigned int AudioInputDeviceInfo_TypeDefinitionIndex = 45283;

	class AudioInputDeviceInfo : public ::System::Object
	{
	public:
		::System::String* _DeviceName_k__BackingField; // 0x10
		::System::String* _DeviceId_k__BackingField; // 0x18
		::System::Boolean _DefaultDevice_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOINPUTDEVICEINFO__CTOR_OFFSET))(this);
		}

		::System::Boolean get_DefaultDevice()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOINPUTDEVICEINFO_GET_DEFAULTDEVICE_OFFSET))(this);
		}

		::System::Void set_DefaultDevice(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOINPUTDEVICEINFO_SET_DEFAULTDEVICE_OFFSET))(this, a1);
		}

		::System::String* get_DeviceId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOINPUTDEVICEINFO_GET_DEVICEID_OFFSET))(this);
		}

		::System::Void set_DeviceId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOINPUTDEVICEINFO_SET_DEVICEID_OFFSET))(this, a1);
		}

		::System::String* get_DeviceName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOINPUTDEVICEINFO_GET_DEVICENAME_OFFSET))(this);
		}

		::System::Void set_DeviceName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOINPUTDEVICEINFO_SET_DEVICENAME_OFFSET))(this, a1);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::RTCAudio::AudioInputDeviceInfoInternal> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::RTCAudio::AudioInputDeviceInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOINPUTDEVICEINFO_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_AUDIOINPUTDEVICEINFO_SET_1_OFFSET))(this, a1);
		}
	};
}
