#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_SESSIONS_REJECTINVITEOPTIONS_GET_INVITEID_OFFSET UNITYSDK_OFFSET(0xA0E3660)
#define EPIC_ONLINESERVICES_SESSIONS_REJECTINVITEOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA0E3640)
#define EPIC_ONLINESERVICES_SESSIONS_REJECTINVITEOPTIONS_SET_INVITEID_OFFSET UNITYSDK_OFFSET(0xA0E3670)
#define EPIC_ONLINESERVICES_SESSIONS_REJECTINVITEOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA0E3650)
#define EPIC_ONLINESERVICES_SESSIONS_REJECTINVITEOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0xA0E3680)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int RejectInviteOptions_TypeDefinitionIndex = 42120;

	class RejectInviteOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x10
		::System::String* _InviteId_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_REJECTINVITEOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_REJECTINVITEOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_REJECTINVITEOPTIONS_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::String* get_InviteId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_REJECTINVITEOPTIONS_GET_INVITEID_OFFSET))(this);
		}

		::System::Void set_InviteId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_REJECTINVITEOPTIONS_SET_INVITEID_OFFSET))(this, a1);
		}
	};
}
