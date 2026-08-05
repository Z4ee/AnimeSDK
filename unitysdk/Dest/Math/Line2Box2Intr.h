#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Dest/Math/IntersectionTypes.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace Dest::Math
{
	inline static constexpr unsigned int Line2Box2Intr_TypeDefinitionIndex = 35340;

	struct alignas(4) Line2Box2Intr
	{
		::Dest::Math::IntersectionTypes IntersectionType; // 0x10
		::System::Int32 Quantity; // 0x14
		::UnityEngine::Vector2 Point0; // 0x18
		::UnityEngine::Vector2 Point1; // 0x20
	};
}
