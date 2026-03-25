#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int SurfaceType_TypeDefinitionIndex = 22620;

	enum class SurfaceType : ::System::Int32
	{
		Concrete = 0,
		Metal = 1,
		Sand = 2,
		Water = 3,
		Wood = 4,
		Snow = 5,
		Dirt = 6,
		Rock = 7,
		Marble = 8,
		Carpet = 9,
		Hollow = 10,
		Energy = 11,
		Mud = 12,
		Grass = 13,
		Old_wood = 15,
		Coral = 14,
		Bridge_wood = 16,
		Cloud = 17,
		SuiGarden_LightBridge = 18,
		GravityWalk = 19,
		Rubber = 20,
		RainbowBridge = 21,
		Conductor = 22,
		Grape = 23,
	};
}
