#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_SESSIONS_REJECTINVITEOPTIONS_GET_INVITEID_OFFSET UNITYSDK_OFFSET(0x1C547160)
#define EPIC_ONLINESERVICES_SESSIONS_REJECTINVITEOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1C547140)
#define EPIC_ONLINESERVICES_SESSIONS_REJECTINVITEOPTIONS_SET_INVITEID_OFFSET UNITYSDK_OFFSET(0x1C547170)
#define EPIC_ONLINESERVICES_SESSIONS_REJECTINVITEOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1C547150)
#define EPIC_ONLINESERVICES_SESSIONS_REJECTINVITEOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C547180)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int RejectInviteOptions_TypeDefinitionIndex = 35099;

	class RejectInviteOptions : public ::System::Object
	{
	public:
		::System::String* _InviteId_k__BackingField; // 0x10
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_REJECTINVITEOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_REJECTINVITEOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_REJECTINVITEOPTIONS_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::String* get_InviteId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_REJECTINVITEOPTIONS_GET_INVITEID_OFFSET))(this);
		}

		::System::Void set_InviteId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_REJECTINVITEOPTIONS_SET_INVITEID_OFFSET))(this, value);
		}
	};
}
