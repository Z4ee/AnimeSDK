#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AnimationProcessPhase.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_NoDispatchable.h"

namespace NPCCrowd::Animation { class AnimationSubManager; }
namespace System { class String; }

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FLUSHPREUPDATEPROCESSOR_GET_DEBUGNAME_OFFSET UNITYSDK_OFFSET(0x11B24BF0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FLUSHPREUPDATEPROCESSOR_GET_PHASE_OFFSET UNITYSDK_OFFSET(0x11B24BE0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FLUSHPREUPDATEPROCESSOR_ONINIT_OFFSET UNITYSDK_OFFSET(0x11B24C50)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FLUSHPREUPDATEPROCESSOR_PROCESS_OFFSET UNITYSDK_OFFSET(0x11B24D20)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FLUSHPREUPDATEPROCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x11B24ED0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_FlushPreUpdateProcessor_TypeDefinitionIndex = 70444;

	class AnimationSubManager_FlushPreUpdateProcessor : public ::NPCCrowd::Animation::AnimationSubManager_NoDispatchable
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FLUSHPREUPDATEPROCESSOR__CTOR_OFFSET))(this);
		}

		::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase get_Phase()
		{
			return ((::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FLUSHPREUPDATEPROCESSOR_GET_PHASE_OFFSET))(this);
		}

		::System::String* get_DebugName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FLUSHPREUPDATEPROCESSOR_GET_DEBUGNAME_OFFSET))(this);
		}

		::System::Void OnInit(::NPCCrowd::Animation::AnimationSubManager* manager)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FLUSHPREUPDATEPROCESSOR_ONINIT_OFFSET))(this, manager);
		}

		::System::Void Process(::NPCCrowd::Animation::AnimationSubManager* manager)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FLUSHPREUPDATEPROCESSOR_PROCESS_OFFSET))(this, manager);
		}
	};
}
