#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

inline static constexpr unsigned int Capsule_TypeDefinitionIndex = 27827;

struct alignas(4) Capsule
{
	::UnityEngine::Vector3 a; // 0x10
	::UnityEngine::Vector3 b; // 0x1C
	::System::Single radius; // 0x28
};
