#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaRoomCardPile_TypeDefinitionIndex = 67741;

	enum class RogueTournPersonaRoomCardPile : ::System::Int32
	{
		None = 0,
		Draw = 1,
		Discard = 2,
	};
}
