#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Dest/Math/IntersectionTypes.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Dest::Math
{
	inline static constexpr unsigned int Segment3Plane3Intr_TypeDefinitionIndex = 35385;

	struct alignas(4) Segment3Plane3Intr
	{
		::Dest::Math::IntersectionTypes IntersectionType; // 0x10
		::UnityEngine::Vector3 Point; // 0x14
		::System::Single SegmentParameter; // 0x20
	};
}
