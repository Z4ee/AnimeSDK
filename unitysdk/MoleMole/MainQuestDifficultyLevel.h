#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int MainQuestDifficultyLevel_TypeDefinitionIndex = 58295;

	enum class MainQuestDifficultyLevel : ::System::Int32
	{
		None = 0,
		Normal = 1,
		Challenge = 2,
	};
}
