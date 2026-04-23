#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BansheeGz/BGSpline/Curve/BGCurveBaseMath.h"

namespace BansheeGz::BGSpline::Curve { class BGCurve; }
namespace BansheeGz::BGSpline::Curve { class BGCurveAdaptiveMath_ConfigAdaptive; }
namespace BansheeGz::BGSpline::Curve { class BGCurveBaseMath_Config; }
namespace BansheeGz::BGSpline::Curve { class BGCurveBaseMath_SectionInfo; }
namespace BansheeGz::BGSpline::Curve { class BGCurvePointI; }
namespace System { class String; }

#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEADAPTIVEMATH_CALCULATESPLITSECTION_OFFSET UNITYSDK_OFFSET(0x17BAD100)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEADAPTIVEMATH_INIT_OFFSET UNITYSDK_OFFSET(0x17BAC6D0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEADAPTIVEMATH_ISUSEDISTANCETOADJUSTTANGENTS_OFFSET UNITYSDK_OFFSET(0x17BAD0F0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEADAPTIVEMATH_RECURSIVECUBICSPLIT_OFFSET UNITYSDK_OFFSET(0x17BADCE0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEADAPTIVEMATH_RECURSIVEQUADRATICSPLIT_OFFSET UNITYSDK_OFFSET(0x17BAE480)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEADAPTIVEMATH_RESET_OFFSET UNITYSDK_OFFSET(0x17BAC9D0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEADAPTIVEMATH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17BAEA80)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEADAPTIVEMATH__CTOR_OFFSET UNITYSDK_OFFSET(0x17B8EE90)

namespace BansheeGz::BGSpline::Curve
{
	inline static constexpr unsigned int BGCurveAdaptiveMath_TypeDefinitionIndex = 33795;

	class BGCurveAdaptiveMath : public ::BansheeGz::BGSpline::Curve::BGCurveBaseMath
	{
	public:
		// static const ::System::Single MinTolerance; // 0x0
		// static const ::System::Single MaxTolerance; // 0x0
		// static const ::System::Single DistanceTolerance; // 0x0
		// static const ::System::Int32 RecursionLimit = 0x18; // 0x0
		::System::Single toleranceRatio; // 0x78
		::System::Single toleranceRatioSquared; // 0x7C
		::System::Single tolerance; // 0x80
		::System::Boolean ignoreSectionChangedCheckOverride; // 0x84

		::System::Void _ctor(::BansheeGz::BGSpline::Curve::BGCurve* curve, ::BansheeGz::BGSpline::Curve::BGCurveAdaptiveMath_ConfigAdaptive* config)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurve*, ::BansheeGz::BGSpline::Curve::BGCurveAdaptiveMath_ConfigAdaptive*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEADAPTIVEMATH__CTOR_OFFSET))(this, curve, config);
		}

		::System::Void Init(::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Config* config)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Config*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEADAPTIVEMATH_INIT_OFFSET))(this, config);
		}

		::System::Boolean Reset(::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo* section, ::BansheeGz::BGSpline::Curve::BGCurvePointI* from, ::BansheeGz::BGSpline::Curve::BGCurvePointI* to, ::System::Int32 pointsCount)
		{
			return ((::System::Boolean(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo*, ::BansheeGz::BGSpline::Curve::BGCurvePointI*, ::BansheeGz::BGSpline::Curve::BGCurvePointI*, ::System::Int32))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEADAPTIVEMATH_RESET_OFFSET))(this, section, from, to, pointsCount);
		}

		::System::Boolean IsUseDistanceToAdjustTangents(::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo* section, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo* prevSection)
		{
			return ((::System::Boolean(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo*, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEADAPTIVEMATH_ISUSEDISTANCETOADJUSTTANGENTS_OFFSET))(this, section, prevSection);
		}

		::System::Void CalculateSplitSection(::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo* section, ::BansheeGz::BGSpline::Curve::BGCurvePointI* from, ::BansheeGz::BGSpline::Curve::BGCurvePointI* to)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo*, ::BansheeGz::BGSpline::Curve::BGCurvePointI*, ::BansheeGz::BGSpline::Curve::BGCurvePointI*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEADAPTIVEMATH_CALCULATESPLITSECTION_OFFSET))(this, section, from, to);
		}

		::System::Void RecursiveQuadraticSplit(::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo* section, ::System::Double x0, ::System::Double y0, ::System::Double z0, ::System::Double x1, ::System::Double y1, ::System::Double z1, ::System::Double x2, ::System::Double y2, ::System::Double z2, ::System::Int32 level, ::System::Boolean useSecond, ::System::Boolean calcTangents, ::System::Double fromT, ::System::Double toT)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo*, ::System::Double, ::System::Double, ::System::Double, ::System::Double, ::System::Double, ::System::Double, ::System::Double, ::System::Double, ::System::Double, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEADAPTIVEMATH_RECURSIVEQUADRATICSPLIT_OFFSET))(this, section, x0, y0, z0, x1, y1, z1, x2, y2, z2, level, useSecond, calcTangents, fromT, toT);
		}

		::System::Void RecursiveCubicSplit(::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo* section, ::System::Double x0, ::System::Double y0, ::System::Double z0, ::System::Double x1, ::System::Double y1, ::System::Double z1, ::System::Double x2, ::System::Double y2, ::System::Double z2, ::System::Double x3, ::System::Double y3, ::System::Double z3, ::System::Int32 level, ::System::Boolean calcTangents, ::System::Double fromT, ::System::Double toT)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo*, ::System::Double, ::System::Double, ::System::Double, ::System::Double, ::System::Double, ::System::Double, ::System::Double, ::System::Double, ::System::Double, ::System::Double, ::System::Double, ::System::Double, ::System::Int32, ::System::Boolean, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEADAPTIVEMATH_RECURSIVECUBICSPLIT_OFFSET))(this, section, x0, y0, z0, x1, y1, z1, x2, y2, z2, x3, y3, z3, level, calcTangents, fromT, toT);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEADAPTIVEMATH_TOSTRING_OFFSET))(this);
		}
	};
}
