#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace BansheeGz::BGSpline::Curve { class BGCurvePointComponent; }
namespace BansheeGz::BGSpline::Curve { class BGCurvePointGO; }
namespace BansheeGz::BGSpline::Curve { class BGCurvePointI; }

#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEREFERENCETOPOINT_GETREFERENCETOPOINT_OFFSET UNITYSDK_OFFSET(0x1C50DA60)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEREFERENCETOPOINT_GET_POINT_OFFSET UNITYSDK_OFFSET(0x1C529390)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEREFERENCETOPOINT_SET_POINT_OFFSET UNITYSDK_OFFSET(0x1C50DD50)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEREFERENCETOPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5293C0)

namespace BansheeGz::BGSpline::Curve
{
	inline static constexpr unsigned int BGCurveReferenceToPoint_TypeDefinitionIndex = 36024;

	class BGCurveReferenceToPoint : public ::UnityEngine::MonoBehaviour
	{
	public:
		::BansheeGz::BGSpline::Curve::BGCurvePointComponent* pointComponent; // 0x18
		::BansheeGz::BGSpline::Curve::BGCurvePointGO* pointGo; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEREFERENCETOPOINT__CTOR_OFFSET))(this);
		}

		::BansheeGz::BGSpline::Curve::BGCurvePointI* get_Point()
		{
			return ((::BansheeGz::BGSpline::Curve::BGCurvePointI*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEREFERENCETOPOINT_GET_POINT_OFFSET))(this);
		}

		::System::Void set_Point(::BansheeGz::BGSpline::Curve::BGCurvePointI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurvePointI*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEREFERENCETOPOINT_SET_POINT_OFFSET))(this, a1);
		}

		static ::BansheeGz::BGSpline::Curve::BGCurveReferenceToPoint* GetReferenceToPoint(::BansheeGz::BGSpline::Curve::BGCurvePointI* a1)
		{
			return ((::BansheeGz::BGSpline::Curve::BGCurveReferenceToPoint*(*)(::BansheeGz::BGSpline::Curve::BGCurvePointI*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEREFERENCETOPOINT_GETREFERENCETOPOINT_OFFSET))(a1);
		}
	};
}
