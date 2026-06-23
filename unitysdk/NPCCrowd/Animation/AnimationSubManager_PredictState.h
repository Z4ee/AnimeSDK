#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_PredictState_TypeDefinitionIndex = 57348;

	struct alignas(4) AnimationSubManager_PredictState
	{
		::System::Boolean enablePredict; // 0x10
		::UnityEngine::Vector3 currentFootprint; // 0x14
		::UnityEngine::Vector3 nextFootprint; // 0x20
	};
}
