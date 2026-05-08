#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Animations/PropertySceneHandle.h"
#include "unitysdk/UnityEngine/Animations/TransformSceneHandle.h"

namespace NPCCrowd::Animation::Job
{
	inline static constexpr unsigned int FullBodyIKJob_EffectorHandle_TypeDefinitionIndex = 40404;

	struct alignas(4) FullBodyIKJob_EffectorHandle
	{
		::UnityEngine::Animations::TransformSceneHandle effector; // 0x10
		::UnityEngine::Animations::PropertySceneHandle positionWeight; // 0x18
		::UnityEngine::Animations::PropertySceneHandle rotationWeight; // 0x20
		::UnityEngine::Animations::PropertySceneHandle pullWeight; // 0x28
	};
}
