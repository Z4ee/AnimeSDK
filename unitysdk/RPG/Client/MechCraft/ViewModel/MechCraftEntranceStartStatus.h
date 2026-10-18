#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::MechCraft::ViewModel
{
	inline static constexpr unsigned int MechCraftEntranceStartStatus_TypeDefinitionIndex = 79633;

	enum class MechCraftEntranceStartStatus : ::System::Int32
	{
		Order = 0,
		Exam = 1,
		FinishAllOrder = 2,
	};
}
