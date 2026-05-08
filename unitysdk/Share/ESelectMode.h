#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int ESelectMode_TypeDefinitionIndex = 15253;

	enum class ESelectMode : ::System::Int16
	{
		NotByPremise = 1,
		ByPremise = 0,
		EnumCount = 2,
	};
}
