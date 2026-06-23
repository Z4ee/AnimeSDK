#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/NPCCPUAnimationPassBase.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

#define NPCCROWD_ANIMATION_NPCCPUJOBPASSBASE__CTOR_1_OFFSET UNITYSDK_OFFSET(0xFFC9FA0)
#define NPCCROWD_ANIMATION_NPCCPUJOBPASSBASE__CTOR_OFFSET UNITYSDK_OFFSET(0xFFC9F90)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCCPUJobPassBase_TypeDefinitionIndex = 42253;

	class NPCCPUJobPassBase : public ::NPCCrowd::Animation::NPCCPUAnimationPassBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUJOBPASSBASE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::UnityEngine::Playables::PlayableGraph graph)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUJOBPASSBASE__CTOR_1_OFFSET))(this, graph);
		}
	};
}
