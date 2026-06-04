#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BansheeGz/BGSpline/Curve/BGCurveBaseMath.h"

namespace BansheeGz::BGSpline::Curve { class BGCurve; }
namespace BansheeGz::BGSpline::Curve { class BGCurveBaseMath_Config; }
namespace BansheeGz::BGSpline::Curve { class BGCurveBaseMath_SectionInfo; }
namespace BansheeGz::BGSpline::Curve { class BGCurvePointI; }

#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEFORMULAMATH_AFTERINIT_OFFSET UNITYSDK_OFFSET(0x189663F0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEFORMULAMATH_CALCULATESPLITSECTION_OFFSET UNITYSDK_OFFSET(0x189668A0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEFORMULAMATH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18966820)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEFORMULAMATH__CTOR_OFFSET UNITYSDK_OFFSET(0x189663E0)

namespace BansheeGz::BGSpline::Curve
{
	inline static constexpr unsigned int BGCurveFormulaMath_TypeDefinitionIndex = 34091;

	class BGCurveFormulaMath : public ::BansheeGz::BGSpline::Curve::BGCurveBaseMath
	{
	public:
		::Il2CppArray<::System::Single>* bakedT; // 0x78
		::Il2CppArray<::System::Single>* bakedT3; // 0x80
		::Il2CppArray<::System::Single>* bakedTr2; // 0x88
		::Il2CppArray<::System::Single>* bakedTr3; // 0x90
		::Il2CppArray<::System::Single>* bakedT2xTrx3; // 0x98
		::Il2CppArray<::System::Single>* bakedTr2xTx3; // 0xA0
		::Il2CppArray<::System::Single>* bakedTr2x3; // 0xA8
		::Il2CppArray<::System::Single>* bakedTrx2; // 0xB0
		::Il2CppArray<::System::Single>* bakedTxTrx2; // 0xB8
		::Il2CppArray<::System::Single>* bakedTxTrx6; // 0xC0
		::Il2CppArray<::System::Single>* bakedT2; // 0xC8
		::Il2CppArray<::System::Single>* bakedTx2; // 0xD0
		::Il2CppArray<::System::Single>* bakedT2x3; // 0xD8

		::System::Void _ctor(::BansheeGz::BGSpline::Curve::BGCurve* a1, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Config* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurve*, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Config*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEFORMULAMATH__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void AfterInit(::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Config* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_Config*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEFORMULAMATH_AFTERINIT_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEFORMULAMATH_DISPOSE_OFFSET))(this);
		}

		::System::Void CalculateSplitSection(::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo* a1, ::BansheeGz::BGSpline::Curve::BGCurvePointI* a2, ::BansheeGz::BGSpline::Curve::BGCurvePointI* a3)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo*, ::BansheeGz::BGSpline::Curve::BGCurvePointI*, ::BansheeGz::BGSpline::Curve::BGCurvePointI*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEFORMULAMATH_CALCULATESPLITSECTION_OFFSET))(this, a1, a2, a3);
		}
	};
}
