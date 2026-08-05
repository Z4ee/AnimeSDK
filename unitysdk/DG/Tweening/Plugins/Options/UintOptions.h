#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace DG::Tweening::Plugins::Options
{
	inline static constexpr unsigned int UintOptions_TypeDefinitionIndex = 28561;

	struct alignas(1) UintOptions
	{
		::System::Boolean isNegativeChangeValue; // 0x10
	};
}
