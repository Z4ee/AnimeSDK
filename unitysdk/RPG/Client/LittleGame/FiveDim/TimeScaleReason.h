#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int TimeScaleReason_TypeDefinitionIndex = 40727;

	enum class TimeScaleReason : ::System::Int32
	{
		Default = 0,
		UI = 1,
		CrystalFreeze = 2,
	};
}
