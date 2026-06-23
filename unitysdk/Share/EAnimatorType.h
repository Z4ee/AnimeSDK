#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EAnimatorType_TypeDefinitionIndex = 12170;

	enum class EAnimatorType : ::System::Int16
	{
		Int = 0,
		Float = 3,
		Trigger = 2,
		Bool = 1,
	};
}
