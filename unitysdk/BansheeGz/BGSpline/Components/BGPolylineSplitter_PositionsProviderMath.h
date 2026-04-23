#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BansheeGz/BGSpline/Components/BGCcSplitterPolyline_PolylinePoint.h"
#include "unitysdk/BansheeGz/BGSpline/Components/BGCcSplitterPolyline_SplitModeEnum.h"
#include "unitysdk/BansheeGz/BGSpline/Components/BGPolylineSplitter_PositionsProvider.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace BansheeGz::BGSpline::Curve { class BGCurveBaseMath_SectionInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGPOLYLINESPLITTER_POSITIONSPROVIDERMATH_COMPLY_OFFSET UNITYSDK_OFFSET(0x17B9AC70)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGPOLYLINESPLITTER_POSITIONSPROVIDERMATH_FILLINSPLITSECTION_OFFSET UNITYSDK_OFFSET(0x17B9AC80)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGPOLYLINESPLITTER_POSITIONSPROVIDERMATH__CTOR_OFFSET UNITYSDK_OFFSET(0x17B99A40)

namespace BansheeGz::BGSpline::Components
{
	inline static constexpr unsigned int BGPolylineSplitter_PositionsProviderMath_TypeDefinitionIndex = 33868;

	class BGPolylineSplitter_PositionsProviderMath : public ::BansheeGz::BGSpline::Components::BGPolylineSplitter_PositionsProvider
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGPOLYLINESPLITTER_POSITIONSPROVIDERMATH__CTOR_OFFSET))(this);
		}

		::System::Boolean Comply(::BansheeGz::BGSpline::Components::BGCcSplitterPolyline_SplitModeEnum splitMode)
		{
			return ((::System::Boolean(*)(::PVOID, ::BansheeGz::BGSpline::Components::BGCcSplitterPolyline_SplitModeEnum))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGPOLYLINESPLITTER_POSITIONSPROVIDERMATH_COMPLY_OFFSET))(this, splitMode);
		}

		::System::Void FillInSplitSection(::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo* section, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* result, ::System::Collections::Generic::List_1<::BansheeGz::BGSpline::Components::BGCcSplitterPolyline_PolylinePoint>* points)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath_SectionInfo*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::BansheeGz::BGSpline::Components::BGCcSplitterPolyline_PolylinePoint>*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGPOLYLINESPLITTER_POSITIONSPROVIDERMATH_FILLINSPLITSECTION_OFFSET))(this, section, result, points);
		}
	};
}
