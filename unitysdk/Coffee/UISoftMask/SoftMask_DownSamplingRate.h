#pragma once
#include "unitysdk/unitysdk.h"

namespace Coffee::UISoftMask
{
	inline static constexpr unsigned int SoftMask_DownSamplingRate_TypeDefinitionIndex = 84928;

	enum class SoftMask_DownSamplingRate : ::System::Int32
	{
		None = 0,
		x1 = 1,
		x2 = 2,
		x4 = 4,
		x8 = 8,
	};
}
