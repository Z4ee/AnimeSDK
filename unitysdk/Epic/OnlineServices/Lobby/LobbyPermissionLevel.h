#pragma once
#include "unitysdk/unitysdk.h"

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int LobbyPermissionLevel_TypeDefinitionIndex = 35702;

	enum class LobbyPermissionLevel : ::System::Int32
	{
		Publicadvertised = 0,
		Joinviapresence = 1,
		Inviteonly = 2,
	};
}
