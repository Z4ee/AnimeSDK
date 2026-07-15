#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HedgehogTeam/EasyTouch/EasyTouch_DoubleTapDetection.h"
#include "unitysdk/HedgehogTeam/EasyTouch/EasyTouch_EvtType.h"
#include "unitysdk/HedgehogTeam/EasyTouch/EasyTouch_GesturePriority.h"
#include "unitysdk/HedgehogTeam/EasyTouch/EasyTouch_GestureType.h"
#include "unitysdk/HedgehogTeam/EasyTouch/EasyTouch_SwipeDirection.h"
#include "unitysdk/HedgehogTeam/EasyTouch/EasyTouch_TwoFingerPickMethod.h"
#include "unitysdk/Unity/Profiling/ProfilerMarker.h"
#include "unitysdk/UnityEngine/EventSystems/RaycastResult.h"
#include "unitysdk/UnityEngine/KeyCode.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/RaycastHit2D.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace HedgehogTeam::EasyTouch { class BaseFinger; }
namespace HedgehogTeam::EasyTouch { class ECamera; }
namespace HedgehogTeam::EasyTouch { class EasyTouchInput; }
namespace HedgehogTeam::EasyTouch { class EasyTouch_Cancel2FingersHandler; }
namespace HedgehogTeam::EasyTouch { class EasyTouch_DoubleTap2FingersHandler; }
namespace HedgehogTeam::EasyTouch { class EasyTouch_DoubleTap; }
namespace HedgehogTeam::EasyTouch { class EasyTouch_DoubleTapHandler; }
namespace HedgehogTeam::EasyTouch { class EasyTouch_Drag2FingersHandler; }
namespace HedgehogTeam::EasyTouch { class EasyTouch_DragEnd2FingersHandler; }
namespace HedgehogTeam::EasyTouch { class EasyTouch_DragEndHandler; }
namespace HedgehogTeam::EasyTouch { class EasyTouch_DragHandler; }
namespace HedgehogTeam::EasyTouch { class EasyTouch_DragStart2FingersHandler; }
namespace HedgehogTeam::EasyTouch { class EasyTouch_DragStartHandler; }
namespace HedgehogTeam::EasyTouch { class EasyTouch_EasyTouchIsReadyHandler; }
namespace HedgehogTeam::EasyTouch { class EasyTouch_LongTap2FingersHandler; }
namespace HedgehogTeam::EasyTouch { class EasyTouch_LongTapEnd2FingersHandler; }
namespace HedgehogTeam::EasyTouch { class EasyTouch_LongTapEndHandler; }
namespace HedgehogTeam::EasyTouch { class EasyTouch_LongTapHandler; }
namespace HedgehogTeam::EasyTouch { class EasyTouch_LongTapStart2FingersHandler; }
namespace HedgehogTeam::EasyTouch { class EasyTouch_LongTapStartHandler; }
namespace HedgehogTeam::EasyTouch { class EasyTouch_OverUIElementHandler; }
namespace HedgehogTeam::EasyTouch { class EasyTouch_PickedObject; }
namespace HedgehogTeam::EasyTouch { class EasyTouch_PinchEndHandler; }
namespace HedgehogTeam::EasyTouch { class EasyTouch_PinchHandler; }
namespace HedgehogTeam::EasyTouch { class EasyTouch_PinchInHandler; }
namespace HedgehogTeam::EasyTouch { class EasyTouch_PinchOutHandler; }
namespace HedgehogTeam::EasyTouch { class EasyTouch_SimpleTap2FingersHandler; }
namespace HedgehogTeam::EasyTouch { class EasyTouch_SimpleTapHandler; }
namespace HedgehogTeam::EasyTouch { class EasyTouch_Swipe2FingersHandler; }
namespace HedgehogTeam::EasyTouch { class EasyTouch_SwipeEnd2FingersHandler; }
namespace HedgehogTeam::EasyTouch { class EasyTouch_SwipeEndHandler; }
namespace HedgehogTeam::EasyTouch { class EasyTouch_SwipeHandler; }
namespace HedgehogTeam::EasyTouch { class EasyTouch_SwipeStart2FingersHandler; }
namespace HedgehogTeam::EasyTouch { class EasyTouch_SwipeStartHandler; }
namespace HedgehogTeam::EasyTouch { class EasyTouch_TouchCancelHandler; }
namespace HedgehogTeam::EasyTouch { class EasyTouch_TouchDown2FingersHandler; }
namespace HedgehogTeam::EasyTouch { class EasyTouch_TouchDownHandler; }
namespace HedgehogTeam::EasyTouch { class EasyTouch_TouchStart2FingersHandler; }
namespace HedgehogTeam::EasyTouch { class EasyTouch_TouchStartHandler; }
namespace HedgehogTeam::EasyTouch { class EasyTouch_TouchUp2FingersHandler; }
namespace HedgehogTeam::EasyTouch { class EasyTouch_TouchUpHandler; }
namespace HedgehogTeam::EasyTouch { class EasyTouch_TwistEndHandler; }
namespace HedgehogTeam::EasyTouch { class EasyTouch_TwistHandler; }
namespace HedgehogTeam::EasyTouch { class EasyTouch_UIElementTouchUpHandler; }
namespace HedgehogTeam::EasyTouch { class Finger; }
namespace HedgehogTeam::EasyTouch { class Gesture; }
namespace HedgehogTeam::EasyTouch { class TwoFingerGesture; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::EventSystems { class EventSystem; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADDCAMERA_OFFSET UNITYSDK_OFFSET(0x1B4E8F30)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADDUIIGNOREDGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1B4EA480)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADDUIIGNORED_OFFSET UNITYSDK_OFFSET(0x1B4E79D0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_CANCEL2FINGERS_OFFSET UNITYSDK_OFFSET(0x1B4DB500)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_CANCEL_OFFSET UNITYSDK_OFFSET(0x1B4DB3C0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_DOUBLETAP2FINGERS_OFFSET UNITYSDK_OFFSET(0x1B4DCCC0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_DOUBLETAP_OFFSET UNITYSDK_OFFSET(0x1B4DBB40)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_DRAG2FINGERS_OFFSET UNITYSDK_OFFSET(0x1B4DDA80)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_DRAGEND2FINGERS_OFFSET UNITYSDK_OFFSET(0x1B4DDBC0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_DRAGEND_OFFSET UNITYSDK_OFFSET(0x1B4DC2C0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_DRAGSTART2FINGERS_OFFSET UNITYSDK_OFFSET(0x1B4DD940)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_DRAGSTART_OFFSET UNITYSDK_OFFSET(0x1B4DC040)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_DRAG_OFFSET UNITYSDK_OFFSET(0x1B4DC180)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_EASYTOUCHISREADY_OFFSET UNITYSDK_OFFSET(0x1B4DE0C0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_LONGTAP2FINGERS_OFFSET UNITYSDK_OFFSET(0x1B4DCF40)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_LONGTAPEND2FINGERS_OFFSET UNITYSDK_OFFSET(0x1B4DD080)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_LONGTAPEND_OFFSET UNITYSDK_OFFSET(0x1B4DBF00)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_LONGTAPSTART2FINGERS_OFFSET UNITYSDK_OFFSET(0x1B4DCE00)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_LONGTAPSTART_OFFSET UNITYSDK_OFFSET(0x1B4DBC80)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_LONGTAP_OFFSET UNITYSDK_OFFSET(0x1B4DBDC0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_OVERUIELEMENT_OFFSET UNITYSDK_OFFSET(0x1B4DE200)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_PINCHEND_OFFSET UNITYSDK_OFFSET(0x1B4DD800)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_PINCHIN_OFFSET UNITYSDK_OFFSET(0x1B4DD580)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_PINCHOUT_OFFSET UNITYSDK_OFFSET(0x1B4DD6C0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_PINCH_OFFSET UNITYSDK_OFFSET(0x1B4DD440)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_SIMPLETAP2FINGERS_OFFSET UNITYSDK_OFFSET(0x1B4DCB80)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_SIMPLETAP_OFFSET UNITYSDK_OFFSET(0x1B4DBA00)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_SWIPE2FINGERS_OFFSET UNITYSDK_OFFSET(0x1B4DDE40)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_SWIPEEND2FINGERS_OFFSET UNITYSDK_OFFSET(0x1B4DDF80)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_SWIPEEND_OFFSET UNITYSDK_OFFSET(0x1B4DC680)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_SWIPESTART2FINGERS_OFFSET UNITYSDK_OFFSET(0x1B4DDD00)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_SWIPESTART_OFFSET UNITYSDK_OFFSET(0x1B4DC400)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_SWIPE_OFFSET UNITYSDK_OFFSET(0x1B4DC540)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_TOUCHDOWN2FINGERS_OFFSET UNITYSDK_OFFSET(0x1B4DC900)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_TOUCHDOWN_OFFSET UNITYSDK_OFFSET(0x1B4DB780)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_TOUCHSTART2FINGERS_OFFSET UNITYSDK_OFFSET(0x1B4DC7C0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_TOUCHSTART_OFFSET UNITYSDK_OFFSET(0x1B4DB640)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_TOUCHUP2FINGERS_OFFSET UNITYSDK_OFFSET(0x1B4DCA40)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_TOUCHUP_OFFSET UNITYSDK_OFFSET(0x1B4DB8C0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_TWISTEND_OFFSET UNITYSDK_OFFSET(0x1B4DD300)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_TWIST_OFFSET UNITYSDK_OFFSET(0x1B4DD1C0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_UIELEMENTTOUCHUP_OFFSET UNITYSDK_OFFSET(0x1B4DE340)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_AWAKE_OFFSET UNITYSDK_OFFSET(0x1B4DEB20)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_CANHANDLETOUCH_OFFSET UNITYSDK_OFFSET(0x1B4E5780)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_CLEARALLGESTURE_OFFSET UNITYSDK_OFFSET(0x1B4E7820)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_CREATEGESTURE2FINGER_OFFSET UNITYSDK_OFFSET(0x1B4DF0E0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_CREATEGESTURE_OFFSET UNITYSDK_OFFSET(0x1B4E2C20)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_CREATESTATEEND2FINGERS_OFFSET UNITYSDK_OFFSET(0x1B4E5E80)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_DETECTPINCH_OFFSET UNITYSDK_OFFSET(0x1B4E66E0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_DETECTWIST_OFFSET UNITYSDK_OFFSET(0x1B4E6E80)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_FINGERINTOLERANCE_OFFSET UNITYSDK_OFFSET(0x1B4E3C40)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GET2DPICKABLELAYER_OFFSET UNITYSDK_OFFSET(0x1B4E9580)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GET3DPICKABLELAYER_OFFSET UNITYSDK_OFFSET(0x1B4E8E00)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETAUTOUPDATEPICKEDOBJECT_OFFSET UNITYSDK_OFFSET(0x1B4E8D00)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETAUTOUPDATEUI_OFFSET UNITYSDK_OFFSET(0x1B4E8A00)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETCAMERA_OFFSET UNITYSDK_OFFSET(0x1B4E92E0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETCURRENTPICKEDOBJECT_OFFSET UNITYSDK_OFFSET(0x1B4E7E40)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETCURRENTPICKEDUIELEMENT_OFFSET UNITYSDK_OFFSET(0x1B4E7C60)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETDOUBLETAPMETHOD_OFFSET UNITYSDK_OFFSET(0x1B4E9B20)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETDOUBLETAPTIME_OFFSET UNITYSDK_OFFSET(0x1B4E9A20)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETENABLE2DCOLLIDER_OFFSET UNITYSDK_OFFSET(0x1B4E9480)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETENABLE2FINGERSGESTURE_OFFSET UNITYSDK_OFFSET(0x1B4E9D10)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETENABLE2FINGERSSWIPE_OFFSET UNITYSDK_OFFSET(0x1B4E9E10)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETENABLEAUTOSELECT_OFFSET UNITYSDK_OFFSET(0x1B4E8C00)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETENABLED_OFFSET UNITYSDK_OFFSET(0x1B4E8700)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETENABLEPINCH_OFFSET UNITYSDK_OFFSET(0x1B4EA000)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETENABLETWIST_OFFSET UNITYSDK_OFFSET(0x1B4EA200)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETENABLEUIDETECTION_OFFSET UNITYSDK_OFFSET(0x1B4E8800)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETFINGER_OFFSET UNITYSDK_OFFSET(0x1B4E7970)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETFIRSTUIELEMENTFROMCACHE_OFFSET UNITYSDK_OFFSET(0x1B4E3BF0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETFIRSTUIELEMENT_OFFSET UNITYSDK_OFFSET(0x1B4E7AE0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETGAMEOBJECTAT_1_OFFSET UNITYSDK_OFFSET(0x1B4E7FC0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETGAMEOBJECTAT_OFFSET UNITYSDK_OFFSET(0x1B4E7440)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETGESTUREPRIORITY_OFFSET UNITYSDK_OFFSET(0x1B4E9730)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETLONGTAPTIME_OFFSET UNITYSDK_OFFSET(0x1B4E9920)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETMINPINCHLENGTH_OFFSET UNITYSDK_OFFSET(0x1B4EA100)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETMINTWISTANGLE_OFFSET UNITYSDK_OFFSET(0x1B4EA300)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETNGUICOMPATIBILITY_OFFSET UNITYSDK_OFFSET(0x1B4E8B00)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETPICKEDGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1B4E3770)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETSECONDEFINGERSIMULATION_OFFSET UNITYSDK_OFFSET(0x1B4EA380)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETSTATIONARYTOLERANCE_OFFSET UNITYSDK_OFFSET(0x1B4E9820)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETSWIPETOLERANCE_OFFSET UNITYSDK_OFFSET(0x1B4E9C10)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETSWIPE_OFFSET UNITYSDK_OFFSET(0x1B4E2A80)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETTOUCHCOUNT_OFFSET UNITYSDK_OFFSET(0x1B4E8400)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETTWOFINGERPICKEDOBJECT_OFFSET UNITYSDK_OFFSET(0x1B4E5A30)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETTWOFINGERPICKEDUIELEMENT_OFFSET UNITYSDK_OFFSET(0x1B4E5BB0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETTWOFINGERPICKMETHOD_OFFSET UNITYSDK_OFFSET(0x1B4E9F10)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETTWOFINGER_OFFSET UNITYSDK_OFFSET(0x1B4E59B0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETUICOMPTABILITY_OFFSET UNITYSDK_OFFSET(0x1B4E8900)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1B4DE660)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1B4DE480)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_INIT_OFFSET UNITYSDK_OFFSET(0x1B4DEA80)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ISFINGEROVERUIELEMENT_OFFSET UNITYSDK_OFFSET(0x1B4E7B40)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ISSCREENPOSITIONOVERUI_OFFSET UNITYSDK_OFFSET(0x1B4E3990)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ISTOUCHABLEUIELEMENT_OFFSET UNITYSDK_OFFSET(0x1B4E5930)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ISTOUCHOVERNGUI_OFFSET UNITYSDK_OFFSET(0x1B4E3CF0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1B4E2750)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ONAPPLICATIONFOCUS_OFFSET UNITYSDK_OFFSET(0x1B4E2760)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ONDRAWGIZMOS_OFFSET UNITYSDK_OFFSET(0x1B4DEED0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ONEFINGER_OFFSET UNITYSDK_OFFSET(0x1B4E1560)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1B4DEA70)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_RAISEEVENT_OFFSET UNITYSDK_OFFSET(0x1B4E4330)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVECAMERA_OFFSET UNITYSDK_OFFSET(0x1B4E9050)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVEUIIGNOREDGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1B4EA5B0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVEUIIGNORED_OFFSET UNITYSDK_OFFSET(0x1B4E7A80)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_CANCEL2FINGERS_OFFSET UNITYSDK_OFFSET(0x1B4DB5A0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_CANCEL_OFFSET UNITYSDK_OFFSET(0x1B4DB460)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_DOUBLETAP2FINGERS_OFFSET UNITYSDK_OFFSET(0x1B4DCD60)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_DOUBLETAP_OFFSET UNITYSDK_OFFSET(0x1B4DBBE0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_DRAG2FINGERS_OFFSET UNITYSDK_OFFSET(0x1B4DDB20)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_DRAGEND2FINGERS_OFFSET UNITYSDK_OFFSET(0x1B4DDC60)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_DRAGEND_OFFSET UNITYSDK_OFFSET(0x1B4DC360)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_DRAGSTART2FINGERS_OFFSET UNITYSDK_OFFSET(0x1B4DD9E0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_DRAGSTART_OFFSET UNITYSDK_OFFSET(0x1B4DC0E0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_DRAG_OFFSET UNITYSDK_OFFSET(0x1B4DC220)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_EASYTOUCHISREADY_OFFSET UNITYSDK_OFFSET(0x1B4DE160)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_LONGTAP2FINGERS_OFFSET UNITYSDK_OFFSET(0x1B4DCFE0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_LONGTAPEND2FINGERS_OFFSET UNITYSDK_OFFSET(0x1B4DD120)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_LONGTAPEND_OFFSET UNITYSDK_OFFSET(0x1B4DBFA0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_LONGTAPSTART2FINGERS_OFFSET UNITYSDK_OFFSET(0x1B4DCEA0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_LONGTAPSTART_OFFSET UNITYSDK_OFFSET(0x1B4DBD20)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_LONGTAP_OFFSET UNITYSDK_OFFSET(0x1B4DBE60)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_OVERUIELEMENT_OFFSET UNITYSDK_OFFSET(0x1B4DE2A0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_PINCHEND_OFFSET UNITYSDK_OFFSET(0x1B4DD8A0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_PINCHIN_OFFSET UNITYSDK_OFFSET(0x1B4DD620)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_PINCHOUT_OFFSET UNITYSDK_OFFSET(0x1B4DD760)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_PINCH_OFFSET UNITYSDK_OFFSET(0x1B4DD4E0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_SIMPLETAP2FINGERS_OFFSET UNITYSDK_OFFSET(0x1B4DCC20)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_SIMPLETAP_OFFSET UNITYSDK_OFFSET(0x1B4DBAA0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_SWIPE2FINGERS_OFFSET UNITYSDK_OFFSET(0x1B4DDEE0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_SWIPEEND2FINGERS_OFFSET UNITYSDK_OFFSET(0x1B4DE020)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_SWIPEEND_OFFSET UNITYSDK_OFFSET(0x1B4DC720)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_SWIPESTART2FINGERS_OFFSET UNITYSDK_OFFSET(0x1B4DDDA0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_SWIPESTART_OFFSET UNITYSDK_OFFSET(0x1B4DC4A0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_SWIPE_OFFSET UNITYSDK_OFFSET(0x1B4DC5E0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_TOUCHDOWN2FINGERS_OFFSET UNITYSDK_OFFSET(0x1B4DC9A0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_TOUCHDOWN_OFFSET UNITYSDK_OFFSET(0x1B4DB820)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_TOUCHSTART2FINGERS_OFFSET UNITYSDK_OFFSET(0x1B4DC860)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_TOUCHSTART_OFFSET UNITYSDK_OFFSET(0x1B4DB6E0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_TOUCHUP2FINGERS_OFFSET UNITYSDK_OFFSET(0x1B4DCAE0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_TOUCHUP_OFFSET UNITYSDK_OFFSET(0x1B4DB960)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_TWISTEND_OFFSET UNITYSDK_OFFSET(0x1B4DD3A0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_TWIST_OFFSET UNITYSDK_OFFSET(0x1B4DD260)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_UIELEMENTTOUCHUP_OFFSET UNITYSDK_OFFSET(0x1B4DE3E0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_RESETTOUCHES_OFFSET UNITYSDK_OFFSET(0x1B4E2FD0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_RESETTOUCH_OFFSET UNITYSDK_OFFSET(0x1B4E8490)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_RESET_OFFSET UNITYSDK_OFFSET(0x1B4EA670)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SET2DPICKABLELAYER_OFFSET UNITYSDK_OFFSET(0x1B4E9500)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SET3DPICKABLELAYER_OFFSET UNITYSDK_OFFSET(0x1B4E8D80)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SETAUTOUPDATEPICKEDOBJECT_OFFSET UNITYSDK_OFFSET(0x1B4E8C80)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SETAUTOUPDATEUI_OFFSET UNITYSDK_OFFSET(0x1B4E8980)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SETDOUBLETAPMETHOD_OFFSET UNITYSDK_OFFSET(0x1B4E9AA0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SETDOUBLETAPTIME_OFFSET UNITYSDK_OFFSET(0x1B4E99A0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SETENABLE2DCOLLIDER_OFFSET UNITYSDK_OFFSET(0x1B4E9400)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SETENABLE2FINGERSGESTURE_OFFSET UNITYSDK_OFFSET(0x1B4E9C90)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SETENABLE2FINGERSSWIPE_OFFSET UNITYSDK_OFFSET(0x1B4E9D90)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SETENABLEAUTOSELECT_OFFSET UNITYSDK_OFFSET(0x1B4E8B80)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SETENABLED_OFFSET UNITYSDK_OFFSET(0x1B4E8610)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SETENABLEPINCH_OFFSET UNITYSDK_OFFSET(0x1B4E9F80)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SETENABLETWIST_OFFSET UNITYSDK_OFFSET(0x1B4EA180)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SETENABLEUIDETECTION_OFFSET UNITYSDK_OFFSET(0x1B4E8780)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SETGESTUREPRIORITY_OFFSET UNITYSDK_OFFSET(0x1B4E96B0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SETLONGTAPTIME_OFFSET UNITYSDK_OFFSET(0x1B4E98A0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SETMINPINCHLENGTH_OFFSET UNITYSDK_OFFSET(0x1B4EA080)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SETMINTWISTANGLE_OFFSET UNITYSDK_OFFSET(0x1B4EA280)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SETNGUICOMPATIBILITY_OFFSET UNITYSDK_OFFSET(0x1B4E8A80)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SETSECONDFINGERSIMULATION_OFFSET UNITYSDK_OFFSET(0x1B4EA400)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SETSTATIONARYTOLERANCE_OFFSET UNITYSDK_OFFSET(0x1B4E97A0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SETSWIPETOLERANCE_OFFSET UNITYSDK_OFFSET(0x1B4E9B90)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SETTWOFINGERPICKMETHOD_OFFSET UNITYSDK_OFFSET(0x1B4E9E90)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SETUICOMPATIBILY_OFFSET UNITYSDK_OFFSET(0x1B4E8880)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SHOULDFIREEVENT_OFFSET UNITYSDK_OFFSET(0x1B4E4030)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SINGLEORDOUBLE2FINGERS_OFFSET UNITYSDK_OFFSET(0x1B4E7180)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SINGLEORDOUBLE_OFFSET UNITYSDK_OFFSET(0x1B4E3C90)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_START_OFFSET UNITYSDK_OFFSET(0x1B4DEBC0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_TRYGETGESTURE_OFFSET UNITYSDK_OFFSET(0x1B4E40E0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_TWOFINGER_OFFSET UNITYSDK_OFFSET(0x1B4DFBA0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_UPDATETOUCHES_OFFSET UNITYSDK_OFFSET(0x1B4DF640)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_UPDATE_OFFSET UNITYSDK_OFFSET(0x1B4DEEE0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B4EA720)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4DE6A0)

namespace HedgehogTeam::EasyTouch
{
	inline static constexpr unsigned int EasyTouch_TypeDefinitionIndex = 38130;

	class EasyTouch : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::HedgehogTeam::EasyTouch::EasyTouch_DragEndHandler** StaticGet_On_DragEnd()
		{
			return (::HedgehogTeam::EasyTouch::EasyTouch_DragEndHandler**)Il2CppClass::FromTypeDefinitionIndex(EasyTouch_TypeDefinitionIndex)->GetStaticField(0xBC30);
		}
		static ::HedgehogTeam::EasyTouch::EasyTouch_TouchCancelHandler** StaticGet_On_Cancel()
		{
			return (::HedgehogTeam::EasyTouch::EasyTouch_TouchCancelHandler**)Il2CppClass::FromTypeDefinitionIndex(EasyTouch_TypeDefinitionIndex)->GetStaticField(0xBC38);
		}
		static ::HedgehogTeam::EasyTouch::EasyTouch_SwipeStart2FingersHandler** StaticGet_On_SwipeStart2Fingers()
		{
			return (::HedgehogTeam::EasyTouch::EasyTouch_SwipeStart2FingersHandler**)Il2CppClass::FromTypeDefinitionIndex(EasyTouch_TypeDefinitionIndex)->GetStaticField(0xBC40);
		}
		static ::HedgehogTeam::EasyTouch::EasyTouch_DragStart2FingersHandler** StaticGet_On_DragStart2Fingers()
		{
			return (::HedgehogTeam::EasyTouch::EasyTouch_DragStart2FingersHandler**)Il2CppClass::FromTypeDefinitionIndex(EasyTouch_TypeDefinitionIndex)->GetStaticField(0xBC48);
		}
		static ::HedgehogTeam::EasyTouch::EasyTouch_TwistEndHandler** StaticGet_On_TwistEnd()
		{
			return (::HedgehogTeam::EasyTouch::EasyTouch_TwistEndHandler**)Il2CppClass::FromTypeDefinitionIndex(EasyTouch_TypeDefinitionIndex)->GetStaticField(0xBC50);
		}
		static ::HedgehogTeam::EasyTouch::EasyTouch_LongTapStartHandler** StaticGet_On_LongTapStart()
		{
			return (::HedgehogTeam::EasyTouch::EasyTouch_LongTapStartHandler**)Il2CppClass::FromTypeDefinitionIndex(EasyTouch_TypeDefinitionIndex)->GetStaticField(0xBC58);
		}
		static ::HedgehogTeam::EasyTouch::EasyTouch_PinchEndHandler** StaticGet_On_PinchEnd()
		{
			return (::HedgehogTeam::EasyTouch::EasyTouch_PinchEndHandler**)Il2CppClass::FromTypeDefinitionIndex(EasyTouch_TypeDefinitionIndex)->GetStaticField(0xBC60);
		}
		static ::HedgehogTeam::EasyTouch::EasyTouch_SwipeHandler** StaticGet_On_Swipe()
		{
			return (::HedgehogTeam::EasyTouch::EasyTouch_SwipeHandler**)Il2CppClass::FromTypeDefinitionIndex(EasyTouch_TypeDefinitionIndex)->GetStaticField(0xBC68);
		}
		static ::HedgehogTeam::EasyTouch::EasyTouch_TouchStartHandler** StaticGet_On_TouchStart()
		{
			return (::HedgehogTeam::EasyTouch::EasyTouch_TouchStartHandler**)Il2CppClass::FromTypeDefinitionIndex(EasyTouch_TypeDefinitionIndex)->GetStaticField(0xBC70);
		}
		static ::HedgehogTeam::EasyTouch::EasyTouch_SwipeEndHandler** StaticGet_On_SwipeEnd()
		{
			return (::HedgehogTeam::EasyTouch::EasyTouch_SwipeEndHandler**)Il2CppClass::FromTypeDefinitionIndex(EasyTouch_TypeDefinitionIndex)->GetStaticField(0xBC78);
		}
		static ::HedgehogTeam::EasyTouch::EasyTouch_DragHandler** StaticGet_On_Drag()
		{
			return (::HedgehogTeam::EasyTouch::EasyTouch_DragHandler**)Il2CppClass::FromTypeDefinitionIndex(EasyTouch_TypeDefinitionIndex)->GetStaticField(0xBC80);
		}
		static ::HedgehogTeam::EasyTouch::EasyTouch_LongTapHandler** StaticGet_On_LongTap()
		{
			return (::HedgehogTeam::EasyTouch::EasyTouch_LongTapHandler**)Il2CppClass::FromTypeDefinitionIndex(EasyTouch_TypeDefinitionIndex)->GetStaticField(0xBC88);
		}
		static ::HedgehogTeam::EasyTouch::EasyTouch_TouchDownHandler** StaticGet_On_TouchDown()
		{
			return (::HedgehogTeam::EasyTouch::EasyTouch_TouchDownHandler**)Il2CppClass::FromTypeDefinitionIndex(EasyTouch_TypeDefinitionIndex)->GetStaticField(0xBC90);
		}
		static ::HedgehogTeam::EasyTouch::EasyTouch_TouchStart2FingersHandler** StaticGet_On_TouchStart2Fingers()
		{
			return (::HedgehogTeam::EasyTouch::EasyTouch_TouchStart2FingersHandler**)Il2CppClass::FromTypeDefinitionIndex(EasyTouch_TypeDefinitionIndex)->GetStaticField(0xBC98);
		}
		static ::HedgehogTeam::EasyTouch::EasyTouch_OverUIElementHandler** StaticGet_On_OverUIElement()
		{
			return (::HedgehogTeam::EasyTouch::EasyTouch_OverUIElementHandler**)Il2CppClass::FromTypeDefinitionIndex(EasyTouch_TypeDefinitionIndex)->GetStaticField(0xBCA0);
		}
		static ::HedgehogTeam::EasyTouch::EasyTouch_SwipeEnd2FingersHandler** StaticGet_On_SwipeEnd2Fingers()
		{
			return (::HedgehogTeam::EasyTouch::EasyTouch_SwipeEnd2FingersHandler**)Il2CppClass::FromTypeDefinitionIndex(EasyTouch_TypeDefinitionIndex)->GetStaticField(0xBCA8);
		}
		static ::HedgehogTeam::EasyTouch::EasyTouch_PinchInHandler** StaticGet_On_PinchIn()
		{
			return (::HedgehogTeam::EasyTouch::EasyTouch_PinchInHandler**)Il2CppClass::FromTypeDefinitionIndex(EasyTouch_TypeDefinitionIndex)->GetStaticField(0xBCB0);
		}
		static ::HedgehogTeam::EasyTouch::EasyTouch_TouchUp2FingersHandler** StaticGet_On_TouchUp2Fingers()
		{
			return (::HedgehogTeam::EasyTouch::EasyTouch_TouchUp2FingersHandler**)Il2CppClass::FromTypeDefinitionIndex(EasyTouch_TypeDefinitionIndex)->GetStaticField(0xBCB8);
		}
		static ::HedgehogTeam::EasyTouch::EasyTouch_TouchUpHandler** StaticGet_On_TouchUp()
		{
			return (::HedgehogTeam::EasyTouch::EasyTouch_TouchUpHandler**)Il2CppClass::FromTypeDefinitionIndex(EasyTouch_TypeDefinitionIndex)->GetStaticField(0xBCC0);
		}
		static ::HedgehogTeam::EasyTouch::EasyTouch_TouchDown2FingersHandler** StaticGet_On_TouchDown2Fingers()
		{
			return (::HedgehogTeam::EasyTouch::EasyTouch_TouchDown2FingersHandler**)Il2CppClass::FromTypeDefinitionIndex(EasyTouch_TypeDefinitionIndex)->GetStaticField(0xBCC8);
		}
		static ::HedgehogTeam::EasyTouch::EasyTouch_TwistHandler** StaticGet_On_Twist()
		{
			return (::HedgehogTeam::EasyTouch::EasyTouch_TwistHandler**)Il2CppClass::FromTypeDefinitionIndex(EasyTouch_TypeDefinitionIndex)->GetStaticField(0xBCD0);
		}
		static ::HedgehogTeam::EasyTouch::EasyTouch_LongTapEndHandler** StaticGet_On_LongTapEnd()
		{
			return (::HedgehogTeam::EasyTouch::EasyTouch_LongTapEndHandler**)Il2CppClass::FromTypeDefinitionIndex(EasyTouch_TypeDefinitionIndex)->GetStaticField(0xBCD8);
		}
		static ::HedgehogTeam::EasyTouch::EasyTouch_SimpleTap2FingersHandler** StaticGet_On_SimpleTap2Fingers()
		{
			return (::HedgehogTeam::EasyTouch::EasyTouch_SimpleTap2FingersHandler**)Il2CppClass::FromTypeDefinitionIndex(EasyTouch_TypeDefinitionIndex)->GetStaticField(0xBCE0);
		}
		static ::HedgehogTeam::EasyTouch::EasyTouch_UIElementTouchUpHandler** StaticGet_On_UIElementTouchUp()
		{
			return (::HedgehogTeam::EasyTouch::EasyTouch_UIElementTouchUpHandler**)Il2CppClass::FromTypeDefinitionIndex(EasyTouch_TypeDefinitionIndex)->GetStaticField(0xBCE8);
		}
		static ::HedgehogTeam::EasyTouch::EasyTouch_DragEnd2FingersHandler** StaticGet_On_DragEnd2Fingers()
		{
			return (::HedgehogTeam::EasyTouch::EasyTouch_DragEnd2FingersHandler**)Il2CppClass::FromTypeDefinitionIndex(EasyTouch_TypeDefinitionIndex)->GetStaticField(0xBCF0);
		}
		static ::HedgehogTeam::EasyTouch::EasyTouch_SwipeStartHandler** StaticGet_On_SwipeStart()
		{
			return (::HedgehogTeam::EasyTouch::EasyTouch_SwipeStartHandler**)Il2CppClass::FromTypeDefinitionIndex(EasyTouch_TypeDefinitionIndex)->GetStaticField(0xBCF8);
		}
		static ::HedgehogTeam::EasyTouch::EasyTouch_DoubleTap2FingersHandler** StaticGet_On_DoubleTap2Fingers()
		{
			return (::HedgehogTeam::EasyTouch::EasyTouch_DoubleTap2FingersHandler**)Il2CppClass::FromTypeDefinitionIndex(EasyTouch_TypeDefinitionIndex)->GetStaticField(0xBD00);
		}
		static ::HedgehogTeam::EasyTouch::EasyTouch_Drag2FingersHandler** StaticGet_On_Drag2Fingers()
		{
			return (::HedgehogTeam::EasyTouch::EasyTouch_Drag2FingersHandler**)Il2CppClass::FromTypeDefinitionIndex(EasyTouch_TypeDefinitionIndex)->GetStaticField(0xBD08);
		}
		static ::HedgehogTeam::EasyTouch::EasyTouch_LongTapStart2FingersHandler** StaticGet_On_LongTapStart2Fingers()
		{
			return (::HedgehogTeam::EasyTouch::EasyTouch_LongTapStart2FingersHandler**)Il2CppClass::FromTypeDefinitionIndex(EasyTouch_TypeDefinitionIndex)->GetStaticField(0xBD10);
		}
		static ::HedgehogTeam::EasyTouch::EasyTouch_Swipe2FingersHandler** StaticGet_On_Swipe2Fingers()
		{
			return (::HedgehogTeam::EasyTouch::EasyTouch_Swipe2FingersHandler**)Il2CppClass::FromTypeDefinitionIndex(EasyTouch_TypeDefinitionIndex)->GetStaticField(0xBD18);
		}
		static ::HedgehogTeam::EasyTouch::EasyTouch** StaticGet__instance()
		{
			return (::HedgehogTeam::EasyTouch::EasyTouch**)Il2CppClass::FromTypeDefinitionIndex(EasyTouch_TypeDefinitionIndex)->GetStaticField(0xBD20);
		}
		static ::HedgehogTeam::EasyTouch::EasyTouch_EasyTouchIsReadyHandler** StaticGet_On_EasyTouchIsReady()
		{
			return (::HedgehogTeam::EasyTouch::EasyTouch_EasyTouchIsReadyHandler**)Il2CppClass::FromTypeDefinitionIndex(EasyTouch_TypeDefinitionIndex)->GetStaticField(0xBD28);
		}
		static ::HedgehogTeam::EasyTouch::EasyTouch_DragStartHandler** StaticGet_On_DragStart()
		{
			return (::HedgehogTeam::EasyTouch::EasyTouch_DragStartHandler**)Il2CppClass::FromTypeDefinitionIndex(EasyTouch_TypeDefinitionIndex)->GetStaticField(0xBD30);
		}
		static ::HedgehogTeam::EasyTouch::EasyTouch_DoubleTapHandler** StaticGet_On_DoubleTap()
		{
			return (::HedgehogTeam::EasyTouch::EasyTouch_DoubleTapHandler**)Il2CppClass::FromTypeDefinitionIndex(EasyTouch_TypeDefinitionIndex)->GetStaticField(0xBD38);
		}
		static ::HedgehogTeam::EasyTouch::EasyTouch_LongTapEnd2FingersHandler** StaticGet_On_LongTapEnd2Fingers()
		{
			return (::HedgehogTeam::EasyTouch::EasyTouch_LongTapEnd2FingersHandler**)Il2CppClass::FromTypeDefinitionIndex(EasyTouch_TypeDefinitionIndex)->GetStaticField(0xBD40);
		}
		static ::HedgehogTeam::EasyTouch::EasyTouch_LongTap2FingersHandler** StaticGet_On_LongTap2Fingers()
		{
			return (::HedgehogTeam::EasyTouch::EasyTouch_LongTap2FingersHandler**)Il2CppClass::FromTypeDefinitionIndex(EasyTouch_TypeDefinitionIndex)->GetStaticField(0xBD48);
		}
		static ::HedgehogTeam::EasyTouch::EasyTouch_PinchHandler** StaticGet_On_Pinch()
		{
			return (::HedgehogTeam::EasyTouch::EasyTouch_PinchHandler**)Il2CppClass::FromTypeDefinitionIndex(EasyTouch_TypeDefinitionIndex)->GetStaticField(0xBD50);
		}
		static ::HedgehogTeam::EasyTouch::EasyTouch_Cancel2FingersHandler** StaticGet_On_Cancel2Fingers()
		{
			return (::HedgehogTeam::EasyTouch::EasyTouch_Cancel2FingersHandler**)Il2CppClass::FromTypeDefinitionIndex(EasyTouch_TypeDefinitionIndex)->GetStaticField(0xBD58);
		}
		static ::HedgehogTeam::EasyTouch::EasyTouch_PinchOutHandler** StaticGet_On_PinchOut()
		{
			return (::HedgehogTeam::EasyTouch::EasyTouch_PinchOutHandler**)Il2CppClass::FromTypeDefinitionIndex(EasyTouch_TypeDefinitionIndex)->GetStaticField(0xBD60);
		}
		static ::HedgehogTeam::EasyTouch::EasyTouch_SimpleTapHandler** StaticGet_On_SimpleTap()
		{
			return (::HedgehogTeam::EasyTouch::EasyTouch_SimpleTapHandler**)Il2CppClass::FromTypeDefinitionIndex(EasyTouch_TypeDefinitionIndex)->GetStaticField(0xBD68);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_EasyTouchUpdateMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(EasyTouch_TypeDefinitionIndex)->GetStaticField(0x4640);
		}
		::HedgehogTeam::EasyTouch::Gesture* _currentGesture; // 0x18
		::System::Collections::Generic::List_1<::HedgehogTeam::EasyTouch::Gesture*>* _currentGestures; // 0x20
		::System::Collections::Generic::Dictionary_2<::HedgehogTeam::EasyTouch::EasyTouch_EvtType, ::HedgehogTeam::EasyTouch::Gesture*>* _EvtGesturesDic; // 0x28
		::Il2CppArray<::UnityEngine::RaycastHit2D>* _Hit2D; // 0x30
		::System::Collections::Generic::List_1<::UnityEngine::Component*>* _Components; // 0x38
		::System::Boolean enable; // 0x40
		::System::Boolean enableRemote; // 0x41
		::HedgehogTeam::EasyTouch::EasyTouch_GesturePriority gesturePriority; // 0x44
		::System::Single StationaryTolerance; // 0x48
		::System::Single longTapTime; // 0x4C
		::System::Single swipeTolerance; // 0x50
		::System::Single minPinchLength; // 0x54
		::System::Single minTwistAngle; // 0x58
		::HedgehogTeam::EasyTouch::EasyTouch_DoubleTapDetection doubleTapDetection; // 0x5C
		::System::Single doubleTapTime; // 0x60
		::System::Boolean alwaysSendSwipe; // 0x64
		::System::Boolean enable2FingersGesture; // 0x65
		::System::Boolean enableTwist; // 0x66
		::System::Boolean enablePinch; // 0x67
		::System::Boolean enable2FingersSwipe; // 0x68
		::HedgehogTeam::EasyTouch::EasyTouch_TwoFingerPickMethod twoFingerPickMethod; // 0x6C
		::System::Collections::Generic::List_1<::HedgehogTeam::EasyTouch::ECamera*>* touchCameras; // 0x70
		::System::Boolean autoSelect; // 0x78
		::UnityEngine::LayerMask pickableLayers3D; // 0x7C
		::System::Boolean enable2D; // 0x80
		::UnityEngine::LayerMask pickableLayers2D; // 0x84
		::System::Boolean autoUpdatePickedObject; // 0x88
		::System::Boolean allowUIDetection; // 0x89
		::System::Boolean enableUIMode; // 0x8A
		::System::Boolean autoUpdatePickedUI; // 0x8B
		::System::Boolean enabledNGuiMode; // 0x8C
		::UnityEngine::LayerMask nGUILayers; // 0x90
		::System::Collections::Generic::List_1<::UnityEngine::Camera*>* nGUICameras; // 0x98
		::System::Boolean enableSimulation; // 0xA0
		::UnityEngine::KeyCode twistKey; // 0xA4
		::UnityEngine::KeyCode swipeKey; // 0xA8
		::System::Boolean showGuiInspector; // 0xAC
		::System::Boolean showSelectInspector; // 0xAD
		::System::Boolean showGestureInspector; // 0xAE
		::System::Boolean showTwoFingerInspector; // 0xAF
		::System::Boolean showSecondFingerInspector; // 0xB0
		::System::Single dpi; // 0xB4
		::HedgehogTeam::EasyTouch::EasyTouchInput* input; // 0xB8
		::Il2CppArray<::HedgehogTeam::EasyTouch::Finger*>* fingers; // 0xC0
		::UnityEngine::Texture* secondFingerTexture; // 0xC8
		::HedgehogTeam::EasyTouch::TwoFingerGesture* twoFinger; // 0xD0
		::System::Int32 oldTouchCount; // 0xD8
		::Il2CppArray<::HedgehogTeam::EasyTouch::EasyTouch_DoubleTap*>* singleDoubleTap; // 0xE0
		::Il2CppArray<::HedgehogTeam::EasyTouch::Finger*>* tmpArray; // 0xE8
		::HedgehogTeam::EasyTouch::EasyTouch_PickedObject* pickedObject; // 0xF0
		::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* uiRaycastResultCache; // 0xF8
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* uiIgnoredList; // 0x100
		::UnityEngine::EventSystems::PointerEventData* uiPointerEventData; // 0x108
		::UnityEngine::EventSystems::EventSystem* uiEventSystem; // 0x110

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH__CCTOR_OFFSET))();
		}

		static ::System::Void add_On_Cancel(::HedgehogTeam::EasyTouch::EasyTouch_TouchCancelHandler* a1)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_TouchCancelHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_CANCEL_OFFSET))(a1);
		}

		static ::System::Void remove_On_Cancel(::HedgehogTeam::EasyTouch::EasyTouch_TouchCancelHandler* a1)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_TouchCancelHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_CANCEL_OFFSET))(a1);
		}

		static ::System::Void add_On_Cancel2Fingers(::HedgehogTeam::EasyTouch::EasyTouch_Cancel2FingersHandler* a1)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_Cancel2FingersHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_CANCEL2FINGERS_OFFSET))(a1);
		}

		static ::System::Void remove_On_Cancel2Fingers(::HedgehogTeam::EasyTouch::EasyTouch_Cancel2FingersHandler* a1)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_Cancel2FingersHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_CANCEL2FINGERS_OFFSET))(a1);
		}

		static ::System::Void add_On_TouchStart(::HedgehogTeam::EasyTouch::EasyTouch_TouchStartHandler* a1)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_TouchStartHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_TOUCHSTART_OFFSET))(a1);
		}

		static ::System::Void remove_On_TouchStart(::HedgehogTeam::EasyTouch::EasyTouch_TouchStartHandler* a1)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_TouchStartHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_TOUCHSTART_OFFSET))(a1);
		}

		static ::System::Void add_On_TouchDown(::HedgehogTeam::EasyTouch::EasyTouch_TouchDownHandler* a1)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_TouchDownHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_TOUCHDOWN_OFFSET))(a1);
		}

		static ::System::Void remove_On_TouchDown(::HedgehogTeam::EasyTouch::EasyTouch_TouchDownHandler* a1)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_TouchDownHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_TOUCHDOWN_OFFSET))(a1);
		}

		static ::System::Void add_On_TouchUp(::HedgehogTeam::EasyTouch::EasyTouch_TouchUpHandler* a1)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_TouchUpHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_TOUCHUP_OFFSET))(a1);
		}

		static ::System::Void remove_On_TouchUp(::HedgehogTeam::EasyTouch::EasyTouch_TouchUpHandler* a1)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_TouchUpHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_TOUCHUP_OFFSET))(a1);
		}

		static ::System::Void add_On_SimpleTap(::HedgehogTeam::EasyTouch::EasyTouch_SimpleTapHandler* a1)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_SimpleTapHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_SIMPLETAP_OFFSET))(a1);
		}

		static ::System::Void remove_On_SimpleTap(::HedgehogTeam::EasyTouch::EasyTouch_SimpleTapHandler* a1)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_SimpleTapHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_SIMPLETAP_OFFSET))(a1);
		}

		static ::System::Void add_On_DoubleTap(::HedgehogTeam::EasyTouch::EasyTouch_DoubleTapHandler* a1)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_DoubleTapHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_DOUBLETAP_OFFSET))(a1);
		}

		static ::System::Void remove_On_DoubleTap(::HedgehogTeam::EasyTouch::EasyTouch_DoubleTapHandler* a1)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_DoubleTapHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_DOUBLETAP_OFFSET))(a1);
		}

		static ::System::Void add_On_LongTapStart(::HedgehogTeam::EasyTouch::EasyTouch_LongTapStartHandler* a1)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_LongTapStartHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_LONGTAPSTART_OFFSET))(a1);
		}

		static ::System::Void remove_On_LongTapStart(::HedgehogTeam::EasyTouch::EasyTouch_LongTapStartHandler* a1)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_LongTapStartHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_LONGTAPSTART_OFFSET))(a1);
		}

		static ::System::Void add_On_LongTap(::HedgehogTeam::EasyTouch::EasyTouch_LongTapHandler* a1)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_LongTapHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_LONGTAP_OFFSET))(a1);
		}

		static ::System::Void remove_On_LongTap(::HedgehogTeam::EasyTouch::EasyTouch_LongTapHandler* a1)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_LongTapHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_LONGTAP_OFFSET))(a1);
		}

		static ::System::Void add_On_LongTapEnd(::HedgehogTeam::EasyTouch::EasyTouch_LongTapEndHandler* a1)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_LongTapEndHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_LONGTAPEND_OFFSET))(a1);
		}

		static ::System::Void remove_On_LongTapEnd(::HedgehogTeam::EasyTouch::EasyTouch_LongTapEndHandler* a1)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_LongTapEndHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_LONGTAPEND_OFFSET))(a1);
		}

		static ::System::Void add_On_DragStart(::HedgehogTeam::EasyTouch::EasyTouch_DragStartHandler* a1)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_DragStartHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_DRAGSTART_OFFSET))(a1);
		}

		static ::System::Void remove_On_DragStart(::HedgehogTeam::EasyTouch::EasyTouch_DragStartHandler* a1)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_DragStartHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_DRAGSTART_OFFSET))(a1);
		}

		static ::System::Void add_On_Drag(::HedgehogTeam::EasyTouch::EasyTouch_DragHandler* a1)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_DragHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_DRAG_OFFSET))(a1);
		}

		static ::System::Void remove_On_Drag(::HedgehogTeam::EasyTouch::EasyTouch_DragHandler* a1)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_DragHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_DRAG_OFFSET))(a1);
		}

		static ::System::Void add_On_DragEnd(::HedgehogTeam::EasyTouch::EasyTouch_DragEndHandler* a1)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_DragEndHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_DRAGEND_OFFSET))(a1);
		}

		static ::System::Void remove_On_DragEnd(::HedgehogTeam::EasyTouch::EasyTouch_DragEndHandler* a1)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_DragEndHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_DRAGEND_OFFSET))(a1);
		}

		static ::System::Void add_On_SwipeStart(::HedgehogTeam::EasyTouch::EasyTouch_SwipeStartHandler* a1)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_SwipeStartHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_SWIPESTART_OFFSET))(a1);
		}

		static ::System::Void remove_On_SwipeStart(::HedgehogTeam::EasyTouch::EasyTouch_SwipeStartHandler* a1)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_SwipeStartHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_SWIPESTART_OFFSET))(a1);
		}

		static ::System::Void add_On_Swipe(::HedgehogTeam::EasyTouch::EasyTouch_SwipeHandler* a1)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_SwipeHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_SWIPE_OFFSET))(a1);
		}

		static ::System::Void remove_On_Swipe(::HedgehogTeam::EasyTouch::EasyTouch_SwipeHandler* a1)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_SwipeHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_SWIPE_OFFSET))(a1);
		}

		static ::System::Void add_On_SwipeEnd(::HedgehogTeam::EasyTouch::EasyTouch_SwipeEndHandler* a1)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_SwipeEndHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_SWIPEEND_OFFSET))(a1);
		}

		static ::System::Void remove_On_SwipeEnd(::HedgehogTeam::EasyTouch::EasyTouch_SwipeEndHandler* a1)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_SwipeEndHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_SWIPEEND_OFFSET))(a1);
		}

		static ::System::Void add_On_TouchStart2Fingers(::HedgehogTeam::EasyTouch::EasyTouch_TouchStart2FingersHandler* a1)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_TouchStart2FingersHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_TOUCHSTART2FINGERS_OFFSET))(a1);
		}

		static ::System::Void remove_On_TouchStart2Fingers(::HedgehogTeam::EasyTouch::EasyTouch_TouchStart2FingersHandler* a1)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_TouchStart2FingersHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_TOUCHSTART2FINGERS_OFFSET))(a1);
		}

		static ::System::Void add_On_TouchDown2Fingers(::HedgehogTeam::EasyTouch::EasyTouch_TouchDown2FingersHandler* a1)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_TouchDown2FingersHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_TOUCHDOWN2FINGERS_OFFSET))(a1);
		}

		static ::System::Void remove_On_TouchDown2Fingers(::HedgehogTeam::EasyTouch::EasyTouch_TouchDown2FingersHandler* a1)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_TouchDown2FingersHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_TOUCHDOWN2FINGERS_OFFSET))(a1);
		}

		static ::System::Void add_On_TouchUp2Fingers(::HedgehogTeam::EasyTouch::EasyTouch_TouchUp2FingersHandler* a1)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_TouchUp2FingersHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_TOUCHUP2FINGERS_OFFSET))(a1);
		}

		static ::System::Void remove_On_TouchUp2Fingers(::HedgehogTeam::EasyTouch::EasyTouch_TouchUp2FingersHandler* a1)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_TouchUp2FingersHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_TOUCHUP2FINGERS_OFFSET))(a1);
		}

		static ::System::Void add_On_SimpleTap2Fingers(::HedgehogTeam::EasyTouch::EasyTouch_SimpleTap2FingersHandler* a1)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_SimpleTap2FingersHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_SIMPLETAP2FINGERS_OFFSET))(a1);
		}

		static ::System::Void remove_On_SimpleTap2Fingers(::HedgehogTeam::EasyTouch::EasyTouch_SimpleTap2FingersHandler* a1)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_SimpleTap2FingersHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_SIMPLETAP2FINGERS_OFFSET))(a1);
		}

		static ::System::Void add_On_DoubleTap2Fingers(::HedgehogTeam::EasyTouch::EasyTouch_DoubleTap2FingersHandler* a1)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_DoubleTap2FingersHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_DOUBLETAP2FINGERS_OFFSET))(a1);
		}

		static ::System::Void remove_On_DoubleTap2Fingers(::HedgehogTeam::EasyTouch::EasyTouch_DoubleTap2FingersHandler* a1)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_DoubleTap2FingersHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_DOUBLETAP2FINGERS_OFFSET))(a1);
		}

		static ::System::Void add_On_LongTapStart2Fingers(::HedgehogTeam::EasyTouch::EasyTouch_LongTapStart2FingersHandler* a1)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_LongTapStart2FingersHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_LONGTAPSTART2FINGERS_OFFSET))(a1);
		}

		static ::System::Void remove_On_LongTapStart2Fingers(::HedgehogTeam::EasyTouch::EasyTouch_LongTapStart2FingersHandler* a1)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_LongTapStart2FingersHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_LONGTAPSTART2FINGERS_OFFSET))(a1);
		}

		static ::System::Void add_On_LongTap2Fingers(::HedgehogTeam::EasyTouch::EasyTouch_LongTap2FingersHandler* a1)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_LongTap2FingersHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_LONGTAP2FINGERS_OFFSET))(a1);
		}

		static ::System::Void remove_On_LongTap2Fingers(::HedgehogTeam::EasyTouch::EasyTouch_LongTap2FingersHandler* a1)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_LongTap2FingersHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_LONGTAP2FINGERS_OFFSET))(a1);
		}

		static ::System::Void add_On_LongTapEnd2Fingers(::HedgehogTeam::EasyTouch::EasyTouch_LongTapEnd2FingersHandler* a1)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_LongTapEnd2FingersHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_LONGTAPEND2FINGERS_OFFSET))(a1);
		}

		static ::System::Void remove_On_LongTapEnd2Fingers(::HedgehogTeam::EasyTouch::EasyTouch_LongTapEnd2FingersHandler* a1)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_LongTapEnd2FingersHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_LONGTAPEND2FINGERS_OFFSET))(a1);
		}

		static ::System::Void add_On_Twist(::HedgehogTeam::EasyTouch::EasyTouch_TwistHandler* a1)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_TwistHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_TWIST_OFFSET))(a1);
		}

		static ::System::Void remove_On_Twist(::HedgehogTeam::EasyTouch::EasyTouch_TwistHandler* a1)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_TwistHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_TWIST_OFFSET))(a1);
		}

		static ::System::Void add_On_TwistEnd(::HedgehogTeam::EasyTouch::EasyTouch_TwistEndHandler* a1)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_TwistEndHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_TWISTEND_OFFSET))(a1);
		}

		static ::System::Void remove_On_TwistEnd(::HedgehogTeam::EasyTouch::EasyTouch_TwistEndHandler* a1)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_TwistEndHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_TWISTEND_OFFSET))(a1);
		}

		static ::System::Void add_On_Pinch(::HedgehogTeam::EasyTouch::EasyTouch_PinchHandler* a1)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_PinchHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_PINCH_OFFSET))(a1);
		}

		static ::System::Void remove_On_Pinch(::HedgehogTeam::EasyTouch::EasyTouch_PinchHandler* a1)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_PinchHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_PINCH_OFFSET))(a1);
		}

		static ::System::Void add_On_PinchIn(::HedgehogTeam::EasyTouch::EasyTouch_PinchInHandler* a1)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_PinchInHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_PINCHIN_OFFSET))(a1);
		}

		static ::System::Void remove_On_PinchIn(::HedgehogTeam::EasyTouch::EasyTouch_PinchInHandler* a1)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_PinchInHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_PINCHIN_OFFSET))(a1);
		}

		static ::System::Void add_On_PinchOut(::HedgehogTeam::EasyTouch::EasyTouch_PinchOutHandler* a1)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_PinchOutHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_PINCHOUT_OFFSET))(a1);
		}

		static ::System::Void remove_On_PinchOut(::HedgehogTeam::EasyTouch::EasyTouch_PinchOutHandler* a1)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_PinchOutHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_PINCHOUT_OFFSET))(a1);
		}

		static ::System::Void add_On_PinchEnd(::HedgehogTeam::EasyTouch::EasyTouch_PinchEndHandler* a1)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_PinchEndHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_PINCHEND_OFFSET))(a1);
		}

		static ::System::Void remove_On_PinchEnd(::HedgehogTeam::EasyTouch::EasyTouch_PinchEndHandler* a1)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_PinchEndHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_PINCHEND_OFFSET))(a1);
		}

		static ::System::Void add_On_DragStart2Fingers(::HedgehogTeam::EasyTouch::EasyTouch_DragStart2FingersHandler* a1)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_DragStart2FingersHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_DRAGSTART2FINGERS_OFFSET))(a1);
		}

		static ::System::Void remove_On_DragStart2Fingers(::HedgehogTeam::EasyTouch::EasyTouch_DragStart2FingersHandler* a1)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_DragStart2FingersHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_DRAGSTART2FINGERS_OFFSET))(a1);
		}

		static ::System::Void add_On_Drag2Fingers(::HedgehogTeam::EasyTouch::EasyTouch_Drag2FingersHandler* a1)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_Drag2FingersHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_DRAG2FINGERS_OFFSET))(a1);
		}

		static ::System::Void remove_On_Drag2Fingers(::HedgehogTeam::EasyTouch::EasyTouch_Drag2FingersHandler* a1)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_Drag2FingersHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_DRAG2FINGERS_OFFSET))(a1);
		}

		static ::System::Void add_On_DragEnd2Fingers(::HedgehogTeam::EasyTouch::EasyTouch_DragEnd2FingersHandler* a1)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_DragEnd2FingersHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_DRAGEND2FINGERS_OFFSET))(a1);
		}

		static ::System::Void remove_On_DragEnd2Fingers(::HedgehogTeam::EasyTouch::EasyTouch_DragEnd2FingersHandler* a1)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_DragEnd2FingersHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_DRAGEND2FINGERS_OFFSET))(a1);
		}

		static ::System::Void add_On_SwipeStart2Fingers(::HedgehogTeam::EasyTouch::EasyTouch_SwipeStart2FingersHandler* a1)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_SwipeStart2FingersHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_SWIPESTART2FINGERS_OFFSET))(a1);
		}

		static ::System::Void remove_On_SwipeStart2Fingers(::HedgehogTeam::EasyTouch::EasyTouch_SwipeStart2FingersHandler* a1)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_SwipeStart2FingersHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_SWIPESTART2FINGERS_OFFSET))(a1);
		}

		static ::System::Void add_On_Swipe2Fingers(::HedgehogTeam::EasyTouch::EasyTouch_Swipe2FingersHandler* a1)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_Swipe2FingersHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_SWIPE2FINGERS_OFFSET))(a1);
		}

		static ::System::Void remove_On_Swipe2Fingers(::HedgehogTeam::EasyTouch::EasyTouch_Swipe2FingersHandler* a1)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_Swipe2FingersHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_SWIPE2FINGERS_OFFSET))(a1);
		}

		static ::System::Void add_On_SwipeEnd2Fingers(::HedgehogTeam::EasyTouch::EasyTouch_SwipeEnd2FingersHandler* a1)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_SwipeEnd2FingersHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_SWIPEEND2FINGERS_OFFSET))(a1);
		}

		static ::System::Void remove_On_SwipeEnd2Fingers(::HedgehogTeam::EasyTouch::EasyTouch_SwipeEnd2FingersHandler* a1)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_SwipeEnd2FingersHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_SWIPEEND2FINGERS_OFFSET))(a1);
		}

		static ::System::Void add_On_EasyTouchIsReady(::HedgehogTeam::EasyTouch::EasyTouch_EasyTouchIsReadyHandler* a1)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_EasyTouchIsReadyHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_EASYTOUCHISREADY_OFFSET))(a1);
		}

		static ::System::Void remove_On_EasyTouchIsReady(::HedgehogTeam::EasyTouch::EasyTouch_EasyTouchIsReadyHandler* a1)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_EasyTouchIsReadyHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_EASYTOUCHISREADY_OFFSET))(a1);
		}

		static ::System::Void add_On_OverUIElement(::HedgehogTeam::EasyTouch::EasyTouch_OverUIElementHandler* a1)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_OverUIElementHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_OVERUIELEMENT_OFFSET))(a1);
		}

		static ::System::Void remove_On_OverUIElement(::HedgehogTeam::EasyTouch::EasyTouch_OverUIElementHandler* a1)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_OverUIElementHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_OVERUIELEMENT_OFFSET))(a1);
		}

		static ::System::Void add_On_UIElementTouchUp(::HedgehogTeam::EasyTouch::EasyTouch_UIElementTouchUpHandler* a1)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_UIElementTouchUpHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_UIELEMENTTOUCHUP_OFFSET))(a1);
		}

		static ::System::Void remove_On_UIElementTouchUp(::HedgehogTeam::EasyTouch::EasyTouch_UIElementTouchUpHandler* a1)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_UIElementTouchUpHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_UIELEMENTTOUCHUP_OFFSET))(a1);
		}

		static ::HedgehogTeam::EasyTouch::EasyTouch* get_instance()
		{
			return ((::HedgehogTeam::EasyTouch::EasyTouch*(*)())((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GET_INSTANCE_OFFSET))();
		}

		static ::HedgehogTeam::EasyTouch::Gesture* get_current()
		{
			return ((::HedgehogTeam::EasyTouch::Gesture*(*)())((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GET_CURRENT_OFFSET))();
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ONENABLE_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_START_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_INIT_OFFSET))(this);
		}

		::System::Void OnDrawGizmos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ONDRAWGIZMOS_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_UPDATE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnApplicationFocus(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ONAPPLICATIONFOCUS_OFFSET))(this, a1);
		}

		::System::Void UpdateTouches(::System::Boolean a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_UPDATETOUCHES_OFFSET))(this, a1, a2);
		}

		::System::Void ResetTouches()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_RESETTOUCHES_OFFSET))(this);
		}

		::System::Void OneFinger(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ONEFINGER_OFFSET))(this, a1);
		}

		::System::Collections::IEnumerator* SingleOrDouble(::System::Int32 a1)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SINGLEORDOUBLE_OFFSET))(this, a1);
		}

		::System::Void CreateGesture(::System::Int32 a1, ::HedgehogTeam::EasyTouch::EasyTouch_EvtType a2, ::HedgehogTeam::EasyTouch::Finger* a3, ::HedgehogTeam::EasyTouch::EasyTouch_SwipeDirection a4, ::System::Single a5, ::UnityEngine::Vector2 a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::HedgehogTeam::EasyTouch::EasyTouch_EvtType, ::HedgehogTeam::EasyTouch::Finger*, ::HedgehogTeam::EasyTouch::EasyTouch_SwipeDirection, ::System::Single, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_CREATEGESTURE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Boolean CanHandleTouch(::UnityEngine::GameObject* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_CANHANDLETOUCH_OFFSET))(this, a1);
		}

		::System::Boolean IsTouchableUIElement(::UnityEngine::Component* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Component*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ISTOUCHABLEUIELEMENT_OFFSET))(this, a1);
		}

		::System::Boolean ShouldFireEvent(::HedgehogTeam::EasyTouch::BaseFinger* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HedgehogTeam::EasyTouch::BaseFinger*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SHOULDFIREEVENT_OFFSET))(this, a1);
		}

		::HedgehogTeam::EasyTouch::Gesture* TryGetGesture(::HedgehogTeam::EasyTouch::EasyTouch_EvtType a1, ::HedgehogTeam::EasyTouch::Finger* a2)
		{
			return ((::HedgehogTeam::EasyTouch::Gesture*(*)(::PVOID, ::HedgehogTeam::EasyTouch::EasyTouch_EvtType, ::HedgehogTeam::EasyTouch::Finger*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_TRYGETGESTURE_OFFSET))(this, a1, a2);
		}

		::System::Void TwoFinger()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_TWOFINGER_OFFSET))(this);
		}

		::System::Void DetectPinch(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_DETECTPINCH_OFFSET))(this, a1);
		}

		::System::Void DetecTwist(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_DETECTWIST_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CreateStateEnd2Fingers(::HedgehogTeam::EasyTouch::EasyTouch_GestureType a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3, ::UnityEngine::Vector2 a4, ::System::Single a5, ::System::Boolean a6, ::System::Single a7, ::System::Single a8, ::System::Single a9)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::EasyTouch_GestureType, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single, ::System::Boolean, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_CREATESTATEEND2FINGERS_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::System::Collections::IEnumerator* SingleOrDouble2Fingers()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SINGLEORDOUBLE2FINGERS_OFFSET))(this);
		}

		::System::Void CreateGesture2Finger(::HedgehogTeam::EasyTouch::EasyTouch_EvtType a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3, ::UnityEngine::Vector2 a4, ::System::Single a5, ::HedgehogTeam::EasyTouch::EasyTouch_SwipeDirection a6, ::System::Single a7, ::UnityEngine::Vector2 a8, ::System::Single a9, ::System::Single a10, ::System::Single a11)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::EasyTouch_EvtType, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single, ::HedgehogTeam::EasyTouch::EasyTouch_SwipeDirection, ::System::Single, ::UnityEngine::Vector2, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_CREATEGESTURE2FINGER_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
		}

		::System::Int32 GetTwoFinger(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETTWOFINGER_OFFSET))(this, a1);
		}

		::System::Boolean GetTwoFingerPickedObject()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETTWOFINGERPICKEDOBJECT_OFFSET))(this);
		}

		::System::Boolean GetTwoFingerPickedUIElement()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETTWOFINGERPICKEDUIELEMENT_OFFSET))(this);
		}

		::System::Void RaiseEvent(::HedgehogTeam::EasyTouch::EasyTouch_EvtType a1, ::HedgehogTeam::EasyTouch::Gesture* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::EasyTouch_EvtType, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_RAISEEVENT_OFFSET))(this, a1, a2);
		}

		::System::Boolean GetPickedGameObject(::HedgehogTeam::EasyTouch::Finger* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::HedgehogTeam::EasyTouch::Finger*, ::System::Boolean))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETPICKEDGAMEOBJECT_OFFSET))(this, a1, a2);
		}

		::System::Boolean GetGameObjectAt(::UnityEngine::Vector2 a1, ::UnityEngine::Camera* a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Camera*, ::System::Boolean))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETGAMEOBJECTAT_OFFSET))(this, a1, a2, a3);
		}

		::HedgehogTeam::EasyTouch::EasyTouch_SwipeDirection GetSwipe(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2)
		{
			return ((::HedgehogTeam::EasyTouch::EasyTouch_SwipeDirection(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETSWIPE_OFFSET))(this, a1, a2);
		}

		::System::Boolean FingerInTolerance(::HedgehogTeam::EasyTouch::Finger* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HedgehogTeam::EasyTouch::Finger*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_FINGERINTOLERANCE_OFFSET))(this, a1);
		}

		::System::Void ClearAllGesture()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_CLEARALLGESTURE_OFFSET))(this);
		}

		::System::Boolean IsTouchOverNGui(::UnityEngine::Vector2 a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ISTOUCHOVERNGUI_OFFSET))(this, a1, a2);
		}

		::HedgehogTeam::EasyTouch::Finger* GetFinger(::System::Int32 a1)
		{
			return ((::HedgehogTeam::EasyTouch::Finger*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETFINGER_OFFSET))(this, a1);
		}

		::System::Void AddUIIgnored(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADDUIIGNORED_OFFSET))(this, a1);
		}

		::System::Void RemoveUIIgnored(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVEUIIGNORED_OFFSET))(this, a1);
		}

		::System::Boolean IsScreenPositionOverUI(::UnityEngine::Vector2 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ISSCREENPOSITIONOVERUI_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* GetFirstUIElementFromCache()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETFIRSTUIELEMENTFROMCACHE_OFFSET))(this);
		}

		::UnityEngine::GameObject* GetFirstUIElement(::UnityEngine::Vector2 a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETFIRSTUIELEMENT_OFFSET))(this, a1);
		}

		static ::System::Boolean IsFingerOverUIElement(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ISFINGEROVERUIELEMENT_OFFSET))(a1);
		}

		static ::UnityEngine::GameObject* GetCurrentPickedUIElement(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::UnityEngine::GameObject*(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETCURRENTPICKEDUIELEMENT_OFFSET))(a1, a2);
		}

		static ::UnityEngine::GameObject* GetCurrentPickedObject(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::UnityEngine::GameObject*(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETCURRENTPICKEDOBJECT_OFFSET))(a1, a2);
		}

		static ::UnityEngine::GameObject* GetGameObjectAt_1(::UnityEngine::Vector2 a1, ::System::Boolean a2)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETGAMEOBJECTAT_1_OFFSET))(a1, a2);
		}

		static ::System::Int32 GetTouchCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETTOUCHCOUNT_OFFSET))();
		}

		static ::System::Void ResetTouch(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_RESETTOUCH_OFFSET))(a1);
		}

		static ::System::Void SetEnabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SETENABLED_OFFSET))(a1);
		}

		static ::System::Boolean GetEnabled()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETENABLED_OFFSET))();
		}

		static ::System::Void SetEnableUIDetection(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SETENABLEUIDETECTION_OFFSET))(a1);
		}

		static ::System::Boolean GetEnableUIDetection()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETENABLEUIDETECTION_OFFSET))();
		}

		static ::System::Void SetUICompatibily(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SETUICOMPATIBILY_OFFSET))(a1);
		}

		static ::System::Boolean GetUIComptability()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETUICOMPTABILITY_OFFSET))();
		}

		static ::System::Void SetAutoUpdateUI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SETAUTOUPDATEUI_OFFSET))(a1);
		}

		static ::System::Boolean GetAutoUpdateUI()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETAUTOUPDATEUI_OFFSET))();
		}

		static ::System::Void SetNGUICompatibility(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SETNGUICOMPATIBILITY_OFFSET))(a1);
		}

		static ::System::Boolean GetNGUICompatibility()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETNGUICOMPATIBILITY_OFFSET))();
		}

		static ::System::Void SetEnableAutoSelect(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SETENABLEAUTOSELECT_OFFSET))(a1);
		}

		static ::System::Boolean GetEnableAutoSelect()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETENABLEAUTOSELECT_OFFSET))();
		}

		static ::System::Void SetAutoUpdatePickedObject(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SETAUTOUPDATEPICKEDOBJECT_OFFSET))(a1);
		}

		static ::System::Boolean GetAutoUpdatePickedObject()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETAUTOUPDATEPICKEDOBJECT_OFFSET))();
		}

		static ::System::Void Set3DPickableLayer(::UnityEngine::LayerMask a1)
		{
			return ((::System::Void(*)(::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SET3DPICKABLELAYER_OFFSET))(a1);
		}

		static ::UnityEngine::LayerMask Get3DPickableLayer()
		{
			return ((::UnityEngine::LayerMask(*)())((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GET3DPICKABLELAYER_OFFSET))();
		}

		static ::System::Void AddCamera(::UnityEngine::Camera* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::UnityEngine::Camera*, ::System::Boolean))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADDCAMERA_OFFSET))(a1, a2);
		}

		static ::System::Void RemoveCamera(::UnityEngine::Camera* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVECAMERA_OFFSET))(a1);
		}

		static ::UnityEngine::Camera* GetCamera(::System::Int32 a1)
		{
			return ((::UnityEngine::Camera*(*)(::System::Int32))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETCAMERA_OFFSET))(a1);
		}

		static ::System::Void SetEnable2DCollider(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SETENABLE2DCOLLIDER_OFFSET))(a1);
		}

		static ::System::Boolean GetEnable2DCollider()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETENABLE2DCOLLIDER_OFFSET))();
		}

		static ::System::Void Set2DPickableLayer(::UnityEngine::LayerMask a1)
		{
			return ((::System::Void(*)(::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SET2DPICKABLELAYER_OFFSET))(a1);
		}

		static ::UnityEngine::LayerMask Get2DPickableLayer()
		{
			return ((::UnityEngine::LayerMask(*)())((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GET2DPICKABLELAYER_OFFSET))();
		}

		static ::System::Void SetGesturePriority(::HedgehogTeam::EasyTouch::EasyTouch_GesturePriority a1)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_GesturePriority))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SETGESTUREPRIORITY_OFFSET))(a1);
		}

		static ::HedgehogTeam::EasyTouch::EasyTouch_GesturePriority GetGesturePriority()
		{
			return ((::HedgehogTeam::EasyTouch::EasyTouch_GesturePriority(*)())((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETGESTUREPRIORITY_OFFSET))();
		}

		static ::System::Void SetStationaryTolerance(::System::Single a1)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SETSTATIONARYTOLERANCE_OFFSET))(a1);
		}

		static ::System::Single GetStationaryTolerance()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETSTATIONARYTOLERANCE_OFFSET))();
		}

		static ::System::Void SetLongTapTime(::System::Single a1)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SETLONGTAPTIME_OFFSET))(a1);
		}

		static ::System::Single GetlongTapTime()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETLONGTAPTIME_OFFSET))();
		}

		static ::System::Void SetDoubleTapTime(::System::Single a1)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SETDOUBLETAPTIME_OFFSET))(a1);
		}

		static ::System::Single GetDoubleTapTime()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETDOUBLETAPTIME_OFFSET))();
		}

		static ::System::Void SetDoubleTapMethod(::HedgehogTeam::EasyTouch::EasyTouch_DoubleTapDetection a1)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_DoubleTapDetection))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SETDOUBLETAPMETHOD_OFFSET))(a1);
		}

		static ::HedgehogTeam::EasyTouch::EasyTouch_DoubleTapDetection GetDoubleTapMethod()
		{
			return ((::HedgehogTeam::EasyTouch::EasyTouch_DoubleTapDetection(*)())((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETDOUBLETAPMETHOD_OFFSET))();
		}

		static ::System::Void SetSwipeTolerance(::System::Single a1)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SETSWIPETOLERANCE_OFFSET))(a1);
		}

		static ::System::Single GetSwipeTolerance()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETSWIPETOLERANCE_OFFSET))();
		}

		static ::System::Void SetEnable2FingersGesture(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SETENABLE2FINGERSGESTURE_OFFSET))(a1);
		}

		static ::System::Boolean GetEnable2FingersGesture()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETENABLE2FINGERSGESTURE_OFFSET))();
		}

		static ::System::Void SetEnable2FingersSwipe(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SETENABLE2FINGERSSWIPE_OFFSET))(a1);
		}

		static ::System::Boolean GetEnable2FingersSwipe()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETENABLE2FINGERSSWIPE_OFFSET))();
		}

		static ::System::Void SetTwoFingerPickMethod(::HedgehogTeam::EasyTouch::EasyTouch_TwoFingerPickMethod a1)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_TwoFingerPickMethod))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SETTWOFINGERPICKMETHOD_OFFSET))(a1);
		}

		static ::HedgehogTeam::EasyTouch::EasyTouch_TwoFingerPickMethod GetTwoFingerPickMethod()
		{
			return ((::HedgehogTeam::EasyTouch::EasyTouch_TwoFingerPickMethod(*)())((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETTWOFINGERPICKMETHOD_OFFSET))();
		}

		static ::System::Void SetEnablePinch(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SETENABLEPINCH_OFFSET))(a1);
		}

		static ::System::Boolean GetEnablePinch()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETENABLEPINCH_OFFSET))();
		}

		static ::System::Void SetMinPinchLength(::System::Single a1)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SETMINPINCHLENGTH_OFFSET))(a1);
		}

		static ::System::Single GetMinPinchLength()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETMINPINCHLENGTH_OFFSET))();
		}

		static ::System::Void SetEnableTwist(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SETENABLETWIST_OFFSET))(a1);
		}

		static ::System::Boolean GetEnableTwist()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETENABLETWIST_OFFSET))();
		}

		static ::System::Void SetMinTwistAngle(::System::Single a1)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SETMINTWISTANGLE_OFFSET))(a1);
		}

		static ::System::Single GetMinTwistAngle()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETMINTWISTANGLE_OFFSET))();
		}

		static ::System::Boolean GetSecondeFingerSimulation()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETSECONDEFINGERSIMULATION_OFFSET))();
		}

		static ::System::Void SetSecondFingerSimulation(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SETSECONDFINGERSIMULATION_OFFSET))(a1);
		}

		static ::System::Void AddUIIgnoredGameobject(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADDUIIGNOREDGAMEOBJECT_OFFSET))(a1);
		}

		static ::System::Void RemoveUIIgnoredGameobject(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVEUIIGNOREDGAMEOBJECT_OFFSET))(a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_RESET_OFFSET))(this);
		}
	};
}
