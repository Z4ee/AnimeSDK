#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int BehaviorInstance_1_EBehaviorInstanceFinishOperation_TypeDefinitionIndex = 8679;

	enum class BehaviorInstance_1_EBehaviorInstanceFinishOperation : ::System::Byte
	{
		Finished = 0x1,
		None = 0x0,
		WithBlendOut = 0x2,
	};
}
