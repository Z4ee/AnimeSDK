#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AnimationProcessPhase.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_Dispatchable.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_FootStepPreProcessor_Job.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_FootStepSetting.h"
#include "unitysdk/NPCCrowd/Animation/CPUStateMachine/AnimationTickData.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"

namespace NPCCrowd::Animation { class AnimationSubManager; }
namespace System { class String; }

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_DISPATCH_OFFSET UNITYSDK_OFFSET(0xBDE2200)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_GETANIMINDEX_OFFSET UNITYSDK_OFFSET(0xBDE2830)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_GET_DEBUGNAME_OFFSET UNITYSDK_OFFSET(0xBDE2020)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_GET_MAXPHASE_OFFSET UNITYSDK_OFFSET(0xBDE2010)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_GET_MINPHASE_OFFSET UNITYSDK_OFFSET(0xBDE2000)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_ONINIT_OFFSET UNITYSDK_OFFSET(0xBDE2080)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0xBDE2900)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_FootStepPreProcessor_TypeDefinitionIndex = 70480;

	class AnimationSubManager_FootStepPreProcessor : public ::NPCCrowd::Animation::AnimationSubManager_Dispatchable
	{
	public:
		::Il2CppArray<::NPCCrowd::Animation::AnimationSubManager_FootStepPreProcessor_Job>* _buffer; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR__CTOR_OFFSET))(this);
		}

		::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase get_MinPhase()
		{
			return ((::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_GET_MINPHASE_OFFSET))(this);
		}

		::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase get_MaxPhase()
		{
			return ((::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_GET_MAXPHASE_OFFSET))(this);
		}

		::System::String* get_DebugName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_GET_DEBUGNAME_OFFSET))(this);
		}

		::System::Void OnInit(::NPCCrowd::Animation::AnimationSubManager* manager)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_ONINIT_OFFSET))(this, manager);
		}

		::Unity::Jobs::JobHandle Dispatch(::NPCCrowd::Animation::AnimationSubManager* manager, ::Unity::Jobs::JobHandle dependsOn)
		{
			return ((::Unity::Jobs::JobHandle(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager*, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_DISPATCH_OFFSET))(this, manager, dependsOn);
		}

		static ::System::Int32 GetAnimIndex(::System::UInt32 entityId, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData tickData, ::NPCCrowd::Animation::AnimationSubManager_FootStepSetting setting)
		{
			return ((::System::Int32(*)(::System::UInt32, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData, ::NPCCrowd::Animation::AnimationSubManager_FootStepSetting))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_GETANIMINDEX_OFFSET))(entityId, tickData, setting);
		}
	};
}
