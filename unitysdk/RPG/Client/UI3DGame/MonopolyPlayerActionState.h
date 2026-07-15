#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::UI3DGame
{
	inline static constexpr unsigned int MonopolyPlayerActionState_TypeDefinitionIndex = 72071;

	enum class MonopolyPlayerActionState : ::System::Int32
	{
		Ready = 0,
		Executing = 1,
		Finished = 2,
	};
}
