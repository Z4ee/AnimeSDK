#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/PathGraphNodeRuntime.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_3.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NPCCrowd::AI { class PathGraphSplineConfig; }
namespace NPCCrowd::AI { class PathGraphSplineNodeRuntime_BlockState; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_AI_PATHGRAPHSPLINENODERUNTIME_CLEAR_OFFSET UNITYSDK_OFFSET(0xE0051E0)
#define NPCCROWD_AI_PATHGRAPHSPLINENODERUNTIME_GETAFTERVERTICALSEGMENT_OFFSET UNITYSDK_OFFSET(0xE007090)
#define NPCCROWD_AI_PATHGRAPHSPLINENODERUNTIME_GETCONTROLPOINTPOS_OFFSET UNITYSDK_OFFSET(0xE006110)
#define NPCCROWD_AI_PATHGRAPHSPLINENODERUNTIME_GETDIRECTIONBYPOSITION_OFFSET UNITYSDK_OFFSET(0xE0074B0)
#define NPCCROWD_AI_PATHGRAPHSPLINENODERUNTIME_GETLANECENTEROFFSET_OFFSET UNITYSDK_OFFSET(0xE005EA0)
#define NPCCROWD_AI_PATHGRAPHSPLINENODERUNTIME_GETLANEPOSITION_1_OFFSET UNITYSDK_OFFSET(0xE005B80)
#define NPCCROWD_AI_PATHGRAPHSPLINENODERUNTIME_GETLANEPOSITION_OFFSET UNITYSDK_OFFSET(0xE005A60)
#define NPCCROWD_AI_PATHGRAPHSPLINENODERUNTIME_GETMAXCOUNT_OFFSET UNITYSDK_OFFSET(0xE005230)
#define NPCCROWD_AI_PATHGRAPHSPLINENODERUNTIME_GETMAXLANEINNEROFFSET_OFFSET UNITYSDK_OFFSET(0xE005940)
#define NPCCROWD_AI_PATHGRAPHSPLINENODERUNTIME_GETNEXTCONNECTORNODEID_OFFSET UNITYSDK_OFFSET(0xE0054F0)
#define NPCCROWD_AI_PATHGRAPHSPLINENODERUNTIME_GETOTHERINVERSELANE_OFFSET UNITYSDK_OFFSET(0xE007DD0)
#define NPCCROWD_AI_PATHGRAPHSPLINENODERUNTIME_GETPATHDESIREDSPEED_OFFSET UNITYSDK_OFFSET(0xE005060)
#define NPCCROWD_AI_PATHGRAPHSPLINENODERUNTIME_GETPATHDISTANCEBYPOINTINDEX_OFFSET UNITYSDK_OFFSET(0xE007BB0)
#define NPCCROWD_AI_PATHGRAPHSPLINENODERUNTIME_GETPOINTROTATION_1_OFFSET UNITYSDK_OFFSET(0xE006490)
#define NPCCROWD_AI_PATHGRAPHSPLINENODERUNTIME_GETPOINTROTATION_OFFSET UNITYSDK_OFFSET(0xE0062D0)
#define NPCCROWD_AI_PATHGRAPHSPLINENODERUNTIME_GETPOINTSLOPETYPE_OFFSET UNITYSDK_OFFSET(0xE006F10)
#define NPCCROWD_AI_PATHGRAPHSPLINENODERUNTIME_GETPOINTSTAIRTRANSITIONDISTANCE_OFFSET UNITYSDK_OFFSET(0xE006BB0)
#define NPCCROWD_AI_PATHGRAPHSPLINENODERUNTIME_GETPOINTSTAIRTYPE_OFFSET UNITYSDK_OFFSET(0xE006820)
#define NPCCROWD_AI_PATHGRAPHSPLINENODERUNTIME_GETPOINTUPAXIS_OFFSET UNITYSDK_OFFSET(0xE0066C0)
#define NPCCROWD_AI_PATHGRAPHSPLINENODERUNTIME_GETRANDOMLANEINDEX_OFFSET UNITYSDK_OFFSET(0xE0055C0)
#define NPCCROWD_AI_PATHGRAPHSPLINENODERUNTIME_GETRANDOMLANEINNEROFFSET2D_OFFSET UNITYSDK_OFFSET(0xE005840)
#define NPCCROWD_AI_PATHGRAPHSPLINENODERUNTIME_GETRANDOMLANEINNEROFFSET_OFFSET UNITYSDK_OFFSET(0xE0056B0)
#define NPCCROWD_AI_PATHGRAPHSPLINENODERUNTIME_GETSLOPEANGLECOSINE_OFFSET UNITYSDK_OFFSET(0xE007220)
#define NPCCROWD_AI_PATHGRAPHSPLINENODERUNTIME_GETTANGENT_1_OFFSET UNITYSDK_OFFSET(0xE0079B0)
#define NPCCROWD_AI_PATHGRAPHSPLINENODERUNTIME_GETTANGENT_OFFSET UNITYSDK_OFFSET(0xE0076E0)
#define NPCCROWD_AI_PATHGRAPHSPLINENODERUNTIME_GETVERTICALDIRECTION_OFFSET UNITYSDK_OFFSET(0xE0069D0)
#define NPCCROWD_AI_PATHGRAPHSPLINENODERUNTIME_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xE0047F0)
#define NPCCROWD_AI_PATHGRAPHSPLINENODERUNTIME_GET_CONTROLPOINTCOUNT_OFFSET UNITYSDK_OFFSET(0xE005130)
#define NPCCROWD_AI_PATHGRAPHSPLINENODERUNTIME_GET_HEURISTICPOSITION_OFFSET UNITYSDK_OFFSET(0xE005370)
#define NPCCROWD_AI_PATHGRAPHSPLINENODERUNTIME_INIT_OFFSET UNITYSDK_OFFSET(0xE005160)
#define NPCCROWD_AI_PATHGRAPHSPLINENODERUNTIME__CTOR_OFFSET UNITYSDK_OFFSET(0xE004110)
#define NPCCROWD_AI_PATHGRAPHSPLINENODERUNTIME___BASE_CLEAR_OFFSET UNITYSDK_OFFSET(0xE008360)
#define NPCCROWD_AI_PATHGRAPHSPLINENODERUNTIME___BASE_GET_HEURISTICPOSITION_OFFSET UNITYSDK_OFFSET(0xE0083A0)
#define NPCCROWD_AI_PATHGRAPHSPLINENODERUNTIME___BASE_INIT_OFFSET UNITYSDK_OFFSET(0xE0083C0)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphSplineNodeRuntime_TypeDefinitionIndex = 83279;

	class PathGraphSplineNodeRuntime : public ::NPCCrowd::AI::PathGraphNodeRuntime
	{
	public:
		::NPCCrowd::AI::PathGraphSplineNodeRuntime_BlockState* BlockForward; // 0x20
		::System::Collections::Generic::List_1<::System::Int32>* cache; // 0x28
		::NPCCrowd::AI::PathGraphSplineNodeRuntime_BlockState* BlockBackward; // 0x30
		::System::Int32 overrideMaxCount; // 0x38
		::System::Boolean OverrideUpAxis; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPLINENODERUNTIME__CTOR_OFFSET))(this);
		}

		::NPCCrowd::AI::PathGraphSplineConfig* get_Config()
		{
			return ((::NPCCrowd::AI::PathGraphSplineConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPLINENODERUNTIME_GET_CONFIG_OFFSET))(this);
		}

		::System::Single GetPathDesiredSpeed(::System::Single defaultSpeed)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPLINENODERUNTIME_GETPATHDESIREDSPEED_OFFSET))(this, defaultSpeed);
		}

		::System::Int32 get_ControlPointCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPLINENODERUNTIME_GET_CONTROLPOINTCOUNT_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPLINENODERUNTIME_INIT_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPLINENODERUNTIME_CLEAR_OFFSET))(this);
		}

		::System::Int32 GetMaxCount(::System::Int32 laneIdx)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPLINENODERUNTIME_GETMAXCOUNT_OFFSET))(this, laneIdx);
		}

		::UnityEngine::Vector3 get_HeuristicPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPLINENODERUNTIME_GET_HEURISTICPOSITION_OFFSET))(this);
		}

		::System::Int32 GetNextConnectorNodeID(::System::Boolean isSameDirection)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPLINENODERUNTIME_GETNEXTCONNECTORNODEID_OFFSET))(this, isSameDirection);
		}

		::System::Int32 GetRandomLaneIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPLINENODERUNTIME_GETRANDOMLANEINDEX_OFFSET))(this);
		}

		::System::Single GetRandomLaneInnerOffset(::System::Int32 laneIndex)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPLINENODERUNTIME_GETRANDOMLANEINNEROFFSET_OFFSET))(this, laneIndex);
		}

		::System::Int32 GetRandomLaneInnerOffset2D(::System::Int32 laneIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPLINENODERUNTIME_GETRANDOMLANEINNEROFFSET2D_OFFSET))(this, laneIndex);
		}

		::System::Single GetMaxLaneInnerOffset(::System::Int32 laneIndex)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPLINENODERUNTIME_GETMAXLANEINNEROFFSET_OFFSET))(this, laneIndex);
		}

		::UnityEngine::Vector3 GetLanePosition(::System::Int32 pointIndex, ::System::Int32 laneIndex, ::System::Single laneInnerOffset, ::System::Int32 laneInnerOffset2DIdx)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPLINENODERUNTIME_GETLANEPOSITION_OFFSET))(this, pointIndex, laneIndex, laneInnerOffset, laneInnerOffset2DIdx);
		}

		static ::UnityEngine::Vector3 GetLanePosition_1(::NPCCrowd::AI::PathGraphSplineConfig* splineConfig, ::System::Int32 pointIndex, ::System::Int32 laneIndex, ::System::Single laneInnerOffset, ::System::Int32 laneInnerOffset2DIdx)
		{
			return ((::UnityEngine::Vector3(*)(::NPCCrowd::AI::PathGraphSplineConfig*, ::System::Int32, ::System::Int32, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPLINENODERUNTIME_GETLANEPOSITION_1_OFFSET))(splineConfig, pointIndex, laneIndex, laneInnerOffset, laneInnerOffset2DIdx);
		}

		::UnityEngine::Vector3 GetControlPointPos(::System::Int32 pointIndex)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPLINENODERUNTIME_GETCONTROLPOINTPOS_OFFSET))(this, pointIndex);
		}

		static ::System::Single GetLaneCenterOffset(::NPCCrowd::AI::PathGraphSplineConfig* splineConfig, ::System::Int32 laneIndex)
		{
			return ((::System::Single(*)(::NPCCrowd::AI::PathGraphSplineConfig*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPLINENODERUNTIME_GETLANECENTEROFFSET_OFFSET))(splineConfig, laneIndex);
		}

		::UnityEngine::Quaternion GetPointRotation(::System::Int32 pointIndex, ::System::Boolean isSameDirection)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPLINENODERUNTIME_GETPOINTROTATION_OFFSET))(this, pointIndex, isSameDirection);
		}

		::UnityEngine::Quaternion GetPointRotation_1(::System::Int32 pointIndex, ::UnityEngine::Vector3 refPos)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPLINENODERUNTIME_GETPOINTROTATION_1_OFFSET))(this, pointIndex, refPos);
		}

		::UnityEngine::Vector3 GetPointUpAxis(::System::Int32 pointIndex)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPLINENODERUNTIME_GETPOINTUPAXIS_OFFSET))(this, pointIndex);
		}

		::System::ValueTuple_3<::System::Int32, ::System::Boolean, ::System::Boolean> GetPointStairType(::System::Boolean onStair, ::System::Boolean onStairTransition, ::System::Int32 pointIndex, ::System::Boolean isForward)
		{
			return ((::System::ValueTuple_3<::System::Int32, ::System::Boolean, ::System::Boolean>(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPLINENODERUNTIME_GETPOINTSTAIRTYPE_OFFSET))(this, onStair, onStairTransition, pointIndex, isForward);
		}

		::System::Single GetPointStairTransitionDistance(::System::Int32 pointIndex, ::System::Boolean isForward)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPLINENODERUNTIME_GETPOINTSTAIRTRANSITIONDISTANCE_OFFSET))(this, pointIndex, isForward);
		}

		::System::Int32 GetPointSlopeType(::System::Int32 onSlope, ::System::Int32 pointIndex, ::System::Boolean isForward)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPLINENODERUNTIME_GETPOINTSLOPETYPE_OFFSET))(this, onSlope, pointIndex, isForward);
		}

		::System::Int32 GetVerticalDirection(::System::Int32 pointIndex, ::System::Boolean isForward)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPLINENODERUNTIME_GETVERTICALDIRECTION_OFFSET))(this, pointIndex, isForward);
		}

		::System::Single GetSlopeAngleCosine(::System::Int32 pointIndex, ::System::Boolean isForward)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPLINENODERUNTIME_GETSLOPEANGLECOSINE_OFFSET))(this, pointIndex, isForward);
		}

		::System::ValueTuple_2<::System::Int32, ::System::Int32> GetAfterVerticalSegment(::System::Int32 pointIndex, ::System::Boolean isForward)
		{
			return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPLINENODERUNTIME_GETAFTERVERTICALSEGMENT_OFFSET))(this, pointIndex, isForward);
		}

		::System::Int32 GetDirectionByPosition(::UnityEngine::Vector3 position)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPLINENODERUNTIME_GETDIRECTIONBYPOSITION_OFFSET))(this, position);
		}

		::UnityEngine::Vector3 GetTangent(::System::Int32 pointIndex, ::System::Boolean isForward)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPLINENODERUNTIME_GETTANGENT_OFFSET))(this, pointIndex, isForward);
		}

		static ::UnityEngine::Vector3 GetTangent_1(::NPCCrowd::AI::PathGraphSplineConfig* splineConfig, ::System::Int32 pointIndex, ::System::Boolean isForward)
		{
			return ((::UnityEngine::Vector3(*)(::NPCCrowd::AI::PathGraphSplineConfig*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPLINENODERUNTIME_GETTANGENT_1_OFFSET))(splineConfig, pointIndex, isForward);
		}

		::System::Single GetPathDistanceByPointIndex(::System::Int32 startIndex, ::System::Int32 endIndex)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPLINENODERUNTIME_GETPATHDISTANCEBYPOINTINDEX_OFFSET))(this, startIndex, endIndex);
		}

		::System::Boolean GetOtherInverseLane(::System::Int32 laneIdx, ::System::Boolean forward, ::System::Int32& otherLaneIdx, ::System::Boolean ignoreCount)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Int32&, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPLINENODERUNTIME_GETOTHERINVERSELANE_OFFSET))(this, laneIdx, forward, otherLaneIdx, ignoreCount);
		}

		::System::Void __base_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPLINENODERUNTIME___BASE_CLEAR_OFFSET))(this);
		}

		::UnityEngine::Vector3 __base_get_HeuristicPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPLINENODERUNTIME___BASE_GET_HEURISTICPOSITION_OFFSET))(this);
		}

		::System::Void __base_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPLINENODERUNTIME___BASE_INIT_OFFSET))(this);
		}
	};
}
