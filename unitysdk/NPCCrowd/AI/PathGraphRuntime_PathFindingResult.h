#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/PathGraphRuntime_PathFindingResult_FPathFindingResultNode.h"
#include "unitysdk/System/Object.h"

namespace NPCCrowd::AI { class PathGraphSplineControlPointLocatorComponent; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_AI_PATHGRAPHRUNTIME_PATHFINDINGRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0xFAC7040)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphRuntime_PathFindingResult_TypeDefinitionIndex = 41890;

	class PathGraphRuntime_PathFindingResult : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::NPCCrowd::AI::PathGraphRuntime_PathFindingResult_FPathFindingResultNode>* PathNodes; // 0x10
		::NPCCrowd::AI::PathGraphSplineControlPointLocatorComponent* InitialLocator; // 0x18
		::System::Int32 StartPointID; // 0x20
		::System::Int32 PathID; // 0x24
		::System::Int32 EndPointID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHRUNTIME_PATHFINDINGRESULT__CTOR_OFFSET))(this);
		}
	};
}
