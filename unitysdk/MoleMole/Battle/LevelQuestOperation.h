#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle
{
	inline static constexpr unsigned int LevelQuestOperation_TypeDefinitionIndex = 59793;

	enum class LevelQuestOperation : ::System::Int32
	{
		Succeed = 0,
		Fail = 1,
		Cancel = 2,
	};
}
