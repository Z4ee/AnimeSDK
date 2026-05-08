#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

inline static constexpr unsigned int ExtractBoneInfo_TypeDefinitionIndex = 29577;

struct alignas(4) ExtractBoneInfo
{
	::UnityEngine::Vector3 headBonePosition; // 0x10
	::UnityEngine::Vector3 headBoneForward; // 0x1C
	::UnityEngine::Vector3 middlePointPosition; // 0x28
};
