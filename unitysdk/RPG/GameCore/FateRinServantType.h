#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateRinServantType_TypeDefinitionIndex = 10527;

	enum class FateRinServantType : ::System::Int32
	{
		None = 0,
		Saber = 1,
		Archer = 2,
		Trailblazer = 3,
		Gilgamesh = 4,
	};
}
