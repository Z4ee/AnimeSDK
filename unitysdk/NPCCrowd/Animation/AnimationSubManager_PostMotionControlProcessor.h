#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AnimationProcessPhase.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_Dispatchable.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_PostMotionControlProcessor_LegacyJob.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"

namespace NPCCrowd::Animation { class AnimationSubManager; }
namespace System { class String; }

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSTMOTIONCONTROLPROCESSOR_DISPATCH_OFFSET UNITYSDK_OFFSET(0x12D20300)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSTMOTIONCONTROLPROCESSOR_GET_DEBUGNAME_OFFSET UNITYSDK_OFFSET(0x12D20210)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSTMOTIONCONTROLPROCESSOR_GET_MAXPHASE_OFFSET UNITYSDK_OFFSET(0x12D20200)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSTMOTIONCONTROLPROCESSOR_GET_MINPHASE_OFFSET UNITYSDK_OFFSET(0x12D201F0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSTMOTIONCONTROLPROCESSOR_ONINIT_OFFSET UNITYSDK_OFFSET(0x12D20270)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSTMOTIONCONTROLPROCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x12D20760)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_PostMotionControlProcessor_TypeDefinitionIndex = 88279;

	class AnimationSubManager_PostMotionControlProcessor : public ::NPCCrowd::Animation::AnimationSubManager_Dispatchable
	{
	public:
		::Il2CppArray<::NPCCrowd::Animation::AnimationSubManager_PostMotionControlProcessor_LegacyJob>* _buffer; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSTMOTIONCONTROLPROCESSOR__CTOR_OFFSET))(this);
		}

		::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase get_MinPhase()
		{
			return ((::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSTMOTIONCONTROLPROCESSOR_GET_MINPHASE_OFFSET))(this);
		}

		::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase get_MaxPhase()
		{
			return ((::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSTMOTIONCONTROLPROCESSOR_GET_MAXPHASE_OFFSET))(this);
		}

		::System::String* get_DebugName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSTMOTIONCONTROLPROCESSOR_GET_DEBUGNAME_OFFSET))(this);
		}

		::System::Void OnInit(::NPCCrowd::Animation::AnimationSubManager* manager)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSTMOTIONCONTROLPROCESSOR_ONINIT_OFFSET))(this, manager);
		}

		::Unity::Jobs::JobHandle Dispatch(::NPCCrowd::Animation::AnimationSubManager* manager, ::Unity::Jobs::JobHandle dependsOn)
		{
			return ((::Unity::Jobs::JobHandle(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager*, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_POSTMOTIONCONTROLPROCESSOR_DISPATCH_OFFSET))(this, manager, dependsOn);
		}
	};
}
