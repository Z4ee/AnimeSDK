#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int DashInterruptOrbPhase_TypeDefinitionIndex = 41798;

	enum class DashInterruptOrbPhase : ::System::Int32
	{
		None = 0,
		HitDashOrb = 1,
		Interrupted = 2,
		Done = 3,
	};
}
