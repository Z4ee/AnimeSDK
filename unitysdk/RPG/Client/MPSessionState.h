#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int MPSessionState_TypeDefinitionIndex = 62942;

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
