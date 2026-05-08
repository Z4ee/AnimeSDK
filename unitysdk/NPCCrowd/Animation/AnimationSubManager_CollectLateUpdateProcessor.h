#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AnimationProcessPhase.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_NoDispatchable.h"

namespace NPCCrowd::Animation { class AnimationSubManager; }
namespace System { class String; }

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTLATEUPDATEPROCESSOR_GET_DEBUGNAME_OFFSET UNITYSDK_OFFSET(0xB542580)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTLATEUPDATEPROCESSOR_GET_PHASE_OFFSET UNITYSDK_OFFSET(0xB542570)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTLATEUPDATEPROCESSOR_ONINIT_OFFSET UNITYSDK_OFFSET(0xB5425E0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTLATEUPDATEPROCESSOR_PROCESS_OFFSET UNITYSDK_OFFSET(0xB542630)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTLATEUPDATEPROCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0xB542680)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_CollectLateUpdateProcessor_TypeDefinitionIndex = 70509;

	class AnimationSubManager_CollectLateUpdateProcessor : public ::NPCCrowd::Animation::AnimationSubManager_NoDispatchable
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTLATEUPDATEPROCESSOR__CTOR_OFFSET))(this);
		}

		::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase get_Phase()
		{
			return ((::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTLATEUPDATEPROCESSOR_GET_PHASE_OFFSET))(this);
		}

		::System::String* get_DebugName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTLATEUPDATEPROCESSOR_GET_DEBUGNAME_OFFSET))(this);
		}

		::System::Void OnInit(::NPCCrowd::Animation::AnimationSubManager* manager)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTLATEUPDATEPROCESSOR_ONINIT_OFFSET))(this, manager);
		}

		::System::Void Process(::NPCCrowd::Animation::AnimationSubManager* manager)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTLATEUPDATEPROCESSOR_PROCESS_OFFSET))(this, manager);
		}
	};
}
