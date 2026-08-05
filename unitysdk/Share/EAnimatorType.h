#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EAnimatorType_TypeDefinitionIndex = 10911;

	enum class EAnimatorType : ::System::Int16
	{
		Trigger = 2,
		Bool = 1,
		Float = 3,
		Int = 0,
	};
}
