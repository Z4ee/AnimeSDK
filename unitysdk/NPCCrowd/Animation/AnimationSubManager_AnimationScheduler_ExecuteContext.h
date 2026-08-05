#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ReadOnlySpan_1.h"
#include "unitysdk/System/Span_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"

namespace NPCCrowd::Animation { class AnimationSubManager; }
namespace NPCCrowd::Animation { class AnimationSubManager_IAnimationProcessor; }

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_AnimationScheduler_ExecuteContext_TypeDefinitionIndex = 88354;

	struct alignas(8) AnimationSubManager_AnimationScheduler_ExecuteContext
	{
		::NPCCrowd::Animation::AnimationSubManager* Owner; // 0x10
		::System::Span_1<::Unity::Jobs::JobHandle> JobHandles; // 0x18
		::System::ReadOnlySpan_1<::NPCCrowd::Animation::AnimationSubManager_IAnimationProcessor*> Processors; // 0x30
	};
}
