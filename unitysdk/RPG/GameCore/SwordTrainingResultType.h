#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwordTrainingResultType_TypeDefinitionIndex = 11976;

	enum class SwordTrainingResultType : ::System::Int32
	{
		None = 0,
		RemainRound = 1,
		HighestDamage = 2,
		TotalReduceDamage = 4,
		HighestHitNum = 5,
		TotalDebuffAddNum = 6,
		HighestCombo = 7,
		TotalTokenDamage = 8,
	};
}
