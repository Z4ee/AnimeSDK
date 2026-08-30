#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int UIProceduralShapeImageType_TypeDefinitionIndex = 72626;

	enum class UIProceduralShapeImageType : ::System::Int32
	{
		Simple = 0,
		Sliced = 1,
		Tiled = 2,
		Filled = 3,
	};
}
