#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::Marble
{
	inline static constexpr unsigned int ShapeType_TypeDefinitionIndex = 41462;

	enum class ShapeType : ::System::Int32
	{
		Circle = 0,
		Rect = 1,
	};
}
