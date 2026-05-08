#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/PathGraphFeaturePointConfig_FeaturePointType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NPCCrowd::AI { class PathGraphRef; }
namespace System { class String; }

#define NPCCROWD_AI_PATHGRAPHFEATUREPOINTCONFIG_GET_NEARESTCONNECTORNODEINDEX_OFFSET UNITYSDK_OFFSET(0x1138B570)
#define NPCCROWD_AI_PATHGRAPHFEATUREPOINTCONFIG_GET_NEARESTSPLINENODEINDEX_OFFSET UNITYSDK_OFFSET(0x1138B560)
#define NPCCROWD_AI_PATHGRAPHFEATUREPOINTCONFIG_GET_POINTINDEX_OFFSET UNITYSDK_OFFSET(0x1138B4B0)
#define NPCCROWD_AI_PATHGRAPHFEATUREPOINTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1138B450)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphFeaturePointConfig_TypeDefinitionIndex = 40784;

	class PathGraphFeaturePointConfig : public ::System::Object
	{
	public:
		::System::Int32 pointID; // 0x10
		::System::String* name; // 0x18
		::NPCCrowd::AI::PathGraphRef* graph; // 0x20
		::NPCCrowd::AI::PathGraphFeaturePointConfig_FeaturePointType type; // 0x28
		::UnityEngine::Vector3 position; // 0x2C
		::System::Int32 nearestSplineNodeID; // 0x38
		::System::Int32 nearestSplineNodePointIndex; // 0x3C
		::System::Int32 nearestConnectorNodeID; // 0x40

		::System::Void _ctor(::NPCCrowd::AI::PathGraphFeaturePointConfig_FeaturePointType type)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::AI::PathGraphFeaturePointConfig_FeaturePointType))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHFEATUREPOINTCONFIG__CTOR_OFFSET))(this, type);
		}

		::System::Int32 get_PointIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHFEATUREPOINTCONFIG_GET_POINTINDEX_OFFSET))(this);
		}

		::System::Int32 get_NearestSplineNodeIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHFEATUREPOINTCONFIG_GET_NEARESTSPLINENODEINDEX_OFFSET))(this);
		}

		::System::Int32 get_NearestConnectorNodeIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHFEATUREPOINTCONFIG_GET_NEARESTCONNECTORNODEINDEX_OFFSET))(this);
		}
	};
}
