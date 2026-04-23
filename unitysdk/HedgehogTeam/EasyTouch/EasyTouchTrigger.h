#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HedgehogTeam/EasyTouch/EasyTouch_EvtType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace HedgehogTeam::EasyTouch { class EasyTouchTrigger_EasyTouchReceiver; }
namespace HedgehogTeam::EasyTouch { class Gesture; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ADDTRIGGER_OFFSET UNITYSDK_OFFSET(0x12C48C10)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_GETTRIGGERENABLE_OFFSET UNITYSDK_OFFSET(0x12C48DB0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_GETTRIGGER_OFFSET UNITYSDK_OFFSET(0x12C48D10)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ISRECEVIER4_OFFSET UNITYSDK_OFFSET(0x12C48100)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x12C480F0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x12C467E0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x12C446B0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_CANCEL_OFFSET UNITYSDK_OFFSET(0x12C48AA0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_DOUBLETAP2FINGERS_OFFSET UNITYSDK_OFFSET(0x12C48BE0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_DOUBLETAP_OFFSET UNITYSDK_OFFSET(0x12C48A00)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_DRAG2FINGERS_OFFSET UNITYSDK_OFFSET(0x12C48B20)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_DRAGEND2FINGERS_OFFSET UNITYSDK_OFFSET(0x12C48B30)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_DRAGEND_OFFSET UNITYSDK_OFFSET(0x12C48A90)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_DRAGSTART2FINGERS_OFFSET UNITYSDK_OFFSET(0x12C48B10)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_DRAGSTART_OFFSET UNITYSDK_OFFSET(0x12C48A70)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_DRAG_OFFSET UNITYSDK_OFFSET(0x12C48A80)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_LONGTAP2FINGERS_OFFSET UNITYSDK_OFFSET(0x12C48AF0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_LONGTAPEND2FINGERS_OFFSET UNITYSDK_OFFSET(0x12C48B00)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_LONGTAPEND_OFFSET UNITYSDK_OFFSET(0x12C48A30)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_LONGTAPSTART2FINGERS_OFFSET UNITYSDK_OFFSET(0x12C48AE0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_LONGTAPSTART_OFFSET UNITYSDK_OFFSET(0x12C48A10)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_LONGTAP_OFFSET UNITYSDK_OFFSET(0x12C48A20)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_OVERUIELEMENT_OFFSET UNITYSDK_OFFSET(0x12C48C00)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_PINCHEND_OFFSET UNITYSDK_OFFSET(0x12C48BC0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_PINCHIN_OFFSET UNITYSDK_OFFSET(0x12C48BB0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_PINCHOUT_OFFSET UNITYSDK_OFFSET(0x12C48BA0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_PINCH_OFFSET UNITYSDK_OFFSET(0x12C48B90)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_SIMPLETAP2FINGERS_OFFSET UNITYSDK_OFFSET(0x12C48BD0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_SIMPLETAP_OFFSET UNITYSDK_OFFSET(0x12C489F0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_SWIPE2FINGERS_OFFSET UNITYSDK_OFFSET(0x12C48B50)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_SWIPEEND2FINGERS_OFFSET UNITYSDK_OFFSET(0x12C48B60)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_SWIPEEND_OFFSET UNITYSDK_OFFSET(0x12C48A60)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_SWIPESTART2FINGERS_OFFSET UNITYSDK_OFFSET(0x12C48B40)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_SWIPESTART_OFFSET UNITYSDK_OFFSET(0x12C48A40)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_SWIPE_OFFSET UNITYSDK_OFFSET(0x12C48A50)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_TOUCHDOWN2FINGERS_OFFSET UNITYSDK_OFFSET(0x12C48AC0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_TOUCHDOWN_OFFSET UNITYSDK_OFFSET(0x12C489D0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_TOUCHSTART2FINGERS_OFFSET UNITYSDK_OFFSET(0x12C48AB0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_TOUCHSTART_OFFSET UNITYSDK_OFFSET(0x12C481F0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_TOUCHUP2FINGERS_OFFSET UNITYSDK_OFFSET(0x12C48AD0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_TOUCHUP_OFFSET UNITYSDK_OFFSET(0x12C489E0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_TWISTEND_OFFSET UNITYSDK_OFFSET(0x12C48B80)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_TWIST_OFFSET UNITYSDK_OFFSET(0x12C48B70)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_UIELEMENTTOUCHUP_OFFSET UNITYSDK_OFFSET(0x12C48BF0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_SETTRIGGERENABLE_OFFSET UNITYSDK_OFFSET(0x12C48CE0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_START_OFFSET UNITYSDK_OFFSET(0x12C44630)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_SUBSCRIBEEASYTOUCHEVENT_OFFSET UNITYSDK_OFFSET(0x12C446C0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_TRIGGERSCHEDULER_OFFSET UNITYSDK_OFFSET(0x12C48200)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_UNSUBSCRIBEEASYTOUCHEVENT_OFFSET UNITYSDK_OFFSET(0x12C467F0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x12C48E00)

namespace HedgehogTeam::EasyTouch
{
	inline static constexpr unsigned int EasyTouchTrigger_TypeDefinitionIndex = 36980;

	class EasyTouchTrigger : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::HedgehogTeam::EasyTouch::EasyTouchTrigger_EasyTouchReceiver*>* receivers; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_START_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ONDESTROY_OFFSET))(this);
		}

		::System::Void SubscribeEasyTouchEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_SUBSCRIBEEASYTOUCHEVENT_OFFSET))(this);
		}

		::System::Void UnsubscribeEasyTouchEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_UNSUBSCRIBEEASYTOUCHEVENT_OFFSET))(this);
		}

		::System::Void On_TouchStart(::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_TOUCHSTART_OFFSET))(this, gesture);
		}

		::System::Void On_TouchDown(::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_TOUCHDOWN_OFFSET))(this, gesture);
		}

		::System::Void On_TouchUp(::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_TOUCHUP_OFFSET))(this, gesture);
		}

		::System::Void On_SimpleTap(::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_SIMPLETAP_OFFSET))(this, gesture);
		}

		::System::Void On_DoubleTap(::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_DOUBLETAP_OFFSET))(this, gesture);
		}

		::System::Void On_LongTapStart(::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_LONGTAPSTART_OFFSET))(this, gesture);
		}

		::System::Void On_LongTap(::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_LONGTAP_OFFSET))(this, gesture);
		}

		::System::Void On_LongTapEnd(::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_LONGTAPEND_OFFSET))(this, gesture);
		}

		::System::Void On_SwipeStart(::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_SWIPESTART_OFFSET))(this, gesture);
		}

		::System::Void On_Swipe(::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_SWIPE_OFFSET))(this, gesture);
		}

		::System::Void On_SwipeEnd(::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_SWIPEEND_OFFSET))(this, gesture);
		}

		::System::Void On_DragStart(::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_DRAGSTART_OFFSET))(this, gesture);
		}

		::System::Void On_Drag(::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_DRAG_OFFSET))(this, gesture);
		}

		::System::Void On_DragEnd(::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_DRAGEND_OFFSET))(this, gesture);
		}

		::System::Void On_Cancel(::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_CANCEL_OFFSET))(this, gesture);
		}

		::System::Void On_TouchStart2Fingers(::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_TOUCHSTART2FINGERS_OFFSET))(this, gesture);
		}

		::System::Void On_TouchDown2Fingers(::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_TOUCHDOWN2FINGERS_OFFSET))(this, gesture);
		}

		::System::Void On_TouchUp2Fingers(::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_TOUCHUP2FINGERS_OFFSET))(this, gesture);
		}

		::System::Void On_LongTapStart2Fingers(::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_LONGTAPSTART2FINGERS_OFFSET))(this, gesture);
		}

		::System::Void On_LongTap2Fingers(::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_LONGTAP2FINGERS_OFFSET))(this, gesture);
		}

		::System::Void On_LongTapEnd2Fingers(::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_LONGTAPEND2FINGERS_OFFSET))(this, gesture);
		}

		::System::Void On_DragStart2Fingers(::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_DRAGSTART2FINGERS_OFFSET))(this, gesture);
		}

		::System::Void On_Drag2Fingers(::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_DRAG2FINGERS_OFFSET))(this, gesture);
		}

		::System::Void On_DragEnd2Fingers(::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_DRAGEND2FINGERS_OFFSET))(this, gesture);
		}

		::System::Void On_SwipeStart2Fingers(::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_SWIPESTART2FINGERS_OFFSET))(this, gesture);
		}

		::System::Void On_Swipe2Fingers(::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_SWIPE2FINGERS_OFFSET))(this, gesture);
		}

		::System::Void On_SwipeEnd2Fingers(::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_SWIPEEND2FINGERS_OFFSET))(this, gesture);
		}

		::System::Void On_Twist(::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_TWIST_OFFSET))(this, gesture);
		}

		::System::Void On_TwistEnd(::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_TWISTEND_OFFSET))(this, gesture);
		}

		::System::Void On_Pinch(::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_PINCH_OFFSET))(this, gesture);
		}

		::System::Void On_PinchOut(::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_PINCHOUT_OFFSET))(this, gesture);
		}

		::System::Void On_PinchIn(::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_PINCHIN_OFFSET))(this, gesture);
		}

		::System::Void On_PinchEnd(::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_PINCHEND_OFFSET))(this, gesture);
		}

		::System::Void On_SimpleTap2Fingers(::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_SIMPLETAP2FINGERS_OFFSET))(this, gesture);
		}

		::System::Void On_DoubleTap2Fingers(::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_DOUBLETAP2FINGERS_OFFSET))(this, gesture);
		}

		::System::Void On_UIElementTouchUp(::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_UIELEMENTTOUCHUP_OFFSET))(this, gesture);
		}

		::System::Void On_OverUIElement(::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_OVERUIELEMENT_OFFSET))(this, gesture);
		}

		::System::Void AddTrigger(::HedgehogTeam::EasyTouch::EasyTouch_EvtType ev)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::EasyTouch_EvtType))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ADDTRIGGER_OFFSET))(this, ev);
		}

		::System::Boolean SetTriggerEnable(::System::String* triggerName, ::System::Boolean value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_SETTRIGGERENABLE_OFFSET))(this, triggerName, value);
		}

		::System::Boolean GetTriggerEnable(::System::String* triggerName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_GETTRIGGERENABLE_OFFSET))(this, triggerName);
		}

		::System::Void TriggerScheduler(::HedgehogTeam::EasyTouch::EasyTouch_EvtType evnt, ::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::EasyTouch_EvtType, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_TRIGGERSCHEDULER_OFFSET))(this, evnt, gesture);
		}

		::System::Boolean IsRecevier4(::HedgehogTeam::EasyTouch::EasyTouch_EvtType evnt)
		{
			return ((::System::Boolean(*)(::PVOID, ::HedgehogTeam::EasyTouch::EasyTouch_EvtType))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ISRECEVIER4_OFFSET))(this, evnt);
		}

		::HedgehogTeam::EasyTouch::EasyTouchTrigger_EasyTouchReceiver* GetTrigger(::System::String* triggerName)
		{
			return ((::HedgehogTeam::EasyTouch::EasyTouchTrigger_EasyTouchReceiver*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_GETTRIGGER_OFFSET))(this, triggerName);
		}
	};
}
