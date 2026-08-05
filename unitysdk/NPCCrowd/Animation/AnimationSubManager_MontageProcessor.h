#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AnimationProcessPhase.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_Dispatchable.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_MontageProcessor_LegacyJob.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_MontageProcessor_ParallelJob.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"

namespace NPCCrowd::Animation { class AnimationSubManager; }
namespace System { class String; }

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MONTAGEPROCESSOR_DISPATCH_OFFSET UNITYSDK_OFFSET(0x13DEDE60)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MONTAGEPROCESSOR_GET_DEBUGNAME_OFFSET UNITYSDK_OFFSET(0x13DEDD10)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MONTAGEPROCESSOR_GET_MAXPHASE_OFFSET UNITYSDK_OFFSET(0x13DEDD00)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MONTAGEPROCESSOR_GET_MINPHASE_OFFSET UNITYSDK_OFFSET(0x13DEDCF0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MONTAGEPROCESSOR_ONINIT_OFFSET UNITYSDK_OFFSET(0x13DEDD70)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MONTAGEPROCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x13DEEBF0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_MontageProcessor_TypeDefinitionIndex = 88296;

	class AnimationSubManager_MontageProcessor : public ::NPCCrowd::Animation::AnimationSubManager_Dispatchable
	{
	public:
		::Il2CppArray<::NPCCrowd::Animation::AnimationSubManager_MontageProcessor_LegacyJob>* _buffer; // 0x10
		::NPCCrowd::Animation::AnimationSubManager_MontageProcessor_ParallelJob _parallelJob; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MONTAGEPROCESSOR__CTOR_OFFSET))(this);
		}

		::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase get_MinPhase()
		{
			return ((::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MONTAGEPROCESSOR_GET_MINPHASE_OFFSET))(this);
		}

		::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase get_MaxPhase()
		{
			return ((::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MONTAGEPROCESSOR_GET_MAXPHASE_OFFSET))(this);
		}

		::System::String* get_DebugName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MONTAGEPROCESSOR_GET_DEBUGNAME_OFFSET))(this);
		}

		::System::Void OnInit(::NPCCrowd::Animation::AnimationSubManager* manager)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MONTAGEPROCESSOR_ONINIT_OFFSET))(this, manager);
		}

		::Unity::Jobs::JobHandle Dispatch(::NPCCrowd::Animation::AnimationSubManager* manager, ::Unity::Jobs::JobHandle dependsOn)
		{
			return ((::Unity::Jobs::JobHandle(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager*, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MONTAGEPROCESSOR_DISPATCH_OFFSET))(this, manager, dependsOn);
		}
	};
}
