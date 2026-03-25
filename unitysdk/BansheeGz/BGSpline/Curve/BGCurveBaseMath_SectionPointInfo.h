#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BansheeGz/BGSpline/Curve/BGCurveBaseMath_Field.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_SECTIONPOINTINFO_GETFIELD_OFFSET UNITYSDK_OFFSET(0x1658AC80)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_SECTIONPOINTINFO_LERPTO_OFFSET UNITYSDK_OFFSET(0x1658AD70)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_SECTIONPOINTINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1658AE20)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_SECTIONPOINTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x16582FD0)

namespace BansheeGz::BGSpline::Curve
{
	inline static constexpr unsigned int BGCurveBaseMath_SectionPointInfo_TypeDefinitionIndex = 28178;

	class BGCurveBaseMath_SectionPointInfo : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 Tangent; // 0x10
		::UnityEngine::Vector3 Position; // 0x1C
		::System::Single DistanceToSectionStart; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_SECTIONPOINTINFO__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetField(::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Field field)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Field))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_SECTIONPOINTINFO_GETFIELD_OFFSET))(this, field);
		}

		::UnityEngine::Vector3 LerpTo(::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Field field, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionPointInfo* to, ::System::Single ratio)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Field, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionPointInfo*, ::System::Single))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_SECTIONPOINTINFO_LERPTO_OFFSET))(this, field, to, ratio);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_SECTIONPOINTINFO_TOSTRING_OFFSET))(this);
		}
	};
}
