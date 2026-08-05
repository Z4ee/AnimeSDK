#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Dest/Math/IntersectionTypes.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace Dest::Math
{
	inline static constexpr unsigned int Line2Ray2Intr_TypeDefinitionIndex = 35344;

	struct alignas(4) Line2Ray2Intr
	{
		::Dest::Math::IntersectionTypes IntersectionType; // 0x10
		::UnityEngine::Vector2 Point; // 0x14
		::System::Single Parameter; // 0x1C
	};
}
