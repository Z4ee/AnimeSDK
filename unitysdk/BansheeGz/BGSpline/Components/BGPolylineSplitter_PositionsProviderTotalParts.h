#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BansheeGz/BGSpline/Components/BGCcSplitterPolyline_PolylinePoint.h"
#include "unitysdk/BansheeGz/BGSpline/Components/BGCcSplitterPolyline_SplitModeEnum.h"
#include "unitysdk/BansheeGz/BGSpline/Components/BGPolylineSplitter_PositionsProvider.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace BansheeGz::BGSpline::Components { class BGCcMath; }
namespace BansheeGz::BGSpline::Curve { class BGCurveBaseMath_SectionInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGPOLYLINESPLITTER_POSITIONSPROVIDERTOTALPARTS_BUILD_OFFSET UNITYSDK_OFFSET(0x17B9AFC0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGPOLYLINESPLITTER_POSITIONSPROVIDERTOTALPARTS_COMPLY_OFFSET UNITYSDK_OFFSET(0x17B9AFB0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGPOLYLINESPLITTER_POSITIONSPROVIDERTOTALPARTS_FILLINSPLITSECTION_OFFSET UNITYSDK_OFFSET(0x17B9B9C0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGPOLYLINESPLITTER_POSITIONSPROVIDERTOTALPARTS_INIT_OFFSET UNITYSDK_OFFSET(0x17B99950)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGPOLYLINESPLITTER_POSITIONSPROVIDERTOTALPARTS__CTOR_OFFSET UNITYSDK_OFFSET(0x17B99940)

namespace BansheeGz::BGSpline::Components
{
	inline static constexpr unsigned int BGPolylineSplitter_PositionsProviderTotalParts_TypeDefinitionIndex = 33866;

	class BGPolylineSplitter_PositionsProviderTotalParts : public ::BansheeGz::BGSpline::Components::BGPolylineSplitter_PositionsProvider
	{
	public:
		::System::Int32 parts; // 0x28
		::System::Int32 reminderForCurved; // 0x2C
		::System::Int32 partsPerSectionFloor; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGPOLYLINESPLITTER_POSITIONSPROVIDERTOTALPARTS__CTOR_OFFSET))(this);
		}

		::System::Void Init(::BansheeGz::BGSpline::Components::BGCcMath* math, ::System::Int32 parts)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Components::BGCcMath*, ::System::Int32))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGPOLYLINESPLITTER_POSITIONSPROVIDERTOTALPARTS_INIT_OFFSET))(this, math, parts);
		}

		::System::Boolean Comply(::BansheeGz::BGSpline::Components::BGCcSplitterPolyline_SplitModeEnum splitMode)
		{
			return ((::System::Boolean(*)(::PVOID, ::BansheeGz::BGSpline::Components::BGCcSplitterPolyline_SplitModeEnum))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGPOLYLINESPLITTER_POSITIONSPROVIDERTOTALPARTS_COMPLY_OFFSET))(this, splitMode);
		}

		::System::Void Build(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* positions, ::System::Int32 straightLinesCount, ::Il2CppArray<::System::Boolean>* straightBits, ::System::Collections::Generic::List_1<::BansheeGz::BGSpline::Components::BGCcSplitterPolyline_PolylinePoint>* points)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Int32, ::Il2CppArray<::System::Boolean>*, ::System::Collections::Generic::List_1<::BansheeGz::BGSpline::Components::BGCcSplitterPolyline_PolylinePoint>*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGPOLYLINESPLITTER_POSITIONSPROVIDERTOTALPARTS_BUILD_OFFSET))(this, positions, straightLinesCount, straightBits, points);
		}

		::System::Void FillInSplitSection(::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo* section, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* result, ::System::Collections::Generic::List_1<::BansheeGz::BGSpline::Components::BGCcSplitterPolyline_PolylinePoint>* points)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::BansheeGz::BGSpline::Components::BGCcSplitterPolyline_PolylinePoint>*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGPOLYLINESPLITTER_POSITIONSPROVIDERTOTALPARTS_FILLINSPLITSECTION_OFFSET))(this, section, result, points);
		}
	};
}
