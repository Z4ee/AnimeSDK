#pragma once
#include "unitysdk/unitysdk.h"

namespace PipeSplineDeformation
{
	inline static constexpr unsigned int RemainderPolicy_TypeDefinitionIndex = 26830;

	enum class RemainderPolicy : ::System::Int32
	{
		Partial = 1,
		Ignore = 0,
		Stretch = 2,
	};
}
