#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Lobby { class LobbyModificationSetInvitesAllowedOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONSETINVITESALLOWEDOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x296F30)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONSETINVITESALLOWEDOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0xA097B0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONSETINVITESALLOWEDOPTIONSINTERNAL_SET_INVITESALLOWED_OFFSET UNITYSDK_OFFSET(0xA09650)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONSETINVITESALLOWEDOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0xA09700)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int LobbyModificationSetInvitesAllowedOptionsInternal_TypeDefinitionIndex = 36356;

	struct alignas(4) LobbyModificationSetInvitesAllowedOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::Int32 m_InvitesAllowed; // 0x14

		::System::Void set_InvitesAllowed(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONSETINVITESALLOWEDOPTIONSINTERNAL_SET_INVITESALLOWED_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Lobby::LobbyModificationSetInvitesAllowedOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbyModificationSetInvitesAllowedOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONSETINVITESALLOWEDOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONSETINVITESALLOWEDOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONSETINVITESALLOWEDOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
