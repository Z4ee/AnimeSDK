#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_POLYLINEPOINT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x20DE2C0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_POLYLINEPOINT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x20DE280)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_POLYLINEPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x20DE240)

namespace BansheeGz::BGSpline::Components
{
	inline static constexpr unsigned int BGCcSplitterPolyline_PolylinePoint_TypeDefinitionIndex = 28224;

	struct alignas(4) BGCcSplitterPolyline_PolylinePoint
	{
		::UnityEngine::Vector3 Position; // 0x10
		::System::Single Distance; // 0x1C
		::UnityEngine::Vector3 Tangent; // 0x20

		::System::Void _ctor(::UnityEngine::Vector3 position, ::System::Single distance)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_POLYLINEPOINT__CTOR_OFFSET))(this, position, distance);
		}

		::System::Void _ctor_1(::UnityEngine::Vector3 position, ::System::Single distance, ::UnityEngine::Vector3 tangent)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_POLYLINEPOINT__CTOR_1_OFFSET))(this, position, distance, tangent);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCSPLITTERPOLYLINE_POLYLINEPOINT_TOSTRING_OFFSET))(this);
		}
	};
}
