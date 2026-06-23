#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::MiniGame::TartarusHounds
{
	inline static constexpr unsigned int HoundPlayerAddedTextureStatus_TypeDefinitionIndex = 79600;

	enum class HoundPlayerAddedTextureStatus : ::System::Int32
	{
		WearWoolLoop = 2,
		None = 0,
		Max = 4,
		WearWoolStart = 1,
		WearWoolEnd = 3,
	};
}
