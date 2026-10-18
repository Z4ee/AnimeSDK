#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::MechCraft
{
	inline static constexpr unsigned int MechCraftDirectionType_TypeDefinitionIndex = 41654;

	enum class MechCraftDirectionType : ::System::Int32
	{
		None = 0,
		Above = 1,
		Below = 2,
		Left = 3,
		Right = 4,
	};
}
