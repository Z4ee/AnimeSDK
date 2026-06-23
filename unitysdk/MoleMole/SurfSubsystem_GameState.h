#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int SurfSubsystem_GameState_TypeDefinitionIndex = 53152;

	enum class SurfSubsystem_GameState : ::System::Int32
	{
		None = 0,
		Finish = 3,
		Running = 2,
		Ready = 1,
	};
}
