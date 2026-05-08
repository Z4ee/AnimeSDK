#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FluffyUnderware::Curvy { class CurvySplineSegment; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T> class Predicate_1; }

#define FLUFFYUNDERWARE_CURVY_CURVYSPLINE_DIRTINESSMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BE38A40)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINE_DIRTINESSMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE38A80)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINE_DIRTINESSMANAGER___C__SYNCHRONIZESPLINESWITHNULLCPS_B__39_0_OFFSET UNITYSDK_OFFSET(0x1BE38B50)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINE_DIRTINESSMANAGER___C___CTOR_B__21_0_OFFSET UNITYSDK_OFFSET(0x1BE38A90)

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int CurvySpline_DirtinessManager___c_TypeDefinitionIndex = 37218;

	class CurvySpline_DirtinessManager___c : public ::System::Object
	{
	public:
		static ::FluffyUnderware::Curvy::CurvySpline_DirtinessManager___c** StaticGet___9()
		{
			return (::FluffyUnderware::Curvy::CurvySpline_DirtinessManager___c**)Il2CppClass::FromTypeDefinitionIndex(CurvySpline_DirtinessManager___c_TypeDefinitionIndex)->GetStaticField(0x27650);
		}
		static ::System::Action_3<::FluffyUnderware::Curvy::CurvySplineSegment*, ::System::Int32, ::System::Int32>** StaticGet___9__21_0()
		{
			return (::System::Action_3<::FluffyUnderware::Curvy::CurvySplineSegment*, ::System::Int32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(CurvySpline_DirtinessManager___c_TypeDefinitionIndex)->GetStaticField(0x27658);
		}
		static ::System::Predicate_1<::FluffyUnderware::Curvy::CurvySplineSegment*>** StaticGet___9__39_0()
		{
			return (::System::Predicate_1<::FluffyUnderware::Curvy::CurvySplineSegment*>**)Il2CppClass::FromTypeDefinitionIndex(CurvySpline_DirtinessManager___c_TypeDefinitionIndex)->GetStaticField(0x27660);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINE_DIRTINESSMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINE_DIRTINESSMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Void __ctor_b__21_0(::FluffyUnderware::Curvy::CurvySplineSegment* controlPoint, ::System::Int32 cpIndex, ::System::Int32 cpsCount)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySplineSegment*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINE_DIRTINESSMANAGER___C___CTOR_B__21_0_OFFSET))(this, controlPoint, cpIndex, cpsCount);
		}

		::System::Boolean _SynchronizeSplinesWithNullCps_b__39_0(::FluffyUnderware::Curvy::CurvySplineSegment* cp)
		{
			return ((::System::Boolean(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINE_DIRTINESSMANAGER___C__SYNCHRONIZESPLINESWITHNULLCPS_B__39_0_OFFSET))(this, cp);
		}
	};
}
