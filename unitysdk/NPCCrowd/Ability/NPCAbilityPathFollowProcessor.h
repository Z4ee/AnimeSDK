#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Container/NativeHashSet_2.h"
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
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_EXECUTE_1_OFFSET UNITYSDK_OFFSET(0xCE548B0)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_EXECUTE_OFFSET UNITYSDK_OFFSET(0xCE4F590)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_EXITINTERACTSPLINE_OFFSET UNITYSDK_OFFSET(0xCE54230)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_GETEXITSPLINEPOINTINDEX_OFFSET UNITYSDK_OFFSET(0xCE53890)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_GETFORWARD_OFFSET UNITYSDK_OFFSET(0xCE4F490)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_GETNATIVEDATA_OFFSET UNITYSDK_OFFSET(0xCE55C00)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_GETNEARESTCONTROLPOINT_OFFSET UNITYSDK_OFFSET(0xCE4E7D0)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_GETNEARESTLANE_OFFSET UNITYSDK_OFFSET(0xCE4E0E0)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_GETNEARESTPOINTINPATH_OFFSET UNITYSDK_OFFSET(0xCE4C760)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_GETNEARESTPOINT_OFFSET UNITYSDK_OFFSET(0xCE4DDE0)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_GETPATHFOLLOWAIMPOS_OFFSET UNITYSDK_OFFSET(0xCE4F1B0)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_GETPATHNEARESTDATA_OFFSET UNITYSDK_OFFSET(0xCE4EAA0)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_GETPATHPOINTSCOUNTINCLUDELANE_OFFSET UNITYSDK_OFFSET(0xCE4D5B0)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_GETPATHPOINTSINCLUDELANE_OFFSET UNITYSDK_OFFSET(0xCE4D7E0)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_GETPATHPOINTS_1_OFFSET UNITYSDK_OFFSET(0xCE4D380)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_GETPATHPOINTS_OFFSET UNITYSDK_OFFSET(0xCE4D0F0)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_GETPOSITION_OFFSET UNITYSDK_OFFSET(0xCE4F400)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_GETPREVABILITY_OFFSET UNITYSDK_OFFSET(0xCE55A30)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_GETREFPOINTRATIO_OFFSET UNITYSDK_OFFSET(0xCE4EBF0)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_GETSPLINEMERGETARGETPOS_OFFSET UNITYSDK_OFFSET(0xCE4EED0)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_GETSTARTPOSITION_OFFSET UNITYSDK_OFFSET(0xCE4B470)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_GETSTARTROTATION_OFFSET UNITYSDK_OFFSET(0xCE4B780)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_GETSTARTSPLINEPOINTINDEX_OFFSET UNITYSDK_OFFSET(0xCE4BCC0)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_HANDLENODECHANGED_OFFSET UNITYSDK_OFFSET(0xCE49E90)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_INITDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0xCE4BF30)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_INITPATHPROCESSOR_OFFSET UNITYSDK_OFFSET(0xCE4A000)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_ISPASSEDAIM_OFFSET UNITYSDK_OFFSET(0xCE4BBF0)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_ISPATHFOLLOWMOVING_OFFSET UNITYSDK_OFFSET(0xCE49B90)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_ISPATHFOLLOWSTARTED_OFFSET UNITYSDK_OFFSET(0xCE49C20)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_ONDESTROYPROCESSOR_OFFSET UNITYSDK_OFFSET(0xCE49CA0)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_PREEXECUTEBEFOREJOB_OFFSET UNITYSDK_OFFSET(0xCE506F0)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_PREPARESTAIRSPEEDBLEND_OFFSET UNITYSDK_OFFSET(0xCE518A0)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_SETINTERACTSPLINE_OFFSET UNITYSDK_OFFSET(0xCE53CC0)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_SETPATHFOLLOWFINDRESULT_OFFSET UNITYSDK_OFFSET(0xCE4C470)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_STARTSLOPESPEEDBLEND_OFFSET UNITYSDK_OFFSET(0xCE51A50)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_STARTSTAIRSPEEDBLEND_OFFSET UNITYSDK_OFFSET(0xCE505B0)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_TELEPORTPATHFOLLOWPOINT_OFFSET UNITYSDK_OFFSET(0xCE4CBF0)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_TRYEXITSPLINENODE_OFFSET UNITYSDK_OFFSET(0xCE51460)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_TRYFADEOUTMOVE_OFFSET UNITYSDK_OFFSET(0xCE53A30)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_UPDATEBEHAVIOURS_OFFSET UNITYSDK_OFFSET(0xCE54AF0)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_UPDATECOMMONBLOCK_OFFSET UNITYSDK_OFFSET(0xCE54C70)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_UPDATEEXITINTERACTTARGET_OFFSET UNITYSDK_OFFSET(0xCE56C20)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_UPDATEFIRSTABILITYINNODE_OFFSET UNITYSDK_OFFSET(0xCE55D00)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_UPDATEFOLLOWPREV_OFFSET UNITYSDK_OFFSET(0xCE55FD0)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_UPDATEINTERACTTARGET_OFFSET UNITYSDK_OFFSET(0xCE566C0)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_UPDATENEXTLANE_OFFSET UNITYSDK_OFFSET(0xCE53370)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_UPDATEPATHFOLLOWAIM_OFFSET UNITYSDK_OFFSET(0xCE50CC0)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_UPDATEPATHFOLLOW_OFFSET UNITYSDK_OFFSET(0xCE50A30)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_UPDATESPEEDCONTROL_OFFSET UNITYSDK_OFFSET(0xCE55060)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_UPDATESPLINENODECONTROLPOINT_OFFSET UNITYSDK_OFFSET(0xCE51AE0)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_UPDATESPLINENODE_OFFSET UNITYSDK_OFFSET(0xCE520F0)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_UPDATEWAITINGBEHAVIOURS_OFFSET UNITYSDK_OFFSET(0xCE562D0)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR__CCTOR_OFFSET UNITYSDK_OFFSET(0xCE57080)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0xCE57070)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NPCAbilityPathFollowProcessor_TypeDefinitionIndex = 57251;

	class NPCAbilityPathFollowProcessor : public ::System::Object
	{
	public:
		static ::System::Single* StaticGet_SpeedScale()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NPCAbilityPathFollowProcessor_TypeDefinitionIndex)->GetStaticField(0xE130);
		}
		static ::System::Single* StaticGet_FOLLOW_SCALE()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NPCAbilityPathFollowProcessor_TypeDefinitionIndex)->GetStaticField(0xE134);
		}
		static ::System::Single* StaticGet__upAxisInterpolationFactor()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NPCAbilityPathFollowProcessor_TypeDefinitionIndex)->GetStaticField(0xE138);
		}
		static ::System::Single* StaticGet_SlopeSpeedScale()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NPCAbilityPathFollowProcessor_TypeDefinitionIndex)->GetStaticField(0xE13C);
		}
		static ::System::Single* StaticGet_StairPrepareDistance()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NPCAbilityPathFollowProcessor_TypeDefinitionIndex)->GetStaticField(0xE140);
		}

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

		static ::UnityEngine::Vector3 GetSplineMergeTargetPos(::NPCCrowd::AI::PathGraphSplineNodeRuntime* splineNodeRuntime, ::NPCCrowd::AI::PathGraphConfigComponentSet* components, ::System::Boolean isForward, ::System::Int32 pointIndex, ::System::Int32 laneIndex, ::System::Single laneInnerOffset)
		{
			return ((::UnityEngine::Vector3(*)(::NPCCrowd::AI::PathGraphSplineNodeRuntime*, ::NPCCrowd::AI::PathGraphConfigComponentSet*, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_GETSPLINEMERGETARGETPOS_OFFSET))(splineNodeRuntime, components, isForward, pointIndex, laneIndex, laneInnerOffset);
		}

		static ::UnityEngine::Vector3 GetPathFollowAimPos(::NPCCrowd::AI::PathGraphSplineNodeRuntime* splineNodeRuntime, ::NPCCrowd::AI::PathGraphConfigComponentSet* components, ::System::Boolean isForward, ::System::Int32 pointIndex, ::System::Int32 laneIndex, ::System::Single laneInnerOffset, ::System::Single refPosRatio, ::UnityEngine::Vector3 refPos)
		{
			return ((::UnityEngine::Vector3(*)(::NPCCrowd::AI::PathGraphSplineNodeRuntime*, ::NPCCrowd::AI::PathGraphConfigComponentSet*, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::Single, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_GETPATHFOLLOWAIMPOS_OFFSET))(splineNodeRuntime, components, isForward, pointIndex, laneIndex, laneInnerOffset, refPosRatio, refPos);
		}

		static ::UnityEngine::Vector3 GetPosition(::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2& pathFollow, ::System::Single t)
		{
			return ((::UnityEngine::Vector3(*)(::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2&, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_GETPOSITION_OFFSET))(pathFollow, t);
		}

		static ::UnityEngine::Vector3 GetForward(::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2& pathFollow, ::System::Single t)
		{
			return ((::UnityEngine::Vector3(*)(::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2&, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_GETFORWARD_OFFSET))(pathFollow, t);
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

		static ::System::Void SetInteractSpline(::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2& pathFollow, ::NPCCrowd::Ability::FTransformFragment transform, ::UnityEngine::Vector3 aimPos, ::UnityEngine::Vector3 aimForward)
		{
			return ((::System::Void(*)(::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2&, ::NPCCrowd::Ability::FTransformFragment, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_SETINTERACTSPLINE_OFFSET))(pathFollow, transform, aimPos, aimForward);
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
