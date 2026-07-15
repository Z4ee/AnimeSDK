#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightSettleRankType_TypeDefinitionIndex = 12933;

	enum class GridFightSettleRankType : ::System::Int32
	{
		C = 0,
		B = 1,
		A = 2,
		S = 3,
		SS = 4,
		SSS = 5,
	};
}
