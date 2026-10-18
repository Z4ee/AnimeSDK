#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimPlayerInteractType_TypeDefinitionIndex = 43561;

	enum class FiveDimPlayerInteractType : ::System::Int32
	{
		LeverSwitch = 1,
		PressureSwitch = 2,
		Trampoline = 3,
		DashOrb = 4,
	};
}
