#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int PhysicsRigidBodyType_TypeDefinitionIndex = 18133;

	enum class PhysicsRigidBodyType : ::System::Int32
	{
		None = 0,
		Static = 1,
		Dynamic = 2,
		Kinematic = 3,
	};
}
