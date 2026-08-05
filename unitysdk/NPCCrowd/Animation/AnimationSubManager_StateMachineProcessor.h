#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AnimationProcessPhase.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_Dispatchable.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_StateMachineProcessor_LegacyJob.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_StateMachineProcessor_ParallelJob.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"

namespace NPCCrowd::Animation { class AnimationSubManager; }
namespace System { class String; }

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_STATEMACHINEPROCESSOR_DISPATCH_OFFSET UNITYSDK_OFFSET(0x106616F0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_STATEMACHINEPROCESSOR_GET_DEBUGNAME_OFFSET UNITYSDK_OFFSET(0x106615A0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_STATEMACHINEPROCESSOR_GET_MAXPHASE_OFFSET UNITYSDK_OFFSET(0x10661590)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_STATEMACHINEPROCESSOR_GET_MINPHASE_OFFSET UNITYSDK_OFFSET(0x10661580)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_STATEMACHINEPROCESSOR_ONINIT_OFFSET UNITYSDK_OFFSET(0x10661600)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_STATEMACHINEPROCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x106627C0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_StateMachineProcessor_TypeDefinitionIndex = 88301;

	class AnimationSubManager_StateMachineProcessor : public ::NPCCrowd::Animation::AnimationSubManager_Dispatchable
	{
	public:
		::Il2CppArray<::NPCCrowd::Animation::AnimationSubManager_StateMachineProcessor_LegacyJob>* _buffer; // 0x10
		::NPCCrowd::Animation::AnimationSubManager_StateMachineProcessor_ParallelJob _parallelJob; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_STATEMACHINEPROCESSOR__CTOR_OFFSET))(this);
		}

		::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase get_MinPhase()
		{
			return ((::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_STATEMACHINEPROCESSOR_GET_MINPHASE_OFFSET))(this);
		}

		::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase get_MaxPhase()
		{
			return ((::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_STATEMACHINEPROCESSOR_GET_MAXPHASE_OFFSET))(this);
		}

		::System::String* get_DebugName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_STATEMACHINEPROCESSOR_GET_DEBUGNAME_OFFSET))(this);
		}

		::System::Void OnInit(::NPCCrowd::Animation::AnimationSubManager* manager)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_STATEMACHINEPROCESSOR_ONINIT_OFFSET))(this, manager);
		}

		::Unity::Jobs::JobHandle Dispatch(::NPCCrowd::Animation::AnimationSubManager* manager, ::Unity::Jobs::JobHandle dependsOn)
		{
			return ((::Unity::Jobs::JobHandle(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager*, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_STATEMACHINEPROCESSOR_DISPATCH_OFFSET))(this, manager, dependsOn);
		}
	};
}
