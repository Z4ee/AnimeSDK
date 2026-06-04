#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_LOBBY_REJECTINVITEOPTIONS_GET_INVITEID_OFFSET UNITYSDK_OFFSET(0xA2FD7A0)
#define EPIC_ONLINESERVICES_LOBBY_REJECTINVITEOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA2FD7C0)
#define EPIC_ONLINESERVICES_LOBBY_REJECTINVITEOPTIONS_SET_INVITEID_OFFSET UNITYSDK_OFFSET(0xA2FD7B0)
#define EPIC_ONLINESERVICES_LOBBY_REJECTINVITEOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA2FD7D0)
#define EPIC_ONLINESERVICES_LOBBY_REJECTINVITEOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0xA2FD7E0)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int RejectInviteOptions_TypeDefinitionIndex = 42795;

	class RejectInviteOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x10
		::System::String* _InviteId_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_REJECTINVITEOPTIONS__CTOR_OFFSET))(this);
		}

		::System::String* get_InviteId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_REJECTINVITEOPTIONS_GET_INVITEID_OFFSET))(this);
		}

		::System::Void set_InviteId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_REJECTINVITEOPTIONS_SET_INVITEID_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_REJECTINVITEOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_REJECTINVITEOPTIONS_SET_LOCALUSERID_OFFSET))(this, a1);
		}
	};
}
