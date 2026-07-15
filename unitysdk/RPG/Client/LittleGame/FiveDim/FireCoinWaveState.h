#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FireCoinWaveState_TypeDefinitionIndex = 72989;

	enum class FireCoinWaveState : ::System::Int32
	{
		AfterFireWait = 0,
		BeforeFireWait = 1,
		Fire = 2,
	};
}
