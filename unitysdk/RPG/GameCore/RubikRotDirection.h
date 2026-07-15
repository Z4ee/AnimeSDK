#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RubikRotDirection_TypeDefinitionIndex = 10149;

	enum class RubikRotDirection : ::System::Int32
	{
		A1 = 0,
		A2 = 1,
		A3 = 2,
		B1 = 3,
		B2 = 4,
		B3 = 5,
		C1 = 6,
		C2 = 7,
		C3 = 8,
	};
}
