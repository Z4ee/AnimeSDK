#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::MechCraft::ViewModel
{
	inline static constexpr unsigned int MechCraftExamItemState_TypeDefinitionIndex = 79641;

	enum class MechCraftExamItemState : ::System::Int32
	{
		Unknown = 0,
		Current = 1,
		Finish = 2,
	};
}
