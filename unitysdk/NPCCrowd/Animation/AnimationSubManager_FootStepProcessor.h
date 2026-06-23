#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AnimationProcessPhase.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_Dispatchable.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_FootStepProcessor_LegacyJob.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_FootStepProcessor_ParallelJob.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"

namespace NPCCrowd::Animation { class AnimationSubManager; }
namespace System { class String; }

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR_DISPATCH_OFFSET UNITYSDK_OFFSET(0xFF98420)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR_GET_DEBUGNAME_OFFSET UNITYSDK_OFFSET(0xFF98170)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR_GET_MAXPHASE_OFFSET UNITYSDK_OFFSET(0xFF98160)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR_GET_MINPHASE_OFFSET UNITYSDK_OFFSET(0xFF98150)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR_ONINIT_OFFSET UNITYSDK_OFFSET(0xFF981D0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0xFF98AF0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_FootStepProcessor_TypeDefinitionIndex = 57437;

	class AnimationSubManager_FootStepProcessor : public ::NPCCrowd::Animation::AnimationSubManager_Dispatchable
	{
	public:
		::Il2CppArray<::NPCCrowd::Animation::AnimationSubManager_FootStepProcessor_LegacyJob>* _buffer; // 0x10
		::NPCCrowd::Animation::AnimationSubManager_FootStepProcessor_ParallelJob _parallelJob; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR__CTOR_OFFSET))(this);
		}

		::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase get_MinPhase()
		{
			return ((::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR_GET_MINPHASE_OFFSET))(this);
		}

		::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase get_MaxPhase()
		{
			return ((::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR_GET_MAXPHASE_OFFSET))(this);
		}

		::System::String* get_DebugName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR_GET_DEBUGNAME_OFFSET))(this);
		}

		::System::Void OnInit(::NPCCrowd::Animation::AnimationSubManager* manager)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR_ONINIT_OFFSET))(this, manager);
		}

		::Unity::Jobs::JobHandle Dispatch(::NPCCrowd::Animation::AnimationSubManager* manager, ::Unity::Jobs::JobHandle dependsOn)
		{
			return ((::Unity::Jobs::JobHandle(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager*, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR_DISPATCH_OFFSET))(this, manager, dependsOn);
		}
	};
}
