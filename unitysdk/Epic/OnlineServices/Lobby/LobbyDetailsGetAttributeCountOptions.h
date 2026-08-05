#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSGETATTRIBUTECOUNTOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D82E790)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int LobbyDetailsGetAttributeCountOptions_TypeDefinitionIndex = 36322;

	class LobbyDetailsGetAttributeCountOptions : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSGETATTRIBUTECOUNTOPTIONS__CTOR_OFFSET))(this);
		}
	};
}
