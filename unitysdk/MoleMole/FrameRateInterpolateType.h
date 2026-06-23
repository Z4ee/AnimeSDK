#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int FrameRateInterpolateType_TypeDefinitionIndex = 55619;

	enum class FrameRateInterpolateType : ::System::Int32
	{
		High = 3,
		None = 0,
		Middle = 2,
		Low = 1,
	};
}
