#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Animations/PropertySceneHandle.h"
#include "unitysdk/UnityEngine/Animations/TransformSceneHandle.h"

namespace NPCCrowd::Animation::Job
{
	inline static constexpr unsigned int FullBodyIKJob_HintEffectorHandle_TypeDefinitionIndex = 40402;

	struct alignas(4) FullBodyIKJob_HintEffectorHandle
	{
		::UnityEngine::Animations::TransformSceneHandle hint; // 0x10
		::UnityEngine::Animations::PropertySceneHandle weight; // 0x18
	};
}
