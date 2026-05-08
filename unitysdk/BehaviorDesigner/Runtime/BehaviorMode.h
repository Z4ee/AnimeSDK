#pragma once
#include "unitysdk/unitysdk.h"

namespace BehaviorDesigner::Runtime
{
	inline static constexpr unsigned int BehaviorMode_TypeDefinitionIndex = 31688;

	enum class BehaviorMode : ::System::Int32
	{
		NORMAL = 0,
		SUBTREE = 1,
	};
}
