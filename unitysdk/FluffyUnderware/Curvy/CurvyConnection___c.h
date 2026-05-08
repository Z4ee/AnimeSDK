#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FluffyUnderware::Curvy { class CurvySplineSegment; }
namespace System { template <typename T> class Predicate_1; }

#define FLUFFYUNDERWARE_CURVY_CURVYCONNECTION___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C3616F0)
#define FLUFFYUNDERWARE_CURVY_CURVYCONNECTION___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C361730)
#define FLUFFYUNDERWARE_CURVY_CURVYCONNECTION___C__ONSCENELOADED_B__31_0_OFFSET UNITYSDK_OFFSET(0x1C361750)
#define FLUFFYUNDERWARE_CURVY_CURVYCONNECTION___C__REMOVENULLCPS_B__25_0_OFFSET UNITYSDK_OFFSET(0x1C361740)

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int CurvyConnection___c_TypeDefinitionIndex = 37209;

	class CurvyConnection___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::FluffyUnderware::Curvy::CurvySplineSegment*>** StaticGet___9__31_0()
		{
			return (::System::Predicate_1<::FluffyUnderware::Curvy::CurvySplineSegment*>**)Il2CppClass::FromTypeDefinitionIndex(CurvyConnection___c_TypeDefinitionIndex)->GetStaticField(0x27890);
		}
		static ::FluffyUnderware::Curvy::CurvyConnection___c** StaticGet___9()
		{
			return (::FluffyUnderware::Curvy::CurvyConnection___c**)Il2CppClass::FromTypeDefinitionIndex(CurvyConnection___c_TypeDefinitionIndex)->GetStaticField(0x27898);
		}
		static ::System::Predicate_1<::FluffyUnderware::Curvy::CurvySplineSegment*>** StaticGet___9__25_0()
		{
			return (::System::Predicate_1<::FluffyUnderware::Curvy::CurvySplineSegment*>**)Il2CppClass::FromTypeDefinitionIndex(CurvyConnection___c_TypeDefinitionIndex)->GetStaticField(0x278A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYCONNECTION___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYCONNECTION___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _RemoveNullCPs_b__25_0(::FluffyUnderware::Curvy::CurvySplineSegment* cp)
		{
			return ((::System::Boolean(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYCONNECTION___C__REMOVENULLCPS_B__25_0_OFFSET))(this, cp);
		}

		::System::Boolean _OnSceneLoaded_b__31_0(::FluffyUnderware::Curvy::CurvySplineSegment* cp)
		{
			return ((::System::Boolean(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYCONNECTION___C__ONSCENELOADED_B__31_0_OFFSET))(this, cp);
		}
	};
}
