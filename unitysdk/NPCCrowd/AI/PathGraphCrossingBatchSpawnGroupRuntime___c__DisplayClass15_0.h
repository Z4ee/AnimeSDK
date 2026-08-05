#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace NPCCrowd::AI { class PathGraphCrossingBatchSpawnGroupRuntime; }

#define NPCCROWD_AI_PATHGRAPHCROSSINGBATCHSPAWNGROUPRUNTIME___C__DISPLAYCLASS15_0__BATCHSTARTMOVING_B__0_OFFSET UNITYSDK_OFFSET(0x125FBF80)
#define NPCCROWD_AI_PATHGRAPHCROSSINGBATCHSPAWNGROUPRUNTIME___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0x125FBF70)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphCrossingBatchSpawnGroupRuntime___c__DisplayClass15_0_TypeDefinitionIndex = 87467;

	class PathGraphCrossingBatchSpawnGroupRuntime___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::NPCCrowd::AI::PathGraphCrossingBatchSpawnGroupRuntime* __4__this; // 0x10
		::MoleMole::Battle::Entity* entity; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHCROSSINGBATCHSPAWNGROUPRUNTIME___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
		}

		::System::Void _BatchStartMoving_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHCROSSINGBATCHSPAWNGROUPRUNTIME___C__DISPLAYCLASS15_0__BATCHSTARTMOVING_B__0_OFFSET))(this);
		}
	};
}
