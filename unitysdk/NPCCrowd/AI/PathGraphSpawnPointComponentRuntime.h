#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/PathGraphFeaturePointComponentRuntime.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NPCCrowd::AI { class PathGraphSpawnPointComponent; }
namespace NPCCrowd::AI { class PathGraphSpawnPointComponentRuntime_SpawnAction; }
namespace NPCCrowd::AI { class PathGraphSplineLaneLocatorComponent; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define NPCCROWD_AI_PATHGRAPHSPAWNPOINTCOMPONENTRUNTIME_CLEAR_OFFSET UNITYSDK_OFFSET(0xD87EB10)
#define NPCCROWD_AI_PATHGRAPHSPAWNPOINTCOMPONENTRUNTIME_ENABLESPAWN_OFFSET UNITYSDK_OFFSET(0xD87ED60)
#define NPCCROWD_AI_PATHGRAPHSPAWNPOINTCOMPONENTRUNTIME_GET_ISIDLE_OFFSET UNITYSDK_OFFSET(0xD87EDB0)
#define NPCCROWD_AI_PATHGRAPHSPAWNPOINTCOMPONENTRUNTIME_INIT_OFFSET UNITYSDK_OFFSET(0xD87E9F0)
#define NPCCROWD_AI_PATHGRAPHSPAWNPOINTCOMPONENTRUNTIME_ISINAVATARDISTANCERANGE_OFFSET UNITYSDK_OFFSET(0xD87F210)
#define NPCCROWD_AI_PATHGRAPHSPAWNPOINTCOMPONENTRUNTIME_ISINMAINCAMERAFRUSTUM_OFFSET UNITYSDK_OFFSET(0xD87F3B0)
#define NPCCROWD_AI_PATHGRAPHSPAWNPOINTCOMPONENTRUNTIME_PROCESSLIMITCONDITIONS_OFFSET UNITYSDK_OFFSET(0xD87EF30)
#define NPCCROWD_AI_PATHGRAPHSPAWNPOINTCOMPONENTRUNTIME_REMOVESPAWNEDNPC_OFFSET UNITYSDK_OFFSET(0xD87F1B0)
#define NPCCROWD_AI_PATHGRAPHSPAWNPOINTCOMPONENTRUNTIME_SPAWNIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0xD87F040)
#define NPCCROWD_AI_PATHGRAPHSPAWNPOINTCOMPONENTRUNTIME_SPAWNQUEUED_OFFSET UNITYSDK_OFFSET(0xD87EE10)
#define NPCCROWD_AI_PATHGRAPHSPAWNPOINTCOMPONENTRUNTIME_UPDATESPAWNQUEUE_OFFSET UNITYSDK_OFFSET(0xD87EC60)
#define NPCCROWD_AI_PATHGRAPHSPAWNPOINTCOMPONENTRUNTIME_UPDATE_OFFSET UNITYSDK_OFFSET(0xD87EC00)
#define NPCCROWD_AI_PATHGRAPHSPAWNPOINTCOMPONENTRUNTIME__CTOR_OFFSET UNITYSDK_OFFSET(0xD87F470)
#define NPCCROWD_AI_PATHGRAPHSPAWNPOINTCOMPONENTRUNTIME___BASE_CLEAR_OFFSET UNITYSDK_OFFSET(0xD87F4D0)
#define NPCCROWD_AI_PATHGRAPHSPAWNPOINTCOMPONENTRUNTIME___BASE_INIT_OFFSET UNITYSDK_OFFSET(0xD87F560)
#define NPCCROWD_AI_PATHGRAPHSPAWNPOINTCOMPONENTRUNTIME___BASE_UPDATE_OFFSET UNITYSDK_OFFSET(0xD87F5F0)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphSpawnPointComponentRuntime_TypeDefinitionIndex = 72623;

	class PathGraphSpawnPointComponentRuntime : public ::NPCCrowd::AI::PathGraphFeaturePointComponentRuntime
	{
	public:
		::NPCCrowd::AI::PathGraphSplineLaneLocatorComponent* _locator; // 0x18
		::System::Collections::Generic::Queue_1<::NPCCrowd::AI::PathGraphSpawnPointComponentRuntime_SpawnAction*>* _spawnQueue; // 0x20
		::System::Collections::Generic::List_1<::System::Int32>* _spawnedTags; // 0x28
		::NPCCrowd::AI::PathGraphSpawnPointComponent* _config; // 0x30
		::System::Boolean _enableSpawn; // 0x38
		::System::Single _leftTimeToSpawn; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPAWNPOINTCOMPONENTRUNTIME__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPAWNPOINTCOMPONENTRUNTIME_INIT_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPAWNPOINTCOMPONENTRUNTIME_CLEAR_OFFSET))(this);
		}

		::System::Void Update(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPAWNPOINTCOMPONENTRUNTIME_UPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void EnableSpawn(::System::Boolean enabled)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPAWNPOINTCOMPONENTRUNTIME_ENABLESPAWN_OFFSET))(this, enabled);
		}

		::System::Boolean get_IsIdle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPAWNPOINTCOMPONENTRUNTIME_GET_ISIDLE_OFFSET))(this);
		}

		::System::Void SpawnQueued(::System::Int32 tagID, ::System::Action_2<::System::Int32, ::System::Int32>* spawnCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPAWNPOINTCOMPONENTRUNTIME_SPAWNQUEUED_OFFSET))(this, tagID, spawnCallback);
		}

		::System::Void SpawnImmediately(::System::Int32 tagID, ::System::Action_2<::System::Int32, ::System::Int32>* spawnCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPAWNPOINTCOMPONENTRUNTIME_SPAWNIMMEDIATELY_OFFSET))(this, tagID, spawnCallback);
		}

		::System::Void RemoveSpawnedNpc(::System::Int32 tagID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPAWNPOINTCOMPONENTRUNTIME_REMOVESPAWNEDNPC_OFFSET))(this, tagID);
		}

		::System::Void UpdateSpawnQueue(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPAWNPOINTCOMPONENTRUNTIME_UPDATESPAWNQUEUE_OFFSET))(this, deltaTime);
		}

		::System::Boolean ProcessLimitConditions()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPAWNPOINTCOMPONENTRUNTIME_PROCESSLIMITCONDITIONS_OFFSET))(this);
		}

		static ::System::Boolean IsInMainCameraFrustum(::UnityEngine::Vector3 position)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPAWNPOINTCOMPONENTRUNTIME_ISINMAINCAMERAFRUSTUM_OFFSET))(position);
		}

		static ::System::Boolean IsInAvatarDistanceRange(::UnityEngine::Vector3 position, ::System::Single minDistance, ::System::Single maxDistance)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPAWNPOINTCOMPONENTRUNTIME_ISINAVATARDISTANCERANGE_OFFSET))(position, minDistance, maxDistance);
		}

		::System::Void __base_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPAWNPOINTCOMPONENTRUNTIME___BASE_CLEAR_OFFSET))(this);
		}

		::System::Void __base_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPAWNPOINTCOMPONENTRUNTIME___BASE_INIT_OFFSET))(this);
		}

		::System::Void __base_Update(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPAWNPOINTCOMPONENTRUNTIME___BASE_UPDATE_OFFSET))(this, P0);
		}
	};
}
