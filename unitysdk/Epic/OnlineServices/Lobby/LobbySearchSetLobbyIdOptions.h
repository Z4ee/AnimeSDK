#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHSETLOBBYIDOPTIONS_GET_LOBBYID_OFFSET UNITYSDK_OFFSET(0x1DBD3D00)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHSETLOBBYIDOPTIONS_SET_LOBBYID_OFFSET UNITYSDK_OFFSET(0x1DBD3D10)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHSETLOBBYIDOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1DBD3D20)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int LobbySearchSetLobbyIdOptions_TypeDefinitionIndex = 36375;

	class LobbySearchSetLobbyIdOptions : public ::System::Object
	{
	public:
		::System::String* _LobbyId_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHSETLOBBYIDOPTIONS__CTOR_OFFSET))(this);
		}

		::System::String* get_LobbyId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHSETLOBBYIDOPTIONS_GET_LOBBYID_OFFSET))(this);
		}

		::System::Void set_LobbyId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHSETLOBBYIDOPTIONS_SET_LOBBYID_OFFSET))(this, value);
		}
	};
}
