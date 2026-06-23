#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Animations/PropertySceneHandle.h"
#include "unitysdk/UnityEngine/Animations/TransformSceneHandle.h"

namespace NPCCrowd::Animation::Job
{
	inline static constexpr unsigned int FullBodyIKJob_LookEffectorHandle_TypeDefinitionIndex = 72195;

	struct alignas(4) FullBodyIKJob_LookEffectorHandle
	{
		::UnityEngine::Animations::TransformSceneHandle lookAt; // 0x10
		::UnityEngine::Animations::PropertySceneHandle eyesWeight; // 0x18
		::UnityEngine::Animations::PropertySceneHandle headWeight; // 0x20
		::UnityEngine::Animations::PropertySceneHandle bodyWeight; // 0x28
		::UnityEngine::Animations::PropertySceneHandle clampWeight; // 0x30
	};
}
