#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AnimationProcessPhase.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_Dispatchable.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_RequestAdjustmentBlendingByMotionProcessor_LegacyJob.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_RequestAdjustmentBlendingByMotionProcessor_ParallelJob.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"

namespace NPCCrowd::Animation { class AnimationSubManager; }
namespace System { class String; }

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_REQUESTADJUSTMENTBLENDINGBYMOTIONPROCESSOR_DISPATCH_OFFSET UNITYSDK_OFFSET(0xE8B85A0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_REQUESTADJUSTMENTBLENDINGBYMOTIONPROCESSOR_GET_DEBUGNAME_OFFSET UNITYSDK_OFFSET(0xE8B8380)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_REQUESTADJUSTMENTBLENDINGBYMOTIONPROCESSOR_GET_MAXPHASE_OFFSET UNITYSDK_OFFSET(0xE8B8370)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_REQUESTADJUSTMENTBLENDINGBYMOTIONPROCESSOR_GET_MINPHASE_OFFSET UNITYSDK_OFFSET(0xE8B8360)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_REQUESTADJUSTMENTBLENDINGBYMOTIONPROCESSOR_ONINIT_OFFSET UNITYSDK_OFFSET(0xE8B83E0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_REQUESTADJUSTMENTBLENDINGBYMOTIONPROCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0xE8B8B50)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_RequestAdjustmentBlendingByMotionProcessor_TypeDefinitionIndex = 57409;

	class AnimationSubManager_RequestAdjustmentBlendingByMotionProcessor : public ::NPCCrowd::Animation::AnimationSubManager_Dispatchable
	{
	public:
		::Il2CppArray<::NPCCrowd::Animation::AnimationSubManager_RequestAdjustmentBlendingByMotionProcessor_LegacyJob>* _buffer; // 0x10
		::NPCCrowd::Animation::AnimationSubManager_RequestAdjustmentBlendingByMotionProcessor_ParallelJob _parallelJob; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_REQUESTADJUSTMENTBLENDINGBYMOTIONPROCESSOR__CTOR_OFFSET))(this);
		}

		::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase get_MinPhase()
		{
			return ((::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_REQUESTADJUSTMENTBLENDINGBYMOTIONPROCESSOR_GET_MINPHASE_OFFSET))(this);
		}

		::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase get_MaxPhase()
		{
			return ((::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_REQUESTADJUSTMENTBLENDINGBYMOTIONPROCESSOR_GET_MAXPHASE_OFFSET))(this);
		}

		::System::String* get_DebugName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_REQUESTADJUSTMENTBLENDINGBYMOTIONPROCESSOR_GET_DEBUGNAME_OFFSET))(this);
		}

		::System::Void OnInit(::NPCCrowd::Animation::AnimationSubManager* manager)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_REQUESTADJUSTMENTBLENDINGBYMOTIONPROCESSOR_ONINIT_OFFSET))(this, manager);
		}

		::Unity::Jobs::JobHandle Dispatch(::NPCCrowd::Animation::AnimationSubManager* manager, ::Unity::Jobs::JobHandle dependsOn)
		{
			return ((::Unity::Jobs::JobHandle(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager*, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_REQUESTADJUSTMENTBLENDINGBYMOTIONPROCESSOR_DISPATCH_OFFSET))(this, manager, dependsOn);
		}
	};
}
