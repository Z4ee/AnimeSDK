#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class AnimationClip; }

namespace MoleMole
{
	inline static constexpr unsigned int MonoUIAnimationQueue_PlayItem_TypeDefinitionIndex = 63444;

	struct alignas(8) MonoUIAnimationQueue_PlayItem
	{
		::UnityEngine::AnimationClip* clip; // 0x10
		::System::Boolean isLoop; // 0x18
		::System::Single duration; // 0x1C
	};
}
