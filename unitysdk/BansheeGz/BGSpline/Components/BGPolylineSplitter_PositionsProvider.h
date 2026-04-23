#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BansheeGz/BGSpline/Components/BGCcSplitterPolyline_PolylinePoint.h"
#include "unitysdk/BansheeGz/BGSpline/Components/BGCcSplitterPolyline_SplitModeEnum.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace BansheeGz::BGSpline::Components { class BGCcMath; }
namespace BansheeGz::BGSpline::Curve { class BGCurveBaseMath_SectionInfo; }
namespace BansheeGz::BGSpline::Curve { class BGCurveBaseMath_SectionPointInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGPOLYLINESPLITTER_POSITIONSPROVIDER_ADDFIRSTPOINTIFNEEDED_OFFSET UNITYSDK_OFFSET(0x17B9A090)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGPOLYLINESPLITTER_POSITIONSPROVIDER_ADDLASTPOINTIFNEEDED_OFFSET UNITYSDK_OFFSET(0x17B9A120)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGPOLYLINESPLITTER_POSITIONSPROVIDER_ADD_1_OFFSET UNITYSDK_OFFSET(0x17B9A340)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGPOLYLINESPLITTER_POSITIONSPROVIDER_ADD_OFFSET UNITYSDK_OFFSET(0x17B9A520)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGPOLYLINESPLITTER_POSITIONSPROVIDER_BUILD_OFFSET UNITYSDK_OFFSET(0x17B99AF0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGPOLYLINESPLITTER_POSITIONSPROVIDER_FILLIN_OFFSET UNITYSDK_OFFSET(0x17B9A6F0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGPOLYLINESPLITTER_POSITIONSPROVIDER_GET_DISTANCEMAX_OFFSET UNITYSDK_OFFSET(0x17B99AE0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGPOLYLINESPLITTER_POSITIONSPROVIDER_GET_DISTANCEMIN_OFFSET UNITYSDK_OFFSET(0x17B99AD0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGPOLYLINESPLITTER_POSITIONSPROVIDER_INIT_OFFSET UNITYSDK_OFFSET(0x17B99A50)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGPOLYLINESPLITTER_POSITIONSPROVIDER_SET_DISTANCEMAX_OFFSET UNITYSDK_OFFSET(0x17B99AC0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGPOLYLINESPLITTER_POSITIONSPROVIDER_SET_DISTANCEMIN_OFFSET UNITYSDK_OFFSET(0x17B99AB0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGPOLYLINESPLITTER_POSITIONSPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x17B9AC60)

namespace BansheeGz::BGSpline::Components
{
	inline static constexpr unsigned int BGPolylineSplitter_PositionsProvider_TypeDefinitionIndex = 33865;

	class BGPolylineSplitter_PositionsProvider : public ::System::Object
	{
	public:
		::BansheeGz::BGSpline::Components::BGCcMath* Math; // 0x10
		::System::Single distanceMin; // 0x18
		::System::Boolean DistanceMaxConstrained; // 0x1C
		::System::Boolean LastPointAdded; // 0x1D
		::System::Boolean DistanceMinConstrained; // 0x1E
		::System::Boolean calculatingTangents; // 0x1F
		::System::Single distanceMax; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGPOLYLINESPLITTER_POSITIONSPROVIDER__CTOR_OFFSET))(this);
		}

		::System::Single get_DistanceMin()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGPOLYLINESPLITTER_POSITIONSPROVIDER_GET_DISTANCEMIN_OFFSET))(this);
		}

		::System::Void set_DistanceMin(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGPOLYLINESPLITTER_POSITIONSPROVIDER_SET_DISTANCEMIN_OFFSET))(this, value);
		}

		::System::Single get_DistanceMax()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGPOLYLINESPLITTER_POSITIONSPROVIDER_GET_DISTANCEMAX_OFFSET))(this);
		}

		::System::Void set_DistanceMax(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGPOLYLINESPLITTER_POSITIONSPROVIDER_SET_DISTANCEMAX_OFFSET))(this, value);
		}

		::System::Void Init(::BansheeGz::BGSpline::Components::BGCcMath* math)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Components::BGCcMath*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGPOLYLINESPLITTER_POSITIONSPROVIDER_INIT_OFFSET))(this, math);
		}

		::System::Void Build(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* positions, ::System::Int32 straightLinesCount, ::Il2CppArray<::System::Boolean>* straightBits, ::System::Collections::Generic::List_1<::BansheeGz::BGSpline::Components::BGCcSplitterPolyline_PolylinePoint>* points)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Int32, ::Il2CppArray<::System::Boolean>*, ::System::Collections::Generic::List_1<::BansheeGz::BGSpline::Components::BGCcSplitterPolyline_PolylinePoint>*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGPOLYLINESPLITTER_POSITIONSPROVIDER_BUILD_OFFSET))(this, positions, straightLinesCount, straightBits, points);
		}

		::System::Void AddFirstPointIfNeeded(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* positions, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo* section, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionPointInfo* firstPointInRange, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionPointInfo* previousPoint, ::System::Collections::Generic::List_1<::BansheeGz::BGSpline::Components::BGCcSplitterPolyline_PolylinePoint>* points)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo*, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionPointInfo*, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionPointInfo*, ::System::Collections::Generic::List_1<::BansheeGz::BGSpline::Components::BGCcSplitterPolyline_PolylinePoint>*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGPOLYLINESPLITTER_POSITIONSPROVIDER_ADDFIRSTPOINTIFNEEDED_OFFSET))(this, positions, section, firstPointInRange, previousPoint, points);
		}

		::System::Boolean AddLastPointIfNeeded(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* positions, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo* section, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionPointInfo* currentPoint, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionPointInfo* previousPoint, ::System::Collections::Generic::List_1<::BansheeGz::BGSpline::Components::BGCcSplitterPolyline_PolylinePoint>* points)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo*, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionPointInfo*, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionPointInfo*, ::System::Collections::Generic::List_1<::BansheeGz::BGSpline::Components::BGCcSplitterPolyline_PolylinePoint>*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGPOLYLINESPLITTER_POSITIONSPROVIDER_ADDLASTPOINTIFNEEDED_OFFSET))(this, positions, section, currentPoint, previousPoint, points);
		}

		::System::Void Add(::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo* section, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* positions, ::System::Collections::Generic::List_1<::BansheeGz::BGSpline::Components::BGCcSplitterPolyline_PolylinePoint>* points, ::BansheeGz::BGSpline::Components::BGCcSplitterPolyline_PolylinePoint previousPoint, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionPointInfo* nextPoint, ::System::Single ratio)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::BansheeGz::BGSpline::Components::BGCcSplitterPolyline_PolylinePoint>*, ::BansheeGz::BGSpline::Components::BGCcSplitterPolyline_PolylinePoint, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionPointInfo*, ::System::Single))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGPOLYLINESPLITTER_POSITIONSPROVIDER_ADD_OFFSET))(this, section, positions, points, previousPoint, nextPoint, ratio);
		}

		::System::Void Add_1(::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo* section, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* positions, ::System::Collections::Generic::List_1<::BansheeGz::BGSpline::Components::BGCcSplitterPolyline_PolylinePoint>* points, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionPointInfo* previousPoint, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionPointInfo* nextPoint, ::System::Single ratio)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::BansheeGz::BGSpline::Components::BGCcSplitterPolyline_PolylinePoint>*, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionPointInfo*, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionPointInfo*, ::System::Single))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGPOLYLINESPLITTER_POSITIONSPROVIDER_ADD_1_OFFSET))(this, section, positions, points, previousPoint, nextPoint, ratio);
		}

		::System::Void FillIn(::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo* section, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* result, ::System::Int32 parts, ::System::Collections::Generic::List_1<::BansheeGz::BGSpline::Components::BGCcSplitterPolyline_PolylinePoint>* points)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Int32, ::System::Collections::Generic::List_1<::BansheeGz::BGSpline::Components::BGCcSplitterPolyline_PolylinePoint>*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGPOLYLINESPLITTER_POSITIONSPROVIDER_FILLIN_OFFSET))(this, section, result, parts, points);
		}
	};
}
