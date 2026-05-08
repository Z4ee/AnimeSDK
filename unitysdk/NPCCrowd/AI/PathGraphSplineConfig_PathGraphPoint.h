#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/PathGraphSplineConfig_PathGraphPointRegionType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define NPCCROWD_AI_PATHGRAPHSPLINECONFIG_PATHGRAPHPOINT_DEEPCOPY_OFFSET UNITYSDK_OFFSET(0x114F7750)
#define NPCCROWD_AI_PATHGRAPHSPLINECONFIG_PATHGRAPHPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x114F7800)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphSplineConfig_PathGraphPoint_TypeDefinitionIndex = 78194;

	class PathGraphSplineConfig_PathGraphPoint : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 position; // 0x10
		::UnityEngine::Vector3 upAxis; // 0x1C
		::UnityEngine::Vector3 forward; // 0x28
		::NPCCrowd::AI::PathGraphSplineConfig_PathGraphPointRegionType pathGraphPointRegionType; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPLINECONFIG_PATHGRAPHPOINT__CTOR_OFFSET))(this);
		}

		::NPCCrowd::AI::PathGraphSplineConfig_PathGraphPoint* DeepCopy()
		{
			return ((::NPCCrowd::AI::PathGraphSplineConfig_PathGraphPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPLINECONFIG_PATHGRAPHPOINT_DEEPCOPY_OFFSET))(this);
		}
	};
}
