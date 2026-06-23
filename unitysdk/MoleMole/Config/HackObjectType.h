#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int HackObjectType_TypeDefinitionIndex = 57003;

	enum class HackObjectType : ::System::Int32
	{
		Gadget = 2,
		Camera = 3,
		None = 99,
		UAV = 4,
		NPC = 0,
		LittleRobot = 5,
		Monster = 1,
	};
}
