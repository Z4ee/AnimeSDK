#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAIValueCompareType_TypeDefinitionIndex = 14975;

	enum class ComplexSkillAIValueCompareType : ::System::Int32
	{
		Greater = 0,
		GreaterEqual = 1,
		Equal = 2,
		LessEqual = 3,
		Less = 4,
	};
}
