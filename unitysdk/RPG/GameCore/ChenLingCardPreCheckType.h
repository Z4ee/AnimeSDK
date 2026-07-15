#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingCardPreCheckType_TypeDefinitionIndex = 10657;

	enum class ChenLingCardPreCheckType : ::System::Int32
	{
		Forbid = 0,
		Single = 1,
		SameID = 2,
		LevelMax = 3,
		EnhanceLevelMax = 4,
	};
}
