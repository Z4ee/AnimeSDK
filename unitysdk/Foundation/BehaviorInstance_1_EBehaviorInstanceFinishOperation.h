#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int BehaviorInstance_1_EBehaviorInstanceFinishOperation_TypeDefinitionIndex = 9091;

	enum class BehaviorInstance_1_EBehaviorInstanceFinishOperation : ::System::Byte
	{
		Finished = 0x1,
		WithBlendOut = 0x2,
		None = 0x0,
	};
}
