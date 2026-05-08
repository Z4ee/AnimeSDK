#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/PathGraphNodeConfig.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Foundation::Unreal { class SerializableGameplayTagQuery; }
namespace NPCCrowd::AI { class PathGraphSplineConfig_PathGraphLane; }
namespace NPCCrowd::AI { class PathGraphSplineConfig_PathGraphPoint; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_AI_PATHGRAPHSPLINECONFIG_GET_NEXTCONNECTORNODEINDEX_OFFSET UNITYSDK_OFFSET(0xBDD11A0)
#define NPCCROWD_AI_PATHGRAPHSPLINECONFIG_GET_PREVCONNECTORNODEINDEX_OFFSET UNITYSDK_OFFSET(0xBDD1190)
#define NPCCROWD_AI_PATHGRAPHSPLINECONFIG_TRYSAMPLELANEPOINT_OFFSET UNITYSDK_OFFSET(0xBDD0FD0)
#define NPCCROWD_AI_PATHGRAPHSPLINECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xBDD0E80)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphSplineConfig_TypeDefinitionIndex = 78189;

	class PathGraphSplineConfig : public ::NPCCrowd::AI::PathGraphNodeConfig
	{
	public:
		::System::Collections::Generic::List_1<::NPCCrowd::AI::PathGraphSplineConfig_PathGraphLane*>* lanes; // 0x18
		::System::Collections::Generic::List_1<::NPCCrowd::AI::PathGraphSplineConfig_PathGraphPoint*>* points; // 0x20
		::System::Collections::Generic::List_1<::Il2CppArray<::UnityEngine::Vector3>*>* lanePoints; // 0x28
		::System::Int32 prevConnectorNodeID; // 0x30
		::System::Int32 nextConnectorNodeID; // 0x34
		::System::Single cost; // 0x38
		::System::Boolean isClosed; // 0x3C
		::Foundation::Unreal::SerializableGameplayTagQuery* blackTagQuery; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPLINECONFIG__CTOR_OFFSET))(this);
		}

		::System::Boolean TrySampleLanePoint(::System::Int32 laneIndex, ::System::Int32 pointIndex, ::System::Single lerp, ::UnityEngine::Vector3& result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPLINECONFIG_TRYSAMPLELANEPOINT_OFFSET))(this, laneIndex, pointIndex, lerp, result);
		}

		::System::Int32 get_PrevConnectorNodeIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPLINECONFIG_GET_PREVCONNECTORNODEINDEX_OFFSET))(this);
		}

		::System::Int32 get_NextConnectorNodeIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPLINECONFIG_GET_NEXTCONNECTORNODEINDEX_OFFSET))(this);
		}
	};
}
