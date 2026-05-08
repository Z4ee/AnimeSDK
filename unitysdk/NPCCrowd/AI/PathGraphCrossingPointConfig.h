#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/PathGraphCrossingPointConfig_NodeInfo.h"
#include "unitysdk/NPCCrowd/AI/PathGraphCrossingPointConfig_StopMode.h"
#include "unitysdk/NPCCrowd/AI/PathGraphFeaturePointConfig.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_AI_PATHGRAPHCROSSINGPOINTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xCE46180)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphCrossingPointConfig_TypeDefinitionIndex = 69846;

	class PathGraphCrossingPointConfig : public ::NPCCrowd::AI::PathGraphFeaturePointConfig
	{
	public:
		::NPCCrowd::AI::PathGraphCrossingPointConfig_StopMode stopMode; // 0x48
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* stopNodePositionList; // 0x50
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* startNodePositionList; // 0x58
		::System::Collections::Generic::List_1<::NPCCrowd::AI::PathGraphCrossingPointConfig_NodeInfo>* stopSplineNodeInfoList; // 0x60
		::System::Collections::Generic::List_1<::NPCCrowd::AI::PathGraphCrossingPointConfig_NodeInfo>* startSplineNodeInfoList; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHCROSSINGPOINTCONFIG__CTOR_OFFSET))(this);
		}
	};
}
