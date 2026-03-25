#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int DeployBoardState_TypeDefinitionIndex = 18655;

	enum class DeployBoardState : ::System::Int32
	{
		Unknown = 0,
		WaitInteract = 1,
		Interacting = 2,
		EndInteract = 3,
	};
}
