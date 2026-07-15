#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAIListCombineType_TypeDefinitionIndex = 14981;

	enum class ComplexSkillAIListCombineType : ::System::Int32
	{
		Add = 0,
		Mul = 1,
		Max = 2,
		Min = 3,
		Avg = 4,
	};
}
