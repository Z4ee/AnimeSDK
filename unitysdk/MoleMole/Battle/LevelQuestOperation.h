#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle
{
	inline static constexpr unsigned int LevelQuestOperation_TypeDefinitionIndex = 48449;

	enum class LevelQuestOperation : ::System::Int32
	{
		Fail = 1,
		Cancel = 2,
		Succeed = 0,
	};
}
