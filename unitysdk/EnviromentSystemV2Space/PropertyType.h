#pragma once
#include "unitysdk/unitysdk.h"

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int PropertyType_TypeDefinitionIndex = 47656;

	enum class PropertyType : ::System::Int32
	{
		Float = 0,
		Int = 1,
		Vector = 2,
		Texture = 3,
		Gradient = 4,
		Bool = 5,
		FloatCurve = 6,
		Text = 7,
		Common = 8,
		Object = 9,
		Asset = 10,
		Count = 11,
	};
}
