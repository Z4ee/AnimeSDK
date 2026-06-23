#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Dest::Math
{
	inline static constexpr unsigned int PositionTangent_TypeDefinitionIndex = 34794;

	struct alignas(4) PositionTangent
	{
		::UnityEngine::Vector3 Position; // 0x10
		::UnityEngine::Vector3 Tangent; // 0x1C
	};
}
