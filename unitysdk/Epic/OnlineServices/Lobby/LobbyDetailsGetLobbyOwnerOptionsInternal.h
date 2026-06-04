#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Lobby { class LobbyDetailsGetLobbyOwnerOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSGETLOBBYOWNEROPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1020)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSGETLOBBYOWNEROPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x4FF10)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSGETLOBBYOWNEROPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x1EB0)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int LobbyDetailsGetLobbyOwnerOptionsInternal_TypeDefinitionIndex = 42687;

	struct alignas(4) LobbyDetailsGetLobbyOwnerOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10

		::System::Void Set(::Epic::OnlineServices::Lobby::LobbyDetailsGetLobbyOwnerOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbyDetailsGetLobbyOwnerOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSGETLOBBYOWNEROPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSGETLOBBYOWNEROPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSGETLOBBYOWNEROPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
