#pragma once
#include "unitysdk/unitysdk.h"

namespace BehaviorDesigner::Runtime::Tasks
{
	inline static constexpr unsigned int StackedAction_ComparisonType_TypeDefinitionIndex = 31766;

	enum class StackedAction_ComparisonType : ::System::Int32
	{
		Sequence = 0,
		Selector = 1,
	};
}
