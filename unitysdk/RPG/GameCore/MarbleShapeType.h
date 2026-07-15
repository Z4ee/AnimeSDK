#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleShapeType_TypeDefinitionIndex = 16159;

	enum class MarbleShapeType : ::System::Int32
	{
		Rect = 0,
		Circle = 1,
	};
}
