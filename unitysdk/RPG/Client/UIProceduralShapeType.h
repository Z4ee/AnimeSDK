#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int UIProceduralShapeType_TypeDefinitionIndex = 72698;

	enum class UIProceduralShapeType : ::System::Int32
	{
		Rectangle = 0,
		Circle = 1,
		Polygon = 2,
		Arc = 3,
	};
}
