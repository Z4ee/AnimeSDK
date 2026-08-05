#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int Vector3Range_TypeDefinitionIndex = 48694;

	struct alignas(4) Vector3Range
	{
		::UnityEngine::Vector3 min; // 0x10
		::UnityEngine::Vector3 max; // 0x1C
	};
}
