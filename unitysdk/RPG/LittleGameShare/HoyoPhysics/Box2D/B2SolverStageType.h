#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2SolverStageType_TypeDefinitionIndex = 35233;

	enum class B2SolverStageType : ::System::Int32
	{
		b2_stagePrepareJoints = 0,
		b2_stagePrepareContacts = 1,
		b2_stageIntegrateVelocities = 2,
		b2_stageWarmStart = 3,
		b2_stageSolve = 4,
		b2_stageIntegratePositions = 5,
		b2_stageRelax = 6,
		b2_stageRestitution = 7,
		b2_stageStoreImpulses = 8,
	};
}
