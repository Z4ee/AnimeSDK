#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

inline static constexpr unsigned int BatchAnimationWrapper_TargetMove_TypeDefinitionIndex = 35927;

struct alignas(4) BatchAnimationWrapper_TargetMove
{
	::System::Int32 pointEdge; // 0x10
	::System::Single t; // 0x14
	::UnityEngine::Vector3 start; // 0x18
	::UnityEngine::Vector3 end; // 0x24
	::UnityEngine::Vector3 last; // 0x30
};
