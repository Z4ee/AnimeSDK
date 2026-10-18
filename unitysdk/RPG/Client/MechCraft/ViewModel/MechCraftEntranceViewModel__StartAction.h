#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::MechCraft::ViewModel
{
	inline static constexpr unsigned int MechCraftEntranceViewModel__StartAction_TypeDefinitionIndex = 79635;

	enum class MechCraftEntranceViewModel__StartAction : ::System::Int32
	{
		GoToBlockingTask = 0,
		GoToExam = 1,
		GoToOrderSelect = 2,
	};
}
