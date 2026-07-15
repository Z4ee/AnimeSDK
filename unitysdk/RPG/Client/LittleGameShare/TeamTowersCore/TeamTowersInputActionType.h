#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGameShare::TeamTowersCore
{
	inline static constexpr unsigned int TeamTowersInputActionType_TypeDefinitionIndex = 35563;

	enum class TeamTowersInputActionType : ::System::Int32
	{
		None = 0,
		Left = 1,
		Right = 2,
		Rotate = 3,
		Backup = 4,
		Down = 5,
	};
}
