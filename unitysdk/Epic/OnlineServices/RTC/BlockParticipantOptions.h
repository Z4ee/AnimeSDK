#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_RTC_BLOCKPARTICIPANTOPTIONS_GET_BLOCKED_OFFSET UNITYSDK_OFFSET(0x1C00F000)
#define EPIC_ONLINESERVICES_RTC_BLOCKPARTICIPANTOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1C00EFA0)
#define EPIC_ONLINESERVICES_RTC_BLOCKPARTICIPANTOPTIONS_GET_PARTICIPANTID_OFFSET UNITYSDK_OFFSET(0x1C00EFE0)
#define EPIC_ONLINESERVICES_RTC_BLOCKPARTICIPANTOPTIONS_GET_ROOMNAME_OFFSET UNITYSDK_OFFSET(0x1C00EFC0)
#define EPIC_ONLINESERVICES_RTC_BLOCKPARTICIPANTOPTIONS_SET_BLOCKED_OFFSET UNITYSDK_OFFSET(0x1C00F010)
#define EPIC_ONLINESERVICES_RTC_BLOCKPARTICIPANTOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1C00EFB0)
#define EPIC_ONLINESERVICES_RTC_BLOCKPARTICIPANTOPTIONS_SET_PARTICIPANTID_OFFSET UNITYSDK_OFFSET(0x1C00EFF0)
#define EPIC_ONLINESERVICES_RTC_BLOCKPARTICIPANTOPTIONS_SET_ROOMNAME_OFFSET UNITYSDK_OFFSET(0x1C00EFD0)
#define EPIC_ONLINESERVICES_RTC_BLOCKPARTICIPANTOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C00F020)

namespace Epic::OnlineServices::RTC
{
	inline static constexpr unsigned int BlockParticipantOptions_TypeDefinitionIndex = 43188;

	class BlockParticipantOptions : public ::System::Object
	{
	public:
		::System::String* _RoomName_k__BackingField; // 0x10
		::Epic::OnlineServices::ProductUserId* _ParticipantId_k__BackingField; // 0x18
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x20
		::System::Boolean _Blocked_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_BLOCKPARTICIPANTOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_BLOCKPARTICIPANTOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_BLOCKPARTICIPANTOPTIONS_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::String* get_RoomName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_BLOCKPARTICIPANTOPTIONS_GET_ROOMNAME_OFFSET))(this);
		}

		::System::Void set_RoomName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_BLOCKPARTICIPANTOPTIONS_SET_ROOMNAME_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::ProductUserId* get_ParticipantId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_BLOCKPARTICIPANTOPTIONS_GET_PARTICIPANTID_OFFSET))(this);
		}

		::System::Void set_ParticipantId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_BLOCKPARTICIPANTOPTIONS_SET_PARTICIPANTID_OFFSET))(this, a1);
		}

		::System::Boolean get_Blocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_BLOCKPARTICIPANTOPTIONS_GET_BLOCKED_OFFSET))(this);
		}

		::System::Void set_Blocked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_BLOCKPARTICIPANTOPTIONS_SET_BLOCKED_OFFSET))(this, a1);
		}
	};
}
