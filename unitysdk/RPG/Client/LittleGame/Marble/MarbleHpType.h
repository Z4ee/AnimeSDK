#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::Marble
{
	inline static constexpr unsigned int MarbleHpType_TypeDefinitionIndex = 40499;

	enum class MarbleHpType : ::System::Int32
	{
		None = 0,
		Heal = 1,
		NormalDamage = 2,
		SpineDamage = 3,
		Revive = 4,
	};
}
