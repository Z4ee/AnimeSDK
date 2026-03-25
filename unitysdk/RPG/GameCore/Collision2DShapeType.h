#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int Collision2DShapeType_TypeDefinitionIndex = 45277;

	enum class Collision2DShapeType : ::System::Int32
	{
		Circle = 0,
		_Count = 1,
	};
}
