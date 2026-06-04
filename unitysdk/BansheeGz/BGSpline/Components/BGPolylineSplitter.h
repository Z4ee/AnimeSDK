#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BansheeGz/BGSpline/Components/BGCcSplitterPolyline_PolylinePoint.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace BansheeGz::BGSpline::Components { class BGCcMath; }
namespace BansheeGz::BGSpline::Components { class BGPolylineSplitter_Config; }
namespace BansheeGz::BGSpline::Components { class BGPolylineSplitter_PositionsProvider; }
namespace BansheeGz::BGSpline::Components { class BGPolylineSplitter_PositionsProviderMath; }
namespace BansheeGz::BGSpline::Components { class BGPolylineSplitter_PositionsProviderPartsPerSection; }
namespace BansheeGz::BGSpline::Components { class BGPolylineSplitter_PositionsProviderTotalParts; }
namespace BansheeGz::BGSpline::Curve { class BGCurveBaseMath; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGPOLYLINESPLITTER_BIND_OFFSET UNITYSDK_OFFSET(0x18940180)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGPOLYLINESPLITTER_COUNTSTRAIGHTLINES_OFFSET UNITYSDK_OFFSET(0x1893E810)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGPOLYLINESPLITTER_INITPROVIDER_OFFSET UNITYSDK_OFFSET(0x18948500)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGPOLYLINESPLITTER__CTOR_OFFSET UNITYSDK_OFFSET(0x18940160)

namespace BansheeGz::BGSpline::Components
{
	inline static constexpr unsigned int BGPolylineSplitter_TypeDefinitionIndex = 34145;

	class BGPolylineSplitter : public ::System::Object
	{
	public:
		::BansheeGz::BGSpline::Components::BGPolylineSplitter_PositionsProviderPartsPerSection* providerPartsPerSection; // 0x10
		::BansheeGz::BGSpline::Components::BGPolylineSplitter_PositionsProvider* positionsProvider; // 0x18
		::BansheeGz::BGSpline::Components::BGPolylineSplitter_PositionsProviderMath* providerMath; // 0x20
		::Il2CppArray<::System::Boolean>* straightBits; // 0x28
		::BansheeGz::BGSpline::Components::BGPolylineSplitter_PositionsProviderTotalParts* providerTotalParts; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGPOLYLINESPLITTER__CTOR_OFFSET))(this);
		}

		::System::Void Bind(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1, ::BansheeGz::BGSpline::Components::BGCcMath* a2, ::BansheeGz::BGSpline::Components::BGPolylineSplitter_Config* a3, ::System::Collections::Generic::List_1<::BansheeGz::BGSpline::Components::BGCcSplitterPolyline_PolylinePoint>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::BansheeGz::BGSpline::Components::BGCcMath*, ::BansheeGz::BGSpline::Components::BGPolylineSplitter_Config*, ::System::Collections::Generic::List_1<::BansheeGz::BGSpline::Components::BGCcSplitterPolyline_PolylinePoint>*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGPOLYLINESPLITTER_BIND_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Int32 CountStraightLines(::BansheeGz::BGSpline::Curve::BGCurveBaseMath* a1, ::Il2CppArray<::System::Boolean>* a2)
		{
			return ((::System::Int32(*)(::BansheeGz::BGSpline::Curve::BGCurveBaseMath*, ::Il2CppArray<::System::Boolean>*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGPOLYLINESPLITTER_COUNTSTRAIGHTLINES_OFFSET))(a1, a2);
		}

		::BansheeGz::BGSpline::Components::BGPolylineSplitter_PositionsProvider* InitProvider(::BansheeGz::BGSpline::Components::BGPolylineSplitter_PositionsProvider*& a1, ::BansheeGz::BGSpline::Components::BGCcMath* a2, ::BansheeGz::BGSpline::Components::BGPolylineSplitter_Config* a3)
		{
			return ((::BansheeGz::BGSpline::Components::BGPolylineSplitter_PositionsProvider*(*)(::PVOID, ::BansheeGz::BGSpline::Components::BGPolylineSplitter_PositionsProvider*&, ::BansheeGz::BGSpline::Components::BGCcMath*, ::BansheeGz::BGSpline::Components::BGPolylineSplitter_Config*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGPOLYLINESPLITTER_INITPROVIDER_OFFSET))(this, a1, a2, a3);
		}
	};
}
