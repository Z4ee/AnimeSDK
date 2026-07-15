#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::ChenLing
{
	inline static constexpr unsigned int ChenLingSoldierTeamType_TypeDefinitionIndex = 41167;

	enum class ChenLingSoldierTeamType : ::System::Int32
	{
		Invalid = 0,
		Ally = 1,
		Enemy = 2,
	};
}
