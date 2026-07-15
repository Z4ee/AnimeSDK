#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::Marble
{
	inline static constexpr unsigned int MarbleEventType_TypeDefinitionIndex = 40505;

	enum class MarbleEventType : ::System::Int32
	{
		None = 0,
		SpecialKill = 1,
		NormalKill = 2,
		MassDamage = 3,
	};
}
