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
#include "unitysdk/NPCCrowd/Ability/NPCAbilityManager_CustomAttachTransformData.h"
#include "unitysdk/NPCCrowd/Ability/NPCAbilityObstacleFlushProcessor_ExecuteJob.h"
#include "unitysdk/NPCCrowd/Ability/NavigationObstacleItem.h"
#include "unitysdk/NPCCrowd/Ability/NavigationObstacleItemEqualsFunc.h"
#include "unitysdk/NPCCrowd/AbilitySwitchSetting.h"
#include "unitysdk/NPCCrowd/NPCCrowdModuleManagerBase.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"
#include "unitysdk/UnityEngine/Jobs/TransformAccessArray.h"
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
namespace NPCCrowd::Ability { class NPCAbilityManager_AttachTransformSparseCache; }
namespace NPCCrowd::Ability { class NPCAbilityManager_CustomAttachTransformProvider; }
namespace NPCCrowd::Ability { class NPCAbilityMoveAvoidanceProcessors; }
namespace NPCCrowd::Ability { class NPCAbilityObstacleFlushProcessor; }
namespace NPCCrowd::Ability { class NPCAbilityParameters; }
namespace NPCCrowd::Ability { class NPCAbilityPathFollowProcessor; }
namespace NPCCrowd::Ability { class NPCAbilityRuntimeData; }
namespace NPCCrowd::Ability { class NPCAbilitySmoothOrientationProcessors; }
namespace NPCCrowd::Ability { class NPCAbilitySteerToMoveTargetProcessor; }
namespace NPCCrowd::Ability { class NPCApplyMovementProcessor; }
namespace NPCCrowd::Ability { class NPCNavmeshProcessor; }
namespace NPCCrowd::Ability { class NPCStateTreeProcessor; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_ABILITY_NPCABILITYMANAGER_BEGINPREPAREMOVEPLATFORMATTACHDATALATEUPDATE_OFFSET UNITYSDK_OFFSET(0xF85D680)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_CREATEABILITYENTITY_OFFSET UNITYSDK_OFFSET(0xF85E0D0)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0xF854FC0)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_DISPATCHCOMBINEJOB_OFFSET UNITYSDK_OFFSET(0xF85CDF0)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_DISPATCHFLUSHJOBCOMBINED_OFFSET UNITYSDK_OFFSET(0xF85AF70)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_DISPATCHFLUSHJOBPERRUNTIME_OFFSET UNITYSDK_OFFSET(0xF85B8C0)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_DISPATCHFLUSHJOB_OFFSET UNITYSDK_OFFSET(0xF85ADD0)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_DISPATCHINLIST_OFFSET UNITYSDK_OFFSET(0xF85A090)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_DISPATCHJOB_OFFSET UNITYSDK_OFFSET(0xF85A390)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_DISPATCHTRANSFORMOBSTACLEFLUSHJOB_OFFSET UNITYSDK_OFFSET(0xF85DCD0)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_DISPATCH_OFFSET UNITYSDK_OFFSET(0xF859D80)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_DISPOSECOMBINEDTRANSFORMARRAYS_OFFSET UNITYSDK_OFFSET(0xF856370)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_GETABILITYEFFECTIVEBEHAVIOURS_OFFSET UNITYSDK_OFFSET(0xF856A90)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_GETCURRENTABILITYMOVEACTIONID_OFFSET UNITYSDK_OFFSET(0xF8590A0)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_GETCURRENTABILITYMOVEACTIONTYPE_OFFSET UNITYSDK_OFFSET(0xF8591D0)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_GETORCREATEMOVEPLATFORMATTACHCACHE_OFFSET UNITYSDK_OFFSET(0xF85BF20)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_GET_OFFSET UNITYSDK_OFFSET(0xF852290)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_HASCUSTOMATTACHTRANSFORMFORENTITY_OFFSET UNITYSDK_OFFSET(0xF85F080)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_HASCUSTOMATTACHTRANSFORM_OFFSET UNITYSDK_OFFSET(0xF85F1B0)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_INITDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0xF8579B0)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0xF855110)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_ISPATHFOLLOWFINISHED_OFFSET UNITYSDK_OFFSET(0xF858CE0)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_ISPATHFOLLOWSTARTED_OFFSET UNITYSDK_OFFSET(0xF858C40)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_ISSPLINEFOLLOWFINISHED_OFFSET UNITYSDK_OFFSET(0xF858BD0)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xF85D450)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_ONABILITYREMOVED_OFFSET UNITYSDK_OFFSET(0xF858790)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_ONCHANGESECTION_OFFSET UNITYSDK_OFFSET(0xF855740)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xF855EA0)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_OVERRIDEABILITYSWITCH_OFFSET UNITYSDK_OFFSET(0xF856740)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_PENDINGUPDATEJOBS_OFFSET UNITYSDK_OFFSET(0xF85DEC0)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_POSTLATEUPDATE_OFFSET UNITYSDK_OFFSET(0xF85DDB0)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_PRELOADASSETS_OFFSET UNITYSDK_OFFSET(0xF855D70)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_PREPARECUSTOMATTACHDATALATEUPDATE_OFFSET UNITYSDK_OFFSET(0xF85D840)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_PREUPDATE_OFFSET UNITYSDK_OFFSET(0xF85C580)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_PROCESSMOVEPLATFORM_OFFSET UNITYSDK_OFFSET(0xF85D120)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_PROCESSPENDINGSPLINEFOLLOWCOMMANDS_OFFSET UNITYSDK_OFFSET(0xF859CF0)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_REBUILDCOMBINEDTRANSFORMACCESSARRAY_OFFSET UNITYSDK_OFFSET(0xF85C180)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_REGISTERCUSTOMATTACHTRANSFORM_OFFSET UNITYSDK_OFFSET(0xF85EE10)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_RELEASECUSTOMATTACHTRANSFORMS_OFFSET UNITYSDK_OFFSET(0xF856670)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_RELEASEMOVEPLATFORMATTACHCACHES_OFFSET UNITYSDK_OFFSET(0xF856440)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_REMOVEABILITYENTITY_OFFSET UNITYSDK_OFFSET(0xF85E590)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_REMOVECUSTOMATTACHTRANSFORMSFORENTITY_OFFSET UNITYSDK_OFFSET(0xF85E860)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_REMOVECUSTOMATTACHTRANSFORM_OFFSET UNITYSDK_OFFSET(0xF85F010)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_RESOLVEBEHAVIOURSBYPATHSTARTNODE_OFFSET UNITYSDK_OFFSET(0xF8567E0)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_RESOLVEPOPULATIONOVERRIDEMOVEMENTSTYLE_OFFSET UNITYSDK_OFFSET(0xF858620)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_SETABILITYEFFECTIVEBEHAVIOURS_OFFSET UNITYSDK_OFFSET(0xF8569C0)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_SETABILITYPATHFOLLOWTYPE_OFFSET UNITYSDK_OFFSET(0xF856B90)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_SETNPCABILITYPATHFOLLOW_OFFSET UNITYSDK_OFFSET(0xF856D20)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_SETNPCABILITYSMOOTHROTATIONTOTARGET_OFFSET UNITYSDK_OFFSET(0xF856C30)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_SHOULDTICK_OFFSET UNITYSDK_OFFSET(0xF855C80)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_STANDTURNASYNC_OFFSET UNITYSDK_OFFSET(0xF857650)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_STARTSPLINEFOLLOW_OFFSET UNITYSDK_OFFSET(0xF8588B0)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_STARTSTANDTURN_OFFSET UNITYSDK_OFFSET(0xF857530)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_STARTSTATETREE_OFFSET UNITYSDK_OFFSET(0xF85F790)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_STOPCURRENTMOVEACTION_OFFSET UNITYSDK_OFFSET(0xF858F30)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_STOPMOVEACTION_OFFSET UNITYSDK_OFFSET(0xF858DC0)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_STOPSPLINEFOLLOW_OFFSET UNITYSDK_OFFSET(0xF858A10)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_STOPSTATETREE_OFFSET UNITYSDK_OFFSET(0xF85F800)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_TELEPORTTO_1_OFFSET UNITYSDK_OFFSET(0xF8598E0)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_TELEPORTTO_OFFSET UNITYSDK_OFFSET(0xF859300)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_TRYCOLLECTMOVEPLATFORMATTACHTRANSFORM_OFFSET UNITYSDK_OFFSET(0xF85D190)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_TRYGETABILITYTRANSFORM_OFFSET UNITYSDK_OFFSET(0xF85EAE0)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_TRYGETABILITY_OFFSET UNITYSDK_OFFSET(0xF852410)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_TRYGETPENDINGATTACHBASETRANSFORM_OFFSET UNITYSDK_OFFSET(0xF85F260)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_TRYGETSPLINEFOLLOWSTATE_OFFSET UNITYSDK_OFFSET(0xF858A70)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_TRYGETSTANDTURNCONTEXT_OFFSET UNITYSDK_OFFSET(0xF857850)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_TRYGETVALIDABILITYRUNTIME_OFFSET UNITYSDK_OFFSET(0xF85ED70)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0xF85C760)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_WAITFOROBSTACLE_OFFSET UNITYSDK_OFFSET(0xF85DE60)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_WAITFORSTANDTURNFINISHASYNC_OFFSET UNITYSDK_OFFSET(0xF8577B0)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_WAITFORSTANDTURNFINISH_OFFSET UNITYSDK_OFFSET(0xF8576E0)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_WAITFORTRANSFORM_OFFSET UNITYSDK_OFFSET(0xF856780)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_WAITUNTILIDLEASYNC_OFFSET UNITYSDK_OFFSET(0xF857900)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_WAIT_OFFSET UNITYSDK_OFFSET(0xF8562A0)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0xF85F8A0)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xF85F890)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER___BASE_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0xF85F980)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER___BASE_INIT_OFFSET UNITYSDK_OFFSET(0xF85FA10)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER___BASE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xF85FAA0)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xF85FB40)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER___BASE_POSTLATEUPDATE_OFFSET UNITYSDK_OFFSET(0xF85FBD0)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER___BASE_PREUPDATE_OFFSET UNITYSDK_OFFSET(0xF85FC70)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER___BASE_SHOULDTICK_OFFSET UNITYSDK_OFFSET(0xF85FD10)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER___BASE_UPDATE_OFFSET UNITYSDK_OFFSET(0xF85FDA0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NPCAbilityManager_TypeDefinitionIndex = 78958;

	class NPCAbilityManager : public ::NPCCrowd::NPCCrowdModuleManagerBase
	{
	public:
		static ::System::Action_3<::Class_3_F2DAD7F45F518868*, ::Class_3_52E0F81CBC57DA32*, ::NPCCrowd::Ability::NPCAbilityManager*>** StaticGet_MovePlatformForEachDelegate()
		{
			return (::System::Action_3<::Class_3_F2DAD7F45F518868*, ::Class_3_52E0F81CBC57DA32*, ::NPCCrowd::Ability::NPCAbilityManager*>**)Il2CppClass::FromTypeDefinitionIndex(NPCAbilityManager_TypeDefinitionIndex)->GetStaticField(0x37500);
		}
		static ::NPCCrowd::NPCSectionAbilitySwitchConfigSO** StaticGet__configSO()
		{
			return (::NPCCrowd::NPCSectionAbilitySwitchConfigSO**)Il2CppClass::FromTypeDefinitionIndex(NPCAbilityManager_TypeDefinitionIndex)->GetStaticField(0x37508);
		}
		static ::System::Collections::Generic::List_1<::Unity::Jobs::JobHandle>** StaticGet_allUpdateJobs()
		{
			return (::System::Collections::Generic::List_1<::Unity::Jobs::JobHandle>**)Il2CppClass::FromTypeDefinitionIndex(NPCAbilityManager_TypeDefinitionIndex)->GetStaticField(0x37510);
		}
		static ::System::String** StaticGet_SwitchConfigPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAbilityManager_TypeDefinitionIndex)->GetStaticField(0x37518);
		}
		static ::Foundation::AssetRequestHandle* StaticGet__configAssetRequest()
		{
			return (::Foundation::AssetRequestHandle*)Il2CppClass::FromTypeDefinitionIndex(NPCAbilityManager_TypeDefinitionIndex)->GetStaticField(0x37520);
		}
		static ::System::Boolean* StaticGet_ActivateMoveAvoidance()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NPCAbilityManager_TypeDefinitionIndex)->GetStaticField(0xCF90);
		}
		static ::NPCCrowd::AbilitySwitchSetting* StaticGet_AbilitySwitchSetting()
		{
			return (::NPCCrowd::AbilitySwitchSetting*)Il2CppClass::FromTypeDefinitionIndex(NPCAbilityManager_TypeDefinitionIndex)->GetStaticField(0xCF91);
		}
		static ::System::Int32* StaticGet_MaxEntityNum()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NPCAbilityManager_TypeDefinitionIndex)->GetStaticField(0xCF98);
		}
		static ::NPCCrowd::AbilitySwitchSetting* StaticGet_DefaultAbilitySwitchSetting()
		{
			return (::NPCCrowd::AbilitySwitchSetting*)Il2CppClass::FromTypeDefinitionIndex(NPCAbilityManager_TypeDefinitionIndex)->GetStaticField(0xCF9C);
		}
		static ::System::Boolean* StaticGet_EnableCombinedFlush()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NPCAbilityManager_TypeDefinitionIndex)->GetStaticField(0xCFA0);
		}
		static ::System::Boolean* StaticGet_EnableCrowdDither()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NPCAbilityManager_TypeDefinitionIndex)->GetStaticField(0xCFA1);
		}
		static ::System::Boolean* StaticGet_EnableAbilityCombine()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NPCAbilityManager_TypeDefinitionIndex)->GetStaticField(0xCFA2);
		}
		::NPCCrowd::Ability::NPCAbilityAnimateProcessors* animateProcessors; // 0x18
		::NPCCrowd::Ability::NPCAbilityMoveAvoidanceProcessors* moveAvoidanceProcessors; // 0x20
		::NPCCrowd::NPCIDGeneratorInt* IDGen; // 0x28
		::System::Collections::Generic::Dictionary_2<::NPCCrowd::Ability::NPCAbilityRuntimeData*, ::NPCCrowd::Ability::NPCAbilityManager_AttachTransformSparseCache*>* _movePlatformAttachCaches; // 0x30
		::System::Collections::Generic::List_1<::NPCCrowd::Ability::NPCAbilityObstacleFlushProcessor_ExecuteJob>* obstacleFlushProcessorJobs; // 0x38
		::Nap::NapECS::EcsFilter* _movePlatformFilter; // 0x40
		::NPCCrowd::Ability::NPCAbilityObstacleFlushProcessor* obstacleFlushProcessor; // 0x48
		::System::Collections::Generic::Dictionary_2<::NPCCrowd::Ability::NPCAbilityParameters*, ::NPCCrowd::Ability::NPCAbilityRuntimeData*>* allAbilityRuntimeDataDict; // 0x50
		::NPCCrowd::Ability::AfterNavMeshCombineProcessor* afterNavMeshProcessor; // 0x58
		::NPCCrowd::Ability::NPCAIProcessor* aiProcessors; // 0x60
		::NPCCrowd::Ability::NPCAbilityPathFollowProcessor* pathFollowingProcessor; // 0x68
		::NPCCrowd::Ability::BeforeNavMeshCombineProcessor* beforeNaveMeshProcessor; // 0x70
		::NPCCrowd::Ability::NPCAbilityFlushTransformProcessor* flushTransformProcessor; // 0x78
		::NPCCrowd::Ability::NPCAbilityDitherProcessor* ditherProcessor; // 0x80
		::NPCCrowd::Ability::NPCNavmeshProcessor* navmeshProcessor; // 0x88
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowd::Ability::NPCAbilityManager_CustomAttachTransformData>* _customAttachTransforms; // 0x90
		::NPCCrowd::Ability::CrowdSplineFollowProcessor* splineFollowProcessor; // 0x98
		::NPCCrowd::Ability::NPCAbilitySmoothOrientationProcessors* smoothOrientationProcessors; // 0xA0
		::NPCCrowd::Ability::NPCAbilitySteerToMoveTargetProcessor* steerToMoveTargetProcessor; // 0xA8
		::NPCCrowd::Ability::NPCAbilityApplyMovePlatformProcessor* applyMovePlatformProcessor; // 0xB0
		::System::Collections::Generic::List_1<::NPCCrowd::Ability::NPCAbilityRuntimeData*>* allAbilityRuntimeDatas; // 0xB8
		::NPCCrowd::Ability::NPCApplyMovementProcessor* applyMovementProcessor; // 0xC0
		::NPCCrowd::Ability::NPCAbilityFirstProcessors* firstProcessor; // 0xC8
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::NPCCrowd::Ability::NPCAbility*>* abilities; // 0xD0
		::NPCCrowd::AI::AIActionProcessor* actionProcessor; // 0xD8
		::System::Collections::Generic::List_1<::System::Int32>* _customAttachRemoveCache; // 0xE0
		::NPCCrowd::Ability::NPCStateTreeProcessor* stateTreeProcessor; // 0xE8
		::UnityEngine::Jobs::TransformAccessArray _combinedTransformAccessArray; // 0xF0
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FTransformFragment> _combinedTransformFragments; // 0xF8
		::Unity::Jobs::JobHandle _obstacleJobHandle; // 0x108
		::System::Int32 _combinedTransformTotalCapacity; // 0x118
		::System::Boolean _combinedTransformDirty; // 0x11C
		::Unity::Jobs::JobHandle _jobHandle; // 0x120
		::Unity::Collections::NativeArray_1<::System::Boolean> _combinedIsUsing; // 0x130

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

		::System::Void CreateFilters(::Nap::NapECS::EcsWorld* world)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_CREATEFILTERS_OFFSET))(this, world);
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

		::NPCCrowd::Ability::FNPCAbilityMovementActionHandle SetNPCAbilitySmoothRotationToTarget(::NPCCrowd::Ability::NPCAbilityRuntimeData* runtimeData, ::System::Int32 idx, ::UnityEngine::Vector3 rotTarget)
		{
			return ((::NPCCrowd::Ability::FNPCAbilityMovementActionHandle(*)(::PVOID, ::NPCCrowd::Ability::NPCAbilityRuntimeData*, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_SETNPCABILITYSMOOTHROTATIONTOTARGET_OFFSET))(this, runtimeData, idx, rotTarget);
		}

		::NPCCrowd::Ability::FNPCAbilityMovementActionHandle SetNPCAbilityPathFollow(::NPCCrowd::Ability::NPCAbility* ability, ::NPCCrowd::Ability::NPCAbilityRuntimeData* runtimeData, ::System::Int32 idx, ::NPCCrowd::AI::PathGraphRuntime_PathFindingResult* pathResult, ::System::Boolean teleportToFirstPoint, ::System::Int32 laneIndex, ::System::Single laneInnerOffset, ::System::String* style, ::System::Single endFadeOutTime, ::System::Int32 pathID)
		{
			return ((::NPCCrowd::Ability::FNPCAbilityMovementActionHandle(*)(::PVOID, ::NPCCrowd::Ability::NPCAbility*, ::NPCCrowd::Ability::NPCAbilityRuntimeData*, ::System::Int32, ::NPCCrowd::AI::PathGraphRuntime_PathFindingResult*, ::System::Boolean, ::System::Int32, ::System::Single, ::System::String*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_SETNPCABILITYPATHFOLLOW_OFFSET))(this, ability, runtimeData, idx, pathResult, teleportToFirstPoint, laneIndex, laneInnerOffset, style, endFadeOutTime, pathID);
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

		::System::Void DispatchFlushJobPerRuntime(::NPCCrowd::Ability::NPCAbilityApplyMovePlatformProcessor* attachProcessor, ::NPCCrowd::Ability::NPCAbilityFlushTransformProcessor* transformProcessor, ::NPCCrowd::Ability::NPCAbilityObstacleFlushProcessor* obstacleFlushProcessor, ::System::Single deltaTime, ::Unity::Collections::NativeArray_1<::Unity::Jobs::JobHandle> buffer, ::Unity::Jobs::JobHandle dependsOn)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::NPCAbilityApplyMovePlatformProcessor*, ::NPCCrowd::Ability::NPCAbilityFlushTransformProcessor*, ::NPCCrowd::Ability::NPCAbilityObstacleFlushProcessor*, ::System::Single, ::Unity::Collections::NativeArray_1<::Unity::Jobs::JobHandle>, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_DISPATCHFLUSHJOBPERRUNTIME_OFFSET))(this, attachProcessor, transformProcessor, obstacleFlushProcessor, deltaTime, buffer, dependsOn);
		}

		::System::Void DispatchFlushJobCombined(::NPCCrowd::Ability::NPCAbilityApplyMovePlatformProcessor* attachProcessor, ::NPCCrowd::Ability::NPCAbilityFlushTransformProcessor* transformProcessor, ::NPCCrowd::Ability::NPCAbilityObstacleFlushProcessor* obstacleFlushProcessor, ::System::Single deltaTime, ::Unity::Collections::NativeArray_1<::Unity::Jobs::JobHandle> buffer, ::Unity::Jobs::JobHandle dependsOn)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::NPCAbilityApplyMovePlatformProcessor*, ::NPCCrowd::Ability::NPCAbilityFlushTransformProcessor*, ::NPCCrowd::Ability::NPCAbilityObstacleFlushProcessor*, ::System::Single, ::Unity::Collections::NativeArray_1<::Unity::Jobs::JobHandle>, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_DISPATCHFLUSHJOBCOMBINED_OFFSET))(this, attachProcessor, transformProcessor, obstacleFlushProcessor, deltaTime, buffer, dependsOn);
		}

		::System::Void PreUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_PREUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void Update(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_UPDATE_OFFSET))(this, deltaTime);
		}

		static ::System::Void ProcessMovePlatform(::Class_3_F2DAD7F45F518868* npcComponent, ::Class_3_52E0F81CBC57DA32* movePlatformComponent, ::NPCCrowd::Ability::NPCAbilityManager* self)
		{
			return ((::System::Void(*)(::Class_3_F2DAD7F45F518868*, ::Class_3_52E0F81CBC57DA32*, ::NPCCrowd::Ability::NPCAbilityManager*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_PROCESSMOVEPLATFORM_OFFSET))(npcComponent, movePlatformComponent, self);
		}

		::System::Void LateUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_LATEUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void PostLateUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_POSTLATEUPDATE_OFFSET))(this, deltaTime);
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

		::System::Boolean TryGetAbilityTransform(::System::UInt32 entityId, ::NPCCrowd::Ability::FTransformFragment& transform)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::NPCCrowd::Ability::FTransformFragment&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_TRYGETABILITYTRANSFORM_OFFSET))(this, entityId, transform);
		}

		::System::Boolean RegisterCustomAttachTransform(::System::Int32 handler, ::System::UInt32 entityId, ::NPCCrowd::Ability::NPCAbilityManager_CustomAttachTransformProvider* provider, ::System::Boolean overrideSameEntity)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::UInt32, ::NPCCrowd::Ability::NPCAbilityManager_CustomAttachTransformProvider*, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_REGISTERCUSTOMATTACHTRANSFORM_OFFSET))(this, handler, entityId, provider, overrideSameEntity);
		}

		::System::Void RemoveCustomAttachTransform(::System::Int32 handler)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_REMOVECUSTOMATTACHTRANSFORM_OFFSET))(this, handler);
		}

		::System::Boolean HasCustomAttachTransform(::System::Int32 handler, ::System::UInt32 entityId)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_HASCUSTOMATTACHTRANSFORM_OFFSET))(this, handler, entityId);
		}

		static ::System::Boolean TryGetValidAbilityRuntime(::NPCCrowd::Ability::NPCAbility* ability, ::NPCCrowd::Ability::NPCAbilityRuntimeData*& runtimeData, ::System::Int32& idx)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Ability::NPCAbility*, ::NPCCrowd::Ability::NPCAbilityRuntimeData*&, ::System::Int32&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_TRYGETVALIDABILITYRUNTIME_OFFSET))(ability, runtimeData, idx);
		}

		::System::Void RemoveCustomAttachTransformsForEntity(::System::UInt32 entityId, ::System::Int32 exceptHandler)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_REMOVECUSTOMATTACHTRANSFORMSFORENTITY_OFFSET))(this, entityId, exceptHandler);
		}

		::System::Boolean HasCustomAttachTransformForEntity(::System::UInt32 entityId, ::System::Int32 exceptHandler)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_HASCUSTOMATTACHTRANSFORMFORENTITY_OFFSET))(this, entityId, exceptHandler);
		}

		::System::Void PrepareCustomAttachDataLateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_PREPARECUSTOMATTACHDATALATEUPDATE_OFFSET))(this);
		}

		::System::Boolean TryGetPendingAttachBaseTransform(::NPCCrowd::Ability::NPCAbilityRuntimeData* runtimeData, ::System::Int32 idx, ::NPCCrowd::Ability::FTransformFragment& baseTransform)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Ability::NPCAbilityRuntimeData*, ::System::Int32, ::NPCCrowd::Ability::FTransformFragment&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_TRYGETPENDINGATTACHBASETRANSFORM_OFFSET))(this, runtimeData, idx, baseTransform);
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

		::NPCCrowd::Ability::NPCAbilityManager_AttachTransformSparseCache* GetOrCreateMovePlatformAttachCache(::NPCCrowd::Ability::NPCAbilityRuntimeData* runtimeData)
		{
			return ((::NPCCrowd::Ability::NPCAbilityManager_AttachTransformSparseCache*(*)(::PVOID, ::NPCCrowd::Ability::NPCAbilityRuntimeData*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_GETORCREATEMOVEPLATFORMATTACHCACHE_OFFSET))(this, runtimeData);
		}

		::System::Void DisposeCombinedTransformArrays()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_DISPOSECOMBINEDTRANSFORMARRAYS_OFFSET))(this);
		}

		::System::Void RebuildCombinedTransformAccessArray()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_REBUILDCOMBINEDTRANSFORMACCESSARRAY_OFFSET))(this);
		}

		::System::Void ReleaseMovePlatformAttachCaches()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_RELEASEMOVEPLATFORMATTACHCACHES_OFFSET))(this);
		}

		::System::Void ReleaseCustomAttachTransforms()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_RELEASECUSTOMATTACHTRANSFORMS_OFFSET))(this);
		}

		::System::Void __base_CreateFilters(::Nap::NapECS::EcsWorld* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER___BASE_CREATEFILTERS_OFFSET))(this, P0);
		}

		::System::Void __base_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER___BASE_INIT_OFFSET))(this);
		}

		::System::Void __base_LateUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER___BASE_LATEUPDATE_OFFSET))(this, P0);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_PostLateUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER___BASE_POSTLATEUPDATE_OFFSET))(this, P0);
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
