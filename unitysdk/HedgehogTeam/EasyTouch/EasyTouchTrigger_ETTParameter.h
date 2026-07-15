#pragma once
#include "unitysdk/unitysdk.h"

namespace HedgehogTeam::EasyTouch
{
	inline static constexpr unsigned int EasyTouchTrigger_ETTParameter_TypeDefinitionIndex = 38089;

	enum class EasyTouchTrigger_ETTParameter : ::System::Int32
	{
		None = 0,
		Gesture = 1,
		Finger_Id = 2,
		Touch_Count = 3,
		Start_Position = 4,
		Position = 5,
		Delta_Position = 6,
		Swipe_Type = 7,
		Swipe_Length = 8,
		Swipe_Vector = 9,
		Delta_Pinch = 10,
		Twist_Anlge = 11,
		ActionTime = 12,
		DeltaTime = 13,
		PickedObject = 14,
		PickedUIElement = 15,
	};
}
