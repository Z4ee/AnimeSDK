#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::Sessions { class RejectInviteOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_SESSIONS_REJECTINVITEOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x96D790)
#define EPIC_ONLINESERVICES_SESSIONS_REJECTINVITEOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x96D720)
#define EPIC_ONLINESERVICES_SESSIONS_REJECTINVITEOPTIONSINTERNAL_SET_INVITEID_OFFSET UNITYSDK_OFFSET(0x96D660)
#define EPIC_ONLINESERVICES_SESSIONS_REJECTINVITEOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x96D5A0)
#define EPIC_ONLINESERVICES_SESSIONS_REJECTINVITEOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x96D710)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int RejectInviteOptionsInternal_TypeDefinitionIndex = 35100;

	struct alignas(8) RejectInviteOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::IntPtr m_InviteId; // 0x20

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_REJECTINVITEOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Void set_InviteId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_REJECTINVITEOPTIONSINTERNAL_SET_INVITEID_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Sessions::RejectInviteOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::RejectInviteOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_REJECTINVITEOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_REJECTINVITEOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_REJECTINVITEOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
