#pragma once
#include "unitysdk/unitysdk.h"

namespace ScenenLightManager
{
	inline static constexpr unsigned int AfterExecOperation_TypeDefinitionIndex = 47265;

	enum class AfterExecOperation : ::System::Int32
	{
		Remove = 0,
		Keep = 1,
		Count = 2,
	};
}
