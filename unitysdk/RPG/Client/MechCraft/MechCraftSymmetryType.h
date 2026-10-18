#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::MechCraft
{
	inline static constexpr unsigned int MechCraftSymmetryType_TypeDefinitionIndex = 41663;

	enum class MechCraftSymmetryType : ::System::Int32
	{
		None = 0,
		Horizontal = 1,
		Vertical = 2,
	};
}
