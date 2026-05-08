#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AnimationProcessPhase.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_Dispatchable.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_SamplePoseProcessor_Job.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"

namespace NPCCrowd::Animation { class AnimationSubManager; }
namespace NPCCrowd::Animation { class AnimationSubManager_AvatarArchetypeData; }
namespace System { class String; }

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEPOSEPROCESSOR_CREATEJOB_OFFSET UNITYSDK_OFFSET(0xD0D3A90)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEPOSEPROCESSOR_DISPATCH_OFFSET UNITYSDK_OFFSET(0xD0D2FC0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEPOSEPROCESSOR_GET_DEBUGNAME_OFFSET UNITYSDK_OFFSET(0xD0D2E10)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEPOSEPROCESSOR_GET_MAXPHASE_OFFSET UNITYSDK_OFFSET(0xD0D2E00)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEPOSEPROCESSOR_GET_MINPHASE_OFFSET UNITYSDK_OFFSET(0xD0D2DF0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEPOSEPROCESSOR_ONINIT_OFFSET UNITYSDK_OFFSET(0xD0D2E70)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEPOSEPROCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0xD0D3EC0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_SamplePoseProcessor_TypeDefinitionIndex = 70510;

	class AnimationSubManager_SamplePoseProcessor : public ::NPCCrowd::Animation::AnimationSubManager_Dispatchable
	{
	public:
		::Il2CppArray<::NPCCrowd::Animation::AnimationSubManager_SamplePoseProcessor_Job>* _buffer; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEPOSEPROCESSOR__CTOR_OFFSET))(this);
		}

		::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase get_MinPhase()
		{
			return ((::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEPOSEPROCESSOR_GET_MINPHASE_OFFSET))(this);
		}

		::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase get_MaxPhase()
		{
			return ((::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEPOSEPROCESSOR_GET_MAXPHASE_OFFSET))(this);
		}

		::System::String* get_DebugName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEPOSEPROCESSOR_GET_DEBUGNAME_OFFSET))(this);
		}

		::System::Void OnInit(::NPCCrowd::Animation::AnimationSubManager* manager)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEPOSEPROCESSOR_ONINIT_OFFSET))(this, manager);
		}

		::Unity::Jobs::JobHandle Dispatch(::NPCCrowd::Animation::AnimationSubManager* manager, ::Unity::Jobs::JobHandle dependsOn)
		{
			return ((::Unity::Jobs::JobHandle(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager*, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEPOSEPROCESSOR_DISPATCH_OFFSET))(this, manager, dependsOn);
		}

		::System::Nullable_1<::NPCCrowd::Animation::AnimationSubManager_SamplePoseProcessor_Job> CreateJob(::NPCCrowd::Animation::AnimationSubManager_AvatarArchetypeData* avatar)
		{
			return ((::System::Nullable_1<::NPCCrowd::Animation::AnimationSubManager_SamplePoseProcessor_Job>(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager_AvatarArchetypeData*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEPOSEPROCESSOR_CREATEJOB_OFFSET))(this, avatar);
		}
	};
}
