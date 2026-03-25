#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BansheeGz/BGSpline/Curve/BGCurvePoint_ControlTypeEnum.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace BansheeGz::BGSpline::Curve { class BGCurveBaseMath_SectionPointInfo; }
namespace BansheeGz::BGSpline::Curve { class BGCurvePointI; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_SECTIONINFO_CALCBYDISTANCE_OFFSET UNITYSDK_OFFSET(0x1656FBB0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_SECTIONINFO_FINDPOINTINDEXBYDISTANCE_OFFSET UNITYSDK_OFFSET(0x1658AB90)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_SECTIONINFO_GET_DISTANCE_OFFSET UNITYSDK_OFFSET(0x1655C840)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_SECTIONINFO_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1656F320)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_SECTIONINFO_GET_POINTSCOUNT_OFFSET UNITYSDK_OFFSET(0x1656F350)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_SECTIONINFO_GET_POINTS_OFFSET UNITYSDK_OFFSET(0x1658AAC0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_SECTIONINFO_RESET_OFFSET UNITYSDK_OFFSET(0x16581D70)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_SECTIONINFO_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1658AB40)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_SECTIONINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1658AAD0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_SECTIONINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x16587F40)

namespace BansheeGz::BGSpline::Curve
{
	inline static constexpr unsigned int BGCurveBaseMath_SectionInfo_TypeDefinitionIndex = 28177;

	class BGCurveBaseMath_SectionInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionPointInfo*>* points; // 0x10
		::UnityEngine::Vector3 OriginalLastPointTangent; // 0x18
		::BansheeGz::BGSpline::Curve::BGCurvePoint_ControlTypeEnum OriginalToControlType; // 0x24
		::UnityEngine::Vector3 OriginalFrom; // 0x28
		::System::Single DistanceFromEndToOrigin; // 0x34
		::UnityEngine::Vector3 OriginalTo; // 0x38
		::UnityEngine::Vector3 OriginalFirstPointTangent; // 0x44
		::BansheeGz::BGSpline::Curve::BGCurvePoint_ControlTypeEnum OriginalFromControlType; // 0x50
		::System::Single DistanceFromStartToOrigin; // 0x54
		::UnityEngine::Vector3 OriginalFromControl; // 0x58
		::UnityEngine::Vector3 OriginalToControl; // 0x64

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

		::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionPointInfo* get_Item(::System::Int32 i)
		{
			return ((::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionPointInfo*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_SECTIONINFO_GET_ITEM_OFFSET))(this, i);
		}

		::System::Void set_Item(::System::Int32 i, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionPointInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionPointInfo*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_SECTIONINFO_SET_ITEM_OFFSET))(this, i, value);
		}

		::System::Boolean Reset(::BansheeGz::BGSpline::Curve::BGCurvePointI* fromPoint, ::BansheeGz::BGSpline::Curve::BGCurvePointI* toPoint, ::System::Int32 pointsCount, ::System::Boolean skipCheck)
		{
			return ((::System::Boolean(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurvePointI*, ::BansheeGz::BGSpline::Curve::BGCurvePointI*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_SECTIONINFO_RESET_OFFSET))(this, fromPoint, toPoint, pointsCount, skipCheck);
		}

		::System::Int32 FindPointIndexByDistance(::System::Single distanceWithinSection)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_SECTIONINFO_FINDPOINTINDEXBYDISTANCE_OFFSET))(this, distanceWithinSection);
		}

		::System::Void CalcByDistance(::System::Single distanceWithinSection, ::UnityEngine::Vector3& position, ::UnityEngine::Vector3& tangent, ::System::Boolean calculatePosition, ::System::Boolean calculateTangent)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVEBASEMATH_SECTIONINFO_CALCBYDISTANCE_OFFSET))(this, distanceWithinSection, position, tangent, calculatePosition, calculateTangent);
		}
	};
}
