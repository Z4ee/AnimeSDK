#pragma once
#include "unitysdk/unitysdk.h"

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int OrientationAxisEnum_TypeDefinitionIndex = 39051;

	enum class OrientationAxisEnum : ::System::Int32
	{
		Forward = 2,
		Up = 0,
		Left = 4,
		Down = 1,
		Backward = 3,
		Right = 5,
	};
}
