#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TutorialGuideHintType_TypeDefinitionIndex = 23947;

	enum class TutorialGuideHintType : ::System::Int32
	{
		None = 0,
		ClickCircle = 1,
		NormalCircle = 2,
		CirCle3D = 3,
		ClickRect = 4,
		NormalRect = 5,
		Arrow = 6,
		JoystickRotation = 7,
		SwipeRight = 8,
		SwipeLeft = 9,
		SwipeUp = 10,
		SwipeDown = 11,
		SwipeAToB = 12,
		WeakRect = 13,
		WeakCircle = 14,
	};
}
