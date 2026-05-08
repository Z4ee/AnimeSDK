#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Dest/Math/IntersectionTypes.h"
#include "unitysdk/Dest/Math/Line3.h"
#include "unitysdk/System/ValueType.h"

namespace Dest::Math
{
	inline static constexpr unsigned int Plane3Plane3Intr_TypeDefinitionIndex = 33149;

	struct alignas(4) Plane3Plane3Intr
	{
		::Dest::Math::IntersectionTypes IntersectionType; // 0x10
		::Dest::Math::Line3 Line; // 0x14
	};
}
