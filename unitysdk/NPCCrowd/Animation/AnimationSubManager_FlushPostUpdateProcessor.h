#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AnimationProcessPhase.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_NoDispatchable.h"

namespace NPCCrowd::Animation { class AnimationSubManager; }
namespace System { class String; }

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FLUSHPOSTUPDATEPROCESSOR_GET_DEBUGNAME_OFFSET UNITYSDK_OFFSET(0x12D190A0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FLUSHPOSTUPDATEPROCESSOR_GET_PHASE_OFFSET UNITYSDK_OFFSET(0x12D19090)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FLUSHPOSTUPDATEPROCESSOR_ONINIT_OFFSET UNITYSDK_OFFSET(0x12D19100)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FLUSHPOSTUPDATEPROCESSOR_PROCESS_OFFSET UNITYSDK_OFFSET(0x12D191D0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FLUSHPOSTUPDATEPROCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x12D19220)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_FlushPostUpdateProcessor_TypeDefinitionIndex = 88290;

	class AnimationSubManager_FlushPostUpdateProcessor : public ::NPCCrowd::Animation::AnimationSubManager_NoDispatchable
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FLUSHPOSTUPDATEPROCESSOR__CTOR_OFFSET))(this);
		}

		::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase get_Phase()
		{
			return ((::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FLUSHPOSTUPDATEPROCESSOR_GET_PHASE_OFFSET))(this);
		}

		::System::String* get_DebugName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FLUSHPOSTUPDATEPROCESSOR_GET_DEBUGNAME_OFFSET))(this);
		}

		::System::Void OnInit(::NPCCrowd::Animation::AnimationSubManager* manager)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FLUSHPOSTUPDATEPROCESSOR_ONINIT_OFFSET))(this, manager);
		}

		::System::Void Process(::NPCCrowd::Animation::AnimationSubManager* manager)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FLUSHPOSTUPDATEPROCESSOR_PROCESS_OFFSET))(this, manager);
		}
	};
}
