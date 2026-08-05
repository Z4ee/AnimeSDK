#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int ESelectMode_TypeDefinitionIndex = 10990;

	enum class ESelectMode : ::System::Int16
	{
		ByPremise = 0,
		EnumCount = 2,
		NotByPremise = 1,
	};
}
