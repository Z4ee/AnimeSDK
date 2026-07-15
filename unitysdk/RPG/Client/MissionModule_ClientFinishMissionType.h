#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int MissionModule_ClientFinishMissionType_TypeDefinitionIndex = 63197;

	enum class MissionModule_ClientFinishMissionType : ::System::Int32
	{
		ConsumeItem = 0,
		SelectConsumeItem = 1,
		PlayMessage = 2,
		FinishPerformance = 3,
		ResultValue = 4,
	};
}
