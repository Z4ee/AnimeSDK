#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaRoomCardPileMessage_TypeDefinitionIndex = 59742;

	enum class RogueTournPersonaRoomCardPileMessage : ::System::Int32
	{
		None = 0,
		OnSelectedPileChanged = 1,
		OnSelectedCardChanged = 2,
	};
}
