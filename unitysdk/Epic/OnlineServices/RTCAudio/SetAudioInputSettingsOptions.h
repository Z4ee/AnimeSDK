#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_RTCAUDIO_SETAUDIOINPUTSETTINGSOPTIONS_GET_DEVICEID_OFFSET UNITYSDK_OFFSET(0x1DE50AE0)
#define EPIC_ONLINESERVICES_RTCAUDIO_SETAUDIOINPUTSETTINGSOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1DE50AC0)
#define EPIC_ONLINESERVICES_RTCAUDIO_SETAUDIOINPUTSETTINGSOPTIONS_GET_PLATFORMAEC_OFFSET UNITYSDK_OFFSET(0x1DE50B20)
#define EPIC_ONLINESERVICES_RTCAUDIO_SETAUDIOINPUTSETTINGSOPTIONS_GET_VOLUME_OFFSET UNITYSDK_OFFSET(0x1DE50B00)
#define EPIC_ONLINESERVICES_RTCAUDIO_SETAUDIOINPUTSETTINGSOPTIONS_SET_DEVICEID_OFFSET UNITYSDK_OFFSET(0x1DE50AF0)
#define EPIC_ONLINESERVICES_RTCAUDIO_SETAUDIOINPUTSETTINGSOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1DE50AD0)
#define EPIC_ONLINESERVICES_RTCAUDIO_SETAUDIOINPUTSETTINGSOPTIONS_SET_PLATFORMAEC_OFFSET UNITYSDK_OFFSET(0x1DE50B30)
#define EPIC_ONLINESERVICES_RTCAUDIO_SETAUDIOINPUTSETTINGSOPTIONS_SET_VOLUME_OFFSET UNITYSDK_OFFSET(0x1DE50B10)
#define EPIC_ONLINESERVICES_RTCAUDIO_SETAUDIOINPUTSETTINGSOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE50B40)

namespace Epic::OnlineServices::RTCAudio
{
	inline static constexpr unsigned int SetAudioInputSettingsOptions_TypeDefinitionIndex = 45325;

	class SetAudioInputSettingsOptions : public ::System::Object
	{
	public:
		::System::String* _DeviceId_k__BackingField; // 0x10
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x18
		::System::Single _Volume_k__BackingField; // 0x20
		::System::Boolean _PlatformAEC_k__BackingField; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_SETAUDIOINPUTSETTINGSOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_SETAUDIOINPUTSETTINGSOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_SETAUDIOINPUTSETTINGSOPTIONS_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::String* get_DeviceId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_SETAUDIOINPUTSETTINGSOPTIONS_GET_DEVICEID_OFFSET))(this);
		}

		::System::Void set_DeviceId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_SETAUDIOINPUTSETTINGSOPTIONS_SET_DEVICEID_OFFSET))(this, a1);
		}

		::System::Single get_Volume()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_SETAUDIOINPUTSETTINGSOPTIONS_GET_VOLUME_OFFSET))(this);
		}

		::System::Void set_Volume(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_SETAUDIOINPUTSETTINGSOPTIONS_SET_VOLUME_OFFSET))(this, a1);
		}

		::System::Boolean get_PlatformAEC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_SETAUDIOINPUTSETTINGSOPTIONS_GET_PLATFORMAEC_OFFSET))(this);
		}

		::System::Void set_PlatformAEC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_SETAUDIOINPUTSETTINGSOPTIONS_SET_PLATFORMAEC_OFFSET))(this, a1);
		}
	};
}
