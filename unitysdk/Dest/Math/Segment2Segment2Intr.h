#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Dest/Math/IntersectionTypes.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace Dest::Math
{
	inline static constexpr unsigned int Segment2Segment2Intr_TypeDefinitionIndex = 33137;

	struct alignas(4) Segment2Segment2Intr
	{
		::Dest::Math::IntersectionTypes IntersectionType; // 0x10
		::UnityEngine::Vector2 Point0; // 0x14
		::UnityEngine::Vector2 Point1; // 0x1C
		::System::Single Parameter0; // 0x24
		::System::Single Parameter1; // 0x28
	};
}
