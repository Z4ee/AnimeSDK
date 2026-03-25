#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HedgehogTeam/EasyTouch/QuickBase.h"
#include "unitysdk/HedgehogTeam/EasyTouch/QuickSwipe_ActionTriggering.h"
#include "unitysdk/HedgehogTeam/EasyTouch/QuickSwipe_SwipeDirection.h"

namespace HedgehogTeam::EasyTouch { class Gesture; }
namespace HedgehogTeam::EasyTouch { class QuickSwipe_OnSwipeAction; }

#define HEDGEHOGTEAM_EASYTOUCH_QUICKSWIPE_DOACTION_OFFSET UNITYSDK_OFFSET(0x11A7F290)
#define HEDGEHOGTEAM_EASYTOUCH_QUICKSWIPE_ISRIGHTDIRECTION_OFFSET UNITYSDK_OFFSET(0x11A7F050)
#define HEDGEHOGTEAM_EASYTOUCH_QUICKSWIPE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x11A7EEF0)
#define HEDGEHOGTEAM_EASYTOUCH_QUICKSWIPE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x11A7EBC0)
#define HEDGEHOGTEAM_EASYTOUCH_QUICKSWIPE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x11A7E8A0)
#define HEDGEHOGTEAM_EASYTOUCH_QUICKSWIPE_ON_DRAGEND_OFFSET UNITYSDK_OFFSET(0x11A7F3E0)
#define HEDGEHOGTEAM_EASYTOUCH_QUICKSWIPE_ON_DRAG_OFFSET UNITYSDK_OFFSET(0x11A7F460)
#define HEDGEHOGTEAM_EASYTOUCH_QUICKSWIPE_ON_SWIPEEND_OFFSET UNITYSDK_OFFSET(0x11A7F2F0)
#define HEDGEHOGTEAM_EASYTOUCH_QUICKSWIPE_ON_SWIPE_OFFSET UNITYSDK_OFFSET(0x11A7EF00)
#define HEDGEHOGTEAM_EASYTOUCH_QUICKSWIPE_UNSUBSCRIBEEVENT_OFFSET UNITYSDK_OFFSET(0x11A7EBD0)
#define HEDGEHOGTEAM_EASYTOUCH_QUICKSWIPE__CTOR_OFFSET UNITYSDK_OFFSET(0x11A7E800)

namespace HedgehogTeam::EasyTouch
{
	inline static constexpr unsigned int QuickSwipe_TypeDefinitionIndex = 31285;

	class QuickSwipe : public ::HedgehogTeam::EasyTouch::QuickBase
	{
	public:
		::HedgehogTeam::EasyTouch::QuickSwipe_OnSwipeAction* onSwipeAction; // 0x70
		::System::Boolean allowSwipeStartOverMe; // 0x78
		::HedgehogTeam::EasyTouch::QuickSwipe_ActionTriggering actionTriggering; // 0x7C
		::HedgehogTeam::EasyTouch::QuickSwipe_SwipeDirection swipeDirection; // 0x80
		::System::Single axisActionValue; // 0x84
		::System::Boolean enableSimpleAction; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_QUICKSWIPE__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_QUICKSWIPE_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_QUICKSWIPE_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_QUICKSWIPE_ONDESTROY_OFFSET))(this);
		}

		::System::Void UnsubscribeEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_QUICKSWIPE_UNSUBSCRIBEEVENT_OFFSET))(this);
		}

		::System::Void On_Swipe(::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_QUICKSWIPE_ON_SWIPE_OFFSET))(this, gesture);
		}

		::System::Void On_SwipeEnd(::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_QUICKSWIPE_ON_SWIPEEND_OFFSET))(this, gesture);
		}

		::System::Void On_DragEnd(::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_QUICKSWIPE_ON_DRAGEND_OFFSET))(this, gesture);
		}

		::System::Void On_Drag(::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_QUICKSWIPE_ON_DRAG_OFFSET))(this, gesture);
		}

		::System::Boolean isRightDirection(::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Boolean(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_QUICKSWIPE_ISRIGHTDIRECTION_OFFSET))(this, gesture);
		}

		::System::Void DoAction(::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_QUICKSWIPE_DOACTION_OFFSET))(this, gesture);
		}
	};
}
