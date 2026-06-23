#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Lobby { class LobbySearchSetLobbyIdOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHSETLOBBYIDOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x96BC00)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHSETLOBBYIDOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x96BAE0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHSETLOBBYIDOPTIONSINTERNAL_SET_LOBBYID_OFFSET UNITYSDK_OFFSET(0x96B960)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHSETLOBBYIDOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x96BA10)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int LobbySearchSetLobbyIdOptionsInternal_TypeDefinitionIndex = 35717;

	struct alignas(8) LobbySearchSetLobbyIdOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LobbyId; // 0x18

		::System::Void set_LobbyId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHSETLOBBYIDOPTIONSINTERNAL_SET_LOBBYID_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Lobby::LobbySearchSetLobbyIdOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbySearchSetLobbyIdOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHSETLOBBYIDOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHSETLOBBYIDOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHSETLOBBYIDOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
