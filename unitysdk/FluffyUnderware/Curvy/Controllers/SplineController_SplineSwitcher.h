#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/Controllers/CurvyController_MoveModeEnum.h"
#include "unitysdk/FluffyUnderware/Curvy/Controllers/MovementDirection.h"
#include "unitysdk/FluffyUnderware/Curvy/CurvyClamping.h"
#include "unitysdk/System/Object.h"

namespace FluffyUnderware::Curvy { class CurvySpline; }

#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_SPLINESWITCHER_ADVANCE_OFFSET UNITYSDK_OFFSET(0x1BC105A0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_SPLINESWITCHER_GET_DIRECTION_OFFSET UNITYSDK_OFFSET(0x1BC10410)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_SPLINESWITCHER_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x1BC103B0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_SPLINESWITCHER_GET_ISSWITCHING_OFFSET UNITYSDK_OFFSET(0x1BC10430)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_SPLINESWITCHER_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0x1BC10450)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_SPLINESWITCHER_GET_SPLINE_OFFSET UNITYSDK_OFFSET(0x1BC103D0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_SPLINESWITCHER_GET_STARTTIME_OFFSET UNITYSDK_OFFSET(0x1BC10390)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_SPLINESWITCHER_GET_TF_OFFSET UNITYSDK_OFFSET(0x1BC103F0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_SPLINESWITCHER_SET_DIRECTION_OFFSET UNITYSDK_OFFSET(0x1BC10420)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_SPLINESWITCHER_SET_DURATION_OFFSET UNITYSDK_OFFSET(0x1BC103C0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_SPLINESWITCHER_SET_ISSWITCHING_OFFSET UNITYSDK_OFFSET(0x1BC10440)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_SPLINESWITCHER_SET_SPLINE_OFFSET UNITYSDK_OFFSET(0x1BC103E0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_SPLINESWITCHER_SET_STARTTIME_OFFSET UNITYSDK_OFFSET(0x1BC103A0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_SPLINESWITCHER_SET_TF_OFFSET UNITYSDK_OFFSET(0x1BC10400)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_SPLINESWITCHER_START_OFFSET UNITYSDK_OFFSET(0x1BC104A0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_SPLINESWITCHER_STOP_OFFSET UNITYSDK_OFFSET(0x1BC10600)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_SPLINESWITCHER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC10610)

namespace FluffyUnderware::Curvy::Controllers
{
	inline static constexpr unsigned int SplineController_SplineSwitcher_TypeDefinitionIndex = 37281;

	class SplineController_SplineSwitcher : public ::System::Object
	{
	public:
		::FluffyUnderware::Curvy::CurvySpline* _Spline_k__BackingField; // 0x10
		::System::Single _Duration_k__BackingField; // 0x18
		::System::Single _Tf_k__BackingField; // 0x1C
		::System::Single _StartTime_k__BackingField; // 0x20
		::FluffyUnderware::Curvy::Controllers::MovementDirection _Direction_k__BackingField; // 0x24
		::System::Boolean _IsSwitching_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_SPLINESWITCHER__CTOR_OFFSET))(this);
		}

		::System::Single get_StartTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_SPLINESWITCHER_GET_STARTTIME_OFFSET))(this);
		}

		::System::Void set_StartTime(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_SPLINESWITCHER_SET_STARTTIME_OFFSET))(this, value);
		}

		::System::Single get_Duration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_SPLINESWITCHER_GET_DURATION_OFFSET))(this);
		}

		::System::Void set_Duration(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_SPLINESWITCHER_SET_DURATION_OFFSET))(this, value);
		}

		::FluffyUnderware::Curvy::CurvySpline* get_Spline()
		{
			return ((::FluffyUnderware::Curvy::CurvySpline*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_SPLINESWITCHER_GET_SPLINE_OFFSET))(this);
		}

		::System::Void set_Spline(::FluffyUnderware::Curvy::CurvySpline* value)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySpline*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_SPLINESWITCHER_SET_SPLINE_OFFSET))(this, value);
		}

		::System::Single get_Tf()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_SPLINESWITCHER_GET_TF_OFFSET))(this);
		}

		::System::Void set_Tf(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_SPLINESWITCHER_SET_TF_OFFSET))(this, value);
		}

		::FluffyUnderware::Curvy::Controllers::MovementDirection get_Direction()
		{
			return ((::FluffyUnderware::Curvy::Controllers::MovementDirection(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_SPLINESWITCHER_GET_DIRECTION_OFFSET))(this);
		}

		::System::Void set_Direction(::FluffyUnderware::Curvy::Controllers::MovementDirection value)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Controllers::MovementDirection))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_SPLINESWITCHER_SET_DIRECTION_OFFSET))(this, value);
		}

		::System::Boolean get_IsSwitching()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_SPLINESWITCHER_GET_ISSWITCHING_OFFSET))(this);
		}

		::System::Void set_IsSwitching(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_SPLINESWITCHER_SET_ISSWITCHING_OFFSET))(this, value);
		}

		::System::Single get_Progress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_SPLINESWITCHER_GET_PROGRESS_OFFSET))(this);
		}

		::System::Void Start(::FluffyUnderware::Curvy::CurvySpline* spline, ::System::Single tf, ::System::Single duration, ::FluffyUnderware::Curvy::Controllers::MovementDirection direction)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySpline*, ::System::Single, ::System::Single, ::FluffyUnderware::Curvy::Controllers::MovementDirection))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_SPLINESWITCHER_START_OFFSET))(this, spline, tf, duration, direction);
		}

		::System::Void Advance(::FluffyUnderware::Curvy::CurvySpline* spline, ::FluffyUnderware::Curvy::Controllers::CurvyController_MoveModeEnum moveMode, ::System::Single distance, ::FluffyUnderware::Curvy::CurvyClamping clamping)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySpline*, ::FluffyUnderware::Curvy::Controllers::CurvyController_MoveModeEnum, ::System::Single, ::FluffyUnderware::Curvy::CurvyClamping))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_SPLINESWITCHER_ADVANCE_OFFSET))(this, spline, moveMode, distance, clamping);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_SPLINECONTROLLER_SPLINESWITCHER_STOP_OFFSET))(this);
		}
	};
}
