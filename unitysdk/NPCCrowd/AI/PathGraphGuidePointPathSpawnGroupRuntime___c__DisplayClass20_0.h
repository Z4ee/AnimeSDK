#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/PathGraphRuntime_PathFindingResult_FPathFindingResultNode.h"
#include "unitysdk/System/Object.h"

namespace NPCCrowd::AI { class PathGraphFeaturePointPathConfig; }
namespace NPCCrowd::AI { class PathGraphFeaturePointV2Config; }
namespace NPCCrowd::AI { class PathGraphGuidePointPathSpawnGroupRuntime; }
namespace NPCCrowd::AI { class PathGraphSpawnPointComponentRuntime; }
namespace NPCCrowd::AI { class PathGraphSplineControlPointLocatorComponent; }
namespace System { template <typename T> class Predicate_1; }

#define NPCCROWD_AI_PATHGRAPHGUIDEPOINTPATHSPAWNGROUPRUNTIME___C__DISPLAYCLASS20_0__CTOR_OFFSET UNITYSDK_OFFSET(0xF3E42B0)
#define NPCCROWD_AI_PATHGRAPHGUIDEPOINTPATHSPAWNGROUPRUNTIME___C__DISPLAYCLASS20_0__SPAWNIMMEDIATELYFORPATH_B__0_OFFSET UNITYSDK_OFFSET(0xF3E42C0)
#define NPCCROWD_AI_PATHGRAPHGUIDEPOINTPATHSPAWNGROUPRUNTIME___C__DISPLAYCLASS20_0__SPAWNIMMEDIATELYFORPATH_B__1_OFFSET UNITYSDK_OFFSET(0xF3E4590)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphGuidePointPathSpawnGroupRuntime___c__DisplayClass20_0_TypeDefinitionIndex = 60026;

	class PathGraphGuidePointPathSpawnGroupRuntime___c__DisplayClass20_0 : public ::System::Object
	{
	public:
		::System::Predicate_1<::NPCCrowd::AI::PathGraphRuntime_PathFindingResult_FPathFindingResultNode>* __9__1; // 0x10
		::NPCCrowd::AI::PathGraphGuidePointPathSpawnGroupRuntime* __4__this; // 0x18
		::NPCCrowd::AI::PathGraphFeaturePointPathConfig* pathConfig; // 0x20
		::NPCCrowd::AI::PathGraphSplineControlPointLocatorComponent* locator; // 0x28
		::NPCCrowd::AI::PathGraphSpawnPointComponentRuntime* spawnPoint; // 0x30
		::NPCCrowd::AI::PathGraphFeaturePointV2Config* pointConfig; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHGUIDEPOINTPATHSPAWNGROUPRUNTIME___C__DISPLAYCLASS20_0__CTOR_OFFSET))(this);
		}

		::System::Void _SpawnImmediatelyForPath_b__0(::System::Int32 tag, ::System::Int32 laneIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHGUIDEPOINTPATHSPAWNGROUPRUNTIME___C__DISPLAYCLASS20_0__SPAWNIMMEDIATELYFORPATH_B__0_OFFSET))(this, tag, laneIndex);
		}

		::System::Boolean _SpawnImmediatelyForPath_b__1(::NPCCrowd::AI::PathGraphRuntime_PathFindingResult_FPathFindingResultNode node)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::AI::PathGraphRuntime_PathFindingResult_FPathFindingResultNode))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHGUIDEPOINTPATHSPAWNGROUPRUNTIME___C__DISPLAYCLASS20_0__SPAWNIMMEDIATELYFORPATH_B__1_OFFSET))(this, node);
		}
	};
}
