#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONSETINVITESALLOWEDOPTIONS_GET_INVITESALLOWED_OFFSET UNITYSDK_OFFSET(0x1E1A9C00)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONSETINVITESALLOWEDOPTIONS_SET_INVITESALLOWED_OFFSET UNITYSDK_OFFSET(0x1E1A9C10)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONSETINVITESALLOWEDOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1A9C20)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int LobbyModificationSetInvitesAllowedOptions_TypeDefinitionIndex = 36355;

	class LobbyModificationSetInvitesAllowedOptions : public ::System::Object
	{
	public:
		::System::Boolean _InvitesAllowed_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONSETINVITESALLOWEDOPTIONS__CTOR_OFFSET))(this);
		}

		::System::Boolean get_InvitesAllowed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONSETINVITESALLOWEDOPTIONS_GET_INVITESALLOWED_OFFSET))(this);
		}

		::System::Void set_InvitesAllowed(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONSETINVITESALLOWEDOPTIONS_SET_INVITESALLOWED_OFFSET))(this, value);
		}
	};
}
