#pragma once
#include "unitysdk/unitysdk.h"

namespace Collections::Pooled
{
	inline static constexpr unsigned int ClearMode_TypeDefinitionIndex = 5067;

	enum class ClearMode : ::System::Int32
	{
		Auto = 0,
		Always = 1,
		Never = 2,
	};
}
