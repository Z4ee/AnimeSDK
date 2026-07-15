#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MatchThreeRarityType_TypeDefinitionIndex = 11495;

	enum class MatchThreeRarityType : ::System::Int32
	{
		Invalid = 0,
		Normal = 1,
		Bronze = 2,
		Silver = 3,
		Gold = 4,
	};
}
