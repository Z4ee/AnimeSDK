#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BansheeGz/BGSpline/Components/BGCcSplitterPolyline_PolylinePoint.h"
#include "unitysdk/BansheeGz/BGSpline/Components/BGCcSplitterPolyline_SplitModeEnum.h"
#include "unitysdk/BansheeGz/BGSpline/Components/BGPolylineSplitter_PositionsProvider.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace BansheeGz::BGSpline::Components { class BGCcMath; }
namespace BansheeGz::BGSpline::Curve { class BGCurveBaseMath_SectionInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGPOLYLINESPLITTER_POSITIONSPROVIDERPARTSPERSECTION_COMPLY_OFFSET UNITYSDK_OFFSET(0x1894A480)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGPOLYLINESPLITTER_POSITIONSPROVIDERPARTSPERSECTION_FILLINSPLITSECTION_OFFSET UNITYSDK_OFFSET(0x1894A490)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGPOLYLINESPLITTER_POSITIONSPROVIDERPARTSPERSECTION_INIT_OFFSET UNITYSDK_OFFSET(0x18948870)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGPOLYLINESPLITTER_POSITIONSPROVIDERPARTSPERSECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x18948860)

namespace BansheeGz::BGSpline::Components
{
	inline static constexpr unsigned int BGPolylineSplitter_PositionsProviderPartsPerSection_TypeDefinitionIndex = 34149;

	class BGPolylineSplitter_PositionsProviderPartsPerSection : public ::BansheeGz::BGSpline::Components::BGPolylineSplitter_PositionsProvider
	{
	public:
		::System::Int32 parts; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGPOLYLINESPLITTER_POSITIONSPROVIDERPARTSPERSECTION__CTOR_OFFSET))(this);
		}

		::System::Void Init(::BansheeGz::BGSpline::Components::BGCcMath* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Components::BGCcMath*, ::System::Int32))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGPOLYLINESPLITTER_POSITIONSPROVIDERPARTSPERSECTION_INIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean Comply(::BansheeGz::BGSpline::Components::BGCcSplitterPolyline_SplitModeEnum a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BansheeGz::BGSpline::Components::BGCcSplitterPolyline_SplitModeEnum))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGPOLYLINESPLITTER_POSITIONSPROVIDERPARTSPERSECTION_COMPLY_OFFSET))(this, a1);
		}

		::System::Void FillInSplitSection(::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo* a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a2, ::System::Collections::Generic::List_1<::BansheeGz::BGSpline::Components::BGCcSplitterPolyline_PolylinePoint>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::BansheeGz::BGSpline::Components::BGCcSplitterPolyline_PolylinePoint>*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGPOLYLINESPLITTER_POSITIONSPROVIDERPARTSPERSECTION_FILLINSPLITSECTION_OFFSET))(this, a1, a2, a3);
		}
	};
}
