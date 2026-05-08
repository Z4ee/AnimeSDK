#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AnimationProcessPhase.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_Dispatchable.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_SampleRootMotionProcessor_Job.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"

namespace NPCCrowd::Animation { class AnimationSubManager; }
namespace NPCCrowd::Animation { class AnimationSubManager_AvatarArchetypeData; }
namespace System { class String; }

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEROOTMOTIONPROCESSOR_CREATEJOB_OFFSET UNITYSDK_OFFSET(0xF855870)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEROOTMOTIONPROCESSOR_DISPATCH_OFFSET UNITYSDK_OFFSET(0xF855030)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEROOTMOTIONPROCESSOR_GET_DEBUGNAME_OFFSET UNITYSDK_OFFSET(0xF854E80)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEROOTMOTIONPROCESSOR_GET_MAXPHASE_OFFSET UNITYSDK_OFFSET(0xF854E70)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEROOTMOTIONPROCESSOR_GET_MINPHASE_OFFSET UNITYSDK_OFFSET(0xF854E60)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEROOTMOTIONPROCESSOR_ONINIT_OFFSET UNITYSDK_OFFSET(0xF854EE0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEROOTMOTIONPROCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0xF855AC0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_SampleRootMotionProcessor_TypeDefinitionIndex = 70440;

	class AnimationSubManager_SampleRootMotionProcessor : public ::NPCCrowd::Animation::AnimationSubManager_Dispatchable
	{
	public:
		::Il2CppArray<::NPCCrowd::Animation::AnimationSubManager_SampleRootMotionProcessor_Job>* _buffer; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEROOTMOTIONPROCESSOR__CTOR_OFFSET))(this);
		}

		::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase get_MinPhase()
		{
			return ((::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEROOTMOTIONPROCESSOR_GET_MINPHASE_OFFSET))(this);
		}

		::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase get_MaxPhase()
		{
			return ((::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEROOTMOTIONPROCESSOR_GET_MAXPHASE_OFFSET))(this);
		}

		::System::String* get_DebugName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEROOTMOTIONPROCESSOR_GET_DEBUGNAME_OFFSET))(this);
		}

		::System::Void OnInit(::NPCCrowd::Animation::AnimationSubManager* manager)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEROOTMOTIONPROCESSOR_ONINIT_OFFSET))(this, manager);
		}

		::Unity::Jobs::JobHandle Dispatch(::NPCCrowd::Animation::AnimationSubManager* manager, ::Unity::Jobs::JobHandle dependsOn)
		{
			return ((::Unity::Jobs::JobHandle(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager*, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEROOTMOTIONPROCESSOR_DISPATCH_OFFSET))(this, manager, dependsOn);
		}

		static ::System::Nullable_1<::NPCCrowd::Animation::AnimationSubManager_SampleRootMotionProcessor_Job> CreateJob(::NPCCrowd::Animation::AnimationSubManager_AvatarArchetypeData* avatar)
		{
			return ((::System::Nullable_1<::NPCCrowd::Animation::AnimationSubManager_SampleRootMotionProcessor_Job>(*)(::NPCCrowd::Animation::AnimationSubManager_AvatarArchetypeData*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEROOTMOTIONPROCESSOR_CREATEJOB_OFFSET))(avatar);
		}
	};
}
