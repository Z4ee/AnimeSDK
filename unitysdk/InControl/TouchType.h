#pragma once
#include "unitysdk/unitysdk.h"

namespace InControl
{
	inline static constexpr unsigned int TouchType_TypeDefinitionIndex = 38738;

	enum class TouchType : ::System::Int32
	{
		Direct = 0,
		Indirect = 1,
		Stylus = 2,
		Mouse = 3,
	};
}
