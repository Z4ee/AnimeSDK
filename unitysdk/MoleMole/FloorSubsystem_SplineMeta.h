#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace FluffyUnderware::Curvy { class CurvySpline; }
namespace System { class Object; }

#define MOLEMOLE_FLOORSUBSYSTEM_SPLINEMETA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x8CD870)
#define MOLEMOLE_FLOORSUBSYSTEM_SPLINEMETA_EQUALS_OFFSET UNITYSDK_OFFSET(0x8CD800)
#define MOLEMOLE_FLOORSUBSYSTEM_SPLINEMETA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x8CD880)
#define MOLEMOLE_FLOORSUBSYSTEM_SPLINEMETA_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1B953070)
#define MOLEMOLE_FLOORSUBSYSTEM_SPLINEMETA_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1B952EA0)
#define MOLEMOLE_FLOORSUBSYSTEM_SPLINEMETA_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1B952E30)
#define MOLEMOLE_FLOORSUBSYSTEM_SPLINEMETA_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1B953120)
#define MOLEMOLE_FLOORSUBSYSTEM_SPLINEMETA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x8CD7D0)
#define MOLEMOLE_FLOORSUBSYSTEM_SPLINEMETA__CTOR_OFFSET UNITYSDK_OFFSET(0x8CD7D0)
#define MOLEMOLE_FLOORSUBSYSTEM_SPLINEMETA___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0x8CD8D0)
#define MOLEMOLE_FLOORSUBSYSTEM_SPLINEMETA___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x8CD940)

namespace MoleMole
{
	inline static constexpr unsigned int FloorSubsystem_SplineMeta_TypeDefinitionIndex = 79590;

	struct alignas(8) FloorSubsystem_SplineMeta
	{
		::FluffyUnderware::Curvy::CurvySpline* Spline; // 0x10
		::System::Int32 SplineHash; // 0x18

		::System::Void _ctor(::FluffyUnderware::Curvy::CurvySpline* spline)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySpline*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM_SPLINEMETA__CTOR_OFFSET))(this, spline);
		}

		::System::Void _ctor_1(::FluffyUnderware::Curvy::CurvySpline* spline, ::System::Boolean withName)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySpline*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM_SPLINEMETA__CTOR_1_OFFSET))(this, spline, withName);
		}

		static ::MoleMole::FloorSubsystem_SplineMeta op_Implicit(::FluffyUnderware::Curvy::CurvySpline* value)
		{
			return ((::MoleMole::FloorSubsystem_SplineMeta(*)(::FluffyUnderware::Curvy::CurvySpline*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM_SPLINEMETA_OP_IMPLICIT_OFFSET))(value);
		}

		static ::FluffyUnderware::Curvy::CurvySpline* op_Implicit_1(::MoleMole::FloorSubsystem_SplineMeta value)
		{
			return ((::FluffyUnderware::Curvy::CurvySpline*(*)(::MoleMole::FloorSubsystem_SplineMeta))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM_SPLINEMETA_OP_IMPLICIT_1_OFFSET))(value);
		}

		::System::Boolean Equals(::MoleMole::FloorSubsystem_SplineMeta other)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::FloorSubsystem_SplineMeta))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM_SPLINEMETA_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM_SPLINEMETA_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM_SPLINEMETA_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::MoleMole::FloorSubsystem_SplineMeta left, ::MoleMole::FloorSubsystem_SplineMeta right)
		{
			return ((::System::Boolean(*)(::MoleMole::FloorSubsystem_SplineMeta, ::MoleMole::FloorSubsystem_SplineMeta))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM_SPLINEMETA_OP_EQUALITY_OFFSET))(left, right);
		}

		static ::System::Boolean op_Inequality(::MoleMole::FloorSubsystem_SplineMeta left, ::MoleMole::FloorSubsystem_SplineMeta right)
		{
			return ((::System::Boolean(*)(::MoleMole::FloorSubsystem_SplineMeta, ::MoleMole::FloorSubsystem_SplineMeta))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM_SPLINEMETA_OP_INEQUALITY_OFFSET))(left, right);
		}

		::System::Boolean __base_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM_SPLINEMETA___BASE_EQUALS_OFFSET))(this, P0);
		}

		::System::Int32 __base_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM_SPLINEMETA___BASE_GETHASHCODE_OFFSET))(this);
		}
	};
}
