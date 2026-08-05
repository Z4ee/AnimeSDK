#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class NapAnimator; }

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCAnimationLib___c__DisplayClass10_0_TypeDefinitionIndex = 61824;

	struct alignas(8) NPCAnimationLib___c__DisplayClass10_0
	{
		::UnityEngine::NapAnimator* animator; // 0x10
		::System::Collections::Generic::Dictionary_2<::UnityEngine::AnimationClip*, ::System::Int32>* result; // 0x18
	};
}
