#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2SolverBlockType_TypeDefinitionIndex = 35229;

	enum class B2SolverBlockType : ::System::Int32
	{
		b2_bodyBlock = 0,
		b2_jointBlock = 1,
		b2_contactBlock = 2,
		b2_graphJointBlock = 3,
		b2_graphContactBlock = 4,
	};
}
