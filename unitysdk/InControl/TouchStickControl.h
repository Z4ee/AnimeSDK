#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/DragAxis.h"
#include "unitysdk/InControl/LockAxis.h"
#include "unitysdk/InControl/TouchControl.h"
#include "unitysdk/InControl/TouchControlAnchor.h"
#include "unitysdk/InControl/TouchControl_AnalogTarget.h"
#include "unitysdk/InControl/TouchControl_SnapAngles.h"
#include "unitysdk/InControl/TouchUnitType.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace InControl { class Touch; }
namespace InControl { class TouchSprite; }
namespace UnityEngine { class AnimationCurve; }

#define INCONTROL_TOUCHSTICKCONTROL_COMMITCONTROLSTATE_OFFSET UNITYSDK_OFFSET(0x17210EA0)
#define INCONTROL_TOUCHSTICKCONTROL_CONFIGURECONTROL_OFFSET UNITYSDK_OFFSET(0x172100A0)
#define INCONTROL_TOUCHSTICKCONTROL_CREATECONTROL_OFFSET UNITYSDK_OFFSET(0x1720FD60)
#define INCONTROL_TOUCHSTICKCONTROL_DESTROYCONTROL_OFFSET UNITYSDK_OFFSET(0x1720FE50)
#define INCONTROL_TOUCHSTICKCONTROL_DRAWGIZMOS_OFFSET UNITYSDK_OFFSET(0x172101D0)
#define INCONTROL_TOUCHSTICKCONTROL_GET_ACTIVEAREA_OFFSET UNITYSDK_OFFSET(0x17211CF0)
#define INCONTROL_TOUCHSTICKCONTROL_GET_ANCHOR_OFFSET UNITYSDK_OFFSET(0x17211920)
#define INCONTROL_TOUCHSTICKCONTROL_GET_AREAUNITTYPE_OFFSET UNITYSDK_OFFSET(0x17211D30)
#define INCONTROL_TOUCHSTICKCONTROL_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x172112A0)
#define INCONTROL_TOUCHSTICKCONTROL_GET_ISNOTACTIVE_OFFSET UNITYSDK_OFFSET(0x17210D70)
#define INCONTROL_TOUCHSTICKCONTROL_GET_KNOBPOSITION_OFFSET UNITYSDK_OFFSET(0x17210760)
#define INCONTROL_TOUCHSTICKCONTROL_GET_OFFSETUNITTYPE_OFFSET UNITYSDK_OFFSET(0x172119A0)
#define INCONTROL_TOUCHSTICKCONTROL_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0x17211940)
#define INCONTROL_TOUCHSTICKCONTROL_GET_RINGPOSITION_OFFSET UNITYSDK_OFFSET(0x17210670)
#define INCONTROL_TOUCHSTICKCONTROL_SET_ACTIVEAREA_OFFSET UNITYSDK_OFFSET(0x17211D00)
#define INCONTROL_TOUCHSTICKCONTROL_SET_ANCHOR_OFFSET UNITYSDK_OFFSET(0x17211930)
#define INCONTROL_TOUCHSTICKCONTROL_SET_AREAUNITTYPE_OFFSET UNITYSDK_OFFSET(0x17211D40)
#define INCONTROL_TOUCHSTICKCONTROL_SET_KNOBPOSITION_OFFSET UNITYSDK_OFFSET(0x17210DF0)
#define INCONTROL_TOUCHSTICKCONTROL_SET_OFFSETUNITTYPE_OFFSET UNITYSDK_OFFSET(0x172119B0)
#define INCONTROL_TOUCHSTICKCONTROL_SET_OFFSET_OFFSET UNITYSDK_OFFSET(0x17211950)
#define INCONTROL_TOUCHSTICKCONTROL_SET_RINGPOSITION_OFFSET UNITYSDK_OFFSET(0x17210D80)
#define INCONTROL_TOUCHSTICKCONTROL_SUBMITCONTROLSTATE_OFFSET UNITYSDK_OFFSET(0x17210E60)
#define INCONTROL_TOUCHSTICKCONTROL_TOUCHBEGAN_OFFSET UNITYSDK_OFFSET(0x17210EB0)
#define INCONTROL_TOUCHSTICKCONTROL_TOUCHENDED_OFFSET UNITYSDK_OFFSET(0x1720FEC0)
#define INCONTROL_TOUCHSTICKCONTROL_TOUCHMOVED_OFFSET UNITYSDK_OFFSET(0x172112B0)
#define INCONTROL_TOUCHSTICKCONTROL_UPDATE_OFFSET UNITYSDK_OFFSET(0x17210850)
#define INCONTROL_TOUCHSTICKCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x17211D50)

namespace InControl
{
	inline static constexpr unsigned int TouchStickControl_TypeDefinitionIndex = 37182;

	class TouchStickControl : public ::InControl::TouchControl
	{
	public:
		::InControl::TouchControlAnchor anchor; // 0x18
		::InControl::TouchUnitType offsetUnitType; // 0x1C
		::UnityEngine::Vector2 offset; // 0x20
		::InControl::TouchUnitType areaUnitType; // 0x28
		::UnityEngine::Rect activeArea; // 0x2C
		::InControl::TouchControl_AnalogTarget target; // 0x3C
		::InControl::TouchControl_SnapAngles snapAngles; // 0x40
		::InControl::LockAxis lockToAxis; // 0x44
		::System::Single lowerDeadZone; // 0x48
		::System::Single upperDeadZone; // 0x4C
		::UnityEngine::AnimationCurve* inputCurve; // 0x50
		::System::Boolean allowDragging; // 0x58
		::InControl::DragAxis allowDraggingAxis; // 0x5C
		::System::Boolean snapToInitialTouch; // 0x60
		::System::Boolean resetWhenDone; // 0x61
		::System::Single resetDuration; // 0x64
		::InControl::TouchSprite* ring; // 0x68
		::InControl::TouchSprite* knob; // 0x70
		::System::Single knobRange; // 0x78
		::UnityEngine::Vector3 resetPosition; // 0x7C
		::UnityEngine::Vector3 beganPosition; // 0x88
		::UnityEngine::Vector3 movedPosition; // 0x94
		::System::Single ringResetSpeed; // 0xA0
		::System::Single knobResetSpeed; // 0xA4
		::UnityEngine::Rect worldActiveArea; // 0xA8
		::System::Single worldKnobRange; // 0xB8
		::UnityEngine::Vector3 value; // 0xBC
		::InControl::Touch* currentTouch; // 0xC8
		::System::Boolean dirty; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSTICKCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void CreateControl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSTICKCONTROL_CREATECONTROL_OFFSET))(this);
		}

		::System::Void DestroyControl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSTICKCONTROL_DESTROYCONTROL_OFFSET))(this);
		}

		::System::Void ConfigureControl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSTICKCONTROL_CONFIGURECONTROL_OFFSET))(this);
		}

		::System::Void DrawGizmos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSTICKCONTROL_DRAWGIZMOS_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSTICKCONTROL_UPDATE_OFFSET))(this);
		}

		::System::Void SubmitControlState(::System::UInt64 updateTick, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSTICKCONTROL_SUBMITCONTROLSTATE_OFFSET))(this, updateTick, deltaTime);
		}

		::System::Void CommitControlState(::System::UInt64 updateTick, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSTICKCONTROL_COMMITCONTROLSTATE_OFFSET))(this, updateTick, deltaTime);
		}

		::System::Void TouchBegan(::InControl::Touch* touch)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::Touch*))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSTICKCONTROL_TOUCHBEGAN_OFFSET))(this, touch);
		}

		::System::Void TouchMoved(::InControl::Touch* touch)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::Touch*))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSTICKCONTROL_TOUCHMOVED_OFFSET))(this, touch);
		}

		::System::Void TouchEnded(::InControl::Touch* touch)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::Touch*))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSTICKCONTROL_TOUCHENDED_OFFSET))(this, touch);
		}

		::System::Boolean get_IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSTICKCONTROL_GET_ISACTIVE_OFFSET))(this);
		}

		::System::Boolean get_IsNotActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSTICKCONTROL_GET_ISNOTACTIVE_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_RingPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSTICKCONTROL_GET_RINGPOSITION_OFFSET))(this);
		}

		::System::Void set_RingPosition(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSTICKCONTROL_SET_RINGPOSITION_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_KnobPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSTICKCONTROL_GET_KNOBPOSITION_OFFSET))(this);
		}

		::System::Void set_KnobPosition(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSTICKCONTROL_SET_KNOBPOSITION_OFFSET))(this, value);
		}

		::InControl::TouchControlAnchor get_Anchor()
		{
			return ((::InControl::TouchControlAnchor(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSTICKCONTROL_GET_ANCHOR_OFFSET))(this);
		}

		::System::Void set_Anchor(::InControl::TouchControlAnchor value)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::TouchControlAnchor))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSTICKCONTROL_SET_ANCHOR_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_Offset()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSTICKCONTROL_GET_OFFSET_OFFSET))(this);
		}

		::System::Void set_Offset(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSTICKCONTROL_SET_OFFSET_OFFSET))(this, value);
		}

		::InControl::TouchUnitType get_OffsetUnitType()
		{
			return ((::InControl::TouchUnitType(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSTICKCONTROL_GET_OFFSETUNITTYPE_OFFSET))(this);
		}

		::System::Void set_OffsetUnitType(::InControl::TouchUnitType value)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::TouchUnitType))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSTICKCONTROL_SET_OFFSETUNITTYPE_OFFSET))(this, value);
		}

		::UnityEngine::Rect get_ActiveArea()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSTICKCONTROL_GET_ACTIVEAREA_OFFSET))(this);
		}

		::System::Void set_ActiveArea(::UnityEngine::Rect value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSTICKCONTROL_SET_ACTIVEAREA_OFFSET))(this, value);
		}

		::InControl::TouchUnitType get_AreaUnitType()
		{
			return ((::InControl::TouchUnitType(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSTICKCONTROL_GET_AREAUNITTYPE_OFFSET))(this);
		}

		::System::Void set_AreaUnitType(::InControl::TouchUnitType value)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::TouchUnitType))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSTICKCONTROL_SET_AREAUNITTYPE_OFFSET))(this, value);
		}
	};
}
