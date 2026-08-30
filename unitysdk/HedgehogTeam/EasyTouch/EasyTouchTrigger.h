#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HedgehogTeam/EasyTouch/EasyTouch_EvtType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace HedgehogTeam::EasyTouch { class EasyTouchTrigger_EasyTouchReceiver; }
namespace HedgehogTeam::EasyTouch { class Gesture; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ADDTRIGGER_OFFSET UNITYSDK_OFFSET(0x1D1666A0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_GETTRIGGERENABLE_OFFSET UNITYSDK_OFFSET(0x1D1668C0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_GETTRIGGER_OFFSET UNITYSDK_OFFSET(0x1D166800)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ISRECEVIER4_OFFSET UNITYSDK_OFFSET(0x1D165B70)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1D165B60)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1D163DB0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1D161A10)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_CANCEL_OFFSET UNITYSDK_OFFSET(0x1D166530)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_DOUBLETAP2FINGERS_OFFSET UNITYSDK_OFFSET(0x1D166670)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_DOUBLETAP_OFFSET UNITYSDK_OFFSET(0x1D166490)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_DRAG2FINGERS_OFFSET UNITYSDK_OFFSET(0x1D1665B0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_DRAGEND2FINGERS_OFFSET UNITYSDK_OFFSET(0x1D1665C0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_DRAGEND_OFFSET UNITYSDK_OFFSET(0x1D166520)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_DRAGSTART2FINGERS_OFFSET UNITYSDK_OFFSET(0x1D1665A0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_DRAGSTART_OFFSET UNITYSDK_OFFSET(0x1D166500)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_DRAG_OFFSET UNITYSDK_OFFSET(0x1D166510)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_LONGTAP2FINGERS_OFFSET UNITYSDK_OFFSET(0x1D166580)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_LONGTAPEND2FINGERS_OFFSET UNITYSDK_OFFSET(0x1D166590)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_LONGTAPEND_OFFSET UNITYSDK_OFFSET(0x1D1664C0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_LONGTAPSTART2FINGERS_OFFSET UNITYSDK_OFFSET(0x1D166570)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_LONGTAPSTART_OFFSET UNITYSDK_OFFSET(0x1D1664A0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_LONGTAP_OFFSET UNITYSDK_OFFSET(0x1D1664B0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_OVERUIELEMENT_OFFSET UNITYSDK_OFFSET(0x1D166690)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_PINCHEND_OFFSET UNITYSDK_OFFSET(0x1D166650)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_PINCHIN_OFFSET UNITYSDK_OFFSET(0x1D166640)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_PINCHOUT_OFFSET UNITYSDK_OFFSET(0x1D166630)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_PINCH_OFFSET UNITYSDK_OFFSET(0x1D166620)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_SIMPLETAP2FINGERS_OFFSET UNITYSDK_OFFSET(0x1D166660)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_SIMPLETAP_OFFSET UNITYSDK_OFFSET(0x1D166480)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_SWIPE2FINGERS_OFFSET UNITYSDK_OFFSET(0x1D1665E0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_SWIPEEND2FINGERS_OFFSET UNITYSDK_OFFSET(0x1D1665F0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_SWIPEEND_OFFSET UNITYSDK_OFFSET(0x1D1664F0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_SWIPESTART2FINGERS_OFFSET UNITYSDK_OFFSET(0x1D1665D0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_SWIPESTART_OFFSET UNITYSDK_OFFSET(0x1D1664D0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_SWIPE_OFFSET UNITYSDK_OFFSET(0x1D1664E0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_TOUCHDOWN2FINGERS_OFFSET UNITYSDK_OFFSET(0x1D166550)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_TOUCHDOWN_OFFSET UNITYSDK_OFFSET(0x1D166460)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_TOUCHSTART2FINGERS_OFFSET UNITYSDK_OFFSET(0x1D166540)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_TOUCHSTART_OFFSET UNITYSDK_OFFSET(0x1D165C60)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_TOUCHUP2FINGERS_OFFSET UNITYSDK_OFFSET(0x1D166560)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_TOUCHUP_OFFSET UNITYSDK_OFFSET(0x1D166470)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_TWISTEND_OFFSET UNITYSDK_OFFSET(0x1D166610)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_TWIST_OFFSET UNITYSDK_OFFSET(0x1D166600)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_UIELEMENTTOUCHUP_OFFSET UNITYSDK_OFFSET(0x1D166680)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_SETTRIGGERENABLE_OFFSET UNITYSDK_OFFSET(0x1D1667D0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_START_OFFSET UNITYSDK_OFFSET(0x1D161990)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_SUBSCRIBEEASYTOUCHEVENT_OFFSET UNITYSDK_OFFSET(0x1D161A20)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_TRIGGERSCHEDULER_OFFSET UNITYSDK_OFFSET(0x1D165C70)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_UNSUBSCRIBEEASYTOUCHEVENT_OFFSET UNITYSDK_OFFSET(0x1D163DC0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D166910)

namespace HedgehogTeam::EasyTouch
{
	inline static constexpr unsigned int EasyTouchTrigger_TypeDefinitionIndex = 38947;

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

		::System::Void On_TouchStart(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_TOUCHSTART_OFFSET))(this, a1);
		}

		::System::Void On_TouchDown(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_TOUCHDOWN_OFFSET))(this, a1);
		}

		::System::Void On_TouchUp(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_TOUCHUP_OFFSET))(this, a1);
		}

		::System::Void On_SimpleTap(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_SIMPLETAP_OFFSET))(this, a1);
		}

		::System::Void On_DoubleTap(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_DOUBLETAP_OFFSET))(this, a1);
		}

		::System::Void On_LongTapStart(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_LONGTAPSTART_OFFSET))(this, a1);
		}

		::System::Void On_LongTap(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_LONGTAP_OFFSET))(this, a1);
		}

		::System::Void On_LongTapEnd(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_LONGTAPEND_OFFSET))(this, a1);
		}

		::System::Void On_SwipeStart(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_SWIPESTART_OFFSET))(this, a1);
		}

		::System::Void On_Swipe(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_SWIPE_OFFSET))(this, a1);
		}

		::System::Void On_SwipeEnd(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_SWIPEEND_OFFSET))(this, a1);
		}

		::System::Void On_DragStart(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_DRAGSTART_OFFSET))(this, a1);
		}

		::System::Void On_Drag(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_DRAG_OFFSET))(this, a1);
		}

		::System::Void On_DragEnd(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_DRAGEND_OFFSET))(this, a1);
		}

		::System::Void On_Cancel(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_CANCEL_OFFSET))(this, a1);
		}

		::System::Void On_TouchStart2Fingers(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_TOUCHSTART2FINGERS_OFFSET))(this, a1);
		}

		::System::Void On_TouchDown2Fingers(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_TOUCHDOWN2FINGERS_OFFSET))(this, a1);
		}

		::System::Void On_TouchUp2Fingers(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_TOUCHUP2FINGERS_OFFSET))(this, a1);
		}

		::System::Void On_LongTapStart2Fingers(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_LONGTAPSTART2FINGERS_OFFSET))(this, a1);
		}

		::System::Void On_LongTap2Fingers(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_LONGTAP2FINGERS_OFFSET))(this, a1);
		}

		::System::Void On_LongTapEnd2Fingers(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_LONGTAPEND2FINGERS_OFFSET))(this, a1);
		}

		::System::Void On_DragStart2Fingers(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_DRAGSTART2FINGERS_OFFSET))(this, a1);
		}

		::System::Void On_Drag2Fingers(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_DRAG2FINGERS_OFFSET))(this, a1);
		}

		::System::Void On_DragEnd2Fingers(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_DRAGEND2FINGERS_OFFSET))(this, a1);
		}

		::System::Void On_SwipeStart2Fingers(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_SWIPESTART2FINGERS_OFFSET))(this, a1);
		}

		::System::Void On_Swipe2Fingers(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_SWIPE2FINGERS_OFFSET))(this, a1);
		}

		::System::Void On_SwipeEnd2Fingers(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_SWIPEEND2FINGERS_OFFSET))(this, a1);
		}

		::System::Void On_Twist(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_TWIST_OFFSET))(this, a1);
		}

		::System::Void On_TwistEnd(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_TWISTEND_OFFSET))(this, a1);
		}

		::System::Void On_Pinch(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_PINCH_OFFSET))(this, a1);
		}

		::System::Void On_PinchOut(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_PINCHOUT_OFFSET))(this, a1);
		}

		::System::Void On_PinchIn(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_PINCHIN_OFFSET))(this, a1);
		}

		::System::Void On_PinchEnd(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_PINCHEND_OFFSET))(this, a1);
		}

		::System::Void On_SimpleTap2Fingers(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_SIMPLETAP2FINGERS_OFFSET))(this, a1);
		}

		::System::Void On_DoubleTap2Fingers(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_DOUBLETAP2FINGERS_OFFSET))(this, a1);
		}

		::System::Void On_UIElementTouchUp(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_UIELEMENTTOUCHUP_OFFSET))(this, a1);
		}

		::System::Void On_OverUIElement(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ON_OVERUIELEMENT_OFFSET))(this, a1);
		}

		::System::Void AddTrigger(::HedgehogTeam::EasyTouch::EasyTouch_EvtType a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::EasyTouch_EvtType))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ADDTRIGGER_OFFSET))(this, a1);
		}

		::System::Boolean SetTriggerEnable(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_SETTRIGGERENABLE_OFFSET))(this, a1, a2);
		}

		::System::Boolean GetTriggerEnable(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_GETTRIGGERENABLE_OFFSET))(this, a1);
		}

		::System::Void TriggerScheduler(::HedgehogTeam::EasyTouch::EasyTouch_EvtType a1, ::HedgehogTeam::EasyTouch::Gesture* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::EasyTouch_EvtType, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_TRIGGERSCHEDULER_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsRecevier4(::HedgehogTeam::EasyTouch::EasyTouch_EvtType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HedgehogTeam::EasyTouch::EasyTouch_EvtType))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_ISRECEVIER4_OFFSET))(this, a1);
		}

		::HedgehogTeam::EasyTouch::EasyTouchTrigger_EasyTouchReceiver* GetTrigger(::System::String* a1)
		{
			return ((::HedgehogTeam::EasyTouch::EasyTouchTrigger_EasyTouchReceiver*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCHTRIGGER_GETTRIGGER_OFFSET))(this, a1);
		}
	};
}
