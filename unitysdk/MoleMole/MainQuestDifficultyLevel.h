#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int MainQuestDifficultyLevel_TypeDefinitionIndex = 82984;

	enum class MainQuestDifficultyLevel : ::System::Int32
	{
		None = 0,
		Challenge = 2,
		Normal = 1,
	};
}
