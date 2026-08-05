#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace StateTreeGameplay
{
	inline static constexpr unsigned int TransformContextState_TypeDefinitionIndex = 49375;

	struct alignas(4) TransformContextState
	{
		::UnityEngine::Vector3 Position; // 0x10
	};
}
