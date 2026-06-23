#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle
{
	inline static constexpr unsigned int LevelQuestConditionOperation_TypeDefinitionIndex = 77739;

	enum class LevelQuestConditionOperation : ::System::Int32
	{
		Add = 1,
		Subtract = 2,
		Set = 0,
	};
}
