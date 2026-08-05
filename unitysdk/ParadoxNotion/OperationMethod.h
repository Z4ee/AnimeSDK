#pragma once
#include "unitysdk/unitysdk.h"

namespace ParadoxNotion
{
	inline static constexpr unsigned int OperationMethod_TypeDefinitionIndex = 29937;

	enum class OperationMethod : ::System::Int32
	{
		Set = 0,
		Add = 1,
		Divide = 4,
		Multiply = 3,
		Subtract = 2,
	};
}
