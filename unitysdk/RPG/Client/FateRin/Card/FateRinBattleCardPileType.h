#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::FateRin::Card
{
	inline static constexpr unsigned int FateRinBattleCardPileType_TypeDefinitionIndex = 79794;

	enum class FateRinBattleCardPileType : ::System::Int32
	{
		None = 0,
		Draw = 1,
		Discard = 2,
		Exile = 3,
	};
}
