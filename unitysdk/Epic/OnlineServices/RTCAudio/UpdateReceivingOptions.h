#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_RTCAUDIO_UPDATERECEIVINGOPTIONS_GET_AUDIOENABLED_OFFSET UNITYSDK_OFFSET(0x18CE0020)
#define EPIC_ONLINESERVICES_RTCAUDIO_UPDATERECEIVINGOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x18CDFFC0)
#define EPIC_ONLINESERVICES_RTCAUDIO_UPDATERECEIVINGOPTIONS_GET_PARTICIPANTID_OFFSET UNITYSDK_OFFSET(0x18CE0000)
#define EPIC_ONLINESERVICES_RTCAUDIO_UPDATERECEIVINGOPTIONS_GET_ROOMNAME_OFFSET UNITYSDK_OFFSET(0x18CDFFE0)
#define EPIC_ONLINESERVICES_RTCAUDIO_UPDATERECEIVINGOPTIONS_SET_AUDIOENABLED_OFFSET UNITYSDK_OFFSET(0x18CE0030)
#define EPIC_ONLINESERVICES_RTCAUDIO_UPDATERECEIVINGOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x18CDFFD0)
#define EPIC_ONLINESERVICES_RTCAUDIO_UPDATERECEIVINGOPTIONS_SET_PARTICIPANTID_OFFSET UNITYSDK_OFFSET(0x18CE0010)
#define EPIC_ONLINESERVICES_RTCAUDIO_UPDATERECEIVINGOPTIONS_SET_ROOMNAME_OFFSET UNITYSDK_OFFSET(0x18CDFFF0)
#define EPIC_ONLINESERVICES_RTCAUDIO_UPDATERECEIVINGOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x18CE0040)

namespace Epic::OnlineServices::RTCAudio
{
	inline static constexpr unsigned int UpdateReceivingOptions_TypeDefinitionIndex = 33706;

	class UpdateReceivingOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x10
		::Epic::OnlineServices::ProductUserId* _ParticipantId_k__BackingField; // 0x18
		::System::String* _RoomName_k__BackingField; // 0x20
		::System::Boolean _AudioEnabled_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_UPDATERECEIVINGOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_UPDATERECEIVINGOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_UPDATERECEIVINGOPTIONS_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::String* get_RoomName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_UPDATERECEIVINGOPTIONS_GET_ROOMNAME_OFFSET))(this);
		}

		::System::Void set_RoomName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_UPDATERECEIVINGOPTIONS_SET_ROOMNAME_OFFSET))(this, value);
		}

		::Epic::OnlineServices::ProductUserId* get_ParticipantId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_UPDATERECEIVINGOPTIONS_GET_PARTICIPANTID_OFFSET))(this);
		}

		::System::Void set_ParticipantId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_UPDATERECEIVINGOPTIONS_SET_PARTICIPANTID_OFFSET))(this, value);
		}

		::System::Boolean get_AudioEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_UPDATERECEIVINGOPTIONS_GET_AUDIOENABLED_OFFSET))(this);
		}

		::System::Void set_AudioEnabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_UPDATERECEIVINGOPTIONS_SET_AUDIOENABLED_OFFSET))(this, value);
		}
	};
}
