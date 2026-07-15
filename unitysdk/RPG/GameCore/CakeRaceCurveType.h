#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceCurveType_TypeDefinitionIndex = 17676;

	enum class CakeRaceCurveType : ::System::Int32
	{
		None = 0,
		Sin = 1,
		Linear = 2,
		Fall = 3,
		Parabole = 4,
		Custom = 5,
	};
}
