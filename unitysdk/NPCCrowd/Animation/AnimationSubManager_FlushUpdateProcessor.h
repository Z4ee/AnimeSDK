#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AdjustmentBlendingControlData.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AdjustmentBlendingMotionTarget.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AdjustmentBlendingWarpingTickData.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AnimationProcessPhase.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_NoDispatchable.h"

namespace NPCCrowd::Animation { class AnimationSubManager; }
namespace NPCCrowd::Animation { class AnimationSubManager_AnimationArchetypeData; }
namespace NPCCrowd::Avatar { class NPCAvatarGOReference; }
namespace System { class String; }

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FLUSHUPDATEPROCESSOR_GET_DEBUGNAME_OFFSET UNITYSDK_OFFSET(0x1178E370)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FLUSHUPDATEPROCESSOR_GET_PHASE_OFFSET UNITYSDK_OFFSET(0x1178E360)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FLUSHUPDATEPROCESSOR_ONINIT_OFFSET UNITYSDK_OFFSET(0x1178E3D0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FLUSHUPDATEPROCESSOR_PROCESSWARPINGCOMPENSATE_OFFSET UNITYSDK_OFFSET(0x1178FC10)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FLUSHUPDATEPROCESSOR_PROCESS_OFFSET UNITYSDK_OFFSET(0x1178E4F0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FLUSHUPDATEPROCESSOR_SYNCSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1178F2B0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FLUSHUPDATEPROCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x11790600)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_FlushUpdateProcessor_TypeDefinitionIndex = 57416;

	class AnimationSubManager_FlushUpdateProcessor : public ::NPCCrowd::Animation::AnimationSubManager_NoDispatchable
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FLUSHUPDATEPROCESSOR__CTOR_OFFSET))(this);
		}

		::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase get_Phase()
		{
			return ((::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FLUSHUPDATEPROCESSOR_GET_PHASE_OFFSET))(this);
		}

		::System::String* get_DebugName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FLUSHUPDATEPROCESSOR_GET_DEBUGNAME_OFFSET))(this);
		}

		::System::Void OnInit(::NPCCrowd::Animation::AnimationSubManager* manager)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FLUSHUPDATEPROCESSOR_ONINIT_OFFSET))(this, manager);
		}

		::System::Void Process(::NPCCrowd::Animation::AnimationSubManager* manager)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FLUSHUPDATEPROCESSOR_PROCESS_OFFSET))(this, manager);
		}

		static ::System::Void SyncStateMachine(::NPCCrowd::Animation::AnimationSubManager_AnimationArchetypeData* animation)
		{
			return ((::System::Void(*)(::NPCCrowd::Animation::AnimationSubManager_AnimationArchetypeData*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FLUSHUPDATEPROCESSOR_SYNCSTATEMACHINE_OFFSET))(animation);
		}

		static ::System::Void ProcessWarpingCompensate(::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingMotionTarget warpingTarget, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingControlData controlData, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingWarpingTickData warpingData, ::NPCCrowd::Avatar::NPCAvatarGOReference* goInfo)
		{
			return ((::System::Void(*)(::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingMotionTarget, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingControlData, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingWarpingTickData, ::NPCCrowd::Avatar::NPCAvatarGOReference*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FLUSHUPDATEPROCESSOR_PROCESSWARPINGCOMPENSATE_OFFSET))(warpingTarget, controlData, warpingData, goInfo);
		}
	};
}
