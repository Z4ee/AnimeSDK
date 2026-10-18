#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::MechCraft::Application
{
	inline static constexpr unsigned int MechCraftGameSessionState_TypeDefinitionIndex = 80228;

	enum class MechCraftGameSessionState : ::System::Int32
	{
		Created = 0,
		Entering = 1,
		Entered = 2,
		Exiting = 3,
		Exited = 4,
		Cleared = 5,
	};
}
