#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Action_2; }

#define NPCCROWD_AI_PATHGRAPHSPAWNPOINTCOMPONENTRUNTIME_SPAWNACTION__CTOR_OFFSET UNITYSDK_OFFSET(0xE004F50)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphSpawnPointComponentRuntime_SpawnAction_TypeDefinitionIndex = 40669;

	class PathGraphSpawnPointComponentRuntime_SpawnAction : public ::System::Object
	{
	public:
		::System::Action_2<::System::Int32, ::System::Int32>* Callback; // 0x10
		::System::Int32 TagID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPAWNPOINTCOMPONENTRUNTIME_SPAWNACTION__CTOR_OFFSET))(this);
		}
	};
}
