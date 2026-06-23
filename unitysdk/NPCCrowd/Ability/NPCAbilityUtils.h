#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityPathFollowFragmentV2.h"
#include "unitysdk/System/Object.h"

namespace NPCCrowd::AI { class PathGraphSplineNodeRuntime; }

#define NPCCROWD_ABILITY_NPCABILITYUTILS_ISNODEBLOCKEDSTART_OFFSET UNITYSDK_OFFSET(0x11362B70)
#define NPCCROWD_ABILITY_NPCABILITYUTILS_ISNODEBLOCKEDSTOP_OFFSET UNITYSDK_OFFSET(0x113629F0)
#define NPCCROWD_ABILITY_NPCABILITYUTILS_ISNODEBLOCKED_1_OFFSET UNITYSDK_OFFSET(0x11362860)
#define NPCCROWD_ABILITY_NPCABILITYUTILS_ISNODEBLOCKED_OFFSET UNITYSDK_OFFSET(0x113626B0)
#define NPCCROWD_ABILITY_NPCABILITYUTILS_ISNODESIMPLEBLOCKED_OFFSET UNITYSDK_OFFSET(0x11362CE0)
#define NPCCROWD_ABILITY_NPCABILITYUTILS_ISPATHFOLLOWBLOCKED_OFFSET UNITYSDK_OFFSET(0x11362DE0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NPCAbilityUtils_TypeDefinitionIndex = 71668;

	class NPCAbilityUtils : public ::System::Object
	{
	public:
		static ::System::Boolean IsNodeBlocked(::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2 pathFollow)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYUTILS_ISNODEBLOCKED_OFFSET))(pathFollow);
		}

		static ::System::Boolean IsNodeBlocked_1(::System::Int32 nodeIdx, ::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2 pathFollow, ::NPCCrowd::AI::PathGraphSplineNodeRuntime* nodeRuntime)
		{
			return ((::System::Boolean(*)(::System::Int32, ::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2, ::NPCCrowd::AI::PathGraphSplineNodeRuntime*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYUTILS_ISNODEBLOCKED_1_OFFSET))(nodeIdx, pathFollow, nodeRuntime);
		}

		static ::System::Boolean IsNodeBlockedStop(::System::Int32 nodeIdx, ::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2 pathFollow, ::NPCCrowd::AI::PathGraphSplineNodeRuntime* nodeRuntime)
		{
			return ((::System::Boolean(*)(::System::Int32, ::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2, ::NPCCrowd::AI::PathGraphSplineNodeRuntime*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYUTILS_ISNODEBLOCKEDSTOP_OFFSET))(nodeIdx, pathFollow, nodeRuntime);
		}

		static ::System::Boolean IsNodeBlockedStart(::System::Int32 nodeIdx, ::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2 pathFollow, ::NPCCrowd::AI::PathGraphSplineNodeRuntime* nodeRuntime)
		{
			return ((::System::Boolean(*)(::System::Int32, ::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2, ::NPCCrowd::AI::PathGraphSplineNodeRuntime*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYUTILS_ISNODEBLOCKEDSTART_OFFSET))(nodeIdx, pathFollow, nodeRuntime);
		}

		static ::System::Boolean IsNodeSimpleBlocked(::System::Int32 nodeID)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYUTILS_ISNODESIMPLEBLOCKED_OFFSET))(nodeID);
		}

		static ::System::Boolean IsPathFollowBlocked(::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2 pathFollow)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYUTILS_ISPATHFOLLOWBLOCKED_OFFSET))(pathFollow);
		}
	};
}
