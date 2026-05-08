#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/Foundation/Container/HierarchicalHashGrid2D_2.h"
#include "unitysdk/NPCCrowd/Ability/ENPCAbilityMovementAction.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityMovementActionHandle.h"
#include "unitysdk/NPCCrowd/Ability/FNPCNavigationObstacleGridCellLocationFragment.h"
#include "unitysdk/NPCCrowd/Ability/FTransformFragment.h"
#include "unitysdk/NPCCrowd/Ability/NPCAbilityObstacleFlushProcessor_ExecuteJob.h"
#include "unitysdk/NPCCrowd/Ability/NavigationObstacleItem.h"
#include "unitysdk/NPCCrowd/Ability/NavigationObstacleItemEqualsFunc.h"
#include "unitysdk/NPCCrowd/AbilitySwitchSetting.h"
#include "unitysdk/NPCCrowd/NPCCrowdModuleManagerBase.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_F2DAD7F45F518868;
namespace NPCCrowd { class NPCIDGeneratorInt; }
namespace NPCCrowd { class NPCSectionAbilitySwitchConfigSO; }
namespace NPCCrowd::AI { class AIActionProcessor; }
namespace NPCCrowd::AI { class PathGraphRuntime_PathFindingResult; }
namespace NPCCrowd::Ability { class AfterNavMeshCombineProcessor; }
namespace NPCCrowd::Ability { class BeforeNavMeshCombineProcessor; }
namespace NPCCrowd::Ability { class INPCAbilityProcessors; }
namespace NPCCrowd::Ability { class NPCAIProcessor; }
namespace NPCCrowd::Ability { class NPCAbility; }
namespace NPCCrowd::Ability { class NPCAbilityAnimateProcessors; }
namespace NPCCrowd::Ability { class NPCAbilityDitherProcessor; }
namespace NPCCrowd::Ability { class NPCAbilityFirstProcessors; }
namespace NPCCrowd::Ability { class NPCAbilityFlushTransformProcessor; }
namespace NPCCrowd::Ability { class NPCAbilityMoveAvoidanceProcessors; }
namespace NPCCrowd::Ability { class NPCAbilityObstacleFlushProcessor; }
namespace NPCCrowd::Ability { class NPCAbilityParameters; }
namespace NPCCrowd::Ability { class NPCAbilityPathFollowProcessor; }
namespace NPCCrowd::Ability { class NPCAbilityPathFollowProcessors; }
namespace NPCCrowd::Ability { class NPCAbilityRuntimeData; }
namespace NPCCrowd::Ability { class NPCAbilitySmoothOrientationProcessors; }
namespace NPCCrowd::Ability { class NPCAbilitySteerToMoveTargetProcessor; }
namespace NPCCrowd::Ability { class NPCApplyMovementProcessor; }
namespace NPCCrowd::Ability { class NPCNavmeshProcessor; }
namespace NPCCrowd::Ability { class NPCStateTreeProcessor; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_ABILITY_NPCABILITYMANAGER_CREATEABILITYENTITY_OFFSET UNITYSDK_OFFSET(0xD23B780)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_DISPATCHCOMBINEJOB_OFFSET UNITYSDK_OFFSET(0xD23B240)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_DISPATCHFLUSHJOB_OFFSET UNITYSDK_OFFSET(0xD23A0C0)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_DISPATCHINLIST_OFFSET UNITYSDK_OFFSET(0xD2393C0)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_DISPATCHJOB_OFFSET UNITYSDK_OFFSET(0xD2396C0)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_DISPATCHTRANSFORMOBSTACLEFLUSHJOB_OFFSET UNITYSDK_OFFSET(0xD23BFF0)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_DISPATCH_OFFSET UNITYSDK_OFFSET(0xD2390B0)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_GETCURRENTABILITYMOVEACTIONID_OFFSET UNITYSDK_OFFSET(0xD238320)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_GETCURRENTABILITYMOVEACTIONTYPE_OFFSET UNITYSDK_OFFSET(0xD238450)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_GET_OFFSET UNITYSDK_OFFSET(0xD233440)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_INITDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0xD237140)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0xD2335C0)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_ISPATHFOLLOWFINISHED_OFFSET UNITYSDK_OFFSET(0xD237FE0)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_ISPATHFOLLOWSTARTED_OFFSET UNITYSDK_OFFSET(0xD237E30)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_ISSTARTMOVEPROCESS_OFFSET UNITYSDK_OFFSET(0xD238580)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_ONABILITYREMOVED_OFFSET UNITYSDK_OFFSET(0xD237DC0)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_ONCHANGESECTION_OFFSET UNITYSDK_OFFSET(0xD233A80)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD234160)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_OVERRIDEABILITYSWITCH_OFFSET UNITYSDK_OFFSET(0xD234420)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_PENDINGUPDATEJOBS_OFFSET UNITYSDK_OFFSET(0xD23B570)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_PRELOADASSETS_OFFSET UNITYSDK_OFFSET(0xD234030)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_PREUPDATE_OFFSET UNITYSDK_OFFSET(0xD23A6E0)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_REMOVEABILITYENTITY_OFFSET UNITYSDK_OFFSET(0xD23BC20)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_SETNPCABILITYMOVETARGET_OFFSET UNITYSDK_OFFSET(0xD2344C0)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_SETNPCABILITYPATHFOLLOW_1_OFFSET UNITYSDK_OFFSET(0xD236740)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_SETNPCABILITYPATHFOLLOW_OFFSET UNITYSDK_OFFSET(0xD235130)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_SETNPCABILITYSMOOTHROTATIONTOTARGET_OFFSET UNITYSDK_OFFSET(0xD235040)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_SHOULDTICK_OFFSET UNITYSDK_OFFSET(0xD233F90)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_STANDTURNASYNC_OFFSET UNITYSDK_OFFSET(0xD2370B0)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_STARTSTANDTURN_OFFSET UNITYSDK_OFFSET(0xD236F90)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_STARTSTATETREE_OFFSET UNITYSDK_OFFSET(0xD23C430)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_STOPCURRENTMOVEACTION_OFFSET UNITYSDK_OFFSET(0xD2381B0)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_STOPMOVEACTION_OFFSET UNITYSDK_OFFSET(0xD238040)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_STOPSTATETREE_OFFSET UNITYSDK_OFFSET(0xD23C4A0)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_TELEPORTTO_1_OFFSET UNITYSDK_OFFSET(0xD238CA0)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_TELEPORTTO_OFFSET UNITYSDK_OFFSET(0xD2385F0)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_TRYGETABILITY_OFFSET UNITYSDK_OFFSET(0xD23BED0)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0xD23A8B0)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_WAITFOROBSTACLE_OFFSET UNITYSDK_OFFSET(0xD23C3D0)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_WAITFORTRANSFORM_OFFSET UNITYSDK_OFFSET(0xD234460)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_WAIT_OFFSET UNITYSDK_OFFSET(0xD234350)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0xD23C540)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xD23C530)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER___BASE_INIT_OFFSET UNITYSDK_OFFSET(0xD23C5E0)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD23C670)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER___BASE_PREUPDATE_OFFSET UNITYSDK_OFFSET(0xD23C700)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER___BASE_SHOULDTICK_OFFSET UNITYSDK_OFFSET(0xD23C7A0)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER___BASE_UPDATE_OFFSET UNITYSDK_OFFSET(0xD23C830)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NPCAbilityManager_TypeDefinitionIndex = 60309;

	class NPCAbilityManager : public ::NPCCrowd::NPCCrowdModuleManagerBase
	{
	public:
		static ::NPCCrowd::NPCSectionAbilitySwitchConfigSO** StaticGet__configSO()
		{
			return (::NPCCrowd::NPCSectionAbilitySwitchConfigSO**)Il2CppClass::FromTypeDefinitionIndex(NPCAbilityManager_TypeDefinitionIndex)->GetStaticField(0x32E20);
		}
		static ::System::String** StaticGet_SwitchConfigPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAbilityManager_TypeDefinitionIndex)->GetStaticField(0x32E28);
		}
		static ::Foundation::AssetRequestHandle* StaticGet__configAssetRequest()
		{
			return (::Foundation::AssetRequestHandle*)Il2CppClass::FromTypeDefinitionIndex(NPCAbilityManager_TypeDefinitionIndex)->GetStaticField(0x32E30);
		}
		static ::System::Collections::Generic::List_1<::Unity::Jobs::JobHandle>** StaticGet_allUpdateJobs()
		{
			return (::System::Collections::Generic::List_1<::Unity::Jobs::JobHandle>**)Il2CppClass::FromTypeDefinitionIndex(NPCAbilityManager_TypeDefinitionIndex)->GetStaticField(0x32E50);
		}
		static ::NPCCrowd::AbilitySwitchSetting* StaticGet_DefaultAbilitySwitchSetting()
		{
			return (::NPCCrowd::AbilitySwitchSetting*)Il2CppClass::FromTypeDefinitionIndex(NPCAbilityManager_TypeDefinitionIndex)->GetStaticField(0xC690);
		}
		static ::System::Boolean* StaticGet_EnableAbilityCombine()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NPCAbilityManager_TypeDefinitionIndex)->GetStaticField(0xC694);
		}
		static ::NPCCrowd::AbilitySwitchSetting* StaticGet_AbilitySwitchSetting()
		{
			return (::NPCCrowd::AbilitySwitchSetting*)Il2CppClass::FromTypeDefinitionIndex(NPCAbilityManager_TypeDefinitionIndex)->GetStaticField(0xC695);
		}
		static ::System::Boolean* StaticGet_ActivateMoveAvoidance()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NPCAbilityManager_TypeDefinitionIndex)->GetStaticField(0xC699);
		}
		static ::System::Int32* StaticGet_MaxEntityNum()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NPCAbilityManager_TypeDefinitionIndex)->GetStaticField(0xC69C);
		}
		static ::System::Boolean* StaticGet_EnableCrowdDither()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NPCAbilityManager_TypeDefinitionIndex)->GetStaticField(0xC6A0);
		}
		::NPCCrowd::Ability::NPCAbilityAnimateProcessors* animateProcessors; // 0x18
		::NPCCrowd::Ability::NPCAbilityObstacleFlushProcessor* obstacleFlushProcessor; // 0x20
		::NPCCrowd::Ability::NPCAbilityFirstProcessors* firstProcessor; // 0x28
		::NPCCrowd::Ability::NPCStateTreeProcessor* stateTreeProcessor; // 0x30
		::NPCCrowd::Ability::AfterNavMeshCombineProcessor* afterNavMeshProcessor; // 0x38
		::NPCCrowd::Ability::NPCAIProcessor* aiProcessors; // 0x40
		::NPCCrowd::Ability::NPCAbilityDitherProcessor* ditherProcessor; // 0x48
		::NPCCrowd::Ability::NPCAbilityPathFollowProcessor* pathFollowingProcessor; // 0x50
		::System::Collections::Generic::Dictionary_2<::NPCCrowd::Ability::NPCAbilityParameters*, ::NPCCrowd::Ability::NPCAbilityRuntimeData*>* allAbilityRuntimeDataDict; // 0x58
		::NPCCrowd::NPCIDGeneratorInt* IDGen; // 0x60
		::NPCCrowd::AI::AIActionProcessor* actionProcessor; // 0x68
		::NPCCrowd::Ability::NPCApplyMovementProcessor* applyMovementProcessor; // 0x70
		::NPCCrowd::Ability::NPCAbilityMoveAvoidanceProcessors* moveAvoidanceProcessors; // 0x78
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::NPCCrowd::Ability::NPCAbility*>* abilities; // 0x80
		::System::Collections::Generic::List_1<::NPCCrowd::Ability::NPCAbilityRuntimeData*>* allAbilityRuntimeDatas; // 0x88
		::NPCCrowd::Ability::NPCNavmeshProcessor* navmeshProcessor; // 0x90
		::NPCCrowd::Ability::NPCAbilitySteerToMoveTargetProcessor* steerToMoveTargetProcessor; // 0x98
		::NPCCrowd::Ability::NPCAbilityPathFollowProcessors* pathFollowingProcessors; // 0xA0
		::System::Collections::Generic::List_1<::NPCCrowd::Ability::NPCAbilityObstacleFlushProcessor_ExecuteJob>* obstacleFlushProcessorJobs; // 0xA8
		::NPCCrowd::Ability::NPCAbilityFlushTransformProcessor* flushTransformProcessor; // 0xB0
		::NPCCrowd::Ability::NPCAbilitySmoothOrientationProcessors* smoothOrientationProcessors; // 0xB8
		::NPCCrowd::Ability::BeforeNavMeshCombineProcessor* beforeNaveMeshProcessor; // 0xC0
		::Unity::Jobs::JobHandle _jobHandle; // 0xC8
		::Unity::Jobs::JobHandle _obstacleJobHandle; // 0xD8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER__CCTOR_OFFSET))();
		}

		static ::NPCCrowd::Ability::NPCAbilityManager* Get()
		{
			return ((::NPCCrowd::Ability::NPCAbilityManager*(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_GET_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_INIT_OFFSET))(this);
		}

		::System::Boolean ShouldTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_SHOULDTICK_OFFSET))(this);
		}

		static ::System::Void PreloadAssets(::System::String* packedTag, ::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* waitedRequest)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_PRELOADASSETS_OFFSET))(packedTag, waitedRequest);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_ONDESTROY_OFFSET))(this);
		}

		static ::System::Void OnChangeSection(::System::Int32 sectionID)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_ONCHANGESECTION_OFFSET))(sectionID);
		}

		static ::System::Void OverrideAbilitySwitch()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_OVERRIDEABILITYSWITCH_OFFSET))();
		}

		::NPCCrowd::Ability::FNPCAbilityMovementActionHandle SetNPCAbilityMoveTarget(::NPCCrowd::Ability::NPCAbilityRuntimeData* runtimeData, ::System::Int32 idx, ::UnityEngine::Vector3 targetCenter, ::System::String* style)
		{
			return ((::NPCCrowd::Ability::FNPCAbilityMovementActionHandle(*)(::PVOID, ::NPCCrowd::Ability::NPCAbilityRuntimeData*, ::System::Int32, ::UnityEngine::Vector3, ::System::String*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_SETNPCABILITYMOVETARGET_OFFSET))(this, runtimeData, idx, targetCenter, style);
		}

		::NPCCrowd::Ability::FNPCAbilityMovementActionHandle SetNPCAbilitySmoothRotationToTarget(::NPCCrowd::Ability::NPCAbilityRuntimeData* runtimeData, ::System::Int32 idx, ::UnityEngine::Vector3 rotTarget)
		{
			return ((::NPCCrowd::Ability::FNPCAbilityMovementActionHandle(*)(::PVOID, ::NPCCrowd::Ability::NPCAbilityRuntimeData*, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_SETNPCABILITYSMOOTHROTATIONTOTARGET_OFFSET))(this, runtimeData, idx, rotTarget);
		}

		::NPCCrowd::Ability::FNPCAbilityMovementActionHandle SetNPCAbilityPathFollow(::NPCCrowd::Ability::NPCAbilityRuntimeData* runtimeData, ::System::Int32 idx, ::System::Collections::Generic::List_1<::System::UInt16>*& pathFollowNodes, ::System::Boolean teleportToFirstPoint, ::System::String* style)
		{
			return ((::NPCCrowd::Ability::FNPCAbilityMovementActionHandle(*)(::PVOID, ::NPCCrowd::Ability::NPCAbilityRuntimeData*, ::System::Int32, ::System::Collections::Generic::List_1<::System::UInt16>*&, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_SETNPCABILITYPATHFOLLOW_OFFSET))(this, runtimeData, idx, pathFollowNodes, teleportToFirstPoint, style);
		}

		::NPCCrowd::Ability::FNPCAbilityMovementActionHandle SetNPCAbilityPathFollow_1(::NPCCrowd::Ability::NPCAbility* ability, ::NPCCrowd::Ability::NPCAbilityRuntimeData* runtimeData, ::System::Int32 idx, ::NPCCrowd::AI::PathGraphRuntime_PathFindingResult* pathResult, ::System::Boolean teleportToFirstPoint, ::System::Int32 laneIndex, ::System::Single laneInnerOffset, ::System::String* style, ::System::Single endFadeOutTime, ::System::Int32 pathID)
		{
			return ((::NPCCrowd::Ability::FNPCAbilityMovementActionHandle(*)(::PVOID, ::NPCCrowd::Ability::NPCAbility*, ::NPCCrowd::Ability::NPCAbilityRuntimeData*, ::System::Int32, ::NPCCrowd::AI::PathGraphRuntime_PathFindingResult*, ::System::Boolean, ::System::Int32, ::System::Single, ::System::String*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_SETNPCABILITYPATHFOLLOW_1_OFFSET))(this, ability, runtimeData, idx, pathResult, teleportToFirstPoint, laneIndex, laneInnerOffset, style, endFadeOutTime, pathID);
		}

		::System::Void StartStandTurn(::NPCCrowd::Ability::NPCAbilityRuntimeData* runtimeData, ::System::Int32 idx, ::System::Single angle)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::NPCAbilityRuntimeData*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_STARTSTANDTURN_OFFSET))(this, runtimeData, idx, angle);
		}

		static ::Cysharp::Threading::Tasks::UniTaskVoid StandTurnAsync(::NPCCrowd::Ability::NPCAbilityRuntimeData* runtimeData, ::System::Int32 idx, ::System::Single angle)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::NPCCrowd::Ability::NPCAbilityRuntimeData*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_STANDTURNASYNC_OFFSET))(runtimeData, idx, angle);
		}

		::System::Void InitDefaultData(::NPCCrowd::Ability::NPCAbility* ability, ::System::Int32 idx, ::System::Int32 animID, ::System::String* movementStyle)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::NPCAbility*, ::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_INITDEFAULTDATA_OFFSET))(this, ability, idx, animID, movementStyle);
		}

		::System::Void OnAbilityRemoved(::NPCCrowd::Ability::NPCAbilityRuntimeData* runtimeData, ::System::Int32 idx)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::NPCAbilityRuntimeData*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_ONABILITYREMOVED_OFFSET))(this, runtimeData, idx);
		}

		::System::Boolean IsPathFollowStarted(::NPCCrowd::Ability::NPCAbilityRuntimeData* runtimeData, ::System::Int32 idx)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Ability::NPCAbilityRuntimeData*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_ISPATHFOLLOWSTARTED_OFFSET))(this, runtimeData, idx);
		}

		::System::Boolean IsPathFollowFinished(::NPCCrowd::Ability::NPCAbilityRuntimeData* runtimeData, ::System::Int32 idx)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Ability::NPCAbilityRuntimeData*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_ISPATHFOLLOWFINISHED_OFFSET))(this, runtimeData, idx);
		}

		::System::Void StopMoveAction(::NPCCrowd::Ability::NPCAbilityRuntimeData* runtimeData, ::System::Int32 idx, ::System::UInt16 id)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::NPCAbilityRuntimeData*, ::System::Int32, ::System::UInt16))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_STOPMOVEACTION_OFFSET))(this, runtimeData, idx, id);
		}

		::System::Void StopCurrentMoveAction(::NPCCrowd::Ability::NPCAbilityRuntimeData* runtimeData, ::System::Int32 idx, ::System::UInt16 id)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::NPCAbilityRuntimeData*, ::System::Int32, ::System::UInt16))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_STOPCURRENTMOVEACTION_OFFSET))(this, runtimeData, idx, id);
		}

		::System::UInt16 GetCurrentAbilityMoveActionID(::NPCCrowd::Ability::NPCAbilityRuntimeData* runtimeData, ::System::Int32 idx)
		{
			return ((::System::UInt16(*)(::PVOID, ::NPCCrowd::Ability::NPCAbilityRuntimeData*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_GETCURRENTABILITYMOVEACTIONID_OFFSET))(this, runtimeData, idx);
		}

		::NPCCrowd::Ability::ENPCAbilityMovementAction GetCurrentAbilityMoveActionType(::NPCCrowd::Ability::NPCAbilityRuntimeData* runtimeData, ::System::Int32 idx)
		{
			return ((::NPCCrowd::Ability::ENPCAbilityMovementAction(*)(::PVOID, ::NPCCrowd::Ability::NPCAbilityRuntimeData*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_GETCURRENTABILITYMOVEACTIONTYPE_OFFSET))(this, runtimeData, idx);
		}

		::System::Boolean IsStartMoveProcess(::NPCCrowd::Ability::NPCAbilityRuntimeData* runtimeData, ::System::Int32 idx)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Ability::NPCAbilityRuntimeData*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_ISSTARTMOVEPROCESS_OFFSET))(this, runtimeData, idx);
		}

		::System::Void TeleportTo(::NPCCrowd::Ability::NPCAbilityRuntimeData* runtimeData, ::System::Int32 idx, ::UnityEngine::Vector3 pos, ::UnityEngine::Quaternion rot)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::NPCAbilityRuntimeData*, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_TELEPORTTO_OFFSET))(this, runtimeData, idx, pos, rot);
		}

		::System::Void TeleportTo_1(::System::UInt32 entityID, ::NPCCrowd::Ability::FTransformFragment& transform, ::NPCCrowd::Ability::FNPCNavigationObstacleGridCellLocationFragment& locationFragment, ::Foundation::Container::HierarchicalHashGrid2D_2<::NPCCrowd::Ability::NavigationObstacleItem, ::NPCCrowd::Ability::NavigationObstacleItemEqualsFunc>& hashGrid, ::UnityEngine::Vector3 pos, ::UnityEngine::Quaternion rot)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::NPCCrowd::Ability::FTransformFragment&, ::NPCCrowd::Ability::FNPCNavigationObstacleGridCellLocationFragment&, ::Foundation::Container::HierarchicalHashGrid2D_2<::NPCCrowd::Ability::NavigationObstacleItem, ::NPCCrowd::Ability::NavigationObstacleItemEqualsFunc>&, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_TELEPORTTO_1_OFFSET))(this, entityID, transform, locationFragment, hashGrid, pos, rot);
		}

		::Unity::Jobs::JobHandle Dispatch(::NPCCrowd::Ability::INPCAbilityProcessors* processor, ::System::Single deltaTime, ::Unity::Collections::NativeArray_1<::Unity::Jobs::JobHandle> buffer, ::Unity::Jobs::JobHandle dependsOn)
		{
			return ((::Unity::Jobs::JobHandle(*)(::PVOID, ::NPCCrowd::Ability::INPCAbilityProcessors*, ::System::Single, ::Unity::Collections::NativeArray_1<::Unity::Jobs::JobHandle>, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_DISPATCH_OFFSET))(this, processor, deltaTime, buffer, dependsOn);
		}

		::Unity::Jobs::JobHandle DispatchInList(::NPCCrowd::Ability::INPCAbilityProcessors* processor, ::System::Single deltaTime, ::Unity::Collections::NativeArray_1<::Unity::Jobs::JobHandle> buffer, ::Unity::Jobs::JobHandle dependsOn)
		{
			return ((::Unity::Jobs::JobHandle(*)(::PVOID, ::NPCCrowd::Ability::INPCAbilityProcessors*, ::System::Single, ::Unity::Collections::NativeArray_1<::Unity::Jobs::JobHandle>, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_DISPATCHINLIST_OFFSET))(this, processor, deltaTime, buffer, dependsOn);
		}

		::Unity::Jobs::JobHandle DispatchJob(::System::Single deltaTime)
		{
			return ((::Unity::Jobs::JobHandle(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_DISPATCHJOB_OFFSET))(this, deltaTime);
		}

		::System::Void DispatchFlushJob(::NPCCrowd::Ability::NPCAbilityFlushTransformProcessor* transformProcessor, ::NPCCrowd::Ability::NPCAbilityObstacleFlushProcessor* obstacleFlushProcessor, ::System::Single deltaTime, ::Unity::Collections::NativeArray_1<::Unity::Jobs::JobHandle> buffer, ::Unity::Jobs::JobHandle dependsOn)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::NPCAbilityFlushTransformProcessor*, ::NPCCrowd::Ability::NPCAbilityObstacleFlushProcessor*, ::System::Single, ::Unity::Collections::NativeArray_1<::Unity::Jobs::JobHandle>, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_DISPATCHFLUSHJOB_OFFSET))(this, transformProcessor, obstacleFlushProcessor, deltaTime, buffer, dependsOn);
		}

		::System::Void PreUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_PREUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void Update(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_UPDATE_OFFSET))(this, deltaTime);
		}

		static ::System::Void PendingUpdateJobs()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_PENDINGUPDATEJOBS_OFFSET))();
		}

		::NPCCrowd::Ability::NPCAbility* CreateAbilityEntity(::Class_3_F2DAD7F45F518868* npcComp, ::NPCCrowd::Ability::NPCAbilityParameters* parameters, ::NPCCrowd::Ability::NPCAbilityRuntimeData*& runtimeData)
		{
			return ((::NPCCrowd::Ability::NPCAbility*(*)(::PVOID, ::Class_3_F2DAD7F45F518868*, ::NPCCrowd::Ability::NPCAbilityParameters*, ::NPCCrowd::Ability::NPCAbilityRuntimeData*&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_CREATEABILITYENTITY_OFFSET))(this, npcComp, parameters, runtimeData);
		}

		::System::Void RemoveAbilityEntity(::NPCCrowd::Ability::NPCAbility* ability)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::NPCAbility*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_REMOVEABILITYENTITY_OFFSET))(this, ability);
		}

		::System::Boolean TryGetAbility(::System::UInt32 entityId, ::NPCCrowd::Ability::NPCAbility*& ability)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::NPCCrowd::Ability::NPCAbility*&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_TRYGETABILITY_OFFSET))(this, entityId, ability);
		}

		::System::Void DispatchTransformObstacleFlushJob(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_DISPATCHTRANSFORMOBSTACLEFLUSHJOB_OFFSET))(this, deltaTime);
		}

		::Unity::Jobs::JobHandle DispatchCombineJob(::System::Single deltaTime)
		{
			return ((::Unity::Jobs::JobHandle(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_DISPATCHCOMBINEJOB_OFFSET))(this, deltaTime);
		}

		::System::Void Wait()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_WAIT_OFFSET))(this);
		}

		::System::Void WaitForTransform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_WAITFORTRANSFORM_OFFSET))(this);
		}

		::System::Void WaitForObstacle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_WAITFOROBSTACLE_OFFSET))(this);
		}

		::System::Void StartStateTree(::NPCCrowd::Ability::NPCAbilityRuntimeData* runtimeData, ::System::Int32 abilityIdx, ::System::Int32 stateTreeIndex)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::NPCAbilityRuntimeData*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_STARTSTATETREE_OFFSET))(this, runtimeData, abilityIdx, stateTreeIndex);
		}

		::System::Void StopStateTree(::NPCCrowd::Ability::NPCAbilityRuntimeData* runtimeData, ::System::Int32 abilityIdx)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::NPCAbilityRuntimeData*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_STOPSTATETREE_OFFSET))(this, runtimeData, abilityIdx);
		}

		::System::Void __base_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER___BASE_INIT_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_PreUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER___BASE_PREUPDATE_OFFSET))(this, P0);
		}

		::System::Boolean __base_ShouldTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER___BASE_SHOULDTICK_OFFSET))(this);
		}

		::System::Void __base_Update(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER___BASE_UPDATE_OFFSET))(this, P0);
		}
	};
}
