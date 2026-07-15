#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAIValueType_TypeDefinitionIndex = 14979;

	enum class ComplexSkillAIValueType : ::System::Int32
	{
		TotalPower = 0,
		WeightedTotalPower = 1,
		SummonCount = 2,
	};
}
