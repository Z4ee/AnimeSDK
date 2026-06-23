#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/PathGraphSpawnGroupRuntime.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_F2DAD7F45F518868;
namespace MoleMole::Battle { class Entity; }
namespace NPCCrowd::AI { class PathGraphCrossingBatchSpawnGroupConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_AI_PATHGRAPHCROSSINGBATCHSPAWNGROUPRUNTIME_BATCHSPAWN_OFFSET UNITYSDK_OFFSET(0xD405F40)
#define NPCCROWD_AI_PATHGRAPHCROSSINGBATCHSPAWNGROUPRUNTIME_BATCHSTARTMOVING_OFFSET UNITYSDK_OFFSET(0xD4057F0)
#define NPCCROWD_AI_PATHGRAPHCROSSINGBATCHSPAWNGROUPRUNTIME_CLEAR_OFFSET UNITYSDK_OFFSET(0xD405300)
#define NPCCROWD_AI_PATHGRAPHCROSSINGBATCHSPAWNGROUPRUNTIME_GETSPAWNEDNPCCOUNT_OFFSET UNITYSDK_OFFSET(0xD405B20)
#define NPCCROWD_AI_PATHGRAPHCROSSINGBATCHSPAWNGROUPRUNTIME_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xD405040)
#define NPCCROWD_AI_PATHGRAPHCROSSINGBATCHSPAWNGROUPRUNTIME_INIT_OFFSET UNITYSDK_OFFSET(0xD4050B0)
#define NPCCROWD_AI_PATHGRAPHCROSSINGBATCHSPAWNGROUPRUNTIME_SETENABLED_OFFSET UNITYSDK_OFFSET(0xD405790)
#define NPCCROWD_AI_PATHGRAPHCROSSINGBATCHSPAWNGROUPRUNTIME_SETTRANSFORM_OFFSET UNITYSDK_OFFSET(0xD4061A0)
#define NPCCROWD_AI_PATHGRAPHCROSSINGBATCHSPAWNGROUPRUNTIME_SPAWNCURRENTPHASE_OFFSET UNITYSDK_OFFSET(0xD405C70)
#define NPCCROWD_AI_PATHGRAPHCROSSINGBATCHSPAWNGROUPRUNTIME_STARTMOVING_OFFSET UNITYSDK_OFFSET(0xD406300)
#define NPCCROWD_AI_PATHGRAPHCROSSINGBATCHSPAWNGROUPRUNTIME_STOPMOVING_OFFSET UNITYSDK_OFFSET(0xD406460)
#define NPCCROWD_AI_PATHGRAPHCROSSINGBATCHSPAWNGROUPRUNTIME_TRYREMOVENPC_OFFSET UNITYSDK_OFFSET(0xD4055D0)
#define NPCCROWD_AI_PATHGRAPHCROSSINGBATCHSPAWNGROUPRUNTIME_TRYSPAWNNPC_OFFSET UNITYSDK_OFFSET(0xD405730)
#define NPCCROWD_AI_PATHGRAPHCROSSINGBATCHSPAWNGROUPRUNTIME_UPDATE_OFFSET UNITYSDK_OFFSET(0xD405520)
#define NPCCROWD_AI_PATHGRAPHCROSSINGBATCHSPAWNGROUPRUNTIME__BATCHSPAWN_B__14_0_OFFSET UNITYSDK_OFFSET(0xD406560)
#define NPCCROWD_AI_PATHGRAPHCROSSINGBATCHSPAWNGROUPRUNTIME__CTOR_OFFSET UNITYSDK_OFFSET(0xD406550)
#define NPCCROWD_AI_PATHGRAPHCROSSINGBATCHSPAWNGROUPRUNTIME___BASE_CLEAR_OFFSET UNITYSDK_OFFSET(0xD406A70)
#define NPCCROWD_AI_PATHGRAPHCROSSINGBATCHSPAWNGROUPRUNTIME___BASE_GETSPAWNEDNPCCOUNT_OFFSET UNITYSDK_OFFSET(0xD406B00)
#define NPCCROWD_AI_PATHGRAPHCROSSINGBATCHSPAWNGROUPRUNTIME___BASE_INIT_OFFSET UNITYSDK_OFFSET(0xD406B10)
#define NPCCROWD_AI_PATHGRAPHCROSSINGBATCHSPAWNGROUPRUNTIME___BASE_SETENABLED_OFFSET UNITYSDK_OFFSET(0xD406BA0)
#define NPCCROWD_AI_PATHGRAPHCROSSINGBATCHSPAWNGROUPRUNTIME___BASE_UPDATE_OFFSET UNITYSDK_OFFSET(0xD406C30)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphCrossingBatchSpawnGroupRuntime_TypeDefinitionIndex = 71167;

	class PathGraphCrossingBatchSpawnGroupRuntime : public ::NPCCrowd::AI::PathGraphSpawnGroupRuntime
	{
	public:
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::Class_3_F2DAD7F45F518868*>>* _spawnedNpcIndexList; // 0x40
		::System::Collections::Generic::List_1<::System::Int32>* _tagIndexPool; // 0x48
		::System::Collections::Generic::List_1<::Class_3_F2DAD7F45F518868*>* _spawnedNpcCurrentPhase; // 0x50
		::System::Boolean _waitToSpawnDuringCurrentPhase; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHCROSSINGBATCHSPAWNGROUPRUNTIME__CTOR_OFFSET))(this);
		}

		::NPCCrowd::AI::PathGraphCrossingBatchSpawnGroupConfig* get_Config()
		{
			return ((::NPCCrowd::AI::PathGraphCrossingBatchSpawnGroupConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHCROSSINGBATCHSPAWNGROUPRUNTIME_GET_CONFIG_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHCROSSINGBATCHSPAWNGROUPRUNTIME_INIT_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHCROSSINGBATCHSPAWNGROUPRUNTIME_CLEAR_OFFSET))(this);
		}

		::System::Void Update(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHCROSSINGBATCHSPAWNGROUPRUNTIME_UPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void SetEnabled(::System::Boolean enabled)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHCROSSINGBATCHSPAWNGROUPRUNTIME_SETENABLED_OFFSET))(this, enabled);
		}

		::System::Int32 GetSpawnedNpcCount(::System::Int32 graphID)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHCROSSINGBATCHSPAWNGROUPRUNTIME_GETSPAWNEDNPCCOUNT_OFFSET))(this, graphID);
		}

		::System::Void TryRemoveNpc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHCROSSINGBATCHSPAWNGROUPRUNTIME_TRYREMOVENPC_OFFSET))(this);
		}

		::System::Void TrySpawnNpc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHCROSSINGBATCHSPAWNGROUPRUNTIME_TRYSPAWNNPC_OFFSET))(this);
		}

		::System::Boolean SpawnCurrentPhase()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHCROSSINGBATCHSPAWNGROUPRUNTIME_SPAWNCURRENTPHASE_OFFSET))(this);
		}

		::System::Void BatchSpawn(::System::Collections::Generic::List_1<::System::Int32>* tagIndexList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHCROSSINGBATCHSPAWNGROUPRUNTIME_BATCHSPAWN_OFFSET))(this, tagIndexList);
		}

		::System::Void BatchStartMoving()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHCROSSINGBATCHSPAWNGROUPRUNTIME_BATCHSTARTMOVING_OFFSET))(this);
		}

		static ::System::Void SetTransform(::Class_3_F2DAD7F45F518868* npcComp, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation)
		{
			return ((::System::Void(*)(::Class_3_F2DAD7F45F518868*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHCROSSINGBATCHSPAWNGROUPRUNTIME_SETTRANSFORM_OFFSET))(npcComp, position, rotation);
		}

		::System::Void StartMoving(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHCROSSINGBATCHSPAWNGROUPRUNTIME_STARTMOVING_OFFSET))(this, entity);
		}

		static ::System::Void StopMoving(::Class_3_F2DAD7F45F518868* npcComp)
		{
			return ((::System::Void(*)(::Class_3_F2DAD7F45F518868*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHCROSSINGBATCHSPAWNGROUPRUNTIME_STOPMOVING_OFFSET))(npcComp);
		}

		::System::Void _BatchSpawn_b__14_0(::System::Int32 tagIndex, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::System::Int32 laneIndex, ::System::Single laneInnerOffset)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHCROSSINGBATCHSPAWNGROUPRUNTIME__BATCHSPAWN_B__14_0_OFFSET))(this, tagIndex, position, rotation, laneIndex, laneInnerOffset);
		}

		::System::Void __base_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHCROSSINGBATCHSPAWNGROUPRUNTIME___BASE_CLEAR_OFFSET))(this);
		}

		::System::Int32 __base_GetSpawnedNpcCount(::System::Int32 P0)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHCROSSINGBATCHSPAWNGROUPRUNTIME___BASE_GETSPAWNEDNPCCOUNT_OFFSET))(this, P0);
		}

		::System::Void __base_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHCROSSINGBATCHSPAWNGROUPRUNTIME___BASE_INIT_OFFSET))(this);
		}

		::System::Void __base_SetEnabled(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHCROSSINGBATCHSPAWNGROUPRUNTIME___BASE_SETENABLED_OFFSET))(this, P0);
		}

		::System::Void __base_Update(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHCROSSINGBATCHSPAWNGROUPRUNTIME___BASE_UPDATE_OFFSET))(this, P0);
		}
	};
}
