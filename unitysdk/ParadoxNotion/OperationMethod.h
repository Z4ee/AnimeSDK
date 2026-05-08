#pragma once
#include "unitysdk/unitysdk.h"

namespace ParadoxNotion
{
	inline static constexpr unsigned int OperationMethod_TypeDefinitionIndex = 28103;

	enum class OperationMethod : ::System::Int32
	{
		Multiply = 3,
		Set = 0,
		Divide = 4,
		Subtract = 2,
		Add = 1,
	};
}
