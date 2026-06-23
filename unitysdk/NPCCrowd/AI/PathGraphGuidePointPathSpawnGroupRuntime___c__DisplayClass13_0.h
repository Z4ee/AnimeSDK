#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NPCCrowd::AI { class PathGraphFeaturePointPathConfig; }
namespace NPCCrowd::AI { class PathGraphGuidePointPathSpawnGroupRuntime; }
namespace NPCCrowd::AI { class PathGraphSpawnPointComponentRuntime; }

#define NPCCROWD_AI_PATHGRAPHGUIDEPOINTPATHSPAWNGROUPRUNTIME___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1135E890)
#define NPCCROWD_AI_PATHGRAPHGUIDEPOINTPATHSPAWNGROUPRUNTIME___C__DISPLAYCLASS13_0__TRYSPAWNNPC_B__0_OFFSET UNITYSDK_OFFSET(0x113604B0)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphGuidePointPathSpawnGroupRuntime___c__DisplayClass13_0_TypeDefinitionIndex = 62853;

	class PathGraphGuidePointPathSpawnGroupRuntime___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::NPCCrowd::AI::PathGraphFeaturePointPathConfig* pathConfig; // 0x10
		::NPCCrowd::AI::PathGraphGuidePointPathSpawnGroupRuntime* __4__this; // 0x18
		::NPCCrowd::AI::PathGraphSpawnPointComponentRuntime* spawnPoint; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHGUIDEPOINTPATHSPAWNGROUPRUNTIME___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
		}

		::System::Void _TrySpawnNpc_b__0(::System::Int32 tag, ::System::Int32 laneIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHGUIDEPOINTPATHSPAWNGROUPRUNTIME___C__DISPLAYCLASS13_0__TRYSPAWNNPC_B__0_OFFSET))(this, tag, laneIndex);
		}
	};
}
