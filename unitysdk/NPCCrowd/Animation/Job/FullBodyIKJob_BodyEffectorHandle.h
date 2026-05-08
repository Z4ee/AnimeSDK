#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Animations/TransformSceneHandle.h"

namespace NPCCrowd::Animation::Job
{
	inline static constexpr unsigned int FullBodyIKJob_BodyEffectorHandle_TypeDefinitionIndex = 40400;

	struct alignas(4) FullBodyIKJob_BodyEffectorHandle
	{
		::UnityEngine::Animations::TransformSceneHandle body; // 0x10
	};
}
