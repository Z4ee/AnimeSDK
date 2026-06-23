#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace StateTreeGameplay
{
	inline static constexpr unsigned int TransformState_TypeDefinitionIndex = 48767;

	struct alignas(4) TransformState
	{
		::UnityEngine::Vector3 Position; // 0x10
	};
}
