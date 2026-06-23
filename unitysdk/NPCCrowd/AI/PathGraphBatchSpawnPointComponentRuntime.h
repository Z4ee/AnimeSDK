#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/PathGraphFeaturePointComponentRuntime.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NPCCrowd::AI { class PathGraphBatchSpawnPointComponent; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class Action_5; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_AI_PATHGRAPHBATCHSPAWNPOINTCOMPONENTRUNTIME_CLEAR_OFFSET UNITYSDK_OFFSET(0xF99C530)
#define NPCCROWD_AI_PATHGRAPHBATCHSPAWNPOINTCOMPONENTRUNTIME_INIT_OFFSET UNITYSDK_OFFSET(0xF99C4A0)
#define NPCCROWD_AI_PATHGRAPHBATCHSPAWNPOINTCOMPONENTRUNTIME_PAIRITEMSFROMTWOLISTSRANDOMLYKEEPINGORDER_OFFSET UNITYSDK_OFFSET(0xF99C840)
#define NPCCROWD_AI_PATHGRAPHBATCHSPAWNPOINTCOMPONENTRUNTIME_SPAWNBATCH_OFFSET UNITYSDK_OFFSET(0xF99C580)
#define NPCCROWD_AI_PATHGRAPHBATCHSPAWNPOINTCOMPONENTRUNTIME__CTOR_OFFSET UNITYSDK_OFFSET(0xF99CB40)
#define NPCCROWD_AI_PATHGRAPHBATCHSPAWNPOINTCOMPONENTRUNTIME___BASE_CLEAR_OFFSET UNITYSDK_OFFSET(0xF99CB50)
#define NPCCROWD_AI_PATHGRAPHBATCHSPAWNPOINTCOMPONENTRUNTIME___BASE_INIT_OFFSET UNITYSDK_OFFSET(0xF99CBE0)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphBatchSpawnPointComponentRuntime_TypeDefinitionIndex = 81016;

	class PathGraphBatchSpawnPointComponentRuntime : public ::NPCCrowd::AI::PathGraphFeaturePointComponentRuntime
	{
	public:
		::NPCCrowd::AI::PathGraphBatchSpawnPointComponent* _config; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHBATCHSPAWNPOINTCOMPONENTRUNTIME__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHBATCHSPAWNPOINTCOMPONENTRUNTIME_INIT_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHBATCHSPAWNPOINTCOMPONENTRUNTIME_CLEAR_OFFSET))(this);
		}

		::System::Void SpawnBatch(::System::Collections::Generic::List_1<::System::Int32>* tagIndexList, ::System::Action_5<::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Int32, ::System::Single>* spawnCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Action_5<::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Int32, ::System::Single>*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHBATCHSPAWNPOINTCOMPONENTRUNTIME_SPAWNBATCH_OFFSET))(this, tagIndexList, spawnCallback);
		}

		static ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* PairItemsFromTwoListsRandomlyKeepingOrder(::System::Int32 countA, ::System::Int32 countB)
		{
			return ((::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHBATCHSPAWNPOINTCOMPONENTRUNTIME_PAIRITEMSFROMTWOLISTSRANDOMLYKEEPINGORDER_OFFSET))(countA, countB);
		}

		::System::Void __base_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHBATCHSPAWNPOINTCOMPONENTRUNTIME___BASE_CLEAR_OFFSET))(this);
		}

		::System::Void __base_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHBATCHSPAWNPOINTCOMPONENTRUNTIME___BASE_INIT_OFFSET))(this);
		}
	};
}
