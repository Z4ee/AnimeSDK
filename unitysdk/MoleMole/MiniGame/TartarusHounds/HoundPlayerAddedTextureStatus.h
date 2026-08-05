#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::MiniGame::TartarusHounds
{
	inline static constexpr unsigned int HoundPlayerAddedTextureStatus_TypeDefinitionIndex = 80205;

	enum class HoundPlayerAddedTextureStatus : ::System::Int32
	{
		Max = 4,
		None = 0,
		WearWoolLoop = 2,
		WearWoolEnd = 3,
		WearWoolStart = 1,
	};
}
