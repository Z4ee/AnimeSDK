#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::MechCraft
{
	inline static constexpr unsigned int MechCraftPartType_TypeDefinitionIndex = 41659;

	enum class MechCraftPartType : ::System::Int32
	{
		None = 0,
		Leg = 1,
		Body = 2,
		Head = 3,
		Shoulder = 4,
		Item = 5,
		Left = 6,
		Right = 7,
	};
}
