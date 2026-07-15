#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CurveData_TypeDefinitionIndex = 36266;

	struct alignas(4) CurveData
	{
		::UnityEngine::Vector4 CustomToneCurve; // 0x10
		::UnityEngine::Vector4 ToeSegmentA; // 0x20
		::UnityEngine::Vector4 ToeSegmentB; // 0x30
		::UnityEngine::Vector4 MidSegmentA; // 0x40
		::UnityEngine::Vector4 MidSegmentB; // 0x50
		::UnityEngine::Vector4 ShoSegmentA; // 0x60
		::UnityEngine::Vector4 ShoSegmentB; // 0x70
	};
}
