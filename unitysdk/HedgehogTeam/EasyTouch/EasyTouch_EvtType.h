#pragma once
#include "unitysdk/unitysdk.h"

namespace HedgehogTeam::EasyTouch
{
	inline static constexpr unsigned int EasyTouch_EvtType_TypeDefinitionIndex = 38177;

	enum class EasyTouch_EvtType : ::System::Int32
	{
		None = 0,
		On_TouchStart = 1,
		On_TouchDown = 2,
		On_TouchUp = 3,
		On_SimpleTap = 4,
		On_DoubleTap = 5,
		On_LongTapStart = 6,
		On_LongTap = 7,
		On_LongTapEnd = 8,
		On_DragStart = 9,
		On_Drag = 10,
		On_DragEnd = 11,
		On_SwipeStart = 12,
		On_Swipe = 13,
		On_SwipeEnd = 14,
		On_TouchStart2Fingers = 15,
		On_TouchDown2Fingers = 16,
		On_TouchUp2Fingers = 17,
		On_SimpleTap2Fingers = 18,
		On_DoubleTap2Fingers = 19,
		On_LongTapStart2Fingers = 20,
		On_LongTap2Fingers = 21,
		On_LongTapEnd2Fingers = 22,
		On_Twist = 23,
		On_TwistEnd = 24,
		On_Pinch = 25,
		On_PinchIn = 26,
		On_PinchOut = 27,
		On_PinchEnd = 28,
		On_DragStart2Fingers = 29,
		On_Drag2Fingers = 30,
		On_DragEnd2Fingers = 31,
		On_SwipeStart2Fingers = 32,
		On_Swipe2Fingers = 33,
		On_SwipeEnd2Fingers = 34,
		On_EasyTouchIsReady = 35,
		On_Cancel = 36,
		On_Cancel2Fingers = 37,
		On_OverUIElement = 38,
		On_UIElementTouchUp = 39,
	};
}
