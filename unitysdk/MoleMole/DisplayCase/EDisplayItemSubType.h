#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::DisplayCase
{
	inline static constexpr unsigned int EDisplayItemSubType_TypeDefinitionIndex = 77474;

	enum class EDisplayItemSubType : ::System::Int32
	{
		None = 0,
		Weapon = 2,
		Panel = 50,
		Story = 1,
		Fashioned = 4,
		Limited = 3,
		Others = 99,
	};
}
