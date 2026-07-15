#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LoadingStratageType.h"
#include "unitysdk/RPG/GameCore/TransitionLoadingType.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client
{
	inline static constexpr unsigned int MissionModule_FinishPerformance_TypeDefinitionIndex = 63201;

	struct alignas(4) MissionModule_FinishPerformance
	{
		::System::Boolean UseSpecifiedLoading; // 0x10
		::RPG::GameCore::LoadingStratageType StratageType; // 0x14
		::RPG::GameCore::TransitionLoadingType LoadingType; // 0x18
	};
}
