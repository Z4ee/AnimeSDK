#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Container/HierarchicalHashGrid2D_2.h"
#include "unitysdk/Foundation/Container/NativeHashSet_2.h"
#include "unitysdk/NPCCrowd/Ability/NPCAbilityFlushTransformSubSystem_ExternalObstacleOperation.h"
#include "unitysdk/NPCCrowd/Ability/NPCAbilityFlushTransformSubSystem_ExternalObstacleRuntimeData.h"
#include "unitysdk/NPCCrowd/Ability/NPCEntityNativeData.h"
#include "unitysdk/NPCCrowd/Ability/NavigationObstacleItem.h"
#include "unitysdk/NPCCrowd/Ability/NavigationObstacleItemEqualsFunc.h"
#include "unitysdk/NPCCrowd/NPCCrowdModuleSubSystemBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_52E0F81CBC57DA32;
class Class_3_F2DAD7F45F518868;
namespace NPCCrowd::Ability { class NPCAbilityManager; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NPCCROWD_ABILITY_NPCABILITYFLUSHTRANSFORMSUBSYSTEM_APPLYREMOVEEXTERNALOBSTACLE_OFFSET UNITYSDK_OFFSET(0xE010E40)
#define NPCCROWD_ABILITY_NPCABILITYFLUSHTRANSFORMSUBSYSTEM_APPLYUPSERTEXTERNALOBSTACLE_OFFSET UNITYSDK_OFFSET(0xE010600)
#define NPCCROWD_ABILITY_NPCABILITYFLUSHTRANSFORMSUBSYSTEM_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0xE0119E0)
#define NPCCROWD_ABILITY_NPCABILITYFLUSHTRANSFORMSUBSYSTEM_FLUSHEXTERNALOBSTACLEOPERATIONS_OFFSET UNITYSDK_OFFSET(0xE0111E0)
#define NPCCROWD_ABILITY_NPCABILITYFLUSHTRANSFORMSUBSYSTEM_GET_OFFSET UNITYSDK_OFFSET(0xE0101E0)
#define NPCCROWD_ABILITY_NPCABILITYFLUSHTRANSFORMSUBSYSTEM_INIT_OFFSET UNITYSDK_OFFSET(0xE0114A0)
#define NPCCROWD_ABILITY_NPCABILITYFLUSHTRANSFORMSUBSYSTEM_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xE011C10)
#define NPCCROWD_ABILITY_NPCABILITYFLUSHTRANSFORMSUBSYSTEM_MOVEPLATFORMFOREACHCALLBACK_OFFSET UNITYSDK_OFFSET(0xE010120)
#define NPCCROWD_ABILITY_NPCABILITYFLUSHTRANSFORMSUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xE011780)
#define NPCCROWD_ABILITY_NPCABILITYFLUSHTRANSFORMSUBSYSTEM_POSTLATEUPDATE_OFFSET UNITYSDK_OFFSET(0xE011E90)
#define NPCCROWD_ABILITY_NPCABILITYFLUSHTRANSFORMSUBSYSTEM_REMOVEEXTERNALOBSTACLE_OFFSET UNITYSDK_OFFSET(0xE010540)
#define NPCCROWD_ABILITY_NPCABILITYFLUSHTRANSFORMSUBSYSTEM_SHOULDTICK_OFFSET UNITYSDK_OFFSET(0xE010360)
#define NPCCROWD_ABILITY_NPCABILITYFLUSHTRANSFORMSUBSYSTEM_UPSERTEXTERNALOBSTACLE_OFFSET UNITYSDK_OFFSET(0xE010450)
#define NPCCROWD_ABILITY_NPCABILITYFLUSHTRANSFORMSUBSYSTEM__CCTOR_OFFSET UNITYSDK_OFFSET(0xE012010)
#define NPCCROWD_ABILITY_NPCABILITYFLUSHTRANSFORMSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0xE011F90)
#define NPCCROWD_ABILITY_NPCABILITYFLUSHTRANSFORMSUBSYSTEM___BASE_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0xE012080)
#define NPCCROWD_ABILITY_NPCABILITYFLUSHTRANSFORMSUBSYSTEM___BASE_INIT_OFFSET UNITYSDK_OFFSET(0xE012090)
#define NPCCROWD_ABILITY_NPCABILITYFLUSHTRANSFORMSUBSYSTEM___BASE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xE012120)
#define NPCCROWD_ABILITY_NPCABILITYFLUSHTRANSFORMSUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xE0121C0)
#define NPCCROWD_ABILITY_NPCABILITYFLUSHTRANSFORMSUBSYSTEM___BASE_POSTLATEUPDATE_OFFSET UNITYSDK_OFFSET(0xE012250)
#define NPCCROWD_ABILITY_NPCABILITYFLUSHTRANSFORMSUBSYSTEM___BASE_SHOULDTICK_OFFSET UNITYSDK_OFFSET(0xE0122F0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NPCAbilityFlushTransformSubSystem_TypeDefinitionIndex = 48630;

	class NPCAbilityFlushTransformSubSystem : public ::NPCCrowd::NPCCrowdModuleSubSystemBase
	{
	public:
		static ::NPCCrowd::Ability::NPCAbilityManager** StaticGet_s_abilityManagerForForEach()
		{
			return (::NPCCrowd::Ability::NPCAbilityManager**)Il2CppClass::FromTypeDefinitionIndex(NPCAbilityFlushTransformSubSystem_TypeDefinitionIndex)->GetStaticField(0x4A280);
		}
		static ::System::Action_2<::Class_3_F2DAD7F45F518868*, ::Class_3_52E0F81CBC57DA32*>** StaticGet_s_movePlatformForEachDelegate()
		{
			return (::System::Action_2<::Class_3_F2DAD7F45F518868*, ::Class_3_52E0F81CBC57DA32*>**)Il2CppClass::FromTypeDefinitionIndex(NPCAbilityFlushTransformSubSystem_TypeDefinitionIndex)->GetStaticField(0x4A288);
		}
		static ::System::Boolean* StaticGet_bIsFreezeMovement()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NPCAbilityFlushTransformSubSystem_TypeDefinitionIndex)->GetStaticField(0x11830);
		}
		// static const ::System::Int32 ObstacleGridCapacity = 0x200; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::NPCCrowd::Ability::NPCAbilityFlushTransformSubSystem_ExternalObstacleRuntimeData>* _externalObstacleRuntimeData; // 0x20
		::Nap::NapECS::EcsFilter* _movePlatformFilter; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::NPCCrowd::Ability::NPCAbilityFlushTransformSubSystem_ExternalObstacleOperation>* _pendingExternalObstacleOperations; // 0x30
		::Foundation::Container::HierarchicalHashGrid2D_2<::NPCCrowd::Ability::NavigationObstacleItem, ::NPCCrowd::Ability::NavigationObstacleItemEqualsFunc> ObstacleGrid; // 0x38
		::Foundation::Container::NativeHashSet_2<::NPCCrowd::Ability::NPCEntityNativeData, ::NPCCrowd::Ability::NPCEntityNativeData> NativeData; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYFLUSHTRANSFORMSUBSYSTEM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYFLUSHTRANSFORMSUBSYSTEM__CCTOR_OFFSET))();
		}

		static ::System::Void MovePlatformForEachCallback(::Class_3_F2DAD7F45F518868* npcComp, ::Class_3_52E0F81CBC57DA32* movePlatformComp)
		{
			return ((::System::Void(*)(::Class_3_F2DAD7F45F518868*, ::Class_3_52E0F81CBC57DA32*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYFLUSHTRANSFORMSUBSYSTEM_MOVEPLATFORMFOREACHCALLBACK_OFFSET))(npcComp, movePlatformComp);
		}

		static ::NPCCrowd::Ability::NPCAbilityFlushTransformSubSystem* Get()
		{
			return ((::NPCCrowd::Ability::NPCAbilityFlushTransformSubSystem*(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYFLUSHTRANSFORMSUBSYSTEM_GET_OFFSET))();
		}

		::System::Boolean ShouldTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYFLUSHTRANSFORMSUBSYSTEM_SHOULDTICK_OFFSET))(this);
		}

		::System::Void UpsertExternalObstacle(::System::UInt32 entityId, ::UnityEngine::Vector3 position, ::UnityEngine::Vector3 velocity)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYFLUSHTRANSFORMSUBSYSTEM_UPSERTEXTERNALOBSTACLE_OFFSET))(this, entityId, position, velocity);
		}

		::System::Void RemoveExternalObstacle(::System::UInt32 entityId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYFLUSHTRANSFORMSUBSYSTEM_REMOVEEXTERNALOBSTACLE_OFFSET))(this, entityId);
		}

		::System::Void ApplyUpsertExternalObstacle(::System::UInt32 entityId, ::UnityEngine::Vector3 position, ::UnityEngine::Vector3 velocity)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYFLUSHTRANSFORMSUBSYSTEM_APPLYUPSERTEXTERNALOBSTACLE_OFFSET))(this, entityId, position, velocity);
		}

		::System::Void ApplyRemoveExternalObstacle(::System::UInt32 entityId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYFLUSHTRANSFORMSUBSYSTEM_APPLYREMOVEEXTERNALOBSTACLE_OFFSET))(this, entityId);
		}

		::System::Void FlushExternalObstacleOperations()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYFLUSHTRANSFORMSUBSYSTEM_FLUSHEXTERNALOBSTACLEOPERATIONS_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYFLUSHTRANSFORMSUBSYSTEM_INIT_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYFLUSHTRANSFORMSUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void CreateFilters(::Nap::NapECS::EcsWorld* world)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYFLUSHTRANSFORMSUBSYSTEM_CREATEFILTERS_OFFSET))(this, world);
		}

		::System::Void LateUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYFLUSHTRANSFORMSUBSYSTEM_LATEUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void PostLateUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYFLUSHTRANSFORMSUBSYSTEM_POSTLATEUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void __base_CreateFilters(::Nap::NapECS::EcsWorld* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYFLUSHTRANSFORMSUBSYSTEM___BASE_CREATEFILTERS_OFFSET))(this, P0);
		}

		::System::Void __base_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYFLUSHTRANSFORMSUBSYSTEM___BASE_INIT_OFFSET))(this);
		}

		::System::Void __base_LateUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYFLUSHTRANSFORMSUBSYSTEM___BASE_LATEUPDATE_OFFSET))(this, P0);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYFLUSHTRANSFORMSUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_PostLateUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYFLUSHTRANSFORMSUBSYSTEM___BASE_POSTLATEUPDATE_OFFSET))(this, P0);
		}

		::System::Boolean __base_ShouldTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYFLUSHTRANSFORMSUBSYSTEM___BASE_SHOULDTICK_OFFSET))(this);
		}
	};
}
