#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::CustomRP
{
	inline static constexpr unsigned int ProbeRangeMode_TypeDefinitionIndex = 36997;

	enum class ProbeRangeMode : ::System::Int32
	{
		Local = 0,
		Global = 1,
		Auto = 2,
	};
}
