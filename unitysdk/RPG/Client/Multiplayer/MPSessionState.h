#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Multiplayer
{
	inline static constexpr unsigned int MPSessionState_TypeDefinitionIndex = 73742;

	enum class MPSessionState : ::System::Int32
	{
		Empty = 0,
		InLobby = 1,
		Matching = 2,
		WaitGameStart = 3,
		Gaming = 4,
		ReconnectingToLobby = 5,
		ReconnectingToFight = 6,
	};
}
