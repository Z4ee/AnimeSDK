#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/TouchControl.h"
#include "unitysdk/InControl/TouchControl_AnalogTarget.h"
#include "unitysdk/InControl/TouchControl_ButtonTarget.h"
#include "unitysdk/InControl/TouchUnitType.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace InControl { class Touch; }

#define INCONTROL_TOUCHTRACKCONTROL_COMMITCONTROLSTATE_OFFSET UNITYSDK_OFFSET(0x1B584DA0)
#define INCONTROL_TOUCHTRACKCONTROL_CONFIGURECONTROL_OFFSET UNITYSDK_OFFSET(0x1B584880)
#define INCONTROL_TOUCHTRACKCONTROL_CREATECONTROL_OFFSET UNITYSDK_OFFSET(0x1B584820)
#define INCONTROL_TOUCHTRACKCONTROL_DESTROYCONTROL_OFFSET UNITYSDK_OFFSET(0x1B5848E0)
#define INCONTROL_TOUCHTRACKCONTROL_DRAWGIZMOS_OFFSET UNITYSDK_OFFSET(0x1B584B30)
#define INCONTROL_TOUCHTRACKCONTROL_GET_ACTIVEAREA_OFFSET UNITYSDK_OFFSET(0x1B584F20)
#define INCONTROL_TOUCHTRACKCONTROL_GET_AREAUNITTYPE_OFFSET UNITYSDK_OFFSET(0x1B584F60)
#define INCONTROL_TOUCHTRACKCONTROL_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1B584C80)
#define INCONTROL_TOUCHTRACKCONTROL_SET_ACTIVEAREA_OFFSET UNITYSDK_OFFSET(0x1B584F30)
#define INCONTROL_TOUCHTRACKCONTROL_SET_AREAUNITTYPE_OFFSET UNITYSDK_OFFSET(0x1B584F70)
#define INCONTROL_TOUCHTRACKCONTROL_SUBMITCONTROLSTATE_OFFSET UNITYSDK_OFFSET(0x1B584D10)
#define INCONTROL_TOUCHTRACKCONTROL_TOUCHBEGAN_OFFSET UNITYSDK_OFFSET(0x1B584DC0)
#define INCONTROL_TOUCHTRACKCONTROL_TOUCHENDED_OFFSET UNITYSDK_OFFSET(0x1B584A00)
#define INCONTROL_TOUCHTRACKCONTROL_TOUCHMOVED_OFFSET UNITYSDK_OFFSET(0x1B584EB0)
#define INCONTROL_TOUCHTRACKCONTROL_UPDATE_OFFSET UNITYSDK_OFFSET(0x1B584CA0)
#define INCONTROL_TOUCHTRACKCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B584F80)

namespace InControl
{
	inline static constexpr unsigned int TouchTrackControl_TypeDefinitionIndex = 39583;

	class TouchTrackControl : public ::InControl::TouchControl
	{
	public:
		::InControl::TouchUnitType areaUnitType; // 0x18
		::UnityEngine::Rect activeArea; // 0x1C
		::InControl::TouchControl_AnalogTarget target; // 0x2C
		::System::Single scale; // 0x30
		::InControl::TouchControl_ButtonTarget tapTarget; // 0x34
		::System::Single maxTapDuration; // 0x38
		::System::Single maxTapMovement; // 0x3C
		::UnityEngine::Rect worldActiveArea; // 0x40
		::UnityEngine::Vector3 lastPosition; // 0x50
		::UnityEngine::Vector3 thisPosition; // 0x5C
		::InControl::Touch* currentTouch; // 0x68
		::System::Boolean dirty; // 0x70
		::System::Boolean fireButtonTarget; // 0x71
		::System::Single beganTime; // 0x74
		::UnityEngine::Vector3 beganPosition; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHTRACKCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void CreateControl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHTRACKCONTROL_CREATECONTROL_OFFSET))(this);
		}

		::System::Void DestroyControl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHTRACKCONTROL_DESTROYCONTROL_OFFSET))(this);
		}

		::System::Void ConfigureControl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHTRACKCONTROL_CONFIGURECONTROL_OFFSET))(this);
		}

		::System::Void DrawGizmos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHTRACKCONTROL_DRAWGIZMOS_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHTRACKCONTROL_ONVALIDATE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHTRACKCONTROL_UPDATE_OFFSET))(this);
		}

		::System::Void SubmitControlState(::System::UInt64 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHTRACKCONTROL_SUBMITCONTROLSTATE_OFFSET))(this, a1, a2);
		}

		::System::Void CommitControlState(::System::UInt64 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHTRACKCONTROL_COMMITCONTROLSTATE_OFFSET))(this, a1, a2);
		}

		::System::Void TouchBegan(::InControl::Touch* a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::Touch*))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHTRACKCONTROL_TOUCHBEGAN_OFFSET))(this, a1);
		}

		::System::Void TouchMoved(::InControl::Touch* a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::Touch*))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHTRACKCONTROL_TOUCHMOVED_OFFSET))(this, a1);
		}

		::System::Void TouchEnded(::InControl::Touch* a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::Touch*))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHTRACKCONTROL_TOUCHENDED_OFFSET))(this, a1);
		}

		::UnityEngine::Rect get_ActiveArea()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHTRACKCONTROL_GET_ACTIVEAREA_OFFSET))(this);
		}

		::System::Void set_ActiveArea(::UnityEngine::Rect a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHTRACKCONTROL_SET_ACTIVEAREA_OFFSET))(this, a1);
		}

		::InControl::TouchUnitType get_AreaUnitType()
		{
			return ((::InControl::TouchUnitType(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHTRACKCONTROL_GET_AREAUNITTYPE_OFFSET))(this);
		}

		::System::Void set_AreaUnitType(::InControl::TouchUnitType a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::TouchUnitType))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHTRACKCONTROL_SET_AREAUNITTYPE_OFFSET))(this, a1);
		}
	};
}
