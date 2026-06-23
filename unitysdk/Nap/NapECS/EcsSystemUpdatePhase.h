#pragma once
#include "unitysdk/unitysdk.h"

namespace Nap::NapECS
{
	inline static constexpr unsigned int EcsSystemUpdatePhase_TypeDefinitionIndex = 37315;

	enum class EcsSystemUpdatePhase : ::System::Byte
	{
		AfterAnimatorFixedUpdate = 0x7,
		FixedUpdateAgain = 0x6,
		PostLateUpdate = 0x4,
		PostParticleSystemUpdate = 0xC,
		Max = 0xE,
		WaitForFixedUpdate = 0x8,
		EndOfFixedUpdate = 0xA,
		None = 0x0,
		WaitForFixedUpdateAgain = 0x9,
		Update = 0x1,
		LateUpdateAgain = 0x3,
		AnimIKPostUpdate = 0xB,
		PostSimulationUpdate = 0xD,
		FixedUpdate = 0x5,
		LateUpdate = 0x2,
	};
}
