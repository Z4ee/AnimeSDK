#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2NormalType_TypeDefinitionIndex = 35175;

	enum class B2NormalType : ::System::Int32
	{
		b2_normalSkip = 0,
		b2_normalAdmit = 1,
		b2_normalSnap = 2,
	};
}
