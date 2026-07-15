#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int NPCStatus_TypeDefinitionIndex = 14973;

	enum class NPCStatus : ::System::Int32
	{
		None = 0,
		Patrol = 1,
		Chase = 2,
		Guarding = 3,
		GoBack = 4,
		Attack = 5,
		WaitAttack = 6,
		FollowPlayer = 7,
		FollowByPlayer = 8,
		RunAwayPlayer = 9,
		UseMazeSkill = 10,
		PetSearch = 11,
		PetSearchFollow = 12,
		GuardAlertDevice = 13,
		Commanded = 14,
		TrackedSearch = 15,
		TrackedReach = 16,
	};
}
