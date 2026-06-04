#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_RTCAUDIO_SETAUDIOOUTPUTSETTINGSOPTIONS_GET_DEVICEID_OFFSET UNITYSDK_OFFSET(0xA351090)
#define EPIC_ONLINESERVICES_RTCAUDIO_SETAUDIOOUTPUTSETTINGSOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA351070)
#define EPIC_ONLINESERVICES_RTCAUDIO_SETAUDIOOUTPUTSETTINGSOPTIONS_GET_VOLUME_OFFSET UNITYSDK_OFFSET(0xA3510B0)
#define EPIC_ONLINESERVICES_RTCAUDIO_SETAUDIOOUTPUTSETTINGSOPTIONS_SET_DEVICEID_OFFSET UNITYSDK_OFFSET(0xA3510A0)
#define EPIC_ONLINESERVICES_RTCAUDIO_SETAUDIOOUTPUTSETTINGSOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA351080)
#define EPIC_ONLINESERVICES_RTCAUDIO_SETAUDIOOUTPUTSETTINGSOPTIONS_SET_VOLUME_OFFSET UNITYSDK_OFFSET(0xA3510C0)
#define EPIC_ONLINESERVICES_RTCAUDIO_SETAUDIOOUTPUTSETTINGSOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0xA3510D0)

namespace Epic::OnlineServices::RTCAudio
{
	inline static constexpr unsigned int SetAudioOutputSettingsOptions_TypeDefinitionIndex = 42284;

	class SetAudioOutputSettingsOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x10
		::System::String* _DeviceId_k__BackingField; // 0x18
		::System::Single _Volume_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_SETAUDIOOUTPUTSETTINGSOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_SETAUDIOOUTPUTSETTINGSOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_SETAUDIOOUTPUTSETTINGSOPTIONS_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::String* get_DeviceId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_SETAUDIOOUTPUTSETTINGSOPTIONS_GET_DEVICEID_OFFSET))(this);
		}

		::System::Void set_DeviceId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_SETAUDIOOUTPUTSETTINGSOPTIONS_SET_DEVICEID_OFFSET))(this, a1);
		}

		::System::Single get_Volume()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_SETAUDIOOUTPUTSETTINGSOPTIONS_GET_VOLUME_OFFSET))(this);
		}

		::System::Void set_Volume(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_SETAUDIOOUTPUTSETTINGSOPTIONS_SET_VOLUME_OFFSET))(this, a1);
		}
	};
}
