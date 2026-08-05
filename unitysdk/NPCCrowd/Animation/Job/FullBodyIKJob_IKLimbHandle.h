#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Animations/TransformStreamHandle.h"

namespace NPCCrowd::Animation::Job
{
	inline static constexpr unsigned int FullBodyIKJob_IKLimbHandle_TypeDefinitionIndex = 89929;

	struct alignas(4) FullBodyIKJob_IKLimbHandle
	{
		::UnityEngine::Animations::TransformStreamHandle top; // 0x10
		::UnityEngine::Animations::TransformStreamHandle middle; // 0x1C
		::UnityEngine::Animations::TransformStreamHandle end; // 0x28
		::System::Single maximumExtension; // 0x34
	};
}
