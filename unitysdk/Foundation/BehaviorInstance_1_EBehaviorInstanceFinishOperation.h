#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int BehaviorInstance_1_EBehaviorInstanceFinishOperation_TypeDefinitionIndex = 8569;

	enum class BehaviorInstance_1_EBehaviorInstanceFinishOperation : ::System::Byte
	{
		None = 0x0,
		Finished = 0x1,
		WithBlendOut = 0x2,
	};
}
