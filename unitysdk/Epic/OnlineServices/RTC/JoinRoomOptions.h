#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/RTC/JoinRoomFlags.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_RTC_JOINROOMOPTIONS_GET_CLIENTBASEURL_OFFSET UNITYSDK_OFFSET(0x1C9D0120)
#define EPIC_ONLINESERVICES_RTC_JOINROOMOPTIONS_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0x1C9D0180)
#define EPIC_ONLINESERVICES_RTC_JOINROOMOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1C9D00E0)
#define EPIC_ONLINESERVICES_RTC_JOINROOMOPTIONS_GET_MANUALAUDIOINPUTENABLED_OFFSET UNITYSDK_OFFSET(0x1C9D01A0)
#define EPIC_ONLINESERVICES_RTC_JOINROOMOPTIONS_GET_MANUALAUDIOOUTPUTENABLED_OFFSET UNITYSDK_OFFSET(0x1C9D01C0)
#define EPIC_ONLINESERVICES_RTC_JOINROOMOPTIONS_GET_PARTICIPANTID_OFFSET UNITYSDK_OFFSET(0x1C9D0160)
#define EPIC_ONLINESERVICES_RTC_JOINROOMOPTIONS_GET_PARTICIPANTTOKEN_OFFSET UNITYSDK_OFFSET(0x1C9D0140)
#define EPIC_ONLINESERVICES_RTC_JOINROOMOPTIONS_GET_ROOMNAME_OFFSET UNITYSDK_OFFSET(0x1C9D0100)
#define EPIC_ONLINESERVICES_RTC_JOINROOMOPTIONS_SET_CLIENTBASEURL_OFFSET UNITYSDK_OFFSET(0x1C9D0130)
#define EPIC_ONLINESERVICES_RTC_JOINROOMOPTIONS_SET_FLAGS_OFFSET UNITYSDK_OFFSET(0x1C9D0190)
#define EPIC_ONLINESERVICES_RTC_JOINROOMOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1C9D00F0)
#define EPIC_ONLINESERVICES_RTC_JOINROOMOPTIONS_SET_MANUALAUDIOINPUTENABLED_OFFSET UNITYSDK_OFFSET(0x1C9D01B0)
#define EPIC_ONLINESERVICES_RTC_JOINROOMOPTIONS_SET_MANUALAUDIOOUTPUTENABLED_OFFSET UNITYSDK_OFFSET(0x1C9D01D0)
#define EPIC_ONLINESERVICES_RTC_JOINROOMOPTIONS_SET_PARTICIPANTID_OFFSET UNITYSDK_OFFSET(0x1C9D0170)
#define EPIC_ONLINESERVICES_RTC_JOINROOMOPTIONS_SET_PARTICIPANTTOKEN_OFFSET UNITYSDK_OFFSET(0x1C9D0150)
#define EPIC_ONLINESERVICES_RTC_JOINROOMOPTIONS_SET_ROOMNAME_OFFSET UNITYSDK_OFFSET(0x1C9D0110)
#define EPIC_ONLINESERVICES_RTC_JOINROOMOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C9D01E0)

namespace Epic::OnlineServices::RTC
{
	inline static constexpr unsigned int JoinRoomOptions_TypeDefinitionIndex = 35972;

	class JoinRoomOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x10
		::System::String* _RoomName_k__BackingField; // 0x18
		::Epic::OnlineServices::ProductUserId* _ParticipantId_k__BackingField; // 0x20
		::System::String* _ClientBaseUrl_k__BackingField; // 0x28
		::System::String* _ParticipantToken_k__BackingField; // 0x30
		::Epic::OnlineServices::RTC::JoinRoomFlags _Flags_k__BackingField; // 0x38
		::System::Boolean _ManualAudioOutputEnabled_k__BackingField; // 0x3C
		::System::Boolean _ManualAudioInputEnabled_k__BackingField; // 0x3D

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_JOINROOMOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_JOINROOMOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_JOINROOMOPTIONS_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::String* get_RoomName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_JOINROOMOPTIONS_GET_ROOMNAME_OFFSET))(this);
		}

		::System::Void set_RoomName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_JOINROOMOPTIONS_SET_ROOMNAME_OFFSET))(this, value);
		}

		::System::String* get_ClientBaseUrl()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_JOINROOMOPTIONS_GET_CLIENTBASEURL_OFFSET))(this);
		}

		::System::Void set_ClientBaseUrl(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_JOINROOMOPTIONS_SET_CLIENTBASEURL_OFFSET))(this, value);
		}

		::System::String* get_ParticipantToken()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_JOINROOMOPTIONS_GET_PARTICIPANTTOKEN_OFFSET))(this);
		}

		::System::Void set_ParticipantToken(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_JOINROOMOPTIONS_SET_PARTICIPANTTOKEN_OFFSET))(this, value);
		}

		::Epic::OnlineServices::ProductUserId* get_ParticipantId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_JOINROOMOPTIONS_GET_PARTICIPANTID_OFFSET))(this);
		}

		::System::Void set_ParticipantId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_JOINROOMOPTIONS_SET_PARTICIPANTID_OFFSET))(this, value);
		}

		::Epic::OnlineServices::RTC::JoinRoomFlags get_Flags()
		{
			return ((::Epic::OnlineServices::RTC::JoinRoomFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_JOINROOMOPTIONS_GET_FLAGS_OFFSET))(this);
		}

		::System::Void set_Flags(::Epic::OnlineServices::RTC::JoinRoomFlags value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::RTC::JoinRoomFlags))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_JOINROOMOPTIONS_SET_FLAGS_OFFSET))(this, value);
		}

		::System::Boolean get_ManualAudioInputEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_JOINROOMOPTIONS_GET_MANUALAUDIOINPUTENABLED_OFFSET))(this);
		}

		::System::Void set_ManualAudioInputEnabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_JOINROOMOPTIONS_SET_MANUALAUDIOINPUTENABLED_OFFSET))(this, value);
		}

		::System::Boolean get_ManualAudioOutputEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_JOINROOMOPTIONS_GET_MANUALAUDIOOUTPUTENABLED_OFFSET))(this);
		}

		::System::Void set_ManualAudioOutputEnabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_JOINROOMOPTIONS_SET_MANUALAUDIOOUTPUTENABLED_OFFSET))(this, value);
		}
	};
}
