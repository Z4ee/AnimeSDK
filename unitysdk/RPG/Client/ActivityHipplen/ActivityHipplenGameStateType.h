#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int ActivityHipplenGameStateType_TypeDefinitionIndex = 61680;

	enum class ActivityHipplenGameStateType : ::System::Int32
	{
		None = 0,
		Arrange = 1,
		Incident = 2,
		Interact = 3,
		MiniGame = 4,
		Performance = 5,
		GetTrait = 6,
		Trial = 7,
		SettleAgenda = 8,
		SettleTrial = 9,
		Ending = 10,
	};
}
