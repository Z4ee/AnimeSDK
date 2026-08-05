#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int ConditionContext_TypeDefinitionIndex = 61189;

	struct alignas(4) ConditionContext
	{
		::System::UInt32 entityID; // 0x10
	};
}
