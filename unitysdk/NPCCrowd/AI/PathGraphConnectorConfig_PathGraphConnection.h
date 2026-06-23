#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/PathGraphConnectorConfig_PathGraphConnection_PathGraphLaneLink.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_AI_PATHGRAPHCONNECTORCONFIG_PATHGRAPHCONNECTION_GET_ENDNODEINDEX_OFFSET UNITYSDK_OFFSET(0x109F2320)
#define NPCCROWD_AI_PATHGRAPHCONNECTORCONFIG_PATHGRAPHCONNECTION_GET_STARTNODEINDEX_OFFSET UNITYSDK_OFFSET(0x109F2310)
#define NPCCROWD_AI_PATHGRAPHCONNECTORCONFIG_PATHGRAPHCONNECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x109F2330)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphConnectorConfig_PathGraphConnection_TypeDefinitionIndex = 74186;

	class PathGraphConnectorConfig_PathGraphConnection : public ::System::Object
	{
	public:
		::System::Int32 startNodeID; // 0x10
		::System::Int32 endNodeID; // 0x14
		::System::Collections::Generic::List_1<::NPCCrowd::AI::PathGraphConnectorConfig_PathGraphConnection_PathGraphLaneLink>* laneLinks; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHCONNECTORCONFIG_PATHGRAPHCONNECTION__CTOR_OFFSET))(this);
		}

		::System::Int32 get_StartNodeIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHCONNECTORCONFIG_PATHGRAPHCONNECTION_GET_STARTNODEINDEX_OFFSET))(this);
		}

		::System::Int32 get_EndNodeIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHCONNECTORCONFIG_PATHGRAPHCONNECTION_GET_ENDNODEINDEX_OFFSET))(this);
		}
	};
}
