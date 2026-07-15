#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexAIStrategy_TypeDefinitionIndex = 51863;

	enum class ComplexAIStrategy : ::System::Byte
	{
		None = 0x0,
		DefaultComplexAI = 0x1,
		StandaloneSkillMap = 0x2,
	};
}
