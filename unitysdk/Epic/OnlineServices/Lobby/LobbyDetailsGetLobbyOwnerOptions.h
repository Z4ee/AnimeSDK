#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSGETLOBBYOWNEROPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1DFF7D10)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int LobbyDetailsGetLobbyOwnerOptions_TypeDefinitionIndex = 45729;

	class LobbyDetailsGetLobbyOwnerOptions : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSGETLOBBYOWNEROPTIONS__CTOR_OFFSET))(this);
		}
	};
}
