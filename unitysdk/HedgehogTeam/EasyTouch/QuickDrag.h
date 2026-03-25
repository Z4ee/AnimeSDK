#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HedgehogTeam/EasyTouch/QuickBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace HedgehogTeam::EasyTouch { class Gesture; }
namespace HedgehogTeam::EasyTouch { class QuickDrag_OnDrag; }
namespace HedgehogTeam::EasyTouch { class QuickDrag_OnDragEnd; }
namespace HedgehogTeam::EasyTouch { class QuickDrag_OnDragStart; }

#define HEDGEHOGTEAM_EASYTOUCH_QUICKDRAG_GETPOSITIONAXES_OFFSET UNITYSDK_OFFSET(0x11A7CB10)
#define HEDGEHOGTEAM_EASYTOUCH_QUICKDRAG_ONCOLLISIONENTER_OFFSET UNITYSDK_OFFSET(0x11A7C140)
#define HEDGEHOGTEAM_EASYTOUCH_QUICKDRAG_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x11A7C130)
#define HEDGEHOGTEAM_EASYTOUCH_QUICKDRAG_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x11A7BCB0)
#define HEDGEHOGTEAM_EASYTOUCH_QUICKDRAG_ONENABLE_OFFSET UNITYSDK_OFFSET(0x11A7B840)
#define HEDGEHOGTEAM_EASYTOUCH_QUICKDRAG_ON_DRAGEND_OFFSET UNITYSDK_OFFSET(0x11A7CD50)
#define HEDGEHOGTEAM_EASYTOUCH_QUICKDRAG_ON_DRAGSTART_OFFSET UNITYSDK_OFFSET(0x11A7C560)
#define HEDGEHOGTEAM_EASYTOUCH_QUICKDRAG_ON_DRAG_OFFSET UNITYSDK_OFFSET(0x11A7C840)
#define HEDGEHOGTEAM_EASYTOUCH_QUICKDRAG_ON_TOUCHDOWN_OFFSET UNITYSDK_OFFSET(0x11A7C350)
#define HEDGEHOGTEAM_EASYTOUCH_QUICKDRAG_ON_TOUCHSTART_OFFSET UNITYSDK_OFFSET(0x11A7C210)
#define HEDGEHOGTEAM_EASYTOUCH_QUICKDRAG_ON_TOUCHUP_OFFSET UNITYSDK_OFFSET(0x11A7C520)
#define HEDGEHOGTEAM_EASYTOUCH_QUICKDRAG_STOPDRAG_OFFSET UNITYSDK_OFFSET(0x11A7C160)
#define HEDGEHOGTEAM_EASYTOUCH_QUICKDRAG_UNSUBSCRIBEEVENT_OFFSET UNITYSDK_OFFSET(0x11A7BCC0)
#define HEDGEHOGTEAM_EASYTOUCH_QUICKDRAG__CTOR_OFFSET UNITYSDK_OFFSET(0x11A7B7B0)

namespace HedgehogTeam::EasyTouch
{
	inline static constexpr unsigned int QuickDrag_TypeDefinitionIndex = 31270;

	class QuickDrag : public ::HedgehogTeam::EasyTouch::QuickBase
	{
	public:
		::HedgehogTeam::EasyTouch::QuickDrag_OnDragStart* onDragStart; // 0x70
		::HedgehogTeam::EasyTouch::QuickDrag_OnDrag* onDrag; // 0x78
		::HedgehogTeam::EasyTouch::QuickDrag_OnDragEnd* onDragEnd; // 0x80
		::System::Boolean isStopOncollisionEnter; // 0x88
		::UnityEngine::Vector3 deltaPosition; // 0x8C
		::System::Boolean isOnDrag; // 0x98
		::HedgehogTeam::EasyTouch::Gesture* lastGesture; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_QUICKDRAG__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_QUICKDRAG_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_QUICKDRAG_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_QUICKDRAG_ONDESTROY_OFFSET))(this);
		}

		::System::Void UnsubscribeEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_QUICKDRAG_UNSUBSCRIBEEVENT_OFFSET))(this);
		}

		::System::Void OnCollisionEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_QUICKDRAG_ONCOLLISIONENTER_OFFSET))(this);
		}

		::System::Void On_TouchStart(::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_QUICKDRAG_ON_TOUCHSTART_OFFSET))(this, gesture);
		}

		::System::Void On_TouchDown(::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_QUICKDRAG_ON_TOUCHDOWN_OFFSET))(this, gesture);
		}

		::System::Void On_TouchUp(::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_QUICKDRAG_ON_TOUCHUP_OFFSET))(this, gesture);
		}

		::System::Void On_DragStart(::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_QUICKDRAG_ON_DRAGSTART_OFFSET))(this, gesture);
		}

		::System::Void On_Drag(::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_QUICKDRAG_ON_DRAG_OFFSET))(this, gesture);
		}

		::System::Void On_DragEnd(::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_QUICKDRAG_ON_DRAGEND_OFFSET))(this, gesture);
		}

		::UnityEngine::Vector3 GetPositionAxes(::UnityEngine::Vector3 position)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_QUICKDRAG_GETPOSITIONAXES_OFFSET))(this, position);
		}

		::System::Void StopDrag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_QUICKDRAG_STOPDRAG_OFFSET))(this);
		}
	};
}
