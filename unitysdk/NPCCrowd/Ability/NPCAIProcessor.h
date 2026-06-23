#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Container/NativeHashSet_2.h"
#include "unitysdk/Foundation/Unreal/FGameplayTag.h"
#include "unitysdk/Foundation/Unreal/FGameplayTagContainer.h"
#include "unitysdk/NPCCrowd/AI/EAIActionTagHandlerSource.h"
#include "unitysdk/NPCCrowd/AI/PathGraphSplineConfig_PathGraphPointRegionTypeMask.h"
#include "unitysdk/NPCCrowd/Ability/ENPCAbilityMovementAction.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAIBlackboardFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityMoveTargetFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityPathFollowFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityPathFollowFragmentV2.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilitySplineFollowFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCCPUAnimatorFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCGameplayTagActionRuntimeFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCMontageDataFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCNavmeshFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCPathMaskTagRuntimeFragment.h"
#include "unitysdk/NPCCrowd/Ability/FTransformFragment.h"
#include "unitysdk/NPCCrowd/Ability/NPCAbilityBehavioursDefine.h"
#include "unitysdk/NPCCrowd/Ability/NPCAbilityPathFollowProcessor_NearestData.h"
#include "unitysdk/NPCCrowd/Ability/NPCEntityNativeData.h"
#include "unitysdk/NPCCrowd/Ability/NavmeshToPathFollowType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_F2DAD7F45F518868;
class NPCAvatarMeshAssetsSO_FPathGraphPointRegionTypeMaskTagConfig;
class NPCAvatarMeshAssetsSO_GameplayTagActionConfig;
namespace Foundation::Unreal { class FGameplayTagQuery; }
namespace NPCCrowd { class NPCIDGeneratorInt; }
namespace NPCCrowd::AI { class AIActionRefItem; }
namespace NPCCrowd::Ability { class NPCAIProcessor_GameplayTagActionState; }
namespace NPCCrowd::Ability { class NPCAbility; }
namespace NPCCrowd::Ability { class NPCAbilityRuntimeData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_ABILITY_NPCAIPROCESSOR_CHANGENAVMESHTOPATHFOLLOW_1_OFFSET UNITYSDK_OFFSET(0xFF87510)
#define NPCCROWD_ABILITY_NPCAIPROCESSOR_CHANGENAVMESHTOPATHFOLLOW_OFFSET UNITYSDK_OFFSET(0xFF8A150)
#define NPCCROWD_ABILITY_NPCAIPROCESSOR_CLEANUPINVALIDTAGACTIONHANDLERS_OFFSET UNITYSDK_OFFSET(0xFF8CBB0)
#define NPCCROWD_ABILITY_NPCAIPROCESSOR_CLEARGAMEPLAYTAGACTIONRUNTIME_OFFSET UNITYSDK_OFFSET(0xFF8BA10)
#define NPCCROWD_ABILITY_NPCAIPROCESSOR_CLEARPATHGRAPHPOINTREGIONTYPEMASKACTIONS_OFFSET UNITYSDK_OFFSET(0xFF8D9C0)
#define NPCCROWD_ABILITY_NPCAIPROCESSOR_CLEARPATHGRAPHPOINTREGIONTYPEMASKTAGS_OFFSET UNITYSDK_OFFSET(0xFF8D770)
#define NPCCROWD_ABILITY_NPCAIPROCESSOR_CLEARPATHMASKTAGRUNTIMEINJOB_OFFSET UNITYSDK_OFFSET(0xFF8B360)
#define NPCCROWD_ABILITY_NPCAIPROCESSOR_EXECUTE_1_OFFSET UNITYSDK_OFFSET(0xFF888B0)
#define NPCCROWD_ABILITY_NPCAIPROCESSOR_EXECUTE_OFFSET UNITYSDK_OFFSET(0xFF83BD0)
#define NPCCROWD_ABILITY_NPCAIPROCESSOR_GETCROWDCOMPONENT_OFFSET UNITYSDK_OFFSET(0xFF89940)
#define NPCCROWD_ABILITY_NPCAIPROCESSOR_GETMAXTURNINGANGLEFORHOTFIX_OFFSET UNITYSDK_OFFSET(0xFF87080)
#define NPCCROWD_ABILITY_NPCAIPROCESSOR_GETMINTURNINGANGLEFORHOTFIX_OFFSET UNITYSDK_OFFSET(0xFF87000)
#define NPCCROWD_ABILITY_NPCAIPROCESSOR_GETORCREATEGAMEPLAYTAGACTIONSTATE_OFFSET UNITYSDK_OFFSET(0xFF8BEA0)
#define NPCCROWD_ABILITY_NPCAIPROCESSOR_LOGRULEINVALIDONCE_OFFSET UNITYSDK_OFFSET(0xFF8D4F0)
#define NPCCROWD_ABILITY_NPCAIPROCESSOR_NAVMESHTOPOS_1_OFFSET UNITYSDK_OFFSET(0xFF89C60)
#define NPCCROWD_ABILITY_NPCAIPROCESSOR_NAVMESHTOPOS_2_OFFSET UNITYSDK_OFFSET(0xFF875D0)
#define NPCCROWD_ABILITY_NPCAIPROCESSOR_NAVMESHTOPOS_3_OFFSET UNITYSDK_OFFSET(0xFF89FA0)
#define NPCCROWD_ABILITY_NPCAIPROCESSOR_NAVMESHTOPOS_OFFSET UNITYSDK_OFFSET(0xFF89B80)
#define NPCCROWD_ABILITY_NPCAIPROCESSOR_ONINIT_OFFSET UNITYSDK_OFFSET(0xFF88D30)
#define NPCCROWD_ABILITY_NPCAIPROCESSOR_PATHFOLLOWSETNEARESTDATA_OFFSET UNITYSDK_OFFSET(0xFF871E0)
#define NPCCROWD_ABILITY_NPCAIPROCESSOR_PREEXECUTEBEFOREJOBAFTERPATHFOLLOW_OFFSET UNITYSDK_OFFSET(0xFF89210)
#define NPCCROWD_ABILITY_NPCAIPROCESSOR_PREEXECUTEBEFOREJOB_OFFSET UNITYSDK_OFFSET(0xFF88D70)
#define NPCCROWD_ABILITY_NPCAIPROCESSOR_PROCESSGAMEPLAYTAGACTIONINJOB_OFFSET UNITYSDK_OFFSET(0xFF87960)
#define NPCCROWD_ABILITY_NPCAIPROCESSOR_PROCESSMOVEACTION_OFFSET UNITYSDK_OFFSET(0xFF87E40)
#define NPCCROWD_ABILITY_NPCAIPROCESSOR_PROCESSPATHMASKTAGINJOB_OFFSET UNITYSDK_OFFSET(0xFF87680)
#define NPCCROWD_ABILITY_NPCAIPROCESSOR_SCHEDULETAGCHANGEACTIONSBYBITS_OFFSET UNITYSDK_OFFSET(0xFF8B780)
#define NPCCROWD_ABILITY_NPCAIPROCESSOR_SCHEDULETAGCHANGEACTION_OFFSET UNITYSDK_OFFSET(0xFF8D2B0)
#define NPCCROWD_ABILITY_NPCAIPROCESSOR_SETATTRACTORENTITYRETURNTOWANDERINGDATA_OFFSET UNITYSDK_OFFSET(0xFF8AC90)
#define NPCCROWD_ABILITY_NPCAIPROCESSOR_SETMOVEACTION_OFFSET UNITYSDK_OFFSET(0xFF87D60)
#define NPCCROWD_ABILITY_NPCAIPROCESSOR_SETPATHFOLLOWTARGETDATA_OFFSET UNITYSDK_OFFSET(0xFF8A3A0)
#define NPCCROWD_ABILITY_NPCAIPROCESSOR_SIMPLEMOVETO_1_OFFSET UNITYSDK_OFFSET(0xFF8AA80)
#define NPCCROWD_ABILITY_NPCAIPROCESSOR_SIMPLEMOVETO_OFFSET UNITYSDK_OFFSET(0xFF8A7F0)
#define NPCCROWD_ABILITY_NPCAIPROCESSOR_STARTMASKACTIONS_OFFSET UNITYSDK_OFFSET(0xFF8C410)
#define NPCCROWD_ABILITY_NPCAIPROCESSOR_STOPALLMASKACTIONS_OFFSET UNITYSDK_OFFSET(0xFF8CF90)
#define NPCCROWD_ABILITY_NPCAIPROCESSOR_STOPMASKACTIONS_OFFSET UNITYSDK_OFFSET(0xFF8C8E0)
#define NPCCROWD_ABILITY_NPCAIPROCESSOR_STOPNAVMESH_OFFSET UNITYSDK_OFFSET(0xFF8A7B0)
#define NPCCROWD_ABILITY_NPCAIPROCESSOR_STOPSIMPLEMOVE_OFFSET UNITYSDK_OFFSET(0xFF8ABF0)
#define NPCCROWD_ABILITY_NPCAIPROCESSOR_TRYGETABILITYRUNTIMEINDEX_OFFSET UNITYSDK_OFFSET(0xFF8D660)
#define NPCCROWD_ABILITY_NPCAIPROCESSOR_TRYGETCONFIGGAMEPLAYTAG_OFFSET UNITYSDK_OFFSET(0xFF8B420)
#define NPCCROWD_ABILITY_NPCAIPROCESSOR_TRYGETCONFIGTAGMATCHEXPRESSION_OFFSET UNITYSDK_OFFSET(0xFF8C1F0)
#define NPCCROWD_ABILITY_NPCAIPROCESSOR_TRYGETCURRENTPATHGRAPHPOINTMASK_OFFSET UNITYSDK_OFFSET(0xFF8AFE0)
#define NPCCROWD_ABILITY_NPCAIPROCESSOR_TRYGETGAMEPLAYTAGACTIONCONFIGSFORJOB_OFFSET UNITYSDK_OFFSET(0xFF8BD00)
#define NPCCROWD_ABILITY_NPCAIPROCESSOR_TRYGETPATHGRAPHPOINTMASKTAGCONFIGSFORJOB_OFFSET UNITYSDK_OFFSET(0xFF8B1B0)
#define NPCCROWD_ABILITY_NPCAIPROCESSOR_TRYNAVMESHTOPATHFOLLOW_1_OFFSET UNITYSDK_OFFSET(0xFF88F40)
#define NPCCROWD_ABILITY_NPCAIPROCESSOR_TRYNAVMESHTOPATHFOLLOW_2_OFFSET UNITYSDK_OFFSET(0xFF89350)
#define NPCCROWD_ABILITY_NPCAIPROCESSOR_TRYNAVMESHTOPATHFOLLOW_OFFSET UNITYSDK_OFFSET(0xFF88E90)
#define NPCCROWD_ABILITY_NPCAIPROCESSOR__CCTOR_OFFSET UNITYSDK_OFFSET(0xFF8DD20)
#define NPCCROWD_ABILITY_NPCAIPROCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0xFF8DD10)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NPCAIProcessor_TypeDefinitionIndex = 55048;

	class NPCAIProcessor : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::NPCCrowd::Ability::NPCAIProcessor_GameplayTagActionState*>** StaticGet_GameplayTagActionStates()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::NPCCrowd::Ability::NPCAIProcessor_GameplayTagActionState*>**)Il2CppClass::FromTypeDefinitionIndex(NPCAIProcessor_TypeDefinitionIndex)->GetStaticField(0x3CFC0);
		}
		static ::System::Object** StaticGet_GameplayTagActionStateLock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(NPCAIProcessor_TypeDefinitionIndex)->GetStaticField(0x3CFC8);
		}
		static ::System::Collections::Generic::HashSet_1<::System::UInt32>** StaticGet_LoggedRuleInvalidEntities()
		{
			return (::System::Collections::Generic::HashSet_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(NPCAIProcessor_TypeDefinitionIndex)->GetStaticField(0x3CFD0);
		}
		static ::System::Object** StaticGet_RuleValidateLogLock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(NPCAIProcessor_TypeDefinitionIndex)->GetStaticField(0x3CFD8);
		}
		static ::System::Single* StaticGet_MaxTurningAngleForHotFix()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NPCAIProcessor_TypeDefinitionIndex)->GetStaticField(0xEF00);
		}
		static ::System::Single* StaticGet_MinTurningAngleForHotFix()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NPCAIProcessor_TypeDefinitionIndex)->GetStaticField(0xEF04);
		}
		// static const ::System::Int32 MaxPathMaskTagRuleCount = 0x20; // 0x0
		// static const ::System::Int32 MaxGameplayTagActionRuleCount = 0x20; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCAIPROCESSOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCAIPROCESSOR__CCTOR_OFFSET))();
		}

		static ::System::Void Execute(::System::Int32 idx, ::Foundation::Container::NativeHashSet_2<::NPCCrowd::Ability::NPCEntityNativeData, ::NPCCrowd::Ability::NPCEntityNativeData> entityMap, ::NPCCrowd::Ability::NPCAbilityBehavioursDefine behavioursDefine, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCNavmeshFragment>& runtime_navmesh, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAIBlackboardFragment>& runtime_blackBoard, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FTransformFragment> runtime_transform, ::Unity::Collections::NativeArray_1<::System::UInt32> EntityIds, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2>& runtime_pathFollowV2, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilityPathFollowFragment>& runtime_pathFollow, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilitySplineFollowFragment>& runtime_splineFollow, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilityMoveTargetFragment>& runtime_moveTarget, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCCPUAnimatorFragment>& runtime_animatorBufferData, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCMontageDataFragment>& runtime_montageData, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCPathMaskTagRuntimeFragment>& runtime_pathMaskTagRuntime, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCGameplayTagActionRuntimeFragment>& runtime_gameplayTagActionRuntime, ::System::Single currentTime, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::System::Int32, ::Foundation::Container::NativeHashSet_2<::NPCCrowd::Ability::NPCEntityNativeData, ::NPCCrowd::Ability::NPCEntityNativeData>, ::NPCCrowd::Ability::NPCAbilityBehavioursDefine, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCNavmeshFragment>&, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAIBlackboardFragment>&, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FTransformFragment>, ::Unity::Collections::NativeArray_1<::System::UInt32>, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2>&, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilityPathFollowFragment>&, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilitySplineFollowFragment>&, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilityMoveTargetFragment>&, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCCPUAnimatorFragment>&, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCMontageDataFragment>&, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCPathMaskTagRuntimeFragment>&, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCGameplayTagActionRuntimeFragment>&, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCAIPROCESSOR_EXECUTE_OFFSET))(idx, entityMap, behavioursDefine, runtime_navmesh, runtime_blackBoard, runtime_transform, EntityIds, runtime_pathFollowV2, runtime_pathFollow, runtime_splineFollow, runtime_moveTarget, runtime_animatorBufferData, runtime_montageData, runtime_pathMaskTagRuntime, runtime_gameplayTagActionRuntime, currentTime, deltaTime);
		}

		static ::System::Single GetMinTurningAngleForHotFix()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCAIPROCESSOR_GETMINTURNINGANGLEFORHOTFIX_OFFSET))();
		}

		static ::System::Single GetMaxTurningAngleForHotFix()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCAIPROCESSOR_GETMAXTURNINGANGLEFORHOTFIX_OFFSET))();
		}

		static ::System::Boolean SetMoveAction(::NPCCrowd::Ability::FNPCAbilityMoveTargetFragment& moveTarget, ::NPCCrowd::Ability::ENPCAbilityMovementAction action, ::System::Single currentTime)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Ability::FNPCAbilityMoveTargetFragment&, ::NPCCrowd::Ability::ENPCAbilityMovementAction, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCAIPROCESSOR_SETMOVEACTION_OFFSET))(moveTarget, action, currentTime);
		}

		static ::System::Boolean ProcessMoveAction(::System::UInt32 entityID, ::NPCCrowd::Ability::FNPCAbilityMoveTargetFragment& moveTarget, ::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2& pathFollow, ::NPCCrowd::Ability::FNPCNavmeshFragment& navmesh, ::NPCCrowd::Ability::FNPCAbilitySplineFollowFragment& splineFollow, ::NPCCrowd::Ability::FNPCCPUAnimatorFragment& animation, ::NPCCrowd::Ability::FNPCAIBlackboardFragment& blackboard, ::System::Single currentTime)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::NPCCrowd::Ability::FNPCAbilityMoveTargetFragment&, ::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2&, ::NPCCrowd::Ability::FNPCNavmeshFragment&, ::NPCCrowd::Ability::FNPCAbilitySplineFollowFragment&, ::NPCCrowd::Ability::FNPCCPUAnimatorFragment&, ::NPCCrowd::Ability::FNPCAIBlackboardFragment&, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCAIPROCESSOR_PROCESSMOVEACTION_OFFSET))(entityID, moveTarget, pathFollow, navmesh, splineFollow, animation, blackboard, currentTime);
		}

		::Unity::Jobs::JobHandle Execute_1(::NPCCrowd::Ability::NPCAbilityRuntimeData* runtime, ::System::Single deltaTime, ::Unity::Jobs::JobHandle dependsOn)
		{
			return ((::Unity::Jobs::JobHandle(*)(::PVOID, ::NPCCrowd::Ability::NPCAbilityRuntimeData*, ::System::Single, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCAIPROCESSOR_EXECUTE_1_OFFSET))(this, runtime, deltaTime, dependsOn);
		}

		::System::Void OnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCAIPROCESSOR_ONINIT_OFFSET))(this);
		}

		::System::Void PreExecuteBeforeJob(::NPCCrowd::Ability::NPCAbilityRuntimeData* runtime, ::System::Int32 idx, ::System::Single deltaTime, ::NPCCrowd::NPCIDGeneratorInt* IDGen)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::NPCAbilityRuntimeData*, ::System::Int32, ::System::Single, ::NPCCrowd::NPCIDGeneratorInt*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCAIPROCESSOR_PREEXECUTEBEFOREJOB_OFFSET))(this, runtime, idx, deltaTime, IDGen);
		}

		static ::System::Boolean TryNavmeshToPathFollow(::NPCCrowd::Ability::NPCAbility* ability, ::NPCCrowd::Ability::NavmeshToPathFollowType changeType)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Ability::NPCAbility*, ::NPCCrowd::Ability::NavmeshToPathFollowType))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCAIPROCESSOR_TRYNAVMESHTOPATHFOLLOW_OFFSET))(ability, changeType);
		}

		::System::Void PreExecuteBeforeJobAfterPathFollow(::NPCCrowd::Ability::NPCAbilityRuntimeData* runtime, ::System::Int32 idx, ::System::Single deltaTime, ::NPCCrowd::NPCIDGeneratorInt* IDGen)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::NPCAbilityRuntimeData*, ::System::Int32, ::System::Single, ::NPCCrowd::NPCIDGeneratorInt*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCAIPROCESSOR_PREEXECUTEBEFOREJOBAFTERPATHFOLLOW_OFFSET))(this, runtime, idx, deltaTime, IDGen);
		}

		static ::System::Boolean TryNavmeshToPathFollow_1(::NPCCrowd::Ability::NPCAbilityRuntimeData* runtime, ::System::Int32 idx, ::NPCCrowd::Ability::NavmeshToPathFollowType changeType)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Ability::NPCAbilityRuntimeData*, ::System::Int32, ::NPCCrowd::Ability::NavmeshToPathFollowType))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCAIPROCESSOR_TRYNAVMESHTOPATHFOLLOW_1_OFFSET))(runtime, idx, changeType);
		}

		static ::System::Boolean TryNavmeshToPathFollow_2(::NPCCrowd::Ability::FNPCNavmeshFragment& navmesh, ::NPCCrowd::Ability::FNPCAIBlackboardFragment& blackboard, ::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2& pathfollow2, ::NPCCrowd::Ability::FTransformFragment transform, ::NPCCrowd::Ability::NavmeshToPathFollowType changeType)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Ability::FNPCNavmeshFragment&, ::NPCCrowd::Ability::FNPCAIBlackboardFragment&, ::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2&, ::NPCCrowd::Ability::FTransformFragment, ::NPCCrowd::Ability::NavmeshToPathFollowType))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCAIPROCESSOR_TRYNAVMESHTOPATHFOLLOW_2_OFFSET))(navmesh, blackboard, pathfollow2, transform, changeType);
		}

		static ::System::Boolean GetCrowdComponent(::System::UInt32 entityID, ::Class_3_F2DAD7F45F518868*& crowdComponent)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::Class_3_F2DAD7F45F518868*&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCAIPROCESSOR_GETCROWDCOMPONENT_OFFSET))(entityID, crowdComponent);
		}

		static ::System::Void NavmeshToPos(::NPCCrowd::Ability::NPCAbility* ability, ::UnityEngine::Vector3 pos)
		{
			return ((::System::Void(*)(::NPCCrowd::Ability::NPCAbility*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCAIPROCESSOR_NAVMESHTOPOS_OFFSET))(ability, pos);
		}

		static ::System::Void NavmeshToPos_1(::NPCCrowd::Ability::NPCAbilityRuntimeData* runtime, ::System::Int32 idx, ::UnityEngine::Vector3 pos)
		{
			return ((::System::Void(*)(::NPCCrowd::Ability::NPCAbilityRuntimeData*, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCAIPROCESSOR_NAVMESHTOPOS_1_OFFSET))(runtime, idx, pos);
		}

		static ::System::Void NavmeshToPos_2(::NPCCrowd::Ability::FNPCNavmeshFragment& navmesh, ::NPCCrowd::Ability::FNPCAIBlackboardFragment& blackboard, ::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2& pathfollow2, ::UnityEngine::Vector3 pos)
		{
			return ((::System::Void(*)(::NPCCrowd::Ability::FNPCNavmeshFragment&, ::NPCCrowd::Ability::FNPCAIBlackboardFragment&, ::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2&, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCAIPROCESSOR_NAVMESHTOPOS_2_OFFSET))(navmesh, blackboard, pathfollow2, pos);
		}

		static ::System::Void NavmeshToPos_3(::NPCCrowd::Ability::FNPCNavmeshFragment& navmesh, ::NPCCrowd::Ability::FNPCAIBlackboardFragment& blackboard, ::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2& pathfollow2, ::UnityEngine::Vector3 pos, ::UnityEngine::Vector3 extent)
		{
			return ((::System::Void(*)(::NPCCrowd::Ability::FNPCNavmeshFragment&, ::NPCCrowd::Ability::FNPCAIBlackboardFragment&, ::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2&, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCAIPROCESSOR_NAVMESHTOPOS_3_OFFSET))(navmesh, blackboard, pathfollow2, pos, extent);
		}

		static ::System::Void ChangeNavmeshToPathFollow(::NPCCrowd::Ability::NPCAbilityRuntimeData* runtime, ::System::Int32 idx)
		{
			return ((::System::Void(*)(::NPCCrowd::Ability::NPCAbilityRuntimeData*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCAIPROCESSOR_CHANGENAVMESHTOPATHFOLLOW_OFFSET))(runtime, idx);
		}

		static ::System::Void ChangeNavmeshToPathFollow_1(::NPCCrowd::Ability::FNPCNavmeshFragment& navmesh, ::NPCCrowd::Ability::FNPCAIBlackboardFragment& blackboard, ::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2& pathfollow2)
		{
			return ((::System::Void(*)(::NPCCrowd::Ability::FNPCNavmeshFragment&, ::NPCCrowd::Ability::FNPCAIBlackboardFragment&, ::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCAIPROCESSOR_CHANGENAVMESHTOPATHFOLLOW_1_OFFSET))(navmesh, blackboard, pathfollow2);
		}

		static ::System::Void SetPathFollowTargetData(::NPCCrowd::Ability::FNPCAIBlackboardFragment& blackboard, ::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2& pathfollow2)
		{
			return ((::System::Void(*)(::NPCCrowd::Ability::FNPCAIBlackboardFragment&, ::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCAIPROCESSOR_SETPATHFOLLOWTARGETDATA_OFFSET))(blackboard, pathfollow2);
		}

		static ::System::Void StopNavmesh(::NPCCrowd::Ability::FNPCNavmeshFragment& navmesh)
		{
			return ((::System::Void(*)(::NPCCrowd::Ability::FNPCNavmeshFragment&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCAIPROCESSOR_STOPNAVMESH_OFFSET))(navmesh);
		}

		static ::System::Void SimpleMoveTo(::NPCCrowd::Ability::NPCAbilityRuntimeData* runtime, ::System::Int32 idx, ::UnityEngine::Vector3 pos)
		{
			return ((::System::Void(*)(::NPCCrowd::Ability::NPCAbilityRuntimeData*, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCAIPROCESSOR_SIMPLEMOVETO_OFFSET))(runtime, idx, pos);
		}

		static ::System::Void SimpleMoveTo_1(::NPCCrowd::Ability::FNPCNavmeshFragment& navmesh, ::NPCCrowd::Ability::FNPCAIBlackboardFragment& blackboard, ::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2& pathfollow2, ::UnityEngine::Vector3 pos)
		{
			return ((::System::Void(*)(::NPCCrowd::Ability::FNPCNavmeshFragment&, ::NPCCrowd::Ability::FNPCAIBlackboardFragment&, ::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2&, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCAIPROCESSOR_SIMPLEMOVETO_1_OFFSET))(navmesh, blackboard, pathfollow2, pos);
		}

		static ::System::Void StopSimpleMove(::NPCCrowd::Ability::FNPCNavmeshFragment& navmesh)
		{
			return ((::System::Void(*)(::NPCCrowd::Ability::FNPCNavmeshFragment&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCAIPROCESSOR_STOPSIMPLEMOVE_OFFSET))(navmesh);
		}

		static ::System::Void SetAttractorEntityReturnToWanderingData(::NPCCrowd::Ability::FNPCAIBlackboardFragment& blackboard, ::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2& pathFollow, ::System::Int32 attractorHandler)
		{
			return ((::System::Void(*)(::NPCCrowd::Ability::FNPCAIBlackboardFragment&, ::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2&, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCAIPROCESSOR_SETATTRACTORENTITYRETURNTOWANDERINGDATA_OFFSET))(blackboard, pathFollow, attractorHandler);
		}

		static ::System::Void PathFollowSetNearestData(::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2& pathFollow, ::NPCCrowd::Ability::NPCAbilityPathFollowProcessor_NearestData nearestData, ::UnityEngine::Vector3 pos)
		{
			return ((::System::Void(*)(::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2&, ::NPCCrowd::Ability::NPCAbilityPathFollowProcessor_NearestData, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCAIPROCESSOR_PATHFOLLOWSETNEARESTDATA_OFFSET))(pathFollow, nearestData, pos);
		}

		static ::System::Void ProcessPathMaskTagInJob(::System::Int32 idx, ::System::UInt32 entityID, ::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2& pathFollow, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCPathMaskTagRuntimeFragment>& runtimePathMaskTag)
		{
			return ((::System::Void(*)(::System::Int32, ::System::UInt32, ::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2&, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCPathMaskTagRuntimeFragment>&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCAIPROCESSOR_PROCESSPATHMASKTAGINJOB_OFFSET))(idx, entityID, pathFollow, runtimePathMaskTag);
		}

		static ::System::Void ProcessGameplayTagActionInJob(::System::Int32 idx, ::System::UInt32 entityID, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCGameplayTagActionRuntimeFragment>& runtimeGameplayTagAction)
		{
			return ((::System::Void(*)(::System::Int32, ::System::UInt32, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCGameplayTagActionRuntimeFragment>&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCAIPROCESSOR_PROCESSGAMEPLAYTAGACTIONINJOB_OFFSET))(idx, entityID, runtimeGameplayTagAction);
		}

		static ::System::Void ClearPathMaskTagRuntimeInJob(::System::UInt32 entityID, ::System::Collections::Generic::List_1<::NPCAvatarMeshAssetsSO_FPathGraphPointRegionTypeMaskTagConfig*>* configs, ::NPCCrowd::Ability::FNPCPathMaskTagRuntimeFragment& runtime)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Collections::Generic::List_1<::NPCAvatarMeshAssetsSO_FPathGraphPointRegionTypeMaskTagConfig*>*, ::NPCCrowd::Ability::FNPCPathMaskTagRuntimeFragment&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCAIPROCESSOR_CLEARPATHMASKTAGRUNTIMEINJOB_OFFSET))(entityID, configs, runtime);
		}

		static ::System::Void ClearGameplayTagActionRuntime(::System::UInt32 entityID, ::NPCCrowd::Ability::FNPCGameplayTagActionRuntimeFragment& runtime)
		{
			return ((::System::Void(*)(::System::UInt32, ::NPCCrowd::Ability::FNPCGameplayTagActionRuntimeFragment&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCAIPROCESSOR_CLEARGAMEPLAYTAGACTIONRUNTIME_OFFSET))(entityID, runtime);
		}

		static ::System::Void ScheduleTagChangeActionsByBits(::System::UInt32 entityID, ::System::Collections::Generic::List_1<::NPCAvatarMeshAssetsSO_FPathGraphPointRegionTypeMaskTagConfig*>* configs, ::System::UInt32 bits, ::System::Boolean add)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Collections::Generic::List_1<::NPCAvatarMeshAssetsSO_FPathGraphPointRegionTypeMaskTagConfig*>*, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCAIPROCESSOR_SCHEDULETAGCHANGEACTIONSBYBITS_OFFSET))(entityID, configs, bits, add);
		}

		static ::System::Void ScheduleTagChangeAction(::System::UInt32 entityID, ::Foundation::Unreal::FGameplayTagContainer& runtimeTagContainer, ::System::Boolean add, ::NPCCrowd::AI::EAIActionTagHandlerSource source)
		{
			return ((::System::Void(*)(::System::UInt32, ::Foundation::Unreal::FGameplayTagContainer&, ::System::Boolean, ::NPCCrowd::AI::EAIActionTagHandlerSource))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCAIPROCESSOR_SCHEDULETAGCHANGEACTION_OFFSET))(entityID, runtimeTagContainer, add, source);
		}

		static ::NPCCrowd::Ability::NPCAIProcessor_GameplayTagActionState* GetOrCreateGameplayTagActionState(::System::UInt32 entityID)
		{
			return ((::NPCCrowd::Ability::NPCAIProcessor_GameplayTagActionState*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCAIPROCESSOR_GETORCREATEGAMEPLAYTAGACTIONSTATE_OFFSET))(entityID);
		}

		static ::System::Boolean TryGetPathGraphPointMaskTagConfigsForJob(::System::UInt32 entityID, ::System::Collections::Generic::List_1<::NPCAvatarMeshAssetsSO_FPathGraphPointRegionTypeMaskTagConfig*>*& configs)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::Collections::Generic::List_1<::NPCAvatarMeshAssetsSO_FPathGraphPointRegionTypeMaskTagConfig*>*&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCAIPROCESSOR_TRYGETPATHGRAPHPOINTMASKTAGCONFIGSFORJOB_OFFSET))(entityID, configs);
		}

		static ::System::Boolean TryGetGameplayTagActionConfigsForJob(::System::UInt32 entityID, ::System::Collections::Generic::List_1<::NPCAvatarMeshAssetsSO_GameplayTagActionConfig*>*& configs)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::Collections::Generic::List_1<::NPCAvatarMeshAssetsSO_GameplayTagActionConfig*>*&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCAIPROCESSOR_TRYGETGAMEPLAYTAGACTIONCONFIGSFORJOB_OFFSET))(entityID, configs);
		}

		static ::System::Void LogRuleInvalidOnce(::System::UInt32 entityID, ::System::String* message)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCAIPROCESSOR_LOGRULEINVALIDONCE_OFFSET))(entityID, message);
		}

		static ::System::Boolean TryGetConfigGameplayTag(::NPCAvatarMeshAssetsSO_FPathGraphPointRegionTypeMaskTagConfig* config, ::Foundation::Unreal::FGameplayTag& gameplayTag)
		{
			return ((::System::Boolean(*)(::NPCAvatarMeshAssetsSO_FPathGraphPointRegionTypeMaskTagConfig*, ::Foundation::Unreal::FGameplayTag&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCAIPROCESSOR_TRYGETCONFIGGAMEPLAYTAG_OFFSET))(config, gameplayTag);
		}

		static ::System::Boolean TryGetConfigTagMatchExpression(::NPCAvatarMeshAssetsSO_GameplayTagActionConfig* config, ::Foundation::Unreal::FGameplayTagQuery*& tagMatchExpression)
		{
			return ((::System::Boolean(*)(::NPCAvatarMeshAssetsSO_GameplayTagActionConfig*, ::Foundation::Unreal::FGameplayTagQuery*&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCAIPROCESSOR_TRYGETCONFIGTAGMATCHEXPRESSION_OFFSET))(config, tagMatchExpression);
		}

		static ::System::Boolean TryGetCurrentPathGraphPointMask(::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2& pathFollow, ::NPCCrowd::AI::PathGraphSplineConfig_PathGraphPointRegionTypeMask& mask, ::System::Int32& pathId, ::System::Int32& pointIndex)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2&, ::NPCCrowd::AI::PathGraphSplineConfig_PathGraphPointRegionTypeMask&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCAIPROCESSOR_TRYGETCURRENTPATHGRAPHPOINTMASK_OFFSET))(pathFollow, mask, pathId, pointIndex);
		}

		static ::System::Void CleanupInvalidTagActionHandlers(::System::UInt32 entityID, ::NPCCrowd::Ability::NPCAIProcessor_GameplayTagActionState* actionState, ::System::Collections::Generic::List_1<::NPCAvatarMeshAssetsSO_GameplayTagActionConfig*>* configs)
		{
			return ((::System::Void(*)(::System::UInt32, ::NPCCrowd::Ability::NPCAIProcessor_GameplayTagActionState*, ::System::Collections::Generic::List_1<::NPCAvatarMeshAssetsSO_GameplayTagActionConfig*>*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCAIPROCESSOR_CLEANUPINVALIDTAGACTIONHANDLERS_OFFSET))(entityID, actionState, configs);
		}

		static ::System::Void StartMaskActions(::System::UInt32 entityID, ::NPCCrowd::Ability::NPCAIProcessor_GameplayTagActionState* actionState, ::System::Int32 configIndex, ::System::Collections::Generic::List_1<::NPCCrowd::AI::AIActionRefItem*>* actions)
		{
			return ((::System::Void(*)(::System::UInt32, ::NPCCrowd::Ability::NPCAIProcessor_GameplayTagActionState*, ::System::Int32, ::System::Collections::Generic::List_1<::NPCCrowd::AI::AIActionRefItem*>*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCAIPROCESSOR_STARTMASKACTIONS_OFFSET))(entityID, actionState, configIndex, actions);
		}

		static ::System::Void StopMaskActions(::System::UInt32 entityID, ::NPCCrowd::Ability::NPCAIProcessor_GameplayTagActionState* actionState, ::System::Int32 configIndex)
		{
			return ((::System::Void(*)(::System::UInt32, ::NPCCrowd::Ability::NPCAIProcessor_GameplayTagActionState*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCAIPROCESSOR_STOPMASKACTIONS_OFFSET))(entityID, actionState, configIndex);
		}

		static ::System::Void StopAllMaskActions(::NPCCrowd::Ability::NPCAIProcessor_GameplayTagActionState* actionState)
		{
			return ((::System::Void(*)(::NPCCrowd::Ability::NPCAIProcessor_GameplayTagActionState*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCAIPROCESSOR_STOPALLMASKACTIONS_OFFSET))(actionState);
		}

		static ::System::Boolean TryGetAbilityRuntimeIndex(::System::UInt32 entityID, ::NPCCrowd::Ability::NPCAbilityRuntimeData*& runtimeData, ::System::Int32& abilityIdx)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::NPCCrowd::Ability::NPCAbilityRuntimeData*&, ::System::Int32&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCAIPROCESSOR_TRYGETABILITYRUNTIMEINDEX_OFFSET))(entityID, runtimeData, abilityIdx);
		}

		static ::System::Void ClearPathGraphPointRegionTypeMaskTags(::System::UInt32 entityID)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCAIPROCESSOR_CLEARPATHGRAPHPOINTREGIONTYPEMASKTAGS_OFFSET))(entityID);
		}

		static ::System::Void ClearPathGraphPointRegionTypeMaskActions(::System::UInt32 entityID)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCAIPROCESSOR_CLEARPATHGRAPHPOINTREGIONTYPEMASKACTIONS_OFFSET))(entityID);
		}
	};
}
