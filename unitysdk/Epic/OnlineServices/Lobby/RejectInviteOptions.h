#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_LOBBY_REJECTINVITEOPTIONS_GET_INVITEID_OFFSET UNITYSDK_OFFSET(0x8696500)
#define EPIC_ONLINESERVICES_LOBBY_REJECTINVITEOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x8696520)
#define EPIC_ONLINESERVICES_LOBBY_REJECTINVITEOPTIONS_SET_INVITEID_OFFSET UNITYSDK_OFFSET(0x8696510)
#define EPIC_ONLINESERVICES_LOBBY_REJECTINVITEOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x8696530)
#define EPIC_ONLINESERVICES_LOBBY_REJECTINVITEOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x8696540)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int RejectInviteOptions_TypeDefinitionIndex = 36166;

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

		::System::Void set_InviteId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_REJECTINVITEOPTIONS_SET_INVITEID_OFFSET))(this, value);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_REJECTINVITEOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_REJECTINVITEOPTIONS_SET_LOCALUSERID_OFFSET))(this, value);
		}
	};
}
