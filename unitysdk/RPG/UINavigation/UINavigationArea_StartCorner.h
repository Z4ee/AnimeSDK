#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::UINavigation
{
	inline static constexpr unsigned int UINavigationArea_StartCorner_TypeDefinitionIndex = 49408;

	enum class UINavigationArea_StartCorner : ::System::Int32
	{
		LeftTop = 0,
		RightTop = 1,
		LeftBottom = 2,
		RightBottom = 3,
	};
}
