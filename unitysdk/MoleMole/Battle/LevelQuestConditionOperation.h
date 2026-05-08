#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle
{
	inline static constexpr unsigned int LevelQuestConditionOperation_TypeDefinitionIndex = 53162;

	enum class LevelQuestConditionOperation : ::System::Int32
	{
		Subtract = 2,
		Set = 0,
		Add = 1,
	};
}
