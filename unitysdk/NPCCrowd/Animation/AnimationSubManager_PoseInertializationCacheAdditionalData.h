#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/NapTransformData.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_PoseInertializationCacheAdditionalData_TypeDefinitionIndex = 88240;

	struct alignas(4) AnimationSubManager_PoseInertializationCacheAdditionalData
	{
		::UnityEngine::NapTransformData MeshTransform; // 0x10
		::Foundation::Unreal::FName AttachingParent; // 0x40
		::System::Single DeltaTime; // 0x48
	};
}
