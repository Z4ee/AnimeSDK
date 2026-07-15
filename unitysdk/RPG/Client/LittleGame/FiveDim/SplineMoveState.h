#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int SplineMoveState_TypeDefinitionIndex = 40947;

	enum class SplineMoveState : ::System::Int32
	{
		Stop = 0,
		Move = 1,
		Wait = 2,
	};
}
