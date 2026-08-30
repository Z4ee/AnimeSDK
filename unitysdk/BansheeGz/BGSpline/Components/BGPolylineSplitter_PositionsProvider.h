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

#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGPOLYLINESPLITTER_POSITIONSPROVIDER_ADDFIRSTPOINTIFNEEDED_OFFSET UNITYSDK_OFFSET(0x1BFEE050)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGPOLYLINESPLITTER_POSITIONSPROVIDER_ADDLASTPOINTIFNEEDED_OFFSET UNITYSDK_OFFSET(0x1BFEE0E0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGPOLYLINESPLITTER_POSITIONSPROVIDER_ADD_1_OFFSET UNITYSDK_OFFSET(0x1BFEE340)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGPOLYLINESPLITTER_POSITIONSPROVIDER_ADD_OFFSET UNITYSDK_OFFSET(0x1BFEE5B0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGPOLYLINESPLITTER_POSITIONSPROVIDER_BUILD_OFFSET UNITYSDK_OFFSET(0x1BFED890)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGPOLYLINESPLITTER_POSITIONSPROVIDER_FILLIN_OFFSET UNITYSDK_OFFSET(0x1BFEE810)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGPOLYLINESPLITTER_POSITIONSPROVIDER_GET_DISTANCEMAX_OFFSET UNITYSDK_OFFSET(0x1BFED880)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGPOLYLINESPLITTER_POSITIONSPROVIDER_GET_DISTANCEMIN_OFFSET UNITYSDK_OFFSET(0x1BFED870)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGPOLYLINESPLITTER_POSITIONSPROVIDER_INIT_OFFSET UNITYSDK_OFFSET(0x1BFED790)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGPOLYLINESPLITTER_POSITIONSPROVIDER_SET_DISTANCEMAX_OFFSET UNITYSDK_OFFSET(0x1BFED860)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGPOLYLINESPLITTER_POSITIONSPROVIDER_SET_DISTANCEMIN_OFFSET UNITYSDK_OFFSET(0x1BFED850)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGPOLYLINESPLITTER_POSITIONSPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BFEEED0)

namespace BansheeGz::BGSpline::Components
{
	inline static constexpr unsigned int BGPolylineSplitter_PositionsProvider_TypeDefinitionIndex = 35379;

	class BGPolylineSplitter_PositionsProvider : public ::System::Object
	{
	public:
		::BansheeGz::BGSpline::Components::BGCcMath* Math; // 0x10
		::System::Boolean calculatingTangents; // 0x18
		::System::Boolean LastPointAdded; // 0x19
		::System::Boolean DistanceMinConstrained; // 0x1A
		::System::Boolean DistanceMaxConstrained; // 0x1B
		::System::Single distanceMin; // 0x1C
		::System::Single distanceMax; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGPOLYLINESPLITTER_POSITIONSPROVIDER__CTOR_OFFSET))(this);
		}

		::System::Single get_DistanceMin()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGPOLYLINESPLITTER_POSITIONSPROVIDER_GET_DISTANCEMIN_OFFSET))(this);
		}

		::System::Void set_DistanceMin(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGPOLYLINESPLITTER_POSITIONSPROVIDER_SET_DISTANCEMIN_OFFSET))(this, a1);
		}

		::System::Single get_DistanceMax()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGPOLYLINESPLITTER_POSITIONSPROVIDER_GET_DISTANCEMAX_OFFSET))(this);
		}

		::System::Void set_DistanceMax(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGPOLYLINESPLITTER_POSITIONSPROVIDER_SET_DISTANCEMAX_OFFSET))(this, a1);
		}

		::System::Void Init(::BansheeGz::BGSpline::Components::BGCcMath* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Components::BGCcMath*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGPOLYLINESPLITTER_POSITIONSPROVIDER_INIT_OFFSET))(this, a1);
		}

		::System::Void Build(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1, ::System::Int32 a2, ::Il2CppArray<::System::Boolean>* a3, ::System::Collections::Generic::List_1<::BansheeGz::BGSpline::Components::BGCcSplitterPolyline_PolylinePoint>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Int32, ::Il2CppArray<::System::Boolean>*, ::System::Collections::Generic::List_1<::BansheeGz::BGSpline::Components::BGCcSplitterPolyline_PolylinePoint>*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGPOLYLINESPLITTER_POSITIONSPROVIDER_BUILD_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void AddFirstPointIfNeeded(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo* a2, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionPointInfo* a3, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionPointInfo* a4, ::System::Collections::Generic::List_1<::BansheeGz::BGSpline::Components::BGCcSplitterPolyline_PolylinePoint>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo*, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionPointInfo*, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionPointInfo*, ::System::Collections::Generic::List_1<::BansheeGz::BGSpline::Components::BGCcSplitterPolyline_PolylinePoint>*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGPOLYLINESPLITTER_POSITIONSPROVIDER_ADDFIRSTPOINTIFNEEDED_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean AddLastPointIfNeeded(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo* a2, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionPointInfo* a3, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionPointInfo* a4, ::System::Collections::Generic::List_1<::BansheeGz::BGSpline::Components::BGCcSplitterPolyline_PolylinePoint>* a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo*, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionPointInfo*, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionPointInfo*, ::System::Collections::Generic::List_1<::BansheeGz::BGSpline::Components::BGCcSplitterPolyline_PolylinePoint>*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGPOLYLINESPLITTER_POSITIONSPROVIDER_ADDLASTPOINTIFNEEDED_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Add(::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo* a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a2, ::System::Collections::Generic::List_1<::BansheeGz::BGSpline::Components::BGCcSplitterPolyline_PolylinePoint>* a3, ::BansheeGz::BGSpline::Components::BGCcSplitterPolyline_PolylinePoint a4, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionPointInfo* a5, ::System::Single a6)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::BansheeGz::BGSpline::Components::BGCcSplitterPolyline_PolylinePoint>*, ::BansheeGz::BGSpline::Components::BGCcSplitterPolyline_PolylinePoint, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionPointInfo*, ::System::Single))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGPOLYLINESPLITTER_POSITIONSPROVIDER_ADD_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void Add_1(::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo* a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a2, ::System::Collections::Generic::List_1<::BansheeGz::BGSpline::Components::BGCcSplitterPolyline_PolylinePoint>* a3, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionPointInfo* a4, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionPointInfo* a5, ::System::Single a6)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::BansheeGz::BGSpline::Components::BGCcSplitterPolyline_PolylinePoint>*, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionPointInfo*, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionPointInfo*, ::System::Single))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGPOLYLINESPLITTER_POSITIONSPROVIDER_ADD_1_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void FillIn(::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo* a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a2, ::System::Int32 a3, ::System::Collections::Generic::List_1<::BansheeGz::BGSpline::Components::BGCcSplitterPolyline_PolylinePoint>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Int32, ::System::Collections::Generic::List_1<::BansheeGz::BGSpline::Components::BGCcSplitterPolyline_PolylinePoint>*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGPOLYLINESPLITTER_POSITIONSPROVIDER_FILLIN_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
