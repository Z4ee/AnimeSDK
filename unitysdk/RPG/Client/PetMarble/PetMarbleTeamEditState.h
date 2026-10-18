#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::PetMarble
{
	inline static constexpr unsigned int PetMarbleTeamEditState_TypeDefinitionIndex = 74729;

	enum class PetMarbleTeamEditState : ::System::Int32
	{
		None = 0,
		TeamEditing = 1,
		Countdown = 2,
		EnterBattle = 3,
	};
}
