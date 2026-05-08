#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::MiniGame::TartarusHounds
{
	inline static constexpr unsigned int HoundPlayerAddedTextureStatus_TypeDefinitionIndex = 69634;

	enum class HoundPlayerAddedTextureStatus : ::System::Int32
	{
		None = 0,
		WearWoolEnd = 3,
		Max = 4,
		WearWoolStart = 1,
		WearWoolLoop = 2,
	};
}
