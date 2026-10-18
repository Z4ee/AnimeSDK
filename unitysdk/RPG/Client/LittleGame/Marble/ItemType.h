#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::Marble
{
	inline static constexpr unsigned int ItemType_TypeDefinitionIndex = 43086;

	enum class ItemType : ::System::Int32
	{
		Static = 0,
		Dynamic = 1,
		Trigger = 2,
	};
}
