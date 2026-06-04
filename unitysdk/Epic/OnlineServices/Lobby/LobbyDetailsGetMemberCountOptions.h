#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSGETMEMBERCOUNTOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0xA2EA420)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int LobbyDetailsGetMemberCountOptions_TypeDefinitionIndex = 42692;

	class LobbyDetailsGetMemberCountOptions : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSGETMEMBERCOUNTOPTIONS__CTOR_OFFSET))(this);
		}
	};
}
