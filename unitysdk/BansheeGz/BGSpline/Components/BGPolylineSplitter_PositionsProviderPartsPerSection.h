#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BansheeGz/BGSpline/Components/BGCcSplitterPolyline_PolylinePoint.h"
#include "unitysdk/BansheeGz/BGSpline/Components/BGCcSplitterPolyline_SplitModeEnum.h"
#include "unitysdk/BansheeGz/BGSpline/Components/BGPolylineSplitter_PositionsProvider.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace BansheeGz::BGSpline::Components { class BGCcMath; }
namespace BansheeGz::BGSpline::Curve { class BGCurveBaseMath_SectionInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGPOLYLINESPLITTER_POSITIONSPROVIDERPARTSPERSECTION_COMPLY_OFFSET UNITYSDK_OFFSET(0x17B9AF80)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGPOLYLINESPLITTER_POSITIONSPROVIDERPARTSPERSECTION_FILLINSPLITSECTION_OFFSET UNITYSDK_OFFSET(0x17B9AF90)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGPOLYLINESPLITTER_POSITIONSPROVIDERPARTSPERSECTION_INIT_OFFSET UNITYSDK_OFFSET(0x17B999D0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGPOLYLINESPLITTER_POSITIONSPROVIDERPARTSPERSECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x17B999C0)

namespace BansheeGz::BGSpline::Components
{
	inline static constexpr unsigned int BGPolylineSplitter_PositionsProviderPartsPerSection_TypeDefinitionIndex = 33867;

	class BGPolylineSplitter_PositionsProviderPartsPerSection : public ::BansheeGz::BGSpline::Components::BGPolylineSplitter_PositionsProvider
	{
	public:
		::System::Int32 parts; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGPOLYLINESPLITTER_POSITIONSPROVIDERPARTSPERSECTION__CTOR_OFFSET))(this);
		}

		::System::Void Init(::BansheeGz::BGSpline::Components::BGCcMath* math, ::System::Int32 partsPerSection)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Components::BGCcMath*, ::System::Int32))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGPOLYLINESPLITTER_POSITIONSPROVIDERPARTSPERSECTION_INIT_OFFSET))(this, math, partsPerSection);
		}

		::System::Boolean Comply(::BansheeGz::BGSpline::Components::BGCcSplitterPolyline_SplitModeEnum splitMode)
		{
			return ((::System::Boolean(*)(::PVOID, ::BansheeGz::BGSpline::Components::BGCcSplitterPolyline_SplitModeEnum))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGPOLYLINESPLITTER_POSITIONSPROVIDERPARTSPERSECTION_COMPLY_OFFSET))(this, splitMode);
		}

		::System::Void FillInSplitSection(::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo* section, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* result, ::System::Collections::Generic::List_1<::BansheeGz::BGSpline::Components::BGCcSplitterPolyline_PolylinePoint>* points)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::BansheeGz::BGSpline::Components::BGCcSplitterPolyline_PolylinePoint>*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGPOLYLINESPLITTER_POSITIONSPROVIDERPARTSPERSECTION_FILLINSPLITSECTION_OFFSET))(this, section, result, points);
		}
	};
}
