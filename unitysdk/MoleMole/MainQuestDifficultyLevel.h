#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int MainQuestDifficultyLevel_TypeDefinitionIndex = 53145;

	enum class MainQuestDifficultyLevel : ::System::Int32
	{
		Challenge = 2,
		Normal = 1,
		None = 0,
	};
}
