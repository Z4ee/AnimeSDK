#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2Profile_TypeDefinitionIndex = 35183;

	struct alignas(4) B2Profile
	{
		::System::Single step; // 0x10
		::System::Single pairs; // 0x14
		::System::Single collide; // 0x18
		::System::Single solve; // 0x1C
		::System::Single mergeIslands; // 0x20
		::System::Single prepareStages; // 0x24
		::System::Single solveConstraints; // 0x28
		::System::Single prepareConstraints; // 0x2C
		::System::Single integrateVelocities; // 0x30
		::System::Single warmStart; // 0x34
		::System::Single solveImpulses; // 0x38
		::System::Single integratePositions; // 0x3C
		::System::Single relaxImpulses; // 0x40
		::System::Single applyRestitution; // 0x44
		::System::Single storeImpulses; // 0x48
		::System::Single splitIslands; // 0x4C
		::System::Single transforms; // 0x50
		::System::Single sensorHits; // 0x54
		::System::Single jointEvents; // 0x58
		::System::Single hitEvents; // 0x5C
		::System::Single refit; // 0x60
		::System::Single bullets; // 0x64
		::System::Single sleepIslands; // 0x68
		::System::Single sensors; // 0x6C
	};
}
