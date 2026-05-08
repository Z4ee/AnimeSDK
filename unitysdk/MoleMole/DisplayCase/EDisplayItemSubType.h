#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::DisplayCase
{
	inline static constexpr unsigned int EDisplayItemSubType_TypeDefinitionIndex = 53255;

	enum class EDisplayItemSubType : ::System::Int32
	{
		Weapon = 2,
		None = 0,
		Others = 99,
		Story = 1,
		Panel = 50,
		Fashioned = 4,
		Limited = 3,
	};
}
