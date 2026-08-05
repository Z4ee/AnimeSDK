#pragma once
#include "unitysdk/unitysdk.h"

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityVector3
{
	inline static constexpr unsigned int Operator_Operation_TypeDefinitionIndex = 34039;

	enum class Operator_Operation : ::System::Int32
	{
		Add = 0,
		Subtract = 1,
		Scale = 2,
	};
}
