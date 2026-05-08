#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int MinPathQueryResult_TypeDefinitionIndex = 74274;

	struct alignas(4) MinPathQueryResult
	{
		::System::Boolean queryFinished; // 0x10
		::UnityEngine::Vector3 nearestPos; // 0x14
	};
}
