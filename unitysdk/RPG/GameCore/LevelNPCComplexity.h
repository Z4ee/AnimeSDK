#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelNPCComplexity_TypeDefinitionIndex = 16589;

	enum class LevelNPCComplexity : ::System::Int32
	{
		ComplexGrade = 0,
		SimpleGrade = 1,
		StillGrade = 2,
	};
}
