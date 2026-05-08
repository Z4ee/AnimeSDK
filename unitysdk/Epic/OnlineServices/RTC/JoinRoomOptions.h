#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/RTC/JoinRoomFlags.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_RTC_JOINROOMOPTIONS_GET_CLIENTBASEURL_OFFSET UNITYSDK_OFFSET(0x198B0F70)
#define EPIC_ONLINESERVICES_RTC_JOINROOMOPTIONS_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0x198B0FD0)
#define EPIC_ONLINESERVICES_RTC_JOINROOMOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x198B0F30)
#define EPIC_ONLINESERVICES_RTC_JOINROOMOPTIONS_GET_MANUALAUDIOINPUTENABLED_OFFSET UNITYSDK_OFFSET(0x198B0FF0)
#define EPIC_ONLINESERVICES_RTC_JOINROOMOPTIONS_GET_MANUALAUDIOOUTPUTENABLED_OFFSET UNITYSDK_OFFSET(0x198B1010)
#define EPIC_ONLINESERVICES_RTC_JOINROOMOPTIONS_GET_PARTICIPANTID_OFFSET UNITYSDK_OFFSET(0x198B0FB0)
#define EPIC_ONLINESERVICES_RTC_JOINROOMOPTIONS_GET_PARTICIPANTTOKEN_OFFSET UNITYSDK_OFFSET(0x198B0F90)
#define EPIC_ONLINESERVICES_RTC_JOINROOMOPTIONS_GET_ROOMNAME_OFFSET UNITYSDK_OFFSET(0x198B0F50)
#define EPIC_ONLINESERVICES_RTC_JOINROOMOPTIONS_SET_CLIENTBASEURL_OFFSET UNITYSDK_OFFSET(0x198B0F80)
#define EPIC_ONLINESERVICES_RTC_JOINROOMOPTIONS_SET_FLAGS_OFFSET UNITYSDK_OFFSET(0x198B0FE0)
#define EPIC_ONLINESERVICES_RTC_JOINROOMOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x198B0F40)
#define EPIC_ONLINESERVICES_RTC_JOINROOMOPTIONS_SET_MANUALAUDIOINPUTENABLED_OFFSET UNITYSDK_OFFSET(0x198B1000)
#define EPIC_ONLINESERVICES_RTC_JOINROOMOPTIONS_SET_MANUALAUDIOOUTPUTENABLED_OFFSET UNITYSDK_OFFSET(0x198B1020)
#define EPIC_ONLINESERVICES_RTC_JOINROOMOPTIONS_SET_PARTICIPANTID_OFFSET UNITYSDK_OFFSET(0x198B0FC0)
#define EPIC_ONLINESERVICES_RTC_JOINROOMOPTIONS_SET_PARTICIPANTTOKEN_OFFSET UNITYSDK_OFFSET(0x198B0FA0)
#define EPIC_ONLINESERVICES_RTC_JOINROOMOPTIONS_SET_ROOMNAME_OFFSET UNITYSDK_OFFSET(0x198B0F60)
#define EPIC_ONLINESERVICES_RTC_JOINROOMOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x198B1030)

namespace Epic::OnlineServices::RTC
{
	inline static constexpr unsigned int JoinRoomOptions_TypeDefinitionIndex = 33750;

	class JoinRoomOptions : public ::System::Object
	{
	public:
		::System::String* _RoomName_k__BackingField; // 0x10
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x18
		::System::String* _ParticipantToken_k__BackingField; // 0x20
		::System::String* _ClientBaseUrl_k__BackingField; // 0x28
		::Epic::OnlineServices::ProductUserId* _ParticipantId_k__BackingField; // 0x30
		::System::Boolean _ManualAudioOutputEnabled_k__BackingField; // 0x38
		::System::Boolean _ManualAudioInputEnabled_k__BackingField; // 0x39
		::Epic::OnlineServices::RTC::JoinRoomFlags _Flags_k__BackingField; // 0x3C

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
