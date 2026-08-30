#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/TouchControlAnchor.h"
#include "unitysdk/InControl/TouchControl_AnalogTarget.h"
#include "unitysdk/InControl/TouchControl_ButtonTarget.h"
#include "unitysdk/InControl/TouchControl_SnapAngles.h"
#include "unitysdk/InControl/TouchUnitType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace InControl { class Touch; }

#define INCONTROL_TOUCHCONTROL_COMMITANALOG_OFFSET UNITYSDK_OFFSET(0x1B57B960)
#define INCONTROL_TOUCHCONTROL_COMMITBUTTON_OFFSET UNITYSDK_OFFSET(0x1B57A8C0)
#define INCONTROL_TOUCHCONTROL_OFFSETTOWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0x1B578FF0)
#define INCONTROL_TOUCHCONTROL_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1B57B150)
#define INCONTROL_TOUCHCONTROL_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0x1B57C220)
#define INCONTROL_TOUCHCONTROL_ONDRAWGIZMOS_OFFSET UNITYSDK_OFFSET(0x1B57C480)
#define INCONTROL_TOUCHCONTROL_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1B57AF80)
#define INCONTROL_TOUCHCONTROL_SETUP_OFFSET UNITYSDK_OFFSET(0x1B57B1D0)
#define INCONTROL_TOUCHCONTROL_SNAPTO_1_OFFSET UNITYSDK_OFFSET(0x1B57BDB0)
#define INCONTROL_TOUCHCONTROL_SNAPTO_OFFSET UNITYSDK_OFFSET(0x1B57BD50)
#define INCONTROL_TOUCHCONTROL_SUBMITANALOGVALUE_OFFSET UNITYSDK_OFFSET(0x1B57B660)
#define INCONTROL_TOUCHCONTROL_SUBMITBUTTONSTATE_OFFSET UNITYSDK_OFFSET(0x1B57A5F0)
#define INCONTROL_TOUCHCONTROL_SUBMITBUTTONVALUE_OFFSET UNITYSDK_OFFSET(0x1B57A280)
#define INCONTROL_TOUCHCONTROL_SUBMITRAWANALOGVALUE_OFFSET UNITYSDK_OFFSET(0x1B57BB40)
#define INCONTROL_TOUCHCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B57AF70)

namespace InControl
{
	inline static constexpr unsigned int TouchControl_TypeDefinitionIndex = 39585;

	class TouchControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHCONTROL_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHCONTROL_ONDISABLE_OFFSET))(this);
		}

		::System::Void Setup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHCONTROL_SETUP_OFFSET))(this);
		}

		::UnityEngine::Vector3 OffsetToWorldPosition(::InControl::TouchControlAnchor a1, ::UnityEngine::Vector2 a2, ::InControl::TouchUnitType a3, ::System::Boolean a4)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::InControl::TouchControlAnchor, ::UnityEngine::Vector2, ::InControl::TouchUnitType, ::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHCONTROL_OFFSETTOWORLDPOSITION_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SubmitButtonState(::InControl::TouchControl_ButtonTarget a1, ::System::Boolean a2, ::System::UInt64 a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::TouchControl_ButtonTarget, ::System::Boolean, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHCONTROL_SUBMITBUTTONSTATE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SubmitButtonValue(::InControl::TouchControl_ButtonTarget a1, ::System::Single a2, ::System::UInt64 a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::TouchControl_ButtonTarget, ::System::Single, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHCONTROL_SUBMITBUTTONVALUE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void CommitButton(::InControl::TouchControl_ButtonTarget a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::TouchControl_ButtonTarget))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHCONTROL_COMMITBUTTON_OFFSET))(this, a1);
		}

		::System::Void SubmitAnalogValue(::InControl::TouchControl_AnalogTarget a1, ::UnityEngine::Vector2 a2, ::System::Single a3, ::System::Single a4, ::System::UInt64 a5, ::System::Single a6)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::TouchControl_AnalogTarget, ::UnityEngine::Vector2, ::System::Single, ::System::Single, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHCONTROL_SUBMITANALOGVALUE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void CommitAnalog(::InControl::TouchControl_AnalogTarget a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::TouchControl_AnalogTarget))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHCONTROL_COMMITANALOG_OFFSET))(this, a1);
		}

		::System::Void SubmitRawAnalogValue(::InControl::TouchControl_AnalogTarget a1, ::UnityEngine::Vector2 a2, ::System::UInt64 a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::TouchControl_AnalogTarget, ::UnityEngine::Vector2, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHCONTROL_SUBMITRAWANALOGVALUE_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::UnityEngine::Vector3 SnapTo(::UnityEngine::Vector2 a1, ::InControl::TouchControl_SnapAngles a2)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector2, ::InControl::TouchControl_SnapAngles))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHCONTROL_SNAPTO_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector3 SnapTo_1(::UnityEngine::Vector2 a1, ::System::Single a2)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHCONTROL_SNAPTO_1_OFFSET))(a1, a2);
		}

		::System::Void OnDrawGizmosSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHCONTROL_ONDRAWGIZMOSSELECTED_OFFSET))(this);
		}

		::System::Void OnDrawGizmos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHCONTROL_ONDRAWGIZMOS_OFFSET))(this);
		}
	};
}
