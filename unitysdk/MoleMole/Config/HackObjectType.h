#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int HackObjectType_TypeDefinitionIndex = 46717;

	enum class HackObjectType : ::System::Int32
	{
		None = 99,
		NPC = 0,
		Gadget = 2,
		Monster = 1,
		Camera = 3,
		UAV = 4,
		LittleRobot = 5,
	};
}
