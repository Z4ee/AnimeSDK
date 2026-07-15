#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MatchThreeScoreFinishType_TypeDefinitionIndex = 11482;

	enum class MatchThreeScoreFinishType : ::System::Int32
	{
		Rank = 1,
		Score = 2,
		Energy = 3,
		EliminateOneTurn = 4,
		BombAll = 5,
		DamageAll = 6,
		BombChange = 7,
		BombMultistyle = 8,
		ComboCount = 9,
		Solo = 10,
	};
}
