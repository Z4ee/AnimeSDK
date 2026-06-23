#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Container/NativeHashSet_2.h"
#include "unitysdk/Foundation/Unreal/FGameplayTag.h"
#include "unitysdk/NPCCrowd/AI/PathGraphConfig_RoadGraphType.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityMoveTargetFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityMovementActionHandle.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityMovementStyleSpeedParameters.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityPathFollowFragmentV2.h"
#include "unitysdk/NPCCrowd/Ability/FTransformFragment.h"
#include "unitysdk/NPCCrowd/Ability/NPCAbilityFollowBehavioursDefine.h"
#include "unitysdk/NPCCrowd/Ability/NPCAbilityPathFollowProcessor_NearestData.h"
#include "unitysdk/NPCCrowd/Ability/NPCAbilityPathFollowProcessor_TeleportData.h"
#include "unitysdk/NPCCrowd/Ability/NPCEntityNativeData.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_CCAF4B6A77932E66;
class Class_3_F2DAD7F45F518868;
namespace NPCCrowd { class NPCIDGeneratorInt; }
namespace NPCCrowd::AI { class PathGraphConfigComponentSet; }
namespace NPCCrowd::AI { class PathGraphConnectorNodeRuntime; }
namespace NPCCrowd::AI { class PathGraphRuntime_PathFindingResult; }
namespace NPCCrowd::AI { class PathGraphSplineControlPointLocatorComponent; }
namespace NPCCrowd::AI { class PathGraphSplineNodeRuntime; }
namespace NPCCrowd::AI { class PathGraphSplineNodeRuntime_BlockState; }
namespace NPCCrowd::Ability { class NPCAbility; }
namespace NPCCrowd::Ability { class NPCAbilityParameters; }
namespace NPCCrowd::Ability { class NPCAbilityRuntimeData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_APPLYPATHSPEEDOVERRIDE_OFFSET UNITYSDK_OFFSET(0xD5B5300)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_EXECUTE_1_OFFSET UNITYSDK_OFFSET(0xD5BF900)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_EXECUTE_OFFSET UNITYSDK_OFFSET(0xD5B9520)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_EXITINTERACTSPLINE_OFFSET UNITYSDK_OFFSET(0xD5BF270)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_GETCURPATHGRAPHTYPE_OFFSET UNITYSDK_OFFSET(0xD5B9390)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_GETEXITSPLINEPOINTINDEX_OFFSET UNITYSDK_OFFSET(0xD5BE8B0)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_GETFORWARD_OFFSET UNITYSDK_OFFSET(0xD5B9110)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_GETNATIVEDATA_OFFSET UNITYSDK_OFFSET(0xD5C1BD0)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_GETNEARESTCONTROLPOINT_OFFSET UNITYSDK_OFFSET(0xD5B8400)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_GETNEARESTLANE_OFFSET UNITYSDK_OFFSET(0xD5B7D00)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_GETNEARESTPOINTINPATH_OFFSET UNITYSDK_OFFSET(0xD5B6100)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_GETNEARESTPOINT_OFFSET UNITYSDK_OFFSET(0xD5B7A00)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_GETPATHFOLLOWAIMPOS_OFFSET UNITYSDK_OFFSET(0xD5B8E10)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_GETPATHNEARESTDATA_OFFSET UNITYSDK_OFFSET(0xD5B86E0)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_GETPATHPOINTSCOUNTINCLUDELANE_OFFSET UNITYSDK_OFFSET(0xD5B71B0)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_GETPATHPOINTSINCLUDELANE_OFFSET UNITYSDK_OFFSET(0xD5B73E0)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_GETPATHPOINTS_1_OFFSET UNITYSDK_OFFSET(0xD5B6F80)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_GETPATHPOINTS_OFFSET UNITYSDK_OFFSET(0xD5B6CF0)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_GETPOSITION_OFFSET UNITYSDK_OFFSET(0xD5B9080)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_GETPREVABILITY_OFFSET UNITYSDK_OFFSET(0xD5C1540)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_GETREFPOINTRATIO_OFFSET UNITYSDK_OFFSET(0xD5B8830)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_GETSPLINEMERGETARGETPOS_OFFSET UNITYSDK_OFFSET(0xD5B8B10)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_GETSTARTPOSITION_OFFSET UNITYSDK_OFFSET(0xD5B4830)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_GETSTARTROTATION_OFFSET UNITYSDK_OFFSET(0xD5B4B50)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_GETSTARTSPLINEPOINTINDEX_OFFSET UNITYSDK_OFFSET(0xD5B5090)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_HANDLENODECHANGED_OFFSET UNITYSDK_OFFSET(0xD5B2F10)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_INITDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0xD5B5900)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_INITPATHPROCESSOR_OFFSET UNITYSDK_OFFSET(0xD5B30A0)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_ISPASSEDAIM_OFFSET UNITYSDK_OFFSET(0xD5B4FC0)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_ISPATHFOLLOWMOVING_OFFSET UNITYSDK_OFFSET(0xD5B2C10)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_ISPATHFOLLOWSTARTED_OFFSET UNITYSDK_OFFSET(0xD5B2CA0)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_NEEDFORCENOPITCH_OFFSET UNITYSDK_OFFSET(0xD5B92D0)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_ONDESTROYPROCESSOR_OFFSET UNITYSDK_OFFSET(0xD5B2D20)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_PREEXECUTEBEFOREJOB_OFFSET UNITYSDK_OFFSET(0xD5BACC0)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_PREPARESTAIRSPEEDBLEND_OFFSET UNITYSDK_OFFSET(0xD5BC290)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_SETINTERACTSPLINE_OFFSET UNITYSDK_OFFSET(0xD5BECE0)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_SETPATHFOLLOWFINDRESULT_OFFSET UNITYSDK_OFFSET(0xD5B5CD0)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_SETTAGSTATE_OFFSET UNITYSDK_OFFSET(0xD5C19B0)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_STARTSLOPESPEEDBLEND_OFFSET UNITYSDK_OFFSET(0xD5B5710)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_STARTSTAIRSPEEDBLEND_OFFSET UNITYSDK_OFFSET(0xD5BAB80)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_SYNCSPEEDCONTROLTAGS_OFFSET UNITYSDK_OFFSET(0xD5C1710)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_TELEPORTPATHFOLLOWPOINT_OFFSET UNITYSDK_OFFSET(0xD5B65A0)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_TRYEXITSPLINENODE_OFFSET UNITYSDK_OFFSET(0xD5BBE50)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_TRYFADEOUTMOVE_OFFSET UNITYSDK_OFFSET(0xD5BEA50)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_TRYGETSLOPESPEEDSCALE_OFFSET UNITYSDK_OFFSET(0xD5B57B0)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_TRYREFRESHSLOPESPEEDATSPAWNTICK_OFFSET UNITYSDK_OFFSET(0xD5B5430)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_UPDATEBEHAVIOURS_OFFSET UNITYSDK_OFFSET(0xD5BFB40)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_UPDATECOMMONBLOCK_OFFSET UNITYSDK_OFFSET(0xD5BFDB0)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_UPDATEEXITINTERACTTARGET_OFFSET UNITYSDK_OFFSET(0xD5C2CC0)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_UPDATEFIRSTABILITYINNODE_OFFSET UNITYSDK_OFFSET(0xD5C1CD0)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_UPDATEFOLLOWPREV_OFFSET UNITYSDK_OFFSET(0xD5C2070)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_UPDATEINTERACTTARGET_OFFSET UNITYSDK_OFFSET(0xD5C2760)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_UPDATENEXTLANE_OFFSET UNITYSDK_OFFSET(0xD5BE390)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_UPDATEPATHFOLLOWAIM_OFFSET UNITYSDK_OFFSET(0xD5BB670)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_UPDATEPATHFOLLOW_OFFSET UNITYSDK_OFFSET(0xD5BB0B0)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_UPDATESPEEDCONTROL_OFFSET UNITYSDK_OFFSET(0xD5C01A0)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_UPDATESPLINENODECONTROLPOINT_OFFSET UNITYSDK_OFFSET(0xD5BC440)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_UPDATESPLINENODE_OFFSET UNITYSDK_OFFSET(0xD5BCE80)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_UPDATEWAITINGBEHAVIOURS_OFFSET UNITYSDK_OFFSET(0xD5C2370)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR__CCTOR_OFFSET UNITYSDK_OFFSET(0xD5C3120)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0xD5C3110)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NPCAbilityPathFollowProcessor_TypeDefinitionIndex = 67697;

	class NPCAbilityPathFollowProcessor : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_PathBlockedStopTagString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAbilityPathFollowProcessor_TypeDefinitionIndex)->GetStaticField(0x3AF80);
		}
		static ::System::String** StaticGet_PathFollowStopTagString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAbilityPathFollowProcessor_TypeDefinitionIndex)->GetStaticField(0x3AF88);
		}
		static ::System::String** StaticGet_PathFollowStartTagString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAbilityPathFollowProcessor_TypeDefinitionIndex)->GetStaticField(0x3AF90);
		}
		static ::System::String** StaticGet_PathFollowDecelerateTagString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAbilityPathFollowProcessor_TypeDefinitionIndex)->GetStaticField(0x3AF98);
		}
		static ::System::Single* StaticGet_SlopeSpeedScale()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NPCAbilityPathFollowProcessor_TypeDefinitionIndex)->GetStaticField(0xE800);
		}
		static ::System::Single* StaticGet__upAxisInterpolationFactor()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NPCAbilityPathFollowProcessor_TypeDefinitionIndex)->GetStaticField(0xE804);
		}
		static ::System::Single* StaticGet_StairPrepareDistance()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NPCAbilityPathFollowProcessor_TypeDefinitionIndex)->GetStaticField(0xE808);
		}
		static ::System::Single* StaticGet_SpeedScale()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NPCAbilityPathFollowProcessor_TypeDefinitionIndex)->GetStaticField(0xE80C);
		}
		static ::System::Single* StaticGet_FOLLOW_SCALE()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NPCAbilityPathFollowProcessor_TypeDefinitionIndex)->GetStaticField(0xE810);
		}
		// static const ::System::Single SpeedTagEpsilon; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR__CCTOR_OFFSET))();
		}

		::System::Boolean IsPathFollowMoving(::NPCCrowd::Ability::NPCAbilityRuntimeData* runtime, ::System::Int32 idx)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Ability::NPCAbilityRuntimeData*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_ISPATHFOLLOWMOVING_OFFSET))(this, runtime, idx);
		}

		::System::Boolean IsPathFollowStarted(::NPCCrowd::Ability::NPCAbilityRuntimeData* runtime, ::System::Int32 idx)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Ability::NPCAbilityRuntimeData*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_ISPATHFOLLOWSTARTED_OFFSET))(this, runtime, idx);
		}

		::System::Void OnDestroyProcessor(::NPCCrowd::Ability::NPCAbilityRuntimeData* runtime, ::System::Int32 idx)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::NPCAbilityRuntimeData*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_ONDESTROYPROCESSOR_OFFSET))(this, runtime, idx);
		}

		::NPCCrowd::Ability::FNPCAbilityMovementActionHandle InitPathProcessor(::NPCCrowd::AI::PathGraphRuntime_PathFindingResult* pathResult, ::System::Boolean teleportToStartPosition, ::System::Int32 laneIndex, ::System::Single laneInnerOffset, ::NPCCrowd::Ability::NPCAbilityRuntimeData* runtime, ::NPCCrowd::Ability::NPCAbilityParameters* parameters, ::System::Int32 idx, ::System::Single endFadeOutTime, ::NPCCrowd::Ability::FNPCAbilityMovementStyleSpeedParameters moveParams, ::System::Single randDesiredSpeed, ::System::Int32 pathID)
		{
			return ((::NPCCrowd::Ability::FNPCAbilityMovementActionHandle(*)(::PVOID, ::NPCCrowd::AI::PathGraphRuntime_PathFindingResult*, ::System::Boolean, ::System::Int32, ::System::Single, ::NPCCrowd::Ability::NPCAbilityRuntimeData*, ::NPCCrowd::Ability::NPCAbilityParameters*, ::System::Int32, ::System::Single, ::NPCCrowd::Ability::FNPCAbilityMovementStyleSpeedParameters, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_INITPATHPROCESSOR_OFFSET))(this, pathResult, teleportToStartPosition, laneIndex, laneInnerOffset, runtime, parameters, idx, endFadeOutTime, moveParams, randDesiredSpeed, pathID);
		}

		static ::System::Boolean TryRefreshSlopeSpeedAtSpawnTick(::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2& pathFollow)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_TRYREFRESHSLOPESPEEDATSPAWNTICK_OFFSET))(pathFollow);
		}

		static ::System::Boolean TryGetSlopeSpeedScale(::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2& pathFollow, ::System::Single& speedScale)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2&, ::System::Single&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_TRYGETSLOPESPEEDSCALE_OFFSET))(pathFollow, speedScale);
		}

		::System::Void InitDefaultData(::NPCCrowd::Ability::NPCAbilityRuntimeData* runtime, ::NPCCrowd::Ability::NPCAbilityParameters* parameters, ::System::Int32 idx, ::System::Single endFadeOutTime, ::NPCCrowd::Ability::FNPCAbilityMovementStyleSpeedParameters moveParams, ::System::Single randDesiredSpeed)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::NPCAbilityRuntimeData*, ::NPCCrowd::Ability::NPCAbilityParameters*, ::System::Int32, ::System::Single, ::NPCCrowd::Ability::FNPCAbilityMovementStyleSpeedParameters, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_INITDEFAULTDATA_OFFSET))(this, runtime, parameters, idx, endFadeOutTime, moveParams, randDesiredSpeed);
		}

		static ::System::Void SetPathFollowFindResult(::NPCCrowd::AI::PathGraphRuntime_PathFindingResult* pathResult, ::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2& pathFollow, ::System::Boolean needBack)
		{
			return ((::System::Void(*)(::NPCCrowd::AI::PathGraphRuntime_PathFindingResult*, ::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2&, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_SETPATHFOLLOWFINDRESULT_OFFSET))(pathResult, pathFollow, needBack);
		}

		static ::UnityEngine::Vector3 GetStartPosition(::UnityEngine::Vector3 originalPosition, ::NPCCrowd::AI::PathGraphSplineNodeRuntime* splineNodeRuntime, ::NPCCrowd::AI::PathGraphConfigComponentSet* components, ::System::Boolean isForward, ::System::Int32 laneIndex, ::System::Single laneInnerOffset, ::NPCCrowd::AI::PathGraphSplineControlPointLocatorComponent* initialLocator)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::NPCCrowd::AI::PathGraphSplineNodeRuntime*, ::NPCCrowd::AI::PathGraphConfigComponentSet*, ::System::Boolean, ::System::Int32, ::System::Single, ::NPCCrowd::AI::PathGraphSplineControlPointLocatorComponent*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_GETSTARTPOSITION_OFFSET))(originalPosition, splineNodeRuntime, components, isForward, laneIndex, laneInnerOffset, initialLocator);
		}

		static ::System::Void ApplyPathSpeedOverride(::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2& pathFollow, ::NPCCrowd::AI::PathGraphSplineNodeRuntime* nodeRuntime)
		{
			return ((::System::Void(*)(::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2&, ::NPCCrowd::AI::PathGraphSplineNodeRuntime*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_APPLYPATHSPEEDOVERRIDE_OFFSET))(pathFollow, nodeRuntime);
		}

		static ::UnityEngine::Quaternion GetStartRotation(::UnityEngine::Quaternion originalRotation, ::NPCCrowd::AI::PathGraphSplineNodeRuntime* splineNodeRuntime, ::NPCCrowd::AI::PathGraphConfigComponentSet* components, ::System::Boolean isForward, ::NPCCrowd::AI::PathGraphSplineControlPointLocatorComponent* initialLocator)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion, ::NPCCrowd::AI::PathGraphSplineNodeRuntime*, ::NPCCrowd::AI::PathGraphConfigComponentSet*, ::System::Boolean, ::NPCCrowd::AI::PathGraphSplineControlPointLocatorComponent*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_GETSTARTROTATION_OFFSET))(originalRotation, splineNodeRuntime, components, isForward, initialLocator);
		}

		static ::System::Boolean GetNearestPointInPath(::System::Int32 nodeId, ::UnityEngine::Vector3 source, ::NPCCrowd::Ability::NPCAbilityPathFollowProcessor_TeleportData& teleportData)
		{
			return ((::System::Boolean(*)(::System::Int32, ::UnityEngine::Vector3, ::NPCCrowd::Ability::NPCAbilityPathFollowProcessor_TeleportData&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_GETNEARESTPOINTINPATH_OFFSET))(nodeId, source, teleportData);
		}

		static ::System::Void TeleportPathFollowPoint(::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2& pathFollow, ::NPCCrowd::Ability::NPCAbilityPathFollowProcessor_TeleportData teleportData, ::Class_3_F2DAD7F45F518868* npcComp)
		{
			return ((::System::Void(*)(::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2&, ::NPCCrowd::Ability::NPCAbilityPathFollowProcessor_TeleportData, ::Class_3_F2DAD7F45F518868*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_TELEPORTPATHFOLLOWPOINT_OFFSET))(pathFollow, teleportData, npcComp);
		}

		static ::System::Void GetPathPoints(::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2 pathFollow, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& points)
		{
			return ((::System::Void(*)(::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_GETPATHPOINTS_OFFSET))(pathFollow, points);
		}

		static ::System::Void GetPathPoints_1(::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2 pathFollow, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>& points)
		{
			return ((::System::Void(*)(::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_GETPATHPOINTS_1_OFFSET))(pathFollow, points);
		}

		static ::System::Int32 GetPathPointsCountIncludeLane(::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2 pathFollow)
		{
			return ((::System::Int32(*)(::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_GETPATHPOINTSCOUNTINCLUDELANE_OFFSET))(pathFollow);
		}

		static ::System::Void GetPathPointsIncludeLane(::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2 pathFollow, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>& points)
		{
			return ((::System::Void(*)(::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_GETPATHPOINTSINCLUDELANE_OFFSET))(pathFollow, points);
		}

		static ::System::Void GetNearestPoint(::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2 pathFollow, ::UnityEngine::Vector3 source, ::NPCCrowd::Ability::NPCAbilityPathFollowProcessor_NearestData& data)
		{
			return ((::System::Void(*)(::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2, ::UnityEngine::Vector3, ::NPCCrowd::Ability::NPCAbilityPathFollowProcessor_NearestData&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_GETNEARESTPOINT_OFFSET))(pathFollow, source, data);
		}

		static ::System::Boolean GetNearestLane(::System::Int32 nodeID, ::UnityEngine::Vector3 source, ::System::Int32& laneIdx, ::System::Boolean& forward, ::System::Single& minDist, ::System::Boolean ignoreEndPoint)
		{
			return ((::System::Boolean(*)(::System::Int32, ::UnityEngine::Vector3, ::System::Int32&, ::System::Boolean&, ::System::Single&, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_GETNEARESTLANE_OFFSET))(nodeID, source, laneIdx, forward, minDist, ignoreEndPoint);
		}

		static ::System::Void GetNearestControlPoint(::UnityEngine::Vector3 source, ::System::Int32 nodeID, ::System::Int32 laneIdx, ::System::Boolean forward, ::UnityEngine::Vector3& target, ::System::Byte& controlPointIdx)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::System::Int32, ::System::Int32, ::System::Boolean, ::UnityEngine::Vector3&, ::System::Byte&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_GETNEARESTCONTROLPOINT_OFFSET))(source, nodeID, laneIdx, forward, target, controlPointIdx);
		}

		static ::System::Single GetPathNearestData(::UnityEngine::Vector3 source, ::System::Int32 nodeID, ::NPCCrowd::Ability::NPCAbilityPathFollowProcessor_NearestData& data)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::System::Int32, ::NPCCrowd::Ability::NPCAbilityPathFollowProcessor_NearestData&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_GETPATHNEARESTDATA_OFFSET))(source, nodeID, data);
		}

		static ::System::Boolean IsPassedAim(::NPCCrowd::AI::PathGraphConfigComponentSet* components)
		{
			return ((::System::Boolean(*)(::NPCCrowd::AI::PathGraphConfigComponentSet*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_ISPASSEDAIM_OFFSET))(components);
		}

		static ::System::Int32 GetStartSplinePointIndex(::NPCCrowd::AI::PathGraphSplineNodeRuntime* splineNodeRuntime, ::NPCCrowd::AI::PathGraphConfigComponentSet* components, ::System::Boolean isForward, ::NPCCrowd::AI::PathGraphSplineControlPointLocatorComponent* initialLocator)
		{
			return ((::System::Int32(*)(::NPCCrowd::AI::PathGraphSplineNodeRuntime*, ::NPCCrowd::AI::PathGraphConfigComponentSet*, ::System::Boolean, ::NPCCrowd::AI::PathGraphSplineControlPointLocatorComponent*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_GETSTARTSPLINEPOINTINDEX_OFFSET))(splineNodeRuntime, components, isForward, initialLocator);
		}

		static ::System::Single GetRefPointRatio(::NPCCrowd::AI::PathGraphSplineNodeRuntime* splineNodeRuntime, ::NPCCrowd::AI::PathGraphConfigComponentSet* components, ::System::Boolean isForward, ::System::Int32 pointIndex)
		{
			return ((::System::Single(*)(::NPCCrowd::AI::PathGraphSplineNodeRuntime*, ::NPCCrowd::AI::PathGraphConfigComponentSet*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_GETREFPOINTRATIO_OFFSET))(splineNodeRuntime, components, isForward, pointIndex);
		}

		static ::UnityEngine::Vector3 GetSplineMergeTargetPos(::NPCCrowd::AI::PathGraphSplineNodeRuntime* splineNodeRuntime, ::NPCCrowd::AI::PathGraphConfigComponentSet* components, ::System::Boolean isForward, ::System::Int32 pointIndex, ::System::Int32 laneIndex, ::System::Single laneInnerOffset, ::System::Int32 laneInnerOffset2DIdx)
		{
			return ((::UnityEngine::Vector3(*)(::NPCCrowd::AI::PathGraphSplineNodeRuntime*, ::NPCCrowd::AI::PathGraphConfigComponentSet*, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_GETSPLINEMERGETARGETPOS_OFFSET))(splineNodeRuntime, components, isForward, pointIndex, laneIndex, laneInnerOffset, laneInnerOffset2DIdx);
		}

		static ::UnityEngine::Vector3 GetPathFollowAimPos(::NPCCrowd::AI::PathGraphSplineNodeRuntime* splineNodeRuntime, ::NPCCrowd::AI::PathGraphConfigComponentSet* components, ::System::Boolean isForward, ::System::Int32 pointIndex, ::System::Int32 laneIndex, ::System::Single laneInnerOffset, ::System::Int32 laneInnerOffset2DIdx, ::System::Single refPosRatio, ::UnityEngine::Vector3 refPos)
		{
			return ((::UnityEngine::Vector3(*)(::NPCCrowd::AI::PathGraphSplineNodeRuntime*, ::NPCCrowd::AI::PathGraphConfigComponentSet*, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::Single, ::System::Int32, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_GETPATHFOLLOWAIMPOS_OFFSET))(splineNodeRuntime, components, isForward, pointIndex, laneIndex, laneInnerOffset, laneInnerOffset2DIdx, refPosRatio, refPos);
		}

		static ::UnityEngine::Vector3 GetPosition(::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2& pathFollow, ::System::Single t)
		{
			return ((::UnityEngine::Vector3(*)(::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2&, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_GETPOSITION_OFFSET))(pathFollow, t);
		}

		static ::UnityEngine::Vector3 GetForward(::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2& pathFollow, ::System::Single t)
		{
			return ((::UnityEngine::Vector3(*)(::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2&, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_GETFORWARD_OFFSET))(pathFollow, t);
		}

		static ::System::Boolean NeedForceNoPitch(::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2& pathFollow)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_NEEDFORCENOPITCH_OFFSET))(pathFollow);
		}

		static ::System::Void Execute(::System::Int32 idx, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2>& runtime_pathFollow, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilityMoveTargetFragment>& runtime_moveTarget, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FTransformFragment> runtime_transform, ::Unity::Collections::NativeArray_1<::System::UInt32> EntityIds, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::System::Int32, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2>&, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilityMoveTargetFragment>&, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FTransformFragment>, ::Unity::Collections::NativeArray_1<::System::UInt32>, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_EXECUTE_OFFSET))(idx, runtime_pathFollow, runtime_moveTarget, runtime_transform, EntityIds, deltaTime);
		}

		::System::Void PreExecuteBeforeJob(::NPCCrowd::Ability::NPCAbilityRuntimeData* runtime, ::System::Int32 idx, ::System::Single deltaTime, ::NPCCrowd::NPCIDGeneratorInt* IDGen)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::NPCAbilityRuntimeData*, ::System::Int32, ::System::Single, ::NPCCrowd::NPCIDGeneratorInt*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_PREEXECUTEBEFOREJOB_OFFSET))(this, runtime, idx, deltaTime, IDGen);
		}

		static ::System::Void UpdatePathFollow(::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2& pathFollow, ::NPCCrowd::Ability::FTransformFragment transform, ::NPCCrowd::Ability::NPCAbility* ability)
		{
			return ((::System::Void(*)(::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2&, ::NPCCrowd::Ability::FTransformFragment, ::NPCCrowd::Ability::NPCAbility*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_UPDATEPATHFOLLOW_OFFSET))(pathFollow, transform, ability);
		}

		static ::System::Void UpdatePathFollowAim(::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2& pathFollow, ::NPCCrowd::Ability::FTransformFragment transform, ::NPCCrowd::AI::PathGraphSplineNodeRuntime* nodeRuntime, ::System::UInt32 entityID)
		{
			return ((::System::Void(*)(::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2&, ::NPCCrowd::Ability::FTransformFragment, ::NPCCrowd::AI::PathGraphSplineNodeRuntime*, ::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_UPDATEPATHFOLLOWAIM_OFFSET))(pathFollow, transform, nodeRuntime, entityID);
		}

		static ::System::Void PrepareStairSpeedBlend(::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2& pathFollow, ::NPCCrowd::AI::PathGraphSplineNodeRuntime* nodeRuntime, ::System::Int32 stairType, ::System::Single slopeAngleCosine, ::System::Boolean forward)
		{
			return ((::System::Void(*)(::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2&, ::NPCCrowd::AI::PathGraphSplineNodeRuntime*, ::System::Int32, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_PREPARESTAIRSPEEDBLEND_OFFSET))(pathFollow, nodeRuntime, stairType, slopeAngleCosine, forward);
		}

		static ::System::Void StartStairSpeedBlend(::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2& pathFollow, ::System::Int32 stairType, ::System::Single slopeAngleCosine)
		{
			return ((::System::Void(*)(::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2&, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_STARTSTAIRSPEEDBLEND_OFFSET))(pathFollow, stairType, slopeAngleCosine);
		}

		static ::System::Void StartSlopeSpeedBlend(::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2& pathFollow, ::System::Int32 slopeType, ::System::Single speedScale)
		{
			return ((::System::Void(*)(::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2&, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_STARTSLOPESPEEDBLEND_OFFSET))(pathFollow, slopeType, speedScale);
		}

		static ::System::Void UpdateSplineNodeControlPoint(::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2& pathFollow, ::NPCCrowd::Ability::FTransformFragment transform, ::NPCCrowd::AI::PathGraphSplineNodeRuntime* nodeRuntime, ::NPCCrowd::AI::PathGraphConfigComponentSet* components, ::System::Boolean forward, ::System::UInt32 entityID)
		{
			return ((::System::Void(*)(::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2&, ::NPCCrowd::Ability::FTransformFragment, ::NPCCrowd::AI::PathGraphSplineNodeRuntime*, ::NPCCrowd::AI::PathGraphConfigComponentSet*, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_UPDATESPLINENODECONTROLPOINT_OFFSET))(pathFollow, transform, nodeRuntime, components, forward, entityID);
		}

		static ::System::Void UpdateSplineNode(::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2& pathFollow, ::NPCCrowd::Ability::FTransformFragment transform, ::NPCCrowd::AI::PathGraphSplineNodeRuntime* nodeRuntime, ::NPCCrowd::AI::PathGraphConnectorNodeRuntime* connectorRuntime, ::NPCCrowd::AI::PathGraphConfigComponentSet* components, ::System::UInt32 entityID)
		{
			return ((::System::Void(*)(::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2&, ::NPCCrowd::Ability::FTransformFragment, ::NPCCrowd::AI::PathGraphSplineNodeRuntime*, ::NPCCrowd::AI::PathGraphConnectorNodeRuntime*, ::NPCCrowd::AI::PathGraphConfigComponentSet*, ::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_UPDATESPLINENODE_OFFSET))(pathFollow, transform, nodeRuntime, connectorRuntime, components, entityID);
		}

		static ::System::Void UpdateNextLane(::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2& pathFollow)
		{
			return ((::System::Void(*)(::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_UPDATENEXTLANE_OFFSET))(pathFollow);
		}

		static ::System::Void TryExitSplineNode(::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2& pathFollow, ::NPCCrowd::Ability::FTransformFragment transform, ::NPCCrowd::AI::PathGraphConfigComponentSet* components)
		{
			return ((::System::Void(*)(::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2&, ::NPCCrowd::Ability::FTransformFragment, ::NPCCrowd::AI::PathGraphConfigComponentSet*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_TRYEXITSPLINENODE_OFFSET))(pathFollow, transform, components);
		}

		static ::System::Void SetInteractSpline(::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2& pathFollow, ::NPCCrowd::Ability::FTransformFragment transform, ::UnityEngine::Vector3 aimPos, ::UnityEngine::Vector3 aimForward, ::System::Boolean ignoreStop)
		{
			return ((::System::Void(*)(::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2&, ::NPCCrowd::Ability::FTransformFragment, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_SETINTERACTSPLINE_OFFSET))(pathFollow, transform, aimPos, aimForward, ignoreStop);
		}

		static ::System::Void ExitInteractSpline(::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2& pathFollow, ::NPCCrowd::AI::PathGraphSplineNodeRuntime* nodeRuntime, ::NPCCrowd::Ability::FTransformFragment trans)
		{
			return ((::System::Void(*)(::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2&, ::NPCCrowd::AI::PathGraphSplineNodeRuntime*, ::NPCCrowd::Ability::FTransformFragment))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_EXITINTERACTSPLINE_OFFSET))(pathFollow, nodeRuntime, trans);
		}

		static ::System::Void TryFadeOutMove(::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2& pathFollow, ::NPCCrowd::Ability::FTransformFragment transform)
		{
			return ((::System::Void(*)(::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2&, ::NPCCrowd::Ability::FTransformFragment))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_TRYFADEOUTMOVE_OFFSET))(pathFollow, transform);
		}

		static ::System::Int32 GetExitSplinePointIndex(::NPCCrowd::AI::PathGraphSplineNodeRuntime* splineNodeRuntime, ::NPCCrowd::AI::PathGraphConfigComponentSet* components, ::System::Boolean isForward)
		{
			return ((::System::Int32(*)(::NPCCrowd::AI::PathGraphSplineNodeRuntime*, ::NPCCrowd::AI::PathGraphConfigComponentSet*, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_GETEXITSPLINEPOINTINDEX_OFFSET))(splineNodeRuntime, components, isForward);
		}

		static ::NPCCrowd::AI::PathGraphConfig_RoadGraphType GetCurPathGraphType(::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2 pathFollow)
		{
			return ((::NPCCrowd::AI::PathGraphConfig_RoadGraphType(*)(::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_GETCURPATHGRAPHTYPE_OFFSET))(pathFollow);
		}

		::Unity::Jobs::JobHandle Execute_1(::NPCCrowd::Ability::NPCAbilityRuntimeData* runtime, ::System::Single deltaTime, ::Unity::Jobs::JobHandle dependsOn)
		{
			return ((::Unity::Jobs::JobHandle(*)(::PVOID, ::NPCCrowd::Ability::NPCAbilityRuntimeData*, ::System::Single, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_EXECUTE_1_OFFSET))(this, runtime, deltaTime, dependsOn);
		}

		static ::System::Void UpdateBehaviours(::NPCCrowd::Ability::NPCAbilityRuntimeData* runtime, ::System::Int32 idx, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::NPCCrowd::Ability::NPCAbilityRuntimeData*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_UPDATEBEHAVIOURS_OFFSET))(runtime, idx, deltaTime);
		}

		static ::System::Void UpdateCommonBlock(::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2& pathFollow)
		{
			return ((::System::Void(*)(::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_UPDATECOMMONBLOCK_OFFSET))(pathFollow);
		}

		static ::System::Void UpdateSpeedControl(::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2& pathFollow, ::System::UInt32 entityID, ::NPCCrowd::Ability::NPCAbilityFollowBehavioursDefine followDefine, ::Foundation::Container::NativeHashSet_2<::NPCCrowd::Ability::NPCEntityNativeData, ::NPCCrowd::Ability::NPCEntityNativeData> entityMap, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2&, ::System::UInt32, ::NPCCrowd::Ability::NPCAbilityFollowBehavioursDefine, ::Foundation::Container::NativeHashSet_2<::NPCCrowd::Ability::NPCEntityNativeData, ::NPCCrowd::Ability::NPCEntityNativeData>, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_UPDATESPEEDCONTROL_OFFSET))(pathFollow, entityID, followDefine, entityMap, deltaTime);
		}

		static ::System::Void SyncSpeedControlTags(::System::UInt32 entityID, ::System::Boolean wasMoving, ::System::Single previousDesiredSpeed, ::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2& pathFollow, ::Foundation::Unreal::FGameplayTag startTag, ::Foundation::Unreal::FGameplayTag decelerateTag, ::Foundation::Unreal::FGameplayTag stopTag)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Boolean, ::System::Single, ::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2&, ::Foundation::Unreal::FGameplayTag, ::Foundation::Unreal::FGameplayTag, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_SYNCSPEEDCONTROLTAGS_OFFSET))(entityID, wasMoving, previousDesiredSpeed, pathFollow, startTag, decelerateTag, stopTag);
		}

		static ::System::Void SetTagState(::Class_3_CCAF4B6A77932E66* tagComponent, ::Foundation::Unreal::FGameplayTag tag, ::System::Boolean enabled)
		{
			return ((::System::Void(*)(::Class_3_CCAF4B6A77932E66*, ::Foundation::Unreal::FGameplayTag, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_SETTAGSTATE_OFFSET))(tagComponent, tag, enabled);
		}

		static ::NPCCrowd::Ability::NPCEntityNativeData GetNativeData(::System::UInt32 entityId, ::Foundation::Container::NativeHashSet_2<::NPCCrowd::Ability::NPCEntityNativeData, ::NPCCrowd::Ability::NPCEntityNativeData> entityMap)
		{
			return ((::NPCCrowd::Ability::NPCEntityNativeData(*)(::System::UInt32, ::Foundation::Container::NativeHashSet_2<::NPCCrowd::Ability::NPCEntityNativeData, ::NPCCrowd::Ability::NPCEntityNativeData>))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_GETNATIVEDATA_OFFSET))(entityId, entityMap);
		}

		static ::System::Void HandleNodeChanged(::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2& pathFollow, ::System::UInt32 entityID)
		{
			return ((::System::Void(*)(::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2&, ::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_HANDLENODECHANGED_OFFSET))(pathFollow, entityID);
		}

		static ::System::Void GetPrevAbility(::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2 pathFollow, ::System::UInt32 entityID, ::System::UInt32& prevAbility, ::System::Boolean& curNodeHasPrev)
		{
			return ((::System::Void(*)(::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2, ::System::UInt32, ::System::UInt32&, ::System::Boolean&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_GETPREVABILITY_OFFSET))(pathFollow, entityID, prevAbility, curNodeHasPrev);
		}

		static ::System::Boolean UpdateFirstAbilityInNode(::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2& pathFollow, ::NPCCrowd::AI::PathGraphSplineNodeRuntime_BlockState* blockState, ::System::Single deltaTime, ::NPCCrowd::AI::PathGraphSplineNodeRuntime* nodeRuntime, ::NPCCrowd::Ability::NPCAbilityFollowBehavioursDefine followDefine)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2&, ::NPCCrowd::AI::PathGraphSplineNodeRuntime_BlockState*, ::System::Single, ::NPCCrowd::AI::PathGraphSplineNodeRuntime*, ::NPCCrowd::Ability::NPCAbilityFollowBehavioursDefine))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_UPDATEFIRSTABILITYINNODE_OFFSET))(pathFollow, blockState, deltaTime, nodeRuntime, followDefine);
		}

		static ::System::Void UpdateFollowPrev(::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2& pathFollow, ::NPCCrowd::Ability::NPCAbilityFollowBehavioursDefine prevFollowDefine, ::UnityEngine::Vector3 prevPosition, ::System::Single prevSpeed, ::UnityEngine::Vector3 position, ::System::Single deltaTime, ::NPCCrowd::Ability::NPCAbilityFollowBehavioursDefine followDefine)
		{
			return ((::System::Void(*)(::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2&, ::NPCCrowd::Ability::NPCAbilityFollowBehavioursDefine, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::System::Single, ::NPCCrowd::Ability::NPCAbilityFollowBehavioursDefine))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_UPDATEFOLLOWPREV_OFFSET))(pathFollow, prevFollowDefine, prevPosition, prevSpeed, position, deltaTime, followDefine);
		}

		static ::System::Void UpdateWaitingBehaviours(::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2& pathFollow, ::System::UInt32 entityID, ::NPCCrowd::Ability::FTransformFragment transform, ::NPCCrowd::Ability::FNPCAbilityMoveTargetFragment& moveTargetFragment)
		{
			return ((::System::Void(*)(::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2&, ::System::UInt32, ::NPCCrowd::Ability::FTransformFragment, ::NPCCrowd::Ability::FNPCAbilityMoveTargetFragment&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_UPDATEWAITINGBEHAVIOURS_OFFSET))(pathFollow, entityID, transform, moveTargetFragment);
		}

		static ::System::Void UpdateInteractTarget(::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2& pathFollow, ::System::UInt32 entityID, ::NPCCrowd::Ability::FTransformFragment transform, ::NPCCrowd::AI::PathGraphSplineNodeRuntime* nodeRuntime)
		{
			return ((::System::Void(*)(::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2&, ::System::UInt32, ::NPCCrowd::Ability::FTransformFragment, ::NPCCrowd::AI::PathGraphSplineNodeRuntime*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_UPDATEINTERACTTARGET_OFFSET))(pathFollow, entityID, transform, nodeRuntime);
		}

		static ::System::Void UpdateExitInteractTarget(::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2& pathFollow, ::System::UInt32 entityID, ::NPCCrowd::Ability::FNPCAbilityMoveTargetFragment& moveTargetFragment, ::NPCCrowd::Ability::FTransformFragment trans)
		{
			return ((::System::Void(*)(::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2&, ::System::UInt32, ::NPCCrowd::Ability::FNPCAbilityMoveTargetFragment&, ::NPCCrowd::Ability::FTransformFragment))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_UPDATEEXITINTERACTTARGET_OFFSET))(pathFollow, entityID, moveTargetFragment, trans);
		}
	};
}
