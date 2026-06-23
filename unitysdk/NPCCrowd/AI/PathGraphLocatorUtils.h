#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NPCCrowd::AI { class PathGraphSplineConfig; }

#define NPCCROWD_AI_PATHGRAPHLOCATORUTILS_ISSPLINEPOINTSFORWARDBYPOSITION_OFFSET UNITYSDK_OFFSET(0x1135D8A0)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphLocatorUtils_TypeDefinitionIndex = 59531;

	class PathGraphLocatorUtils : public ::System::Object
	{
	public:
		static ::System::Boolean IsSplinePointsForwardByPosition(::NPCCrowd::AI::PathGraphSplineConfig* splineConfig, ::UnityEngine::Vector3 position)
		{
			return ((::System::Boolean(*)(::NPCCrowd::AI::PathGraphSplineConfig*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHLOCATORUTILS_ISSPLINEPOINTSFORWARDBYPOSITION_OFFSET))(splineConfig, position);
		}
	};
}
