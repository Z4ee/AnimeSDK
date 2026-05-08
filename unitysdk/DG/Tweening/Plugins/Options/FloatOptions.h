#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace DG::Tweening::Plugins::Options
{
	inline static constexpr unsigned int FloatOptions_TypeDefinitionIndex = 25470;

	struct alignas(1) FloatOptions
	{
		::System::Boolean snapping; // 0x10
	};
}
