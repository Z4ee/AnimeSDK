#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BansheeGz/BGSpline/Curve/BGCurveBaseMath.h"

namespace BansheeGz::BGSpline::Curve { class BGCurve; }
namespace BansheeGz::BGSpline::Curve { class BGCurveAdaptiveMath_ConfigAdaptive; }
namespace BansheeGz::BGSpline::Curve { class BGCurveBaseMath_Config; }
namespace BansheeGz::BGSpline::Curve { class BGCurveBaseMath_SectionInfo; }
namespace BansheeGz::BGSpline::Curve { class BGCurvePointI; }
namespace System { class String; }

#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEADAPTIVEMATH_CALCULATESPLITSECTION_OFFSET UNITYSDK_OFFSET(0x16903CB0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEADAPTIVEMATH_INIT_OFFSET UNITYSDK_OFFSET(0x16902EC0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEADAPTIVEMATH_ISUSEDISTANCETOADJUSTTANGENTS_OFFSET UNITYSDK_OFFSET(0x16903CA0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEADAPTIVEMATH_RECURSIVECUBICSPLIT_OFFSET UNITYSDK_OFFSET(0x16904AA0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEADAPTIVEMATH_RECURSIVEQUADRATICSPLIT_OFFSET UNITYSDK_OFFSET(0x169052B0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEADAPTIVEMATH_RESET_OFFSET UNITYSDK_OFFSET(0x169032B0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEADAPTIVEMATH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x16905940)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEADAPTIVEMATH__CTOR_OFFSET UNITYSDK_OFFSET(0x168E25C0)

namespace BansheeGz::BGSpline::Curve
{
	inline static constexpr unsigned int BGCurveAdaptiveMath_TypeDefinitionIndex = 34448;

	class BGCurveAdaptiveMath : public ::BansheeGz::BGSpline::Curve::BGCurveBaseMath
	{
	public:
		// static const ::System::Single MinTolerance; // 0x0
		// static const ::System::Single MaxTolerance; // 0x0
		// static const ::System::Single DistanceTolerance; // 0x0
		// static const ::System::Int32 RecursionLimit = 0x18; // 0x0
		::System::Single toleranceRatio; // 0x78
		::System::Boolean ignoreSectionChangedCheckOverride; // 0x7C
		::System::Single toleranceRatioSquared; // 0x80
		::System::Single tolerance; // 0x84

		::System::Void _ctor(::BansheeGz::BGSpline::Curve::BGCurve* a1, ::BansheeGz::BGSpline::Curve::BGCurveAdaptiveMath_ConfigAdaptive* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurve*, ::BansheeGz::BGSpline::Curve::BGCurveAdaptiveMath_ConfigAdaptive*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEADAPTIVEMATH__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Init(::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Config* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Config*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEADAPTIVEMATH_INIT_OFFSET))(this, a1);
		}

		::System::Boolean Reset(::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo* a1, ::BansheeGz::BGSpline::Curve::BGCurvePointI* a2, ::BansheeGz::BGSpline::Curve::BGCurvePointI* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo*, ::BansheeGz::BGSpline::Curve::BGCurvePointI*, ::BansheeGz::BGSpline::Curve::BGCurvePointI*, ::System::Int32))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEADAPTIVEMATH_RESET_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean IsUseDistanceToAdjustTangents(::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo* a1, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo*, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEADAPTIVEMATH_ISUSEDISTANCETOADJUSTTANGENTS_OFFSET))(this, a1, a2);
		}

		::System::Void CalculateSplitSection(::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo* a1, ::BansheeGz::BGSpline::Curve::BGCurvePointI* a2, ::BansheeGz::BGSpline::Curve::BGCurvePointI* a3)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo*, ::BansheeGz::BGSpline::Curve::BGCurvePointI*, ::BansheeGz::BGSpline::Curve::BGCurvePointI*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEADAPTIVEMATH_CALCULATESPLITSECTION_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RecursiveQuadraticSplit(::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo* a1, ::System::Double a2, ::System::Double a3, ::System::Double a4, ::System::Double a5, ::System::Double a6, ::System::Double a7, ::System::Double a8, ::System::Double a9, ::System::Double a10, ::System::Int32 a11, ::System::Boolean a12, ::System::Boolean a13, ::System::Double a14, ::System::Double a15)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo*, ::System::Double, ::System::Double, ::System::Double, ::System::Double, ::System::Double, ::System::Double, ::System::Double, ::System::Double, ::System::Double, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEADAPTIVEMATH_RECURSIVEQUADRATICSPLIT_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
		}

		::System::Void RecursiveCubicSplit(::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo* a1, ::System::Double a2, ::System::Double a3, ::System::Double a4, ::System::Double a5, ::System::Double a6, ::System::Double a7, ::System::Double a8, ::System::Double a9, ::System::Double a10, ::System::Double a11, ::System::Double a12, ::System::Double a13, ::System::Int32 a14, ::System::Boolean a15, ::System::Double a16, ::System::Double a17)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo*, ::System::Double, ::System::Double, ::System::Double, ::System::Double, ::System::Double, ::System::Double, ::System::Double, ::System::Double, ::System::Double, ::System::Double, ::System::Double, ::System::Double, ::System::Int32, ::System::Boolean, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEADAPTIVEMATH_RECURSIVECUBICSPLIT_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEADAPTIVEMATH_TOSTRING_OFFSET))(this);
		}
	};
}
