#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Dest::Math
{
	inline static constexpr unsigned int CurveFrame_TypeDefinitionIndex = 34795;

	struct alignas(4) CurveFrame
	{
		::UnityEngine::Vector3 Position; // 0x10
		::UnityEngine::Vector3 Tangent; // 0x1C
		::UnityEngine::Vector3 Normal; // 0x28
		::UnityEngine::Vector3 Binormal; // 0x34
	};
}
