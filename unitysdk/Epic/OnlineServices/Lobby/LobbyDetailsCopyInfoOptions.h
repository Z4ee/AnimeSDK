#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSCOPYINFOOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x8EAE0F0)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int LobbyDetailsCopyInfoOptions_TypeDefinitionIndex = 41875;

	class LobbyDetailsCopyInfoOptions : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSCOPYINFOOPTIONS__CTOR_OFFSET))(this);
		}
	};
}
