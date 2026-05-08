#pragma once
#include "unitysdk/unitysdk.h"

namespace BehaviorDesigner::Runtime::Tasks
{
	inline static constexpr unsigned int AbortType_TypeDefinitionIndex = 31797;

	enum class AbortType : ::System::Int32
	{
		None = 0,
		Self = 1,
		LowerPriority = 2,
		Both = 3,
	};
}
