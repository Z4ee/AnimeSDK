#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_RTCAUDIO_SETAUDIOINPUTSETTINGSOPTIONS_GET_DEVICEID_OFFSET UNITYSDK_OFFSET(0x8F2F390)
#define EPIC_ONLINESERVICES_RTCAUDIO_SETAUDIOINPUTSETTINGSOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x8F2F370)
#define EPIC_ONLINESERVICES_RTCAUDIO_SETAUDIOINPUTSETTINGSOPTIONS_GET_PLATFORMAEC_OFFSET UNITYSDK_OFFSET(0x8F2F3D0)
#define EPIC_ONLINESERVICES_RTCAUDIO_SETAUDIOINPUTSETTINGSOPTIONS_GET_VOLUME_OFFSET UNITYSDK_OFFSET(0x8F2F3B0)
#define EPIC_ONLINESERVICES_RTCAUDIO_SETAUDIOINPUTSETTINGSOPTIONS_SET_DEVICEID_OFFSET UNITYSDK_OFFSET(0x8F2F3A0)
#define EPIC_ONLINESERVICES_RTCAUDIO_SETAUDIOINPUTSETTINGSOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x8F2F380)
#define EPIC_ONLINESERVICES_RTCAUDIO_SETAUDIOINPUTSETTINGSOPTIONS_SET_PLATFORMAEC_OFFSET UNITYSDK_OFFSET(0x8F2F3E0)
#define EPIC_ONLINESERVICES_RTCAUDIO_SETAUDIOINPUTSETTINGSOPTIONS_SET_VOLUME_OFFSET UNITYSDK_OFFSET(0x8F2F3C0)
#define EPIC_ONLINESERVICES_RTCAUDIO_SETAUDIOINPUTSETTINGSOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x8F2F3F0)

namespace Epic::OnlineServices::RTCAudio
{
	inline static constexpr unsigned int SetAudioInputSettingsOptions_TypeDefinitionIndex = 41479;

	class SetAudioInputSettingsOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x10
		::System::String* _DeviceId_k__BackingField; // 0x18
		::System::Boolean _PlatformAEC_k__BackingField; // 0x20
		::System::Single _Volume_k__BackingField; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_SETAUDIOINPUTSETTINGSOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_SETAUDIOINPUTSETTINGSOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_SETAUDIOINPUTSETTINGSOPTIONS_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::String* get_DeviceId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_SETAUDIOINPUTSETTINGSOPTIONS_GET_DEVICEID_OFFSET))(this);
		}

		::System::Void set_DeviceId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_SETAUDIOINPUTSETTINGSOPTIONS_SET_DEVICEID_OFFSET))(this, value);
		}

		::System::Single get_Volume()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_SETAUDIOINPUTSETTINGSOPTIONS_GET_VOLUME_OFFSET))(this);
		}

		::System::Void set_Volume(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_SETAUDIOINPUTSETTINGSOPTIONS_SET_VOLUME_OFFSET))(this, value);
		}

		::System::Boolean get_PlatformAEC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_SETAUDIOINPUTSETTINGSOPTIONS_GET_PLATFORMAEC_OFFSET))(this);
		}

		::System::Void set_PlatformAEC(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_SETAUDIOINPUTSETTINGSOPTIONS_SET_PLATFORMAEC_OFFSET))(this, value);
		}
	};
}
