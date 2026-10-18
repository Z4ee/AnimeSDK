#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Multiplayer
{
	inline static constexpr unsigned int MPInviteType_TypeDefinitionIndex = 80257;

	enum class MPInviteType : ::System::Int32
	{
		Lobby = 0,
		OnlineRoom = 1,
	};
}
