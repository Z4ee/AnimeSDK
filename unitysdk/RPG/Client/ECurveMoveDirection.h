#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ECurveMoveDirection_TypeDefinitionIndex = 65502;

	enum class ECurveMoveDirection : ::System::Int32
	{
		Positive = 0,
		Negative = 1,
	};
}
