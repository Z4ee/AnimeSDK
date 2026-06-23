#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_RTCAUDIO_SETAUDIOOUTPUTSETTINGSOPTIONS_GET_DEVICEID_OFFSET UNITYSDK_OFFSET(0x1D25E770)
#define EPIC_ONLINESERVICES_RTCAUDIO_SETAUDIOOUTPUTSETTINGSOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1D25E750)
#define EPIC_ONLINESERVICES_RTCAUDIO_SETAUDIOOUTPUTSETTINGSOPTIONS_GET_VOLUME_OFFSET UNITYSDK_OFFSET(0x1D25E790)
#define EPIC_ONLINESERVICES_RTCAUDIO_SETAUDIOOUTPUTSETTINGSOPTIONS_SET_DEVICEID_OFFSET UNITYSDK_OFFSET(0x1D25E780)
#define EPIC_ONLINESERVICES_RTCAUDIO_SETAUDIOOUTPUTSETTINGSOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1D25E760)
#define EPIC_ONLINESERVICES_RTCAUDIO_SETAUDIOOUTPUTSETTINGSOPTIONS_SET_VOLUME_OFFSET UNITYSDK_OFFSET(0x1D25E7A0)
#define EPIC_ONLINESERVICES_RTCAUDIO_SETAUDIOOUTPUTSETTINGSOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D25E7B0)

namespace Epic::OnlineServices::RTCAudio
{
	inline static constexpr unsigned int SetAudioOutputSettingsOptions_TypeDefinitionIndex = 35263;

	class SetAudioOutputSettingsOptions : public ::System::Object
	{
	public:
		::System::String* _DeviceId_k__BackingField; // 0x10
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x18
		::System::Single _Volume_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_SETAUDIOOUTPUTSETTINGSOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_SETAUDIOOUTPUTSETTINGSOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_SETAUDIOOUTPUTSETTINGSOPTIONS_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::String* get_DeviceId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_SETAUDIOOUTPUTSETTINGSOPTIONS_GET_DEVICEID_OFFSET))(this);
		}

		::System::Void set_DeviceId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_SETAUDIOOUTPUTSETTINGSOPTIONS_SET_DEVICEID_OFFSET))(this, value);
		}

		::System::Single get_Volume()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_SETAUDIOOUTPUTSETTINGSOPTIONS_GET_VOLUME_OFFSET))(this);
		}

		::System::Void set_Volume(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_SETAUDIOOUTPUTSETTINGSOPTIONS_SET_VOLUME_OFFSET))(this, value);
		}
	};
}
