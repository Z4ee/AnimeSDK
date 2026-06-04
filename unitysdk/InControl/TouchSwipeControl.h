#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/TouchControl.h"
#include "unitysdk/InControl/TouchControl_AnalogTarget.h"
#include "unitysdk/InControl/TouchControl_ButtonTarget.h"
#include "unitysdk/InControl/TouchControl_SnapAngles.h"
#include "unitysdk/InControl/TouchUnitType.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace InControl { class Touch; }

#define INCONTROL_TOUCHSWIPECONTROL_COMMITCONTROLSTATE_OFFSET UNITYSDK_OFFSET(0x18047E50)
#define INCONTROL_TOUCHSWIPECONTROL_CONFIGURECONTROL_OFFSET UNITYSDK_OFFSET(0x18047AA0)
#define INCONTROL_TOUCHSWIPECONTROL_CREATECONTROL_OFFSET UNITYSDK_OFFSET(0x180478B0)
#define INCONTROL_TOUCHSWIPECONTROL_DESTROYCONTROL_OFFSET UNITYSDK_OFFSET(0x180478C0)
#define INCONTROL_TOUCHSWIPECONTROL_DRAWGIZMOS_OFFSET UNITYSDK_OFFSET(0x18047B00)
#define INCONTROL_TOUCHSWIPECONTROL_GETBUTTONTARGETFORVECTOR_OFFSET UNITYSDK_OFFSET(0x18048190)
#define INCONTROL_TOUCHSWIPECONTROL_GET_ACTIVEAREA_OFFSET UNITYSDK_OFFSET(0x18048290)
#define INCONTROL_TOUCHSWIPECONTROL_GET_AREAUNITTYPE_OFFSET UNITYSDK_OFFSET(0x180482D0)
#define INCONTROL_TOUCHSWIPECONTROL_SET_ACTIVEAREA_OFFSET UNITYSDK_OFFSET(0x180482A0)
#define INCONTROL_TOUCHSWIPECONTROL_SET_AREAUNITTYPE_OFFSET UNITYSDK_OFFSET(0x180482E0)
#define INCONTROL_TOUCHSWIPECONTROL_SUBMITCONTROLSTATE_OFFSET UNITYSDK_OFFSET(0x18047CC0)
#define INCONTROL_TOUCHSWIPECONTROL_TOUCHBEGAN_OFFSET UNITYSDK_OFFSET(0x18047EA0)
#define INCONTROL_TOUCHSWIPECONTROL_TOUCHENDED_OFFSET UNITYSDK_OFFSET(0x180479B0)
#define INCONTROL_TOUCHSWIPECONTROL_TOUCHMOVED_OFFSET UNITYSDK_OFFSET(0x18047F70)
#define INCONTROL_TOUCHSWIPECONTROL_UPDATE_OFFSET UNITYSDK_OFFSET(0x18047C50)
#define INCONTROL_TOUCHSWIPECONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x180482F0)

namespace InControl
{
	inline static constexpr unsigned int TouchSwipeControl_TypeDefinitionIndex = 37915;

	class TouchSwipeControl : public ::InControl::TouchControl
	{
	public:
		::InControl::TouchUnitType areaUnitType; // 0x18
		::UnityEngine::Rect activeArea; // 0x1C
		::System::Single sensitivity; // 0x2C
		::System::Boolean oneSwipePerTouch; // 0x30
		::InControl::TouchControl_AnalogTarget target; // 0x34
		::InControl::TouchControl_SnapAngles snapAngles; // 0x38
		::InControl::TouchControl_ButtonTarget upTarget; // 0x3C
		::InControl::TouchControl_ButtonTarget downTarget; // 0x40
		::InControl::TouchControl_ButtonTarget leftTarget; // 0x44
		::InControl::TouchControl_ButtonTarget rightTarget; // 0x48
		::InControl::TouchControl_ButtonTarget tapTarget; // 0x4C
		::UnityEngine::Rect worldActiveArea; // 0x50
		::UnityEngine::Vector3 currentVector; // 0x60
		::System::Boolean currentVectorIsSet; // 0x6C
		::UnityEngine::Vector3 beganPosition; // 0x70
		::UnityEngine::Vector3 lastPosition; // 0x7C
		::InControl::Touch* currentTouch; // 0x88
		::System::Boolean fireButtonTarget; // 0x90
		::InControl::TouchControl_ButtonTarget nextButtonTarget; // 0x94
		::InControl::TouchControl_ButtonTarget lastButtonTarget; // 0x98
		::System::Boolean dirty; // 0x9C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSWIPECONTROL__CTOR_OFFSET))(this);
		}

		::System::Void CreateControl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSWIPECONTROL_CREATECONTROL_OFFSET))(this);
		}

		::System::Void DestroyControl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSWIPECONTROL_DESTROYCONTROL_OFFSET))(this);
		}

		::System::Void ConfigureControl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSWIPECONTROL_CONFIGURECONTROL_OFFSET))(this);
		}

		::System::Void DrawGizmos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSWIPECONTROL_DRAWGIZMOS_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSWIPECONTROL_UPDATE_OFFSET))(this);
		}

		::System::Void SubmitControlState(::System::UInt64 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSWIPECONTROL_SUBMITCONTROLSTATE_OFFSET))(this, a1, a2);
		}

		::System::Void CommitControlState(::System::UInt64 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSWIPECONTROL_COMMITCONTROLSTATE_OFFSET))(this, a1, a2);
		}

		::System::Void TouchBegan(::InControl::Touch* a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::Touch*))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSWIPECONTROL_TOUCHBEGAN_OFFSET))(this, a1);
		}

		::System::Void TouchMoved(::InControl::Touch* a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::Touch*))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSWIPECONTROL_TOUCHMOVED_OFFSET))(this, a1);
		}

		::System::Void TouchEnded(::InControl::Touch* a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::Touch*))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSWIPECONTROL_TOUCHENDED_OFFSET))(this, a1);
		}

		::InControl::TouchControl_ButtonTarget GetButtonTargetForVector(::UnityEngine::Vector2 a1)
		{
			return ((::InControl::TouchControl_ButtonTarget(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSWIPECONTROL_GETBUTTONTARGETFORVECTOR_OFFSET))(this, a1);
		}

		::UnityEngine::Rect get_ActiveArea()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSWIPECONTROL_GET_ACTIVEAREA_OFFSET))(this);
		}

		::System::Void set_ActiveArea(::UnityEngine::Rect a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSWIPECONTROL_SET_ACTIVEAREA_OFFSET))(this, a1);
		}

		::InControl::TouchUnitType get_AreaUnitType()
		{
			return ((::InControl::TouchUnitType(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSWIPECONTROL_GET_AREAUNITTYPE_OFFSET))(this);
		}

		::System::Void set_AreaUnitType(::InControl::TouchUnitType a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::TouchUnitType))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHSWIPECONTROL_SET_AREAUNITTYPE_OFFSET))(this, a1);
		}
	};
}
