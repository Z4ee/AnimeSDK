#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Dest/Math/IntersectionTypes.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Dest::Math
{
	inline static constexpr unsigned int Segment3Sphere3Intr_TypeDefinitionIndex = 33166;

	struct alignas(4) Segment3Sphere3Intr
	{
		::Dest::Math::IntersectionTypes IntersectionType; // 0x10
		::System::Int32 Quantity; // 0x14
		::UnityEngine::Vector3 Point0; // 0x18
		::UnityEngine::Vector3 Point1; // 0x24
		::System::Single SegmentParameter0; // 0x30
		::System::Single SegmentParameter1; // 0x34
	};
}
