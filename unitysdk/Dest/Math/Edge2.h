#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace Dest::Math
{
	inline static constexpr unsigned int Edge2_TypeDefinitionIndex = 35426;

	struct alignas(4) Edge2
	{
		::UnityEngine::Vector2 Point0; // 0x10
		::UnityEngine::Vector2 Point1; // 0x18
		::UnityEngine::Vector2 Direction; // 0x20
		::UnityEngine::Vector2 Normal; // 0x28
		::System::Single Length; // 0x30
	};
}
