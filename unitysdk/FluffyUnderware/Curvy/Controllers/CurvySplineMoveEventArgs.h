#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/Controllers/MovementDirection.h"
#include "unitysdk/System/ComponentModel/CancelEventArgs.h"

namespace FluffyUnderware::Curvy { class CurvySpline; }
namespace FluffyUnderware::Curvy { class CurvySplineSegment; }
namespace FluffyUnderware::Curvy::Controllers { class SplineController; }

#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYSPLINEMOVEEVENTARGS_GET_CONTROLPOINT_OFFSET UNITYSDK_OFFSET(0x1DE8E700)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYSPLINEMOVEEVENTARGS_GET_DELTA_OFFSET UNITYSDK_OFFSET(0x1DE8E760)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYSPLINEMOVEEVENTARGS_GET_MOVEMENTDIRECTION_OFFSET UNITYSDK_OFFSET(0x1DE8E740)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYSPLINEMOVEEVENTARGS_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1DE8E780)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYSPLINEMOVEEVENTARGS_GET_SENDER_OFFSET UNITYSDK_OFFSET(0x1DE8E6C0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYSPLINEMOVEEVENTARGS_GET_SPLINE_OFFSET UNITYSDK_OFFSET(0x1DE8E6E0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYSPLINEMOVEEVENTARGS_GET_WORLDUNITS_OFFSET UNITYSDK_OFFSET(0x1DE8E720)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYSPLINEMOVEEVENTARGS_SET_CONTROLPOINT_OFFSET UNITYSDK_OFFSET(0x1DE8E710)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYSPLINEMOVEEVENTARGS_SET_DELTA_OFFSET UNITYSDK_OFFSET(0x1DE8E770)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYSPLINEMOVEEVENTARGS_SET_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1DE8E850)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYSPLINEMOVEEVENTARGS_SET_MOVEMENTDIRECTION_OFFSET UNITYSDK_OFFSET(0x1DE8E750)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYSPLINEMOVEEVENTARGS_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1DE8E790)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYSPLINEMOVEEVENTARGS_SET_SENDER_OFFSET UNITYSDK_OFFSET(0x1DE8E6D0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYSPLINEMOVEEVENTARGS_SET_SPLINE_OFFSET UNITYSDK_OFFSET(0x1DE8E6F0)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYSPLINEMOVEEVENTARGS_SET_WORLDUNITS_OFFSET UNITYSDK_OFFSET(0x1DE8E730)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYSPLINEMOVEEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE8E7A0)

namespace FluffyUnderware::Curvy::Controllers
{
	inline static constexpr unsigned int CurvySplineMoveEventArgs_TypeDefinitionIndex = 39053;

	class CurvySplineMoveEventArgs : public ::System::ComponentModel::CancelEventArgs
	{
	public:
		::FluffyUnderware::Curvy::Controllers::SplineController* _Sender_k__BackingField; // 0x18
		::FluffyUnderware::Curvy::CurvySpline* _Spline_k__BackingField; // 0x20
		::FluffyUnderware::Curvy::CurvySplineSegment* _ControlPoint_k__BackingField; // 0x28
		::System::Single _Position_k__BackingField; // 0x30
		::System::Boolean _WorldUnits_k__BackingField; // 0x34
		::System::Single _Delta_k__BackingField; // 0x38
		::FluffyUnderware::Curvy::Controllers::MovementDirection _MovementDirection_k__BackingField; // 0x3C

		::System::Void _ctor(::FluffyUnderware::Curvy::Controllers::SplineController* sender, ::FluffyUnderware::Curvy::CurvySpline* spline, ::FluffyUnderware::Curvy::CurvySplineSegment* controlPoint, ::System::Single position, ::System::Boolean usingWorldUnits, ::System::Single delta, ::FluffyUnderware::Curvy::Controllers::MovementDirection direction)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Controllers::SplineController*, ::FluffyUnderware::Curvy::CurvySpline*, ::FluffyUnderware::Curvy::CurvySplineSegment*, ::System::Single, ::System::Boolean, ::System::Single, ::FluffyUnderware::Curvy::Controllers::MovementDirection))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYSPLINEMOVEEVENTARGS__CTOR_OFFSET))(this, sender, spline, controlPoint, position, usingWorldUnits, delta, direction);
		}

		::FluffyUnderware::Curvy::Controllers::SplineController* get_Sender()
		{
			return ((::FluffyUnderware::Curvy::Controllers::SplineController*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYSPLINEMOVEEVENTARGS_GET_SENDER_OFFSET))(this);
		}

		::System::Void set_Sender(::FluffyUnderware::Curvy::Controllers::SplineController* value)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Controllers::SplineController*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYSPLINEMOVEEVENTARGS_SET_SENDER_OFFSET))(this, value);
		}

		::FluffyUnderware::Curvy::CurvySpline* get_Spline()
		{
			return ((::FluffyUnderware::Curvy::CurvySpline*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYSPLINEMOVEEVENTARGS_GET_SPLINE_OFFSET))(this);
		}

		::System::Void set_Spline(::FluffyUnderware::Curvy::CurvySpline* value)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySpline*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYSPLINEMOVEEVENTARGS_SET_SPLINE_OFFSET))(this, value);
		}

		::FluffyUnderware::Curvy::CurvySplineSegment* get_ControlPoint()
		{
			return ((::FluffyUnderware::Curvy::CurvySplineSegment*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYSPLINEMOVEEVENTARGS_GET_CONTROLPOINT_OFFSET))(this);
		}

		::System::Void set_ControlPoint(::FluffyUnderware::Curvy::CurvySplineSegment* value)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYSPLINEMOVEEVENTARGS_SET_CONTROLPOINT_OFFSET))(this, value);
		}

		::System::Boolean get_WorldUnits()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYSPLINEMOVEEVENTARGS_GET_WORLDUNITS_OFFSET))(this);
		}

		::System::Void set_WorldUnits(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYSPLINEMOVEEVENTARGS_SET_WORLDUNITS_OFFSET))(this, value);
		}

		::FluffyUnderware::Curvy::Controllers::MovementDirection get_MovementDirection()
		{
			return ((::FluffyUnderware::Curvy::Controllers::MovementDirection(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYSPLINEMOVEEVENTARGS_GET_MOVEMENTDIRECTION_OFFSET))(this);
		}

		::System::Void set_MovementDirection(::FluffyUnderware::Curvy::Controllers::MovementDirection value)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Controllers::MovementDirection))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYSPLINEMOVEEVENTARGS_SET_MOVEMENTDIRECTION_OFFSET))(this, value);
		}

		::System::Single get_Delta()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYSPLINEMOVEEVENTARGS_GET_DELTA_OFFSET))(this);
		}

		::System::Void set_Delta(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYSPLINEMOVEEVENTARGS_SET_DELTA_OFFSET))(this, value);
		}

		::System::Single get_Position()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYSPLINEMOVEEVENTARGS_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYSPLINEMOVEEVENTARGS_SET_POSITION_OFFSET))(this, value);
		}

		::System::Void Set_INTERNAL(::FluffyUnderware::Curvy::Controllers::SplineController* sender, ::FluffyUnderware::Curvy::CurvySpline* spline, ::FluffyUnderware::Curvy::CurvySplineSegment* controlPoint, ::System::Single position, ::System::Single delta, ::FluffyUnderware::Curvy::Controllers::MovementDirection direction, ::System::Boolean usingWorldUnits)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Controllers::SplineController*, ::FluffyUnderware::Curvy::CurvySpline*, ::FluffyUnderware::Curvy::CurvySplineSegment*, ::System::Single, ::System::Single, ::FluffyUnderware::Curvy::Controllers::MovementDirection, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYSPLINEMOVEEVENTARGS_SET_INTERNAL_OFFSET))(this, sender, spline, controlPoint, position, delta, direction, usingWorldUnits);
		}
	};
}
