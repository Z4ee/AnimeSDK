#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraPreparationState_TypeDefinitionIndex = 72995;

	enum class ChimeraPreparationState : ::System::Int32
	{
		None = 0,
		Entrance = 1,
		Goals = 2,
		GoalsToNewMembers = 3,
		NewMembers = 4,
		Arrangement = 5,
		EndlessHint = 6,
		Gallery = 7,
	};
}
