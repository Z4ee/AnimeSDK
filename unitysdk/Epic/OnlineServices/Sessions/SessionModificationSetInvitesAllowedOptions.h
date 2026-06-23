#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONSETINVITESALLOWEDOPTIONS_GET_INVITESALLOWED_OFFSET UNITYSDK_OFFSET(0x1B7C1EB0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONSETINVITESALLOWEDOPTIONS_SET_INVITESALLOWED_OFFSET UNITYSDK_OFFSET(0x1B7C1EC0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONSETINVITESALLOWEDOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7C1ED0)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int SessionModificationSetInvitesAllowedOptions_TypeDefinitionIndex = 35134;

	class SessionModificationSetInvitesAllowedOptions : public ::System::Object
	{
	public:
		::System::Boolean _InvitesAllowed_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONSETINVITESALLOWEDOPTIONS__CTOR_OFFSET))(this);
		}

		::System::Boolean get_InvitesAllowed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONSETINVITESALLOWEDOPTIONS_GET_INVITESALLOWED_OFFSET))(this);
		}

		::System::Void set_InvitesAllowed(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONSETINVITESALLOWEDOPTIONS_SET_INVITESALLOWED_OFFSET))(this, value);
		}
	};
}
