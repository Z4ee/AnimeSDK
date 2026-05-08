#pragma once
#include "unitysdk/unitysdk.h"

namespace BehaviorDesigner::Runtime
{
	inline static constexpr unsigned int BehaviorManager_ExecutionsPerTickType_TypeDefinitionIndex = 31672;

	enum class BehaviorManager_ExecutionsPerTickType : ::System::Int32
	{
		NoDuplicates = 0,
		Count = 1,
	};
}
