#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Container/NativeHashSet_2.h"
#include "unitysdk/NPCCrowd/Ability/ENPCAbilityMovementAction.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAIBlackboardFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityMoveTargetFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityPathFollowFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityPathFollowFragmentV2.h"
#include "unitysdk/NPCCrowd/Ability/FNPCCPUAnimatorFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCMontageDataFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCNavmeshFragment.h"
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
namespace NPCCrowd { class NPCIDGeneratorInt; }
namespace NPCCrowd::Ability { class NPCAbility; }
namespace NPCCrowd::Ability { class NPCAbilityRuntimeData; }

#define NPCCROWD_ABILITY_NPCAIPROCESSOR_CHANGENAVMESHTOPATHFOLLOW_1_OFFSET UNITYSDK_OFFSET(0xB530830)
#define NPCCROWD_ABILITY_NPCAIPROCESSOR_CHANGENAVMESHTOPATHFOLLOW_OFFSET UNITYSDK_OFFSET(0xB532C50)
#define NPCCROWD_ABILITY_NPCAIPROCESSOR_EXECUTE_1_OFFSET UNITYSDK_OFFSET(0xB5314B0)
#define NPCCROWD_ABILITY_NPCAIPROCESSOR_EXECUTE_OFFSET UNITYSDK_OFFSET(0xB52D500)
#define NPCCROWD_ABILITY_NPCAIPROCESSOR_GETCROWDCOMPONENT_OFFSET UNITYSDK_OFFSET(0xB532440)
#define NPCCROWD_ABILITY_NPCAIPROCESSOR_GETMAXTURNINGANGLEFORHOTFIX_OFFSET UNITYSDK_OFFSET(0xB530480)
#define NPCCROWD_ABILITY_NPCAIPROCESSOR_GETMINTURNINGANGLEFORHOTFIX_OFFSET UNITYSDK_OFFSET(0xB530400)
#define NPCCROWD_ABILITY_NPCAIPROCESSOR_NAVMESHTOPOS_1_OFFSET UNITYSDK_OFFSET(0xB532760)
#define NPCCROWD_ABILITY_NPCAIPROCESSOR_NAVMESHTOPOS_2_OFFSET UNITYSDK_OFFSET(0xB5308F0)
#define NPCCROWD_ABILITY_NPCAIPROCESSOR_NAVMESHTOPOS_3_OFFSET UNITYSDK_OFFSET(0xB532AA0)
#define NPCCROWD_ABILITY_NPCAIPROCESSOR_NAVMESHTOPOS_OFFSET UNITYSDK_OFFSET(0xB532680)
#define NPCCROWD_ABILITY_NPCAIPROCESSOR_ONINIT_OFFSET UNITYSDK_OFFSET(0xB5318A0)
#define NPCCROWD_ABILITY_NPCAIPROCESSOR_PATHFOLLOWSETNEARESTDATA_OFFSET UNITYSDK_OFFSET(0xB530500)
#define NPCCROWD_ABILITY_NPCAIPROCESSOR_PREEXECUTEBEFOREJOBAFTERPATHFOLLOW_OFFSET UNITYSDK_OFFSET(0xB531D70)
#define NPCCROWD_ABILITY_NPCAIPROCESSOR_PREEXECUTEBEFOREJOB_OFFSET UNITYSDK_OFFSET(0xB5318E0)
#define NPCCROWD_ABILITY_NPCAIPROCESSOR_PROCESSMOVEACTION_OFFSET UNITYSDK_OFFSET(0xB530A80)
#define NPCCROWD_ABILITY_NPCAIPROCESSOR_SETATTRACTORENTITYRETURNTOWANDERINGDATA_OFFSET UNITYSDK_OFFSET(0xB5337A0)
#define NPCCROWD_ABILITY_NPCAIPROCESSOR_SETMOVEACTION_OFFSET UNITYSDK_OFFSET(0xB5309A0)
#define NPCCROWD_ABILITY_NPCAIPROCESSOR_SETPATHFOLLOWTARGETDATA_OFFSET UNITYSDK_OFFSET(0xB532EA0)
#define NPCCROWD_ABILITY_NPCAIPROCESSOR_SIMPLEMOVETO_1_OFFSET UNITYSDK_OFFSET(0xB533590)
#define NPCCROWD_ABILITY_NPCAIPROCESSOR_SIMPLEMOVETO_OFFSET UNITYSDK_OFFSET(0xB533300)
#define NPCCROWD_ABILITY_NPCAIPROCESSOR_STOPNAVMESH_OFFSET UNITYSDK_OFFSET(0xB5332C0)
#define NPCCROWD_ABILITY_NPCAIPROCESSOR_STOPSIMPLEMOVE_OFFSET UNITYSDK_OFFSET(0xB533700)
#define NPCCROWD_ABILITY_NPCAIPROCESSOR_TRYNAVMESHTOPATHFOLLOW_1_OFFSET UNITYSDK_OFFSET(0xB531AA0)
#define NPCCROWD_ABILITY_NPCAIPROCESSOR_TRYNAVMESHTOPATHFOLLOW_2_OFFSET UNITYSDK_OFFSET(0xB531EC0)
#define NPCCROWD_ABILITY_NPCAIPROCESSOR_TRYNAVMESHTOPATHFOLLOW_OFFSET UNITYSDK_OFFSET(0xB5319F0)
#define NPCCROWD_ABILITY_NPCAIPROCESSOR__CCTOR_OFFSET UNITYSDK_OFFSET(0xB533B00)
#define NPCCROWD_ABILITY_NPCAIPROCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0xB533AF0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NPCAIProcessor_TypeDefinitionIndex = 48068;

	class NPCAIProcessor : public ::System::Object
	{
	public:
		static ::System::Single* StaticGet_MinTurningAngleForHotFix()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NPCAIProcessor_TypeDefinitionIndex)->GetStaticField(0xE770);
		}
		static ::System::Single* StaticGet_MaxTurningAngleForHotFix()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NPCAIProcessor_TypeDefinitionIndex)->GetStaticField(0xE774);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCAIPROCESSOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCAIPROCESSOR__CCTOR_OFFSET))();
		}

		static ::System::Void Execute(::System::Int32 idx, ::Foundation::Container::NativeHashSet_2<::NPCCrowd::Ability::NPCEntityNativeData, ::NPCCrowd::Ability::NPCEntityNativeData> entityMap, ::NPCCrowd::Ability::NPCAbilityBehavioursDefine behavioursDefine, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCNavmeshFragment>& runtime_navmesh, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAIBlackboardFragment>& runtime_blackBoard, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FTransformFragment> runtime_transform, ::Unity::Collections::NativeArray_1<::System::UInt32> EntityIds, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2>& runtime_pathFollowV2, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilityPathFollowFragment>& runtime_pathFollow, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilityMoveTargetFragment>& runtime_moveTarget, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCCPUAnimatorFragment>& runtime_animatorBufferData, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCMontageDataFragment>& runtime_montageData, ::System::Single currentTime, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::System::Int32, ::Foundation::Container::NativeHashSet_2<::NPCCrowd::Ability::NPCEntityNativeData, ::NPCCrowd::Ability::NPCEntityNativeData>, ::NPCCrowd::Ability::NPCAbilityBehavioursDefine, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCNavmeshFragment>&, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAIBlackboardFragment>&, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FTransformFragment>, ::Unity::Collections::NativeArray_1<::System::UInt32>, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2>&, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilityPathFollowFragment>&, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilityMoveTargetFragment>&, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCCPUAnimatorFragment>&, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCMontageDataFragment>&, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCAIPROCESSOR_EXECUTE_OFFSET))(idx, entityMap, behavioursDefine, runtime_navmesh, runtime_blackBoard, runtime_transform, EntityIds, runtime_pathFollowV2, runtime_pathFollow, runtime_moveTarget, runtime_animatorBufferData, runtime_montageData, currentTime, deltaTime);
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

		static ::System::Boolean ProcessMoveAction(::System::UInt32 entityID, ::NPCCrowd::Ability::FNPCAbilityMoveTargetFragment& moveTarget, ::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2& pathFollow, ::NPCCrowd::Ability::FNPCNavmeshFragment& navmesh, ::NPCCrowd::Ability::FNPCCPUAnimatorFragment& animation, ::NPCCrowd::Ability::FNPCAIBlackboardFragment& blackboard, ::System::Single currentTime)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::NPCCrowd::Ability::FNPCAbilityMoveTargetFragment&, ::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2&, ::NPCCrowd::Ability::FNPCNavmeshFragment&, ::NPCCrowd::Ability::FNPCCPUAnimatorFragment&, ::NPCCrowd::Ability::FNPCAIBlackboardFragment&, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCAIPROCESSOR_PROCESSMOVEACTION_OFFSET))(entityID, moveTarget, pathFollow, navmesh, animation, blackboard, currentTime);
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
	};
}
