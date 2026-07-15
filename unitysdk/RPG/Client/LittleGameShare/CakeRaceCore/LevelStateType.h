#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGameShare::CakeRaceCore
{
	inline static constexpr unsigned int LevelStateType_TypeDefinitionIndex = 35669;

	enum class LevelStateType : ::System::Int32
	{
		None = 0,
		Ready = 1,
		CatShow = 2,
		FieldShow = 3,
		Bet = 4,
		BetShow = 5,
		Vote = 6,
		VoteShow = 7,
		FightEffectShow = 8,
		FightStartShow = 9,
		Fight = 10,
		FightEndShow = 11,
		GameEnd = 12,
		Clear = 13,
	};
}
