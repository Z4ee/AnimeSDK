#pragma once
#include "unitysdk/unitysdk.h"

namespace BehaviorDesigner::Runtime
{
	inline static constexpr unsigned int BehaviorManager_BehaviorAsyncLoadMode_TypeDefinitionIndex = 33855;

	enum class BehaviorManager_BehaviorAsyncLoadMode : ::System::Int32
	{
		NORMAL_LOAD = 0,
		SUBTREE_LOAD = 1,
	};
}
