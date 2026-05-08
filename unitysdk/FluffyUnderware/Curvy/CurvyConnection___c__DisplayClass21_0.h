#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FluffyUnderware::Curvy { class CurvySplineSegment; }

#define FLUFFYUNDERWARE_CURVY_CURVYCONNECTION___C__DISPLAYCLASS21_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C315F50)
#define FLUFFYUNDERWARE_CURVY_CURVYCONNECTION___C__DISPLAYCLASS21_0__OTHERCONTROLPOINTS_B__0_OFFSET UNITYSDK_OFFSET(0x1C315F60)

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int CurvyConnection___c__DisplayClass21_0_TypeDefinitionIndex = 37208;

	class CurvyConnection___c__DisplayClass21_0 : public ::System::Object
	{
	public:
		::FluffyUnderware::Curvy::CurvySplineSegment* source; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYCONNECTION___C__DISPLAYCLASS21_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _OtherControlPoints_b__0(::FluffyUnderware::Curvy::CurvySplineSegment* cp)
		{
			return ((::System::Boolean(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYCONNECTION___C__DISPLAYCLASS21_0__OTHERCONTROLPOINTS_B__0_OFFSET))(this, cp);
		}
	};
}
