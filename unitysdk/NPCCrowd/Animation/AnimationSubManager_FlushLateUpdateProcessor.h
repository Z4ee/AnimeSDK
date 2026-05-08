#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AnimationProcessPhase.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_NoDispatchable.h"

namespace NPCCrowd::Animation { class AnimationSubManager; }
namespace NPCCrowd::Animation { class AnimationSubManager_AnimationArchetypeData; }
namespace System { class String; }

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FLUSHLATEUPDATEPROCESSOR_GET_DEBUGNAME_OFFSET UNITYSDK_OFFSET(0x11B22600)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FLUSHLATEUPDATEPROCESSOR_GET_PHASE_OFFSET UNITYSDK_OFFSET(0x11B225F0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FLUSHLATEUPDATEPROCESSOR_ONINIT_OFFSET UNITYSDK_OFFSET(0x11B22660)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FLUSHLATEUPDATEPROCESSOR_PROCESS_OFFSET UNITYSDK_OFFSET(0x11B22730)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FLUSHLATEUPDATEPROCESSOR_WRITEBACKBLENDSHAPE_OFFSET UNITYSDK_OFFSET(0x11B24150)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FLUSHLATEUPDATEPROCESSOR_WRITEBACKPOSE_OFFSET UNITYSDK_OFFSET(0x11B23DB0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FLUSHLATEUPDATEPROCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x11B24BD0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_FlushLateUpdateProcessor_TypeDefinitionIndex = 70512;

	class AnimationSubManager_FlushLateUpdateProcessor : public ::NPCCrowd::Animation::AnimationSubManager_NoDispatchable
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FLUSHLATEUPDATEPROCESSOR__CTOR_OFFSET))(this);
		}

		::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase get_Phase()
		{
			return ((::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FLUSHLATEUPDATEPROCESSOR_GET_PHASE_OFFSET))(this);
		}

		::System::String* get_DebugName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FLUSHLATEUPDATEPROCESSOR_GET_DEBUGNAME_OFFSET))(this);
		}

		::System::Void OnInit(::NPCCrowd::Animation::AnimationSubManager* manager)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FLUSHLATEUPDATEPROCESSOR_ONINIT_OFFSET))(this, manager);
		}

		::System::Void Process(::NPCCrowd::Animation::AnimationSubManager* manager)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FLUSHLATEUPDATEPROCESSOR_PROCESS_OFFSET))(this, manager);
		}

		static ::System::Void WriteBackPose(::NPCCrowd::Animation::AnimationSubManager_AnimationArchetypeData* animation)
		{
			return ((::System::Void(*)(::NPCCrowd::Animation::AnimationSubManager_AnimationArchetypeData*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FLUSHLATEUPDATEPROCESSOR_WRITEBACKPOSE_OFFSET))(animation);
		}

		static ::System::Void WriteBackBlendShape(::NPCCrowd::Animation::AnimationSubManager_AnimationArchetypeData* animation)
		{
			return ((::System::Void(*)(::NPCCrowd::Animation::AnimationSubManager_AnimationArchetypeData*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FLUSHLATEUPDATEPROCESSOR_WRITEBACKBLENDSHAPE_OFFSET))(animation);
		}
	};
}
