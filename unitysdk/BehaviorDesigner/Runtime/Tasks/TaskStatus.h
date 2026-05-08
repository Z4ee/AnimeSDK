#pragma once
#include "unitysdk/unitysdk.h"

namespace BehaviorDesigner::Runtime::Tasks
{
	inline static constexpr unsigned int TaskStatus_TypeDefinitionIndex = 31827;

	enum class TaskStatus : ::System::Int32
	{
		Inactive = 0,
		Failure = 1,
		Success = 2,
		Running = 3,
	};
}
