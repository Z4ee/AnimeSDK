#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaRoomCardPileMessage_TypeDefinitionIndex = 67138;

	enum class RogueTournPersonaRoomCardPileMessage : ::System::Int32
	{
		None = 0,
		OnSelectedPileChanged = 1,
		OnSelectedCardChanged = 2,
	};
}
