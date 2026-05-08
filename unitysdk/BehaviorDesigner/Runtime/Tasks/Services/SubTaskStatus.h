#pragma once
#include "unitysdk/unitysdk.h"

namespace BehaviorDesigner::Runtime::Tasks::Services
{
	inline static constexpr unsigned int SubTaskStatus_TypeDefinitionIndex = 32300;

	enum class SubTaskStatus : ::System::Int32
	{
		Inactive = 0,
		Failure = 1,
		Success = 2,
	};
}
