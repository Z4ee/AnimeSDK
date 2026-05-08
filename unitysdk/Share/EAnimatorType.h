#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EAnimatorType_TypeDefinitionIndex = 16101;

	enum class EAnimatorType : ::System::Int16
	{
		Float = 3,
		Bool = 1,
		Int = 0,
		Trigger = 2,
	};
}
