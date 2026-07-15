#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2SeparationType_TypeDefinitionIndex = 35210;

	enum class B2SeparationType : ::System::Int32
	{
		b2_pointsType = 0,
		b2_faceAType = 1,
		b2_faceBType = 2,
	};
}
