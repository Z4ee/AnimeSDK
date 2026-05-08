#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSCOPYINFOOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4E9AD0)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int LobbyDetailsCopyInfoOptions_TypeDefinitionIndex = 34094;

	class LobbyDetailsCopyInfoOptions : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSCOPYINFOOPTIONS__CTOR_OFFSET))(this);
		}
	};
}
