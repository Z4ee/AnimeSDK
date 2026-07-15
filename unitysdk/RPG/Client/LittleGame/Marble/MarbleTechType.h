#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::Marble
{
	inline static constexpr unsigned int MarbleTechType_TypeDefinitionIndex = 40500;

	enum class MarbleTechType : ::System::Int32
	{
		None = 0,
		LevelUp = 1,
		TeamSkill = 2,
	};
}
