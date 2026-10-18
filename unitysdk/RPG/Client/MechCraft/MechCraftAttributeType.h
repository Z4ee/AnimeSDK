#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::MechCraft
{
	inline static constexpr unsigned int MechCraftAttributeType_TypeDefinitionIndex = 41642;

	enum class MechCraftAttributeType : ::System::Int32
	{
		None = 0,
		Intelligence = 1,
		Energy = 2,
		Charm = 3,
		Strength = 4,
		Speed = 5,
	};
}
