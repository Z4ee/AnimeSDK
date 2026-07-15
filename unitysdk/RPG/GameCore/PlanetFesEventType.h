#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesEventType_TypeDefinitionIndex = 11763;

	enum class PlanetFesEventType : ::System::Int32
	{
		None = 0,
		PamCargo = 1,
		AvatarVisit = 2,
		LandGame = 3,
		LittleBonus = 4,
		MiddleBonus = 5,
		LargeBonus = 6,
	};
}
