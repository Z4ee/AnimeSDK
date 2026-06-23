#pragma once
#include "unitysdk/unitysdk.h"

namespace ParadoxNotion
{
	inline static constexpr unsigned int OperationMethod_TypeDefinitionIndex = 30559;

	enum class OperationMethod : ::System::Int32
	{
		Set = 0,
		Multiply = 3,
		Subtract = 2,
		Add = 1,
		Divide = 4,
	};
}
