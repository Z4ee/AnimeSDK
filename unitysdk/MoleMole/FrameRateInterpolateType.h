#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int FrameRateInterpolateType_TypeDefinitionIndex = 84100;

	enum class FrameRateInterpolateType : ::System::Int32
	{
		None = 0,
		High = 3,
		Low = 1,
		Middle = 2,
	};
}
