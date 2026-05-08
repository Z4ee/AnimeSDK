#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Dest/Math/Circle3.h"
#include "unitysdk/Dest/Math/IntersectionTypes.h"
#include "unitysdk/System/ValueType.h"

namespace Dest::Math
{
	inline static constexpr unsigned int Plane3Sphere3Intr_TypeDefinitionIndex = 33150;

	struct alignas(4) Plane3Sphere3Intr
	{
		::Dest::Math::IntersectionTypes IntersectionType; // 0x10
		::Dest::Math::Circle3 Circle; // 0x14
	};
}
