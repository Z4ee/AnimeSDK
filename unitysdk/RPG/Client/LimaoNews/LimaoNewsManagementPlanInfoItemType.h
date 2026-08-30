#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsManagementPlanInfoItemType_TypeDefinitionIndex = 79103;

	enum class LimaoNewsManagementPlanInfoItemType : ::System::Int32
	{
		PlanPhase = 0,
		PlanPhaseVideo = 1,
		Text = 2,
		Line = 3,
	};
}
