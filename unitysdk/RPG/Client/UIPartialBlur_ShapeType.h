#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int UIPartialBlur_ShapeType_TypeDefinitionIndex = 72996;

	enum class UIPartialBlur_ShapeType : ::System::Int32
	{
		None = 100,
		Rect = 0,
		Circle = 1,
	};
}
