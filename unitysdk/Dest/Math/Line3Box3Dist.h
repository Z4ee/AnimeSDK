#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Dest::Math
{
	inline static constexpr unsigned int Line3Box3Dist_TypeDefinitionIndex = 33114;

	struct alignas(4) Line3Box3Dist
	{
		::UnityEngine::Vector3 ClosestPoint0; // 0x10
		::UnityEngine::Vector3 ClosestPoint1; // 0x1C
		::System::Single LineParameter; // 0x28
	};
}
