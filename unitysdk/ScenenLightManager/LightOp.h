#pragma once
#include "unitysdk/unitysdk.h"

namespace ScenenLightManager
{
	inline static constexpr unsigned int LightOp_TypeDefinitionIndex = 47264;

	enum class LightOp : ::System::Int32
	{
		TurnOff = 0,
		TurnOn = 1,
		Lod = 2,
		RunTimeSet = 3,
		Action = 4,
		PVSOff = 5,
		PVSOn = 6,
		Count = 7,
	};
}
