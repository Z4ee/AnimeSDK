#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAICombineType_TypeDefinitionIndex = 14974;

	enum class ComplexSkillAICombineType : ::System::Int32
	{
		Add = 0,
		Mul = 1,
		Div = 2,
		Sub = 3,
	};
}
