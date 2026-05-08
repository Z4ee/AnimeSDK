#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int TimeControl_TypeDefinitionIndex = 55713;

	struct alignas(4) TimeControl
	{
		::System::Boolean controlDuration; // 0x10
		::System::Single duration; // 0x14
	};
}
