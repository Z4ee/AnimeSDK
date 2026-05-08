#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/NPCCPUAnimationPassBase.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace UnityEngine { class RuntimeAnimatorController; }

#define NPCCROWD_ANIMATION_NPCCPUANIMATORCONTROLLERFKPASS__CTOR_OFFSET UNITYSDK_OFFSET(0x11B2B830)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCCPUAnimatorControllerFKPass_TypeDefinitionIndex = 38830;

	class NPCCPUAnimatorControllerFKPass : public ::NPCCrowd::Animation::NPCCPUAnimationPassBase
	{
	public:
		::System::Void _ctor(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::RuntimeAnimatorController* controller)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::RuntimeAnimatorController*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATORCONTROLLERFKPASS__CTOR_OFFSET))(this, graph, controller);
		}
	};
}
