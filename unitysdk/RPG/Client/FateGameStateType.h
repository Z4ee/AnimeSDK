#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int FateGameStateType_TypeDefinitionIndex = 61120;

	enum class FateGameStateType : ::System::Int32
	{
		None = 0,
		GamePrepare = 1,
		RoundPrepare = 2,
		RoundPrepareFastForward = 3,
		RoundBattle = 4,
		RoundSettle = 5,
		SelectHougu = 6,
		SelectReiju = 7,
		BuffShop = 8,
		GameSettle = 9,
	};
}
