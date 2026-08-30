#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::ChimeraDuel
{
	inline static constexpr unsigned int ChimeraDuelLogLevel_TypeDefinitionIndex = 77088;

	enum class ChimeraDuelLogLevel : ::System::Int32
	{
		None = 0,
		Debug = 1,
		Info = 2,
		Warning = 3,
		Error = 4,
	};
}
