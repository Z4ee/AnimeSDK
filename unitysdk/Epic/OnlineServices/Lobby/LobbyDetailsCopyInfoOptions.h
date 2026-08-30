#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSCOPYINFOOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1DFF72A0)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int LobbyDetailsCopyInfoOptions_TypeDefinitionIndex = 45721;

	class LobbyDetailsCopyInfoOptions : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSCOPYINFOOPTIONS__CTOR_OFFSET))(this);
		}
	};
}
