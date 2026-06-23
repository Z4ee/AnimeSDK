#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AnimationProcessPhase.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_Dispatchable.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_PhaseMatchingProcessor_LegacyJob.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_PhaseMatchingProcessor_ParallelJob.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"

namespace NPCCrowd::Animation { class AnimationSubManager; }
namespace System { class String; }

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_DISPATCH_OFFSET UNITYSDK_OFFSET(0xD5C8990)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_GET_DEBUGNAME_OFFSET UNITYSDK_OFFSET(0xD5C87A0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_GET_MAXPHASE_OFFSET UNITYSDK_OFFSET(0xD5C8810)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_GET_MINPHASE_OFFSET UNITYSDK_OFFSET(0xD5C8800)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_ONINIT_OFFSET UNITYSDK_OFFSET(0xD5C8820)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0xD5C8F70)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_PhaseMatchingProcessor_TypeDefinitionIndex = 57361;

	class AnimationSubManager_PhaseMatchingProcessor : public ::NPCCrowd::Animation::AnimationSubManager_Dispatchable
	{
	public:
		::Il2CppArray<::NPCCrowd::Animation::AnimationSubManager_PhaseMatchingProcessor_LegacyJob>* _buffer; // 0x10
		::NPCCrowd::Animation::AnimationSubManager_PhaseMatchingProcessor_ParallelJob _parallelJob; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR__CTOR_OFFSET))(this);
		}

		::System::String* get_DebugName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_GET_DEBUGNAME_OFFSET))(this);
		}

		::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase get_MinPhase()
		{
			return ((::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_GET_MINPHASE_OFFSET))(this);
		}

		::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase get_MaxPhase()
		{
			return ((::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_GET_MAXPHASE_OFFSET))(this);
		}

		::System::Void OnInit(::NPCCrowd::Animation::AnimationSubManager* manager)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_ONINIT_OFFSET))(this, manager);
		}

		::Unity::Jobs::JobHandle Dispatch(::NPCCrowd::Animation::AnimationSubManager* manager, ::Unity::Jobs::JobHandle dependsOn)
		{
			return ((::Unity::Jobs::JobHandle(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager*, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_DISPATCH_OFFSET))(this, manager, dependsOn);
		}
	};
}
