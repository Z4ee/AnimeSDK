#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BansheeGz/BGSpline/Curve/BGCurveBaseMath_Field.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_SECTIONPOINTINFO_GETFIELD_OFFSET UNITYSDK_OFFSET(0x1690DBC0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_SECTIONPOINTINFO_LERPTO_OFFSET UNITYSDK_OFFSET(0x1690DCA0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_SECTIONPOINTINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1690DD50)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_SECTIONPOINTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x16904A90)

namespace BansheeGz::BGSpline::Curve
{
	inline static constexpr unsigned int BGCurveBaseMath_SectionPointInfo_TypeDefinitionIndex = 34455;

	class BGCurveBaseMath_SectionPointInfo : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 Position; // 0x10
		::System::Single DistanceToSectionStart; // 0x1C
		::UnityEngine::Vector3 Tangent; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_SECTIONPOINTINFO__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetField(::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Field a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Field))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_SECTIONPOINTINFO_GETFIELD_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 LerpTo(::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Field a1, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionPointInfo* a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Field, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionPointInfo*, ::System::Single))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_SECTIONPOINTINFO_LERPTO_OFFSET))(this, a1, a2, a3);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_SECTIONPOINTINFO_TOSTRING_OFFSET))(this);
		}
	};
}
