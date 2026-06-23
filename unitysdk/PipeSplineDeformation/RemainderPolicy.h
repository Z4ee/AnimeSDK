#pragma once
#include "unitysdk/unitysdk.h"

namespace PipeSplineDeformation
{
	inline static constexpr unsigned int RemainderPolicy_TypeDefinitionIndex = 26463;

	enum class RemainderPolicy : ::System::Int32
	{
		Stretch = 2,
		Partial = 1,
		Ignore = 0,
	};
}
