#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FluffyUnderware::Curvy { class CurvySpline; }

#define FLUFFYUNDERWARE_CURVY_CURVYSPLINE_SANITYCHECKER_CHECK_OFFSET UNITYSDK_OFFSET(0x1F408FA0)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINE_SANITYCHECKER_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F408F90)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINE_SANITYCHECKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F408F80)

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int CurvySpline_SanityChecker_TypeDefinitionIndex = 39670;

	class CurvySpline_SanityChecker : public ::System::Object
	{
	public:
		::FluffyUnderware::Curvy::CurvySpline* spline; // 0x10
		::System::Int32 sanityWaringLogsThisFrame; // 0x18
		::System::Int32 sanityErrorLogsThisFrame; // 0x1C

		::System::Void _ctor(::FluffyUnderware::Curvy::CurvySpline* spline)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySpline*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINE_SANITYCHECKER__CTOR_OFFSET))(this, spline);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINE_SANITYCHECKER_ONUPDATE_OFFSET))(this);
		}

		::System::Void Check()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINE_SANITYCHECKER_CHECK_OFFSET))(this);
		}
	};
}
