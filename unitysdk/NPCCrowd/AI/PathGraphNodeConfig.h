#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/PathGraphNodeConfig_NodeType.h"
#include "unitysdk/System/Object.h"

#define NPCCROWD_AI_PATHGRAPHNODECONFIG_GET_NODEINDEX_OFFSET UNITYSDK_OFFSET(0xEBC2040)
#define NPCCROWD_AI_PATHGRAPHNODECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xEBC2030)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphNodeConfig_TypeDefinitionIndex = 80156;

	class PathGraphNodeConfig : public ::System::Object
	{
	public:
		::System::Int32 nodeID; // 0x10
		::NPCCrowd::AI::PathGraphNodeConfig_NodeType type; // 0x14

		::System::Void _ctor(::NPCCrowd::AI::PathGraphNodeConfig_NodeType type)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::AI::PathGraphNodeConfig_NodeType))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHNODECONFIG__CTOR_OFFSET))(this, type);
		}

		::System::Int32 get_NodeIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHNODECONFIG_GET_NODEINDEX_OFFSET))(this);
		}
	};
}
