#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::Marble
{
	inline static constexpr unsigned int ShapeType_TypeDefinitionIndex = 39715;

	enum class ShapeType : ::System::Int32
	{
		Circle = 0,
		Rect = 1,
	};
}
