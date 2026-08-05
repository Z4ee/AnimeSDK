#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle
{
	inline static constexpr unsigned int LevelQuestConditionOperation_TypeDefinitionIndex = 54167;

	enum class LevelQuestConditionOperation : ::System::Int32
	{
		Set = 0,
		Subtract = 2,
		Add = 1,
	};
}
