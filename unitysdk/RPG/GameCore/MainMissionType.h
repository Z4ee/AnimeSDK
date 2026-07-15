#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MainMissionType_TypeDefinitionIndex = 13609;

	enum class MainMissionType : ::System::Int32
	{
		None = 0,
		Main = 1,
		Branch = 2,
		Daily = 3,
		Rogue = 4,
		Raid = 5,
		Companion = 6,
		Gap = 7,
	};
}
