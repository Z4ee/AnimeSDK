#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::MechCraft::ViewModel
{
	inline static constexpr unsigned int MechCraftSettleStage_TypeDefinitionIndex = 79723;

	enum class MechCraftSettleStage : ::System::Int32
	{
		Earnings = 0,
		Goal = 1,
		Exam = 2,
	};
}
