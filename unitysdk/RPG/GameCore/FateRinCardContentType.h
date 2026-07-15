#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateRinCardContentType_TypeDefinitionIndex = 23587;

	enum class FateRinCardContentType : ::System::Int32
	{
		ConfigID = 0,
		ActiveConfigID = 1,
		SpentMana = 2,
	};
}
