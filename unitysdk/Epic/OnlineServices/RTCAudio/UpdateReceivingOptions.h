#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_RTCAUDIO_UPDATERECEIVINGOPTIONS_GET_AUDIOENABLED_OFFSET UNITYSDK_OFFSET(0xA3524F0)
#define EPIC_ONLINESERVICES_RTCAUDIO_UPDATERECEIVINGOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA352490)
#define EPIC_ONLINESERVICES_RTCAUDIO_UPDATERECEIVINGOPTIONS_GET_PARTICIPANTID_OFFSET UNITYSDK_OFFSET(0xA3524D0)
#define EPIC_ONLINESERVICES_RTCAUDIO_UPDATERECEIVINGOPTIONS_GET_ROOMNAME_OFFSET UNITYSDK_OFFSET(0xA3524B0)
#define EPIC_ONLINESERVICES_RTCAUDIO_UPDATERECEIVINGOPTIONS_SET_AUDIOENABLED_OFFSET UNITYSDK_OFFSET(0xA352500)
#define EPIC_ONLINESERVICES_RTCAUDIO_UPDATERECEIVINGOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA3524A0)
#define EPIC_ONLINESERVICES_RTCAUDIO_UPDATERECEIVINGOPTIONS_SET_PARTICIPANTID_OFFSET UNITYSDK_OFFSET(0xA3524E0)
#define EPIC_ONLINESERVICES_RTCAUDIO_UPDATERECEIVINGOPTIONS_SET_ROOMNAME_OFFSET UNITYSDK_OFFSET(0xA3524C0)
#define EPIC_ONLINESERVICES_RTCAUDIO_UPDATERECEIVINGOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0xA352510)

namespace Epic::OnlineServices::RTCAudio
{
	inline static constexpr unsigned int UpdateReceivingOptions_TypeDefinitionIndex = 42290;

	class UpdateReceivingOptions : public ::System::Object
	{
	public:
		::System::String* _RoomName_k__BackingField; // 0x10
		::Epic::OnlineServices::ProductUserId* _ParticipantId_k__BackingField; // 0x18
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x20
		::System::Boolean _AudioEnabled_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_UPDATERECEIVINGOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_UPDATERECEIVINGOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_UPDATERECEIVINGOPTIONS_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::String* get_RoomName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_UPDATERECEIVINGOPTIONS_GET_ROOMNAME_OFFSET))(this);
		}

		::System::Void set_RoomName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_UPDATERECEIVINGOPTIONS_SET_ROOMNAME_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::ProductUserId* get_ParticipantId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_UPDATERECEIVINGOPTIONS_GET_PARTICIPANTID_OFFSET))(this);
		}

		::System::Void set_ParticipantId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_UPDATERECEIVINGOPTIONS_SET_PARTICIPANTID_OFFSET))(this, a1);
		}

		::System::Boolean get_AudioEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_UPDATERECEIVINGOPTIONS_GET_AUDIOENABLED_OFFSET))(this);
		}

		::System::Void set_AudioEnabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_UPDATERECEIVINGOPTIONS_SET_AUDIOENABLED_OFFSET))(this, a1);
		}
	};
}
