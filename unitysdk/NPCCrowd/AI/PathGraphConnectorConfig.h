#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/PathGraphNodeConfig.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NPCCrowd::AI { class PathGraphConnectorConfig_PathGraphConnection; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_AI_PATHGRAPHCONNECTORCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xCE45F80)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphConnectorConfig_TypeDefinitionIndex = 77673;

	class PathGraphConnectorConfig : public ::NPCCrowd::AI::PathGraphNodeConfig
	{
	public:
		::UnityEngine::Vector3 centerPosition; // 0x18
		::System::Collections::Generic::List_1<::NPCCrowd::AI::PathGraphConnectorConfig_PathGraphConnection*>* connections; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHCONNECTORCONFIG__CTOR_OFFSET))(this);
		}
	};
}
