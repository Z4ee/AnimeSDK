#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/TouchControl.h"
#include "unitysdk/InControl/TouchControlAnchor.h"
#include "unitysdk/InControl/TouchControl_ButtonTarget.h"
#include "unitysdk/InControl/TouchUnitType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace InControl { class Touch; }
namespace InControl { class TouchSprite; }

#define INCONTROL_TOUCHBUTTONCONTROL_COMMITCONTROLSTATE_OFFSET UNITYSDK_OFFSET(0x17209390)
#define INCONTROL_TOUCHBUTTONCONTROL_CONFIGURECONTROL_OFFSET UNITYSDK_OFFSET(0x172079D0)
#define INCONTROL_TOUCHBUTTONCONTROL_CREATECONTROL_OFFSET UNITYSDK_OFFSET(0x17207830)
#define INCONTROL_TOUCHBUTTONCONTROL_DESTROYCONTROL_OFFSET UNITYSDK_OFFSET(0x172078F0)
#define INCONTROL_TOUCHBUTTONCONTROL_DRAWGIZMOS_OFFSET UNITYSDK_OFFSET(0x17208180)
#define INCONTROL_TOUCHBUTTONCONTROL_GET_ANCHOR_OFFSET UNITYSDK_OFFSET(0x172098D0)
#define INCONTROL_TOUCHBUTTONCONTROL_GET_BUTTONPOSITION_OFFSET UNITYSDK_OFFSET(0x17208350)
#define INCONTROL_TOUCHBUTTONCONTROL_GET_BUTTONSTATE_OFFSET UNITYSDK_OFFSET(0x17209740)
#define INCONTROL_TOUCHBUTTONCONTROL_GET_OFFSETUNITTYPE_OFFSET UNITYSDK_OFFSET(0x17209950)
#define INCONTROL_TOUCHBUTTONCONTROL_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0x172098F0)
#define INCONTROL_TOUCHBUTTONCONTROL_SET_ANCHOR_OFFSET UNITYSDK_OFFSET(0x172098E0)
#define INCONTROL_TOUCHBUTTONCONTROL_SET_BUTTONPOSITION_OFFSET UNITYSDK_OFFSET(0x17209810)
#define INCONTROL_TOUCHBUTTONCONTROL_SET_BUTTONSTATE_OFFSET UNITYSDK_OFFSET(0x17208D00)
#define INCONTROL_TOUCHBUTTONCONTROL_SET_OFFSETUNITTYPE_OFFSET UNITYSDK_OFFSET(0x17209960)
#define INCONTROL_TOUCHBUTTONCONTROL_SET_OFFSET_OFFSET UNITYSDK_OFFSET(0x17209900)
#define INCONTROL_TOUCHBUTTONCONTROL_SUBMITCONTROLSTATE_OFFSET UNITYSDK_OFFSET(0x172086B0)
#define INCONTROL_TOUCHBUTTONCONTROL_TOUCHBEGAN_OFFSET UNITYSDK_OFFSET(0x17209670)
#define INCONTROL_TOUCHBUTTONCONTROL_TOUCHENDED_OFFSET UNITYSDK_OFFSET(0x17207980)
#define INCONTROL_TOUCHBUTTONCONTROL_TOUCHMOVED_OFFSET UNITYSDK_OFFSET(0x172096D0)
#define INCONTROL_TOUCHBUTTONCONTROL_UPDATE_OFFSET UNITYSDK_OFFSET(0x172085F0)
#define INCONTROL_TOUCHBUTTONCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x17209970)

namespace InControl
{
	inline static constexpr unsigned int TouchButtonControl_TypeDefinitionIndex = 37179;

	class TouchButtonControl : public ::InControl::TouchControl
	{
	public:
		::InControl::TouchControlAnchor anchor; // 0x18
		::InControl::TouchUnitType offsetUnitType; // 0x1C
		::UnityEngine::Vector2 offset; // 0x20
		::System::Boolean lockAspectRatio; // 0x28
		::InControl::TouchControl_ButtonTarget target; // 0x2C
		::System::Boolean allowSlideToggle; // 0x30
		::System::Boolean toggleOnLeave; // 0x31
		::System::Boolean pressureSensitive; // 0x32
		::InControl::TouchSprite* button; // 0x38
		::System::Boolean buttonState; // 0x40
		::InControl::Touch* currentTouch; // 0x48
		::System::Boolean dirty; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHBUTTONCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void CreateControl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHBUTTONCONTROL_CREATECONTROL_OFFSET))(this);
		}

		::System::Void DestroyControl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHBUTTONCONTROL_DESTROYCONTROL_OFFSET))(this);
		}

		::System::Void ConfigureControl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHBUTTONCONTROL_CONFIGURECONTROL_OFFSET))(this);
		}

		::System::Void DrawGizmos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHBUTTONCONTROL_DRAWGIZMOS_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHBUTTONCONTROL_UPDATE_OFFSET))(this);
		}

		::System::Void SubmitControlState(::System::UInt64 updateTick, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHBUTTONCONTROL_SUBMITCONTROLSTATE_OFFSET))(this, updateTick, deltaTime);
		}

		::System::Void CommitControlState(::System::UInt64 updateTick, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHBUTTONCONTROL_COMMITCONTROLSTATE_OFFSET))(this, updateTick, deltaTime);
		}

		::System::Void TouchBegan(::InControl::Touch* touch)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::Touch*))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHBUTTONCONTROL_TOUCHBEGAN_OFFSET))(this, touch);
		}

		::System::Void TouchMoved(::InControl::Touch* touch)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::Touch*))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHBUTTONCONTROL_TOUCHMOVED_OFFSET))(this, touch);
		}

		::System::Void TouchEnded(::InControl::Touch* touch)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::Touch*))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHBUTTONCONTROL_TOUCHENDED_OFFSET))(this, touch);
		}

		::System::Boolean get_ButtonState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHBUTTONCONTROL_GET_BUTTONSTATE_OFFSET))(this);
		}

		::System::Void set_ButtonState(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHBUTTONCONTROL_SET_BUTTONSTATE_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_ButtonPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHBUTTONCONTROL_GET_BUTTONPOSITION_OFFSET))(this);
		}

		::System::Void set_ButtonPosition(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHBUTTONCONTROL_SET_BUTTONPOSITION_OFFSET))(this, value);
		}

		::InControl::TouchControlAnchor get_Anchor()
		{
			return ((::InControl::TouchControlAnchor(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHBUTTONCONTROL_GET_ANCHOR_OFFSET))(this);
		}

		::System::Void set_Anchor(::InControl::TouchControlAnchor value)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::TouchControlAnchor))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHBUTTONCONTROL_SET_ANCHOR_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_Offset()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHBUTTONCONTROL_GET_OFFSET_OFFSET))(this);
		}

		::System::Void set_Offset(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHBUTTONCONTROL_SET_OFFSET_OFFSET))(this, value);
		}

		::InControl::TouchUnitType get_OffsetUnitType()
		{
			return ((::InControl::TouchUnitType(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHBUTTONCONTROL_GET_OFFSETUNITTYPE_OFFSET))(this);
		}

		::System::Void set_OffsetUnitType(::InControl::TouchUnitType value)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::TouchUnitType))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHBUTTONCONTROL_SET_OFFSETUNITTYPE_OFFSET))(this, value);
		}
	};
}
