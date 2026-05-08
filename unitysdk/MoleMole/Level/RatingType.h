#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Level
{
	inline static constexpr unsigned int RatingType_TypeDefinitionIndex = 61188;

	enum class RatingType : ::System::Int32
	{
		RATING_A = 3,
		RATING_C = 1,
		RATING_S = 4,
		RATING_SS = 5,
		RATING_FAIL = 0,
		RATING_B = 2,
	};
}
