#pragma once
#include "unitysdk/unitysdk.h"

namespace FluffyUnderware::DevTools
{
	inline static constexpr unsigned int DTValueClamping_TypeDefinitionIndex = 28978;

	enum class DTValueClamping : ::System::Int32
	{
		None = 0,
		Min = 1,
		Max = 2,
		Range = 3,
	};
}
