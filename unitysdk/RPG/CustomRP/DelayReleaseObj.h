#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::CustomRP
{
	inline static constexpr unsigned int DelayReleaseObj_TypeDefinitionIndex = 36000;

	enum class DelayReleaseObj : ::System::Int32
	{
		kPlanarReflection = 0,
		kLocalReflection0 = 1,
	};
}
