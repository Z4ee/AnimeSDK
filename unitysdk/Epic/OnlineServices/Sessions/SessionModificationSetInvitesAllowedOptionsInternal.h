#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Sessions { class SessionModificationSetInvitesAllowedOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONSETINVITESALLOWEDOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1020)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONSETINVITESALLOWEDOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x179B0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONSETINVITESALLOWEDOPTIONSINTERNAL_SET_INVITESALLOWED_OFFSET UNITYSDK_OFFSET(0x17850)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONSETINVITESALLOWEDOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x17900)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int SessionModificationSetInvitesAllowedOptionsInternal_TypeDefinitionIndex = 35527;

	struct alignas(4) SessionModificationSetInvitesAllowedOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::Int32 m_InvitesAllowed; // 0x14

		::System::Void set_InvitesAllowed(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONSETINVITESALLOWEDOPTIONSINTERNAL_SET_INVITESALLOWED_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Sessions::SessionModificationSetInvitesAllowedOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::SessionModificationSetInvitesAllowedOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONSETINVITESALLOWEDOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONSETINVITESALLOWEDOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONSETINVITESALLOWEDOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
