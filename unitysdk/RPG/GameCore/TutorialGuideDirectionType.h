#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TutorialGuideDirectionType_TypeDefinitionIndex = 23950;

	enum class TutorialGuideDirectionType : ::System::Int32
	{
		None = 0,
		Left = 1,
		LeftUp = 2,
		Up = 3,
		RightUp = 4,
		Right = 5,
		RightDown = 6,
		Down = 7,
		LeftDown = 8,
		Center = 9,
	};
}
