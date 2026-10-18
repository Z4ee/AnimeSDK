#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MechCraftTraitType_TypeDefinitionIndex = 11970;

	enum class MechCraftTraitType : ::System::Int32
	{
		None = 0,
		Frank = 1,
		Humorous = 2,
		Gentle = 3,
		Steadfast = 4,
		Meticulous = 5,
		Calm = 6,
		Passionate = 7,
		Outgoing = 8,
		Confident = 9,
		Easygoing = 10,
	};
}
