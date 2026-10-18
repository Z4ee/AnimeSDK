#pragma once
#include "unitysdk/unitysdk.h"

namespace RPGTools::LDWhiteBox
{
	inline static constexpr unsigned int ShapeType_TypeDefinitionIndex = 48922;

	enum class ShapeType : ::System::Int32
	{
		CUBE = 0,
		CYLINDER = 1,
		POLYGON = 2,
	};
}
