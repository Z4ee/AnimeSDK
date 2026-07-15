#pragma once
#include "unitysdk/unitysdk.h"

namespace Sofa::Core
{
	inline static constexpr unsigned int BindingMode_TypeDefinitionIndex = 41412;

	enum class BindingMode : ::System::Int32
	{
		Default = 0,
		OneWay = 1,
		TwoWay = 2,
		OneTime = 3,
		OneWayToSource = 4,
	};
}
