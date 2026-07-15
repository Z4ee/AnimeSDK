#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int GlobalDataType_TypeDefinitionIndex = 15464;

	enum class GlobalDataType : ::System::Int32
	{
		SwapAreaDicePointSum = 0,
		SwapAreaDiceDifferentPointCount = 1,
		ChallengersSamePointPairCount = 2,
		LastAttackDamage = 3,
	};
}
