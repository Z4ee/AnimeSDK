#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BansheeGz/BGSpline/Curve/BGCurvePoint_ControlTypeEnum.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace BansheeGz::BGSpline::Curve { class BGCurveBaseMath_SectionPointInfo; }
namespace BansheeGz::BGSpline::Curve { class BGCurvePointI; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_SECTIONINFO_CALCBYDISTANCE_OFFSET UNITYSDK_OFFSET(0x183A0A80)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_SECTIONINFO_FINDPOINTINDEXBYDISTANCE_OFFSET UNITYSDK_OFFSET(0x183BEF20)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_SECTIONINFO_GET_DISTANCE_OFFSET UNITYSDK_OFFSET(0x1838A830)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_SECTIONINFO_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1839FF80)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_SECTIONINFO_GET_POINTSCOUNT_OFFSET UNITYSDK_OFFSET(0x1839FFD0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_SECTIONINFO_GET_POINTS_OFFSET UNITYSDK_OFFSET(0x183BEE50)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_SECTIONINFO_RESET_OFFSET UNITYSDK_OFFSET(0x183B4830)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_SECTIONINFO_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x183BEED0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_SECTIONINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x183BEE60)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_SECTIONINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x183BBCC0)

namespace BansheeGz::BGSpline::Curve
{
	inline static constexpr unsigned int BGCurveBaseMath_SectionInfo_TypeDefinitionIndex = 35314;

	class BGCurveBaseMath_SectionInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionPointInfo*>* points; // 0x10
		::UnityEngine::Vector3 OriginalFirstPointTangent; // 0x18
		::UnityEngine::Vector3 OriginalToControl; // 0x24
		::BansheeGz::BGSpline::Curve::BGCurvePoint_ControlTypeEnum OriginalToControlType; // 0x30
		::System::Single DistanceFromStartToOrigin; // 0x34
		::UnityEngine::Vector3 OriginalLastPointTangent; // 0x38
		::UnityEngine::Vector3 OriginalTo; // 0x44
		::System::Single DistanceFromEndToOrigin; // 0x50
		::BansheeGz::BGSpline::Curve::BGCurvePoint_ControlTypeEnum OriginalFromControlType; // 0x54
		::UnityEngine::Vector3 OriginalFromControl; // 0x58
		::UnityEngine::Vector3 OriginalFrom; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_SECTIONINFO__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionPointInfo*>* get_Points()
		{
			return ((::System::Collections::Generic::List_1<::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionPointInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_SECTIONINFO_GET_POINTS_OFFSET))(this);
		}

		::System::Int32 get_PointsCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_SECTIONINFO_GET_POINTSCOUNT_OFFSET))(this);
		}

		::System::Single get_Distance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_SECTIONINFO_GET_DISTANCE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_SECTIONINFO_TOSTRING_OFFSET))(this);
		}

		::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionPointInfo* get_Item(::System::Int32 a1)
		{
			return ((::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionPointInfo*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_SECTIONINFO_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void set_Item(::System::Int32 a1, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionPointInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionPointInfo*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_SECTIONINFO_SET_ITEM_OFFSET))(this, a1, a2);
		}

		::System::Boolean Reset(::BansheeGz::BGSpline::Curve::BGCurvePointI* a1, ::BansheeGz::BGSpline::Curve::BGCurvePointI* a2, ::System::Int32 a3, ::System::Boolean a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurvePointI*, ::BansheeGz::BGSpline::Curve::BGCurvePointI*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_SECTIONINFO_RESET_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 FindPointIndexByDistance(::System::Single a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_SECTIONINFO_FINDPOINTINDEXBYDISTANCE_OFFSET))(this, a1);
		}

		::System::Void CalcByDistance(::System::Single a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_SECTIONINFO_CALCBYDISTANCE_OFFSET))(this, a1, a2, a3, a4, a5);
		}
	};
}
