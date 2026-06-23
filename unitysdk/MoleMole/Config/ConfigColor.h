#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigColor_TypeDefinitionIndex = 48206;

	struct alignas(4) ConfigColor
	{
		::UnityEngine::Color TargetColor; // 0x10
	};
}
