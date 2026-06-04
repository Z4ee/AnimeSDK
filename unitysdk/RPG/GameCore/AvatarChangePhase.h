#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarChangePhase_TypeDefinitionIndex = 52513;

	enum class AvatarChangePhase : ::System::Int32
	{
		Init = 0,
		Begin = 1,
		LeaveStage = 2,
		NewAvatarPrepare = 3,
		EnterStage = 4,
		Finish = 5,
	};
}
