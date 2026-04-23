#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int LipLineFixParams_TypeDefinitionIndex = 45292;

	struct alignas(4) LipLineFixParams
	{
		::System::Single LipLineFixScale; // 0x10
	};
}
