#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::MechCraft::ViewModel
{
	inline static constexpr unsigned int MechCraftTalentPointState_TypeDefinitionIndex = 79776;

	enum class MechCraftTalentPointState : ::System::Int32
	{
		Default = 0,
		Ready = 1,
		Activated = 2,
		Locked = 3,
	};
}
