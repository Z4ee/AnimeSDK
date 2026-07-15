#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceBGMType_TypeDefinitionIndex = 60215;

	enum class CakeRaceBGMType : ::System::Int32
	{
		None = 0,
		UI = 1,
		GamePlayUI = 2,
		GamePlay = 3,
	};
}
