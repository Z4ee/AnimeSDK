#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AnimationProcessPhase.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_BoneAdjustProcessor_Job.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_Dispatchable.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"

namespace NPCCrowd::Animation { class AnimationSubManager; }
namespace System { class String; }

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_BONEADJUSTPROCESSOR_DISPATCH_OFFSET UNITYSDK_OFFSET(0xB53CAF0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_BONEADJUSTPROCESSOR_GET_DEBUGNAME_OFFSET UNITYSDK_OFFSET(0xB53C970)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_BONEADJUSTPROCESSOR_GET_MAXPHASE_OFFSET UNITYSDK_OFFSET(0xB53C960)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_BONEADJUSTPROCESSOR_GET_MINPHASE_OFFSET UNITYSDK_OFFSET(0xB53C950)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_BONEADJUSTPROCESSOR_ONINIT_OFFSET UNITYSDK_OFFSET(0xB53C9D0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_BONEADJUSTPROCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0xB53D550)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_BoneAdjustProcessor_TypeDefinitionIndex = 70507;

	class AnimationSubManager_BoneAdjustProcessor : public ::NPCCrowd::Animation::AnimationSubManager_Dispatchable
	{
	public:
		::Il2CppArray<::NPCCrowd::Animation::AnimationSubManager_BoneAdjustProcessor_Job>* _buffer; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_BONEADJUSTPROCESSOR__CTOR_OFFSET))(this);
		}

		::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase get_MinPhase()
		{
			return ((::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_BONEADJUSTPROCESSOR_GET_MINPHASE_OFFSET))(this);
		}

		::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase get_MaxPhase()
		{
			return ((::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_BONEADJUSTPROCESSOR_GET_MAXPHASE_OFFSET))(this);
		}

		::System::String* get_DebugName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_BONEADJUSTPROCESSOR_GET_DEBUGNAME_OFFSET))(this);
		}

		::System::Void OnInit(::NPCCrowd::Animation::AnimationSubManager* manager)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_BONEADJUSTPROCESSOR_ONINIT_OFFSET))(this, manager);
		}

		::Unity::Jobs::JobHandle Dispatch(::NPCCrowd::Animation::AnimationSubManager* manager, ::Unity::Jobs::JobHandle dependsOn)
		{
			return ((::Unity::Jobs::JobHandle(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager*, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_BONEADJUSTPROCESSOR_DISPATCH_OFFSET))(this, manager, dependsOn);
		}
	};
}
