#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FGameplayTagContainer.h"
#include "unitysdk/NPCCrowd/AI/PathGraphNodeRuntime.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NPCCrowd::AI { class PathGraphConnectorConfig; }

#define NPCCROWD_AI_PATHGRAPHCONNECTORNODERUNTIME_CLEAR_OFFSET UNITYSDK_OFFSET(0x106F3FD0)
#define NPCCROWD_AI_PATHGRAPHCONNECTORNODERUNTIME_GETCENTERPOSITION_OFFSET UNITYSDK_OFFSET(0x106F4090)
#define NPCCROWD_AI_PATHGRAPHCONNECTORNODERUNTIME_GETNEXTSPLINELANEINDEX_OFFSET UNITYSDK_OFFSET(0x106F4150)
#define NPCCROWD_AI_PATHGRAPHCONNECTORNODERUNTIME_GETRANDOMNEXTNODELANE_OFFSET UNITYSDK_OFFSET(0x106F49E0)
#define NPCCROWD_AI_PATHGRAPHCONNECTORNODERUNTIME_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x106F3F20)
#define NPCCROWD_AI_PATHGRAPHCONNECTORNODERUNTIME_GET_HEURISTICPOSITION_OFFSET UNITYSDK_OFFSET(0x106F4010)
#define NPCCROWD_AI_PATHGRAPHCONNECTORNODERUNTIME_INIT_OFFSET UNITYSDK_OFFSET(0x106F3F90)
#define NPCCROWD_AI_PATHGRAPHCONNECTORNODERUNTIME_ISALLCONNECTEDNODEBLOCKED_OFFSET UNITYSDK_OFFSET(0x106F4590)
#define NPCCROWD_AI_PATHGRAPHCONNECTORNODERUNTIME__CTOR_OFFSET UNITYSDK_OFFSET(0x106F5410)
#define NPCCROWD_AI_PATHGRAPHCONNECTORNODERUNTIME___BASE_CLEAR_OFFSET UNITYSDK_OFFSET(0x106F5420)
#define NPCCROWD_AI_PATHGRAPHCONNECTORNODERUNTIME___BASE_INIT_OFFSET UNITYSDK_OFFSET(0x106F54B0)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphConnectorNodeRuntime_TypeDefinitionIndex = 49787;

	class PathGraphConnectorNodeRuntime : public ::NPCCrowd::AI::PathGraphNodeRuntime
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHCONNECTORNODERUNTIME__CTOR_OFFSET))(this);
		}

		::NPCCrowd::AI::PathGraphConnectorConfig* get_Config()
		{
			return ((::NPCCrowd::AI::PathGraphConnectorConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHCONNECTORNODERUNTIME_GET_CONFIG_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHCONNECTORNODERUNTIME_INIT_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHCONNECTORNODERUNTIME_CLEAR_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_HeuristicPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHCONNECTORNODERUNTIME_GET_HEURISTICPOSITION_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetCenterPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHCONNECTORNODERUNTIME_GETCENTERPOSITION_OFFSET))(this);
		}

		::System::Int32 GetNextSplineLaneIndex(::System::Int32 startNodeID, ::System::Int32 endNodeID, ::System::Int32 laneIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHCONNECTORNODERUNTIME_GETNEXTSPLINELANEINDEX_OFFSET))(this, startNodeID, endNodeID, laneIndex);
		}

		::System::Boolean IsAllConnectedNodeBlocked(::System::Int32 startNodeID, ::System::Int32 laneIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHCONNECTORNODERUNTIME_ISALLCONNECTEDNODEBLOCKED_OFFSET))(this, startNodeID, laneIndex);
		}

		::System::Boolean GetRandomNextNodeLane(::System::Int32 startNodeID, ::System::Int32 laneIndex, ::Foundation::Unreal::FGameplayTagContainer tags, ::System::Int32& targetNode, ::System::Int32& targetLaneIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::Foundation::Unreal::FGameplayTagContainer, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHCONNECTORNODERUNTIME_GETRANDOMNEXTNODELANE_OFFSET))(this, startNodeID, laneIndex, tags, targetNode, targetLaneIndex);
		}

		::System::Void __base_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHCONNECTORNODERUNTIME___BASE_CLEAR_OFFSET))(this);
		}

		::System::Void __base_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHCONNECTORNODERUNTIME___BASE_INIT_OFFSET))(this);
		}
	};
}
