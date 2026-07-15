#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetAliasPrecedence_TypeDefinitionIndex = 56430;

	enum class TargetAliasPrecedence : ::System::Int32
	{
		None = 0,
		Assigment = 1,
		Logic = 2,
		Term = 3,
		Unary = 4,
		Primary = 5,
		Call = 6,
	};
}
