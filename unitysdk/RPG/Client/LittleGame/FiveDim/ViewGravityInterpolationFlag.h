#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int ViewGravityInterpolationFlag_TypeDefinitionIndex = 41800;

	enum class ViewGravityInterpolationFlag : ::System::Byte
	{
		None = 0x0,
		GravityLine = 0x1,
		GravityFieldRing = 0x2,
	};
}
