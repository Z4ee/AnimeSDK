#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"

namespace MoleMole::Battle
{
	inline static constexpr unsigned int DebugColor_TypeDefinitionIndex = 53314;

	struct alignas(4) DebugColor
	{
		::UnityEngine::Color rayHitColor; // 0x10
		::UnityEngine::Color rayMissColor; // 0x20
	};
}
