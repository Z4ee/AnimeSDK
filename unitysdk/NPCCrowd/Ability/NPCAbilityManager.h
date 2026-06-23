#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/Foundation/Container/HierarchicalHashGrid2D_2.h"
#include "unitysdk/NPCCrowd/Ability/ENPCAbilityMovementAction.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityMovementActionHandle.h"
#include "unitysdk/NPCCrowd/Ability/FNPCNavigationObstacleGridCellLocationFragment.h"
#include "unitysdk/NPCCrowd/Ability/FTransformFragment.h"
#include "unitysdk/NPCCrowd/Ability/NPCAbilityBehavioursDefine.h"
#include "unitysdk/NPCCrowd/Ability/NPCAbilityObstacleFlushProcessor_ExecuteJob.h"
#include "unitysdk/NPCCrowd/Ability/NavigationObstacleItem.h"
#include "unitysdk/NPCCrowd/Ability/NavigationObstacleItemEqualsFunc.h"
#include "unitysdk/NPCCrowd/AbilitySwitchSetting.h"
#include "unitysdk/NPCCrowd/NPCCrowdModuleManagerBase.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_52E0F81CBC57DA32;
class Class_3_F2DAD7F45F518868;
namespace FluffyUnderware::Curvy { class CurvySpline; }
namespace NPCCrowd { class NPCIDGeneratorInt; }
namespace NPCCrowd { class NPCSectionAbilitySwitchConfigSO; }
namespace NPCCrowd::AI { class AIActionProcessor; }
namespace NPCCrowd::AI { class PathGraphRuntime_PathFindingResult; }
namespace NPCCrowd::Ability { class AfterNavMeshCombineProcessor; }
namespace NPCCrowd::Ability { class BeforeNavMeshCombineProcessor; }
namespace NPCCrowd::Ability { class CrowdSplineFollowProcessor; }
namespace NPCCrowd::Ability { class INPCAbilityProcessors; }
namespace NPCCrowd::Ability { class NPCAIProcessor; }
namespace NPCCrowd::Ability { class NPCAbility; }
namespace NPCCrowd::Ability { class NPCAbilityAnimateProcessors; }
namespace NPCCrowd::Ability { class NPCAbilityApplyMovePlatformProcessor; }
namespace NPCCrowd::Ability { class NPCAbilityDitherProcessor; }
namespace NPCCrowd::Ability { class NPCAbilityFirstProcessors; }
namespace NPCCrowd::Ability { class NPCAbilityFlushTransformProcessor; }
namespace NPCCrowd::Ability { class NPCAbilityManager_MovePlatformAttachSparseCache; }
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
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_ABILITY_NPCABILITYMANAGER_BEGINPREPAREMOVEPLATFORMATTACHDATALATEUPDATE_OFFSET UNITYSDK_OFFSET(0xA674CF0)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_CREATEABILITYENTITY_OFFSET UNITYSDK_OFFSET(0xA674580)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_DISPATCHCOMBINEJOB_OFFSET UNITYSDK_OFFSET(0xA674040)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_DISPATCHFLUSHJOB_OFFSET UNITYSDK_OFFSET(0xA672B00)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_DISPATCHINLIST_OFFSET UNITYSDK_OFFSET(0xA671D80)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_DISPATCHJOB_OFFSET UNITYSDK_OFFSET(0xA672080)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_DISPATCHTRANSFORMOBSTACLEFLUSHJOB_OFFSET UNITYSDK_OFFSET(0xA675170)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_DISPATCH_OFFSET UNITYSDK_OFFSET(0xA671A70)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_GETABILITYEFFECTIVEBEHAVIOURS_OFFSET UNITYSDK_OFFSET(0xA66C120)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_GETCURRENTABILITYMOVEACTIONID_OFFSET UNITYSDK_OFFSET(0xA670C10)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_GETCURRENTABILITYMOVEACTIONTYPE_OFFSET UNITYSDK_OFFSET(0xA670D40)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_GETORCREATEMOVEPLATFORMATTACHCACHE_OFFSET UNITYSDK_OFFSET(0xA6731D0)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_GET_OFFSET UNITYSDK_OFFSET(0xA667E00)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_INITDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0xA66F390)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0xA66AB80)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_ISPATHFOLLOWFINISHED_OFFSET UNITYSDK_OFFSET(0xA6708D0)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_ISPATHFOLLOWSTARTED_OFFSET UNITYSDK_OFFSET(0xA670720)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_ISSPLINEFOLLOWFINISHED_OFFSET UNITYSDK_OFFSET(0xA6706B0)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_ISSTARTMOVEPROCESS_OFFSET UNITYSDK_OFFSET(0xA670E70)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_ONABILITYREMOVED_OFFSET UNITYSDK_OFFSET(0xA6702B0)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_ONCHANGESECTION_OFFSET UNITYSDK_OFFSET(0xA66B0F0)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xA66B860)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_OVERRIDEABILITYSWITCH_OFFSET UNITYSDK_OFFSET(0xA66BDC0)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_PENDINGUPDATEJOBS_OFFSET UNITYSDK_OFFSET(0xA674370)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_PRELOADASSETS_OFFSET UNITYSDK_OFFSET(0xA66B730)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_PREUPDATE_OFFSET UNITYSDK_OFFSET(0xA673430)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_PROCESSPENDINGSPLINEFOLLOWCOMMANDS_OFFSET UNITYSDK_OFFSET(0xA6719F0)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_RELEASEMOVEPLATFORMATTACHCACHES_OFFSET UNITYSDK_OFFSET(0xA66BB90)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_REMOVEABILITYENTITY_OFFSET UNITYSDK_OFFSET(0xA674A30)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_RESOLVEBEHAVIOURSBYPATHSTARTNODE_OFFSET UNITYSDK_OFFSET(0xA66BE60)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_RESOLVEPOPULATIONOVERRIDEMOVEMENTSTYLE_OFFSET UNITYSDK_OFFSET(0xA670140)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_SETABILITYEFFECTIVEBEHAVIOURS_OFFSET UNITYSDK_OFFSET(0xA66C040)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_SETABILITYPATHFOLLOWTYPE_OFFSET UNITYSDK_OFFSET(0xA66C230)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_SETNPCABILITYMOVETARGET_OFFSET UNITYSDK_OFFSET(0xA66C2E0)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_SETNPCABILITYPATHFOLLOW_1_OFFSET UNITYSDK_OFFSET(0xA66E6E0)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_SETNPCABILITYPATHFOLLOW_OFFSET UNITYSDK_OFFSET(0xA66CF40)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_SETNPCABILITYSMOOTHROTATIONTOTARGET_OFFSET UNITYSDK_OFFSET(0xA66CE50)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_SHOULDTICK_OFFSET UNITYSDK_OFFSET(0xA66B640)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_STANDTURNASYNC_OFFSET UNITYSDK_OFFSET(0xA66F030)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_STARTSPLINEFOLLOW_OFFSET UNITYSDK_OFFSET(0xA6703D0)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_STARTSTANDTURN_OFFSET UNITYSDK_OFFSET(0xA66EF00)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_STARTSTATETREE_OFFSET UNITYSDK_OFFSET(0xA6755B0)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_STOPCURRENTMOVEACTION_OFFSET UNITYSDK_OFFSET(0xA670AA0)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_STOPMOVEACTION_OFFSET UNITYSDK_OFFSET(0xA670930)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_STOPSPLINEFOLLOW_OFFSET UNITYSDK_OFFSET(0xA670530)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_STOPSTATETREE_OFFSET UNITYSDK_OFFSET(0xA675620)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_TELEPORTTO_1_OFFSET UNITYSDK_OFFSET(0xA6715E0)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_TELEPORTTO_OFFSET UNITYSDK_OFFSET(0xA670EE0)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_TRYCOLLECTMOVEPLATFORMATTACHTRANSFORM_OFFSET UNITYSDK_OFFSET(0xA674EB0)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_TRYGETABILITY_OFFSET UNITYSDK_OFFSET(0xA667F80)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_TRYGETSPLINEFOLLOWSTATE_OFFSET UNITYSDK_OFFSET(0xA670590)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_TRYGETSTANDTURNCONTEXT_OFFSET UNITYSDK_OFFSET(0xA66F230)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0xA673610)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_WAITFOROBSTACLE_OFFSET UNITYSDK_OFFSET(0xA675550)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_WAITFORSTANDTURNFINISHASYNC_OFFSET UNITYSDK_OFFSET(0xA66F190)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_WAITFORSTANDTURNFINISH_OFFSET UNITYSDK_OFFSET(0xA66F0C0)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_WAITFORTRANSFORM_OFFSET UNITYSDK_OFFSET(0xA66BE00)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_WAITUNTILIDLEASYNC_OFFSET UNITYSDK_OFFSET(0xA66F2E0)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_WAIT_OFFSET UNITYSDK_OFFSET(0xA66BAC0)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0xA6756C0)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xA6756B0)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER___BASE_INIT_OFFSET UNITYSDK_OFFSET(0xA675760)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xA6757F0)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER___BASE_PREUPDATE_OFFSET UNITYSDK_OFFSET(0xA675880)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER___BASE_SHOULDTICK_OFFSET UNITYSDK_OFFSET(0xA675920)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER___BASE_UPDATE_OFFSET UNITYSDK_OFFSET(0xA6759B0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NPCAbilityManager_TypeDefinitionIndex = 51072;

	class NPCAbilityManager : public ::NPCCrowd::NPCCrowdModuleManagerBase
	{
	public:
		static ::Foundation::AssetRequestHandle* StaticGet__configAssetRequest()
		{
			return (::Foundation::AssetRequestHandle*)Il2CppClass::FromTypeDefinitionIndex(NPCAbilityManager_TypeDefinitionIndex)->GetStaticField(0x34D60);
		}
		static ::NPCCrowd::NPCSectionAbilitySwitchConfigSO** StaticGet__configSO()
		{
			return (::NPCCrowd::NPCSectionAbilitySwitchConfigSO**)Il2CppClass::FromTypeDefinitionIndex(NPCAbilityManager_TypeDefinitionIndex)->GetStaticField(0x34D80);
		}
		static ::System::String** StaticGet_SwitchConfigPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAbilityManager_TypeDefinitionIndex)->GetStaticField(0x34D88);
		}
		static ::System::Collections::Generic::List_1<::Unity::Jobs::JobHandle>** StaticGet_allUpdateJobs()
		{
			return (::System::Collections::Generic::List_1<::Unity::Jobs::JobHandle>**)Il2CppClass::FromTypeDefinitionIndex(NPCAbilityManager_TypeDefinitionIndex)->GetStaticField(0x34D90);
		}
		static ::System::Int32* StaticGet_MaxEntityNum()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NPCAbilityManager_TypeDefinitionIndex)->GetStaticField(0xCF70);
		}
		static ::NPCCrowd::AbilitySwitchSetting* StaticGet_DefaultAbilitySwitchSetting()
		{
			return (::NPCCrowd::AbilitySwitchSetting*)Il2CppClass::FromTypeDefinitionIndex(NPCAbilityManager_TypeDefinitionIndex)->GetStaticField(0xCF74);
		}
		static ::NPCCrowd::AbilitySwitchSetting* StaticGet_AbilitySwitchSetting()
		{
			return (::NPCCrowd::AbilitySwitchSetting*)Il2CppClass::FromTypeDefinitionIndex(NPCAbilityManager_TypeDefinitionIndex)->GetStaticField(0xCF78);
		}
		static ::System::Boolean* StaticGet_ActivateMoveAvoidance()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NPCAbilityManager_TypeDefinitionIndex)->GetStaticField(0xCF7C);
		}
		static ::System::Boolean* StaticGet_EnableCrowdDither()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NPCAbilityManager_TypeDefinitionIndex)->GetStaticField(0xCF7D);
		}
		static ::System::Boolean* StaticGet_EnableAbilityCombine()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NPCAbilityManager_TypeDefinitionIndex)->GetStaticField(0xCF7E);
		}
		::NPCCrowd::Ability::NPCAbilityMoveAvoidanceProcessors* moveAvoidanceProcessors; // 0x18
		::NPCCrowd::Ability::BeforeNavMeshCombineProcessor* beforeNaveMeshProcessor; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::NPCCrowd::Ability::NPCAbility*>* abilities; // 0x28
		::System::Collections::Generic::Dictionary_2<::NPCCrowd::Ability::NPCAbilityRuntimeData*, ::NPCCrowd::Ability::NPCAbilityManager_MovePlatformAttachSparseCache*>* _movePlatformAttachCaches; // 0x30
		::NPCCrowd::Ability::NPCAbilityFlushTransformProcessor* flushTransformProcessor; // 0x38
		::NPCCrowd::Ability::NPCAbilityDitherProcessor* ditherProcessor; // 0x40
		::System::Collections::Generic::Dictionary_2<::NPCCrowd::Ability::NPCAbilityParameters*, ::NPCCrowd::Ability::NPCAbilityRuntimeData*>* allAbilityRuntimeDataDict; // 0x48
		::NPCCrowd::AI::AIActionProcessor* actionProcessor; // 0x50
		::NPCCrowd::Ability::NPCAbilityPathFollowProcessors* pathFollowingProcessors; // 0x58
		::NPCCrowd::Ability::NPCNavmeshProcessor* navmeshProcessor; // 0x60
		::NPCCrowd::Ability::NPCAbilityObstacleFlushProcessor* obstacleFlushProcessor; // 0x68
		::System::Collections::Generic::List_1<::NPCCrowd::Ability::NPCAbilityObstacleFlushProcessor_ExecuteJob>* obstacleFlushProcessorJobs; // 0x70
		::NPCCrowd::NPCIDGeneratorInt* IDGen; // 0x78
		::NPCCrowd::Ability::NPCAbilitySmoothOrientationProcessors* smoothOrientationProcessors; // 0x80
		::NPCCrowd::Ability::AfterNavMeshCombineProcessor* afterNavMeshProcessor; // 0x88
		::NPCCrowd::Ability::NPCAbilityAnimateProcessors* animateProcessors; // 0x90
		::NPCCrowd::Ability::NPCAbilityFirstProcessors* firstProcessor; // 0x98
		::NPCCrowd::Ability::NPCAbilitySteerToMoveTargetProcessor* steerToMoveTargetProcessor; // 0xA0
		::NPCCrowd::Ability::NPCAbilityApplyMovePlatformProcessor* applyMovePlatformProcessor; // 0xA8
		::NPCCrowd::Ability::NPCAIProcessor* aiProcessors; // 0xB0
		::NPCCrowd::Ability::NPCAbilityPathFollowProcessor* pathFollowingProcessor; // 0xB8
		::System::Collections::Generic::List_1<::NPCCrowd::Ability::NPCAbilityRuntimeData*>* allAbilityRuntimeDatas; // 0xC0
		::NPCCrowd::Ability::NPCApplyMovementProcessor* applyMovementProcessor; // 0xC8
		::NPCCrowd::Ability::CrowdSplineFollowProcessor* splineFollowProcessor; // 0xD0
		::NPCCrowd::Ability::NPCStateTreeProcessor* stateTreeProcessor; // 0xD8
		::Unity::Jobs::JobHandle _jobHandle; // 0xE0
		::Unity::Jobs::JobHandle _obstacleJobHandle; // 0xF0

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

		static ::NPCCrowd::Ability::NPCAbilityBehavioursDefine ResolveBehavioursByPathStartNode(::NPCCrowd::Ability::NPCAbilityRuntimeData* runtimeData, ::System::Int32 startNodeId)
		{
			return ((::NPCCrowd::Ability::NPCAbilityBehavioursDefine(*)(::NPCCrowd::Ability::NPCAbilityRuntimeData*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_RESOLVEBEHAVIOURSBYPATHSTARTNODE_OFFSET))(runtimeData, startNodeId);
		}

		static ::System::Void SetAbilityEffectiveBehaviours(::NPCCrowd::Ability::NPCAbilityRuntimeData* runtimeData, ::System::Int32 idx, ::NPCCrowd::Ability::NPCAbilityBehavioursDefine behavioursDefine)
		{
			return ((::System::Void(*)(::NPCCrowd::Ability::NPCAbilityRuntimeData*, ::System::Int32, ::NPCCrowd::Ability::NPCAbilityBehavioursDefine))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_SETABILITYEFFECTIVEBEHAVIOURS_OFFSET))(runtimeData, idx, behavioursDefine);
		}

		static ::NPCCrowd::Ability::NPCAbilityBehavioursDefine GetAbilityEffectiveBehaviours(::NPCCrowd::Ability::NPCAbilityRuntimeData* runtimeData, ::System::Int32 idx)
		{
			return ((::NPCCrowd::Ability::NPCAbilityBehavioursDefine(*)(::NPCCrowd::Ability::NPCAbilityRuntimeData*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_GETABILITYEFFECTIVEBEHAVIOURS_OFFSET))(runtimeData, idx);
		}

		static ::System::Void SetAbilityPathFollowType(::NPCCrowd::Ability::NPCAbilityRuntimeData* runtimeData, ::System::Int32 idx, ::System::Boolean usePathFollow)
		{
			return ((::System::Void(*)(::NPCCrowd::Ability::NPCAbilityRuntimeData*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_SETABILITYPATHFOLLOWTYPE_OFFSET))(runtimeData, idx, usePathFollow);
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

		::System::Void WaitForStandTurnFinish(::System::UInt32 entityId, ::System::Single angle, ::System::Action_1<::System::Boolean>* callbackWithResult)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_WAITFORSTANDTURNFINISH_OFFSET))(this, entityId, angle, callbackWithResult);
		}

		::Cysharp::Threading::Tasks::UniTaskVoid WaitForStandTurnFinishAsync(::System::UInt32 entityId, ::System::Single angle, ::System::Action_1<::System::Boolean>* callbackWithResult)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::System::UInt32, ::System::Single, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_WAITFORSTANDTURNFINISHASYNC_OFFSET))(this, entityId, angle, callbackWithResult);
		}

		::System::Boolean TryGetStandTurnContext(::System::UInt32 entityId, ::NPCCrowd::Ability::NPCAbilityRuntimeData*& runtimeData, ::System::Int32& idx)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::NPCCrowd::Ability::NPCAbilityRuntimeData*&, ::System::Int32&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_TRYGETSTANDTURNCONTEXT_OFFSET))(this, entityId, runtimeData, idx);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean> WaitUntilIdleAsync(::System::UInt32 entityId)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean>(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_WAITUNTILIDLEASYNC_OFFSET))(this, entityId);
		}

		::System::Void InitDefaultData(::NPCCrowd::Ability::NPCAbility* ability, ::System::Int32 idx, ::System::Int32 animID, ::System::String* movementStyle)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::NPCAbility*, ::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_INITDEFAULTDATA_OFFSET))(this, ability, idx, animID, movementStyle);
		}

		static ::System::String* ResolvePopulationOverrideMovementStyle(::NPCCrowd::Ability::NPCAbilityRuntimeData* runtimeData, ::System::Int32 idx, ::System::String* movementStyle)
		{
			return ((::System::String*(*)(::NPCCrowd::Ability::NPCAbilityRuntimeData*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_RESOLVEPOPULATIONOVERRIDEMOVEMENTSTYLE_OFFSET))(runtimeData, idx, movementStyle);
		}

		::System::Void OnAbilityRemoved(::NPCCrowd::Ability::NPCAbilityRuntimeData* runtimeData, ::System::Int32 idx)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::NPCAbilityRuntimeData*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_ONABILITYREMOVED_OFFSET))(this, runtimeData, idx);
		}

		::System::Boolean StartSplineFollow(::System::UInt32 entityId, ::FluffyUnderware::Curvy::CurvySpline* spline, ::System::Single stopRadius, ::System::Boolean startFromNearest, ::System::Boolean snapToGround)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::FluffyUnderware::Curvy::CurvySpline*, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_STARTSPLINEFOLLOW_OFFSET))(this, entityId, spline, stopRadius, startFromNearest, snapToGround);
		}

		::System::Boolean StopSplineFollow(::System::UInt32 entityId)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_STOPSPLINEFOLLOW_OFFSET))(this, entityId);
		}

		::System::Boolean TryGetSplineFollowState(::System::UInt32 entityId, ::System::Boolean& isRunning, ::System::Boolean& isFinished, ::System::Boolean& isSuccess)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Boolean&, ::System::Boolean&, ::System::Boolean&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_TRYGETSPLINEFOLLOWSTATE_OFFSET))(this, entityId, isRunning, isFinished, isSuccess);
		}

		::System::Boolean IsSplineFollowFinished(::System::UInt32 entityId)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_ISSPLINEFOLLOWFINISHED_OFFSET))(this, entityId);
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

		::System::Void ProcessPendingSplineFollowCommands()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_PROCESSPENDINGSPLINEFOLLOWCOMMANDS_OFFSET))(this);
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

		::System::Void DispatchFlushJob(::NPCCrowd::Ability::NPCAbilityApplyMovePlatformProcessor* attachProcessor, ::NPCCrowd::Ability::NPCAbilityFlushTransformProcessor* transformProcessor, ::NPCCrowd::Ability::NPCAbilityObstacleFlushProcessor* obstacleFlushProcessor, ::System::Single deltaTime, ::Unity::Collections::NativeArray_1<::Unity::Jobs::JobHandle> buffer, ::Unity::Jobs::JobHandle dependsOn)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::NPCAbilityApplyMovePlatformProcessor*, ::NPCCrowd::Ability::NPCAbilityFlushTransformProcessor*, ::NPCCrowd::Ability::NPCAbilityObstacleFlushProcessor*, ::System::Single, ::Unity::Collections::NativeArray_1<::Unity::Jobs::JobHandle>, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_DISPATCHFLUSHJOB_OFFSET))(this, attachProcessor, transformProcessor, obstacleFlushProcessor, deltaTime, buffer, dependsOn);
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

		::System::Void BeginPrepareMovePlatformAttachDataLateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_BEGINPREPAREMOVEPLATFORMATTACHDATALATEUPDATE_OFFSET))(this);
		}

		::System::Void TryCollectMovePlatformAttachTransform(::Class_3_F2DAD7F45F518868* npcComp, ::Class_3_52E0F81CBC57DA32* movePlatformComponent)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_F2DAD7F45F518868*, ::Class_3_52E0F81CBC57DA32*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_TRYCOLLECTMOVEPLATFORMATTACHTRANSFORM_OFFSET))(this, npcComp, movePlatformComponent);
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

		::NPCCrowd::Ability::NPCAbilityManager_MovePlatformAttachSparseCache* GetOrCreateMovePlatformAttachCache(::NPCCrowd::Ability::NPCAbilityRuntimeData* runtimeData)
		{
			return ((::NPCCrowd::Ability::NPCAbilityManager_MovePlatformAttachSparseCache*(*)(::PVOID, ::NPCCrowd::Ability::NPCAbilityRuntimeData*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_GETORCREATEMOVEPLATFORMATTACHCACHE_OFFSET))(this, runtimeData);
		}

		::System::Void ReleaseMovePlatformAttachCaches()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_RELEASEMOVEPLATFORMATTACHCACHES_OFFSET))(this);
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
