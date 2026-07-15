#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGameShare::CakeRaceCore
{
	inline static constexpr unsigned int SparkleStatus_TypeDefinitionIndex = 35751;

	enum class SparkleStatus : ::System::Int32
	{
		HIDE = 0,
		WAIT_TRANSFER = 1,
		WAIT_PERFORMANCE = 2,
		FINISH_OCCUR = 3,
	};
}
