#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Dest/Math/IntersectionTypes.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Dest::Math
{
	inline static constexpr unsigned int Ray3Polygon3Intr_TypeDefinitionIndex = 34719;

	struct alignas(4) Ray3Polygon3Intr
	{
		::Dest::Math::IntersectionTypes IntersectionType; // 0x10
		::UnityEngine::Vector3 Point; // 0x14
	};
}
