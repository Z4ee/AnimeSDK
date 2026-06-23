#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NPCCROWD_AI_PATHGRAPHCONNECTORCONFIG_EDITGRAPHCONNECTION__CTOR_OFFSET UNITYSDK_OFFSET(0xE8A8160)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphConnectorConfig_EditGraphConnection_TypeDefinitionIndex = 74185;

	class PathGraphConnectorConfig_EditGraphConnection : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHCONNECTORCONFIG_EDITGRAPHCONNECTION__CTOR_OFFSET))(this);
		}
	};
}
