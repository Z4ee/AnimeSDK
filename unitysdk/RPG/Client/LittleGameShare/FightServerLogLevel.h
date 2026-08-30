#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int FightServerLogLevel_TypeDefinitionIndex = 36257;

	enum class FightServerLogLevel : ::System::Int32
	{
		None = 0,
		Debug = 1,
		Info = 2,
		Error = 3,
	};
}
