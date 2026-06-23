#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define PIPESPLINEDEFORMATION_CUBICBEZIERSEGMENT_EVALUATE_OFFSET UNITYSDK_OFFSET(0x8BE1A0)
#define PIPESPLINEDEFORMATION_CUBICBEZIERSEGMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x8BE120)

namespace PipeSplineDeformation
{
	inline static constexpr unsigned int CubicBezierSegment_TypeDefinitionIndex = 26273;

	struct alignas(4) CubicBezierSegment
	{
		::UnityEngine::Vector3 p0; // 0x10
		::UnityEngine::Vector3 p1; // 0x1C
		::UnityEngine::Vector3 p2; // 0x28
		::UnityEngine::Vector3 p3; // 0x34

		::System::Void _ctor(::UnityEngine::Vector3 p0, ::UnityEngine::Vector3 p1, ::UnityEngine::Vector3 p2, ::UnityEngine::Vector3 p3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_CUBICBEZIERSEGMENT__CTOR_OFFSET))(this, p0, p1, p2, p3);
		}

		::UnityEngine::Vector3 Evaluate(::System::Single t)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_CUBICBEZIERSEGMENT_EVALUATE_OFFSET))(this, t);
		}
	};
}
