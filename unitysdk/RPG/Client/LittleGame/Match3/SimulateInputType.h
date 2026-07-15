#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::Match3
{
	inline static constexpr unsigned int SimulateInputType_TypeDefinitionIndex = 40479;

	enum class SimulateInputType : ::System::Int32
	{
		Invalid = 0,
		Swap = 1,
		Prop = 2,
	};
}
