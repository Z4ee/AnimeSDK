#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/ExternalObstacleSyncSystem_ExternalObstacleState.h"
#include "unitysdk/NPCCrowd/NPCCrowdModuleSubSystemBase.h"

class Class_3_621E396E538604DB;
class Class_3_757A5862D4BBEE41;
class Class_3_DFD5D1FDB9D2A4AC;
namespace NPCCrowd::Ability { class NPCAbilityFlushTransformSubSystem; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NPCCROWD_ABILITY_EXTERNALOBSTACLESYNCSYSTEM_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0xD927CE0)
#define NPCCROWD_ABILITY_EXTERNALOBSTACLESYNCSYSTEM_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xD928010)
#define NPCCROWD_ABILITY_EXTERNALOBSTACLESYNCSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD928750)
#define NPCCROWD_ABILITY_EXTERNALOBSTACLESYNCSYSTEM_ONENTITYREMOVE_OFFSET UNITYSDK_OFFSET(0xD928590)
#define NPCCROWD_ABILITY_EXTERNALOBSTACLESYNCSYSTEM_SHOULDTICK_OFFSET UNITYSDK_OFFSET(0xD927F20)
#define NPCCROWD_ABILITY_EXTERNALOBSTACLESYNCSYSTEM_SYNCEXTERNALOBSTACLE_OFFSET UNITYSDK_OFFSET(0xD928170)
#define NPCCROWD_ABILITY_EXTERNALOBSTACLESYNCSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0xD9287F0)
#define NPCCROWD_ABILITY_EXTERNALOBSTACLESYNCSYSTEM___BASE_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0xD928850)
#define NPCCROWD_ABILITY_EXTERNALOBSTACLESYNCSYSTEM___BASE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xD928970)
#define NPCCROWD_ABILITY_EXTERNALOBSTACLESYNCSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD928A30)
#define NPCCROWD_ABILITY_EXTERNALOBSTACLESYNCSYSTEM___BASE_SHOULDTICK_OFFSET UNITYSDK_OFFSET(0xD928AB0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int ExternalObstacleSyncSystem_TypeDefinitionIndex = 85097;

	class ExternalObstacleSyncSystem : public ::NPCCrowd::NPCCrowdModuleSubSystemBase
	{
	public:
		// static const ::System::Single PositionDeltaThresholdSqr; // 0x0
		// static const ::System::Single VelocityDeltaThresholdSqr; // 0x0
		::Nap::NapECS::EcsFilter* _externalObstacleFilter; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::NPCCrowd::Ability::ExternalObstacleSyncSystem_ExternalObstacleState>* _lastSyncedStates; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_EXTERNALOBSTACLESYNCSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Void CreateFilters(::Nap::NapECS::EcsWorld* world)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_EXTERNALOBSTACLESYNCSYSTEM_CREATEFILTERS_OFFSET))(this, world);
		}

		::System::Boolean ShouldTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_EXTERNALOBSTACLESYNCSYSTEM_SHOULDTICK_OFFSET))(this);
		}

		::System::Void LateUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_EXTERNALOBSTACLESYNCSYSTEM_LATEUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void SyncExternalObstacle(::NPCCrowd::Ability::NPCAbilityFlushTransformSubSystem* obstacleSubSystem, ::Class_3_621E396E538604DB* interactiveComponent, ::Class_3_757A5862D4BBEE41* finalMoveComponent, ::Class_3_DFD5D1FDB9D2A4AC* modelComponent)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::NPCAbilityFlushTransformSubSystem*, ::Class_3_621E396E538604DB*, ::Class_3_757A5862D4BBEE41*, ::Class_3_DFD5D1FDB9D2A4AC*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_EXTERNALOBSTACLESYNCSYSTEM_SYNCEXTERNALOBSTACLE_OFFSET))(this, obstacleSubSystem, interactiveComponent, finalMoveComponent, modelComponent);
		}

		::System::Void OnEntityRemove(::Nap::NapECS::EcsEntity* ecsEntity)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_EXTERNALOBSTACLESYNCSYSTEM_ONENTITYREMOVE_OFFSET))(this, ecsEntity);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_EXTERNALOBSTACLESYNCSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_CreateFilters(::Nap::NapECS::EcsWorld* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_EXTERNALOBSTACLESYNCSYSTEM___BASE_CREATEFILTERS_OFFSET))(this, P0);
		}

		::System::Void __base_LateUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_EXTERNALOBSTACLESYNCSYSTEM___BASE_LATEUPDATE_OFFSET))(this, P0);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_EXTERNALOBSTACLESYNCSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Boolean __base_ShouldTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_EXTERNALOBSTACLESYNCSYSTEM___BASE_SHOULDTICK_OFFSET))(this);
		}
	};
}
