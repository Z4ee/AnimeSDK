#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int SurfSubsystem_GameState_TypeDefinitionIndex = 79232;

	enum class SurfSubsystem_GameState : ::System::Int32
	{
		Finish = 3,
		Running = 2,
		Ready = 1,
		None = 0,
	};
}
