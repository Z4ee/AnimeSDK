#pragma once
#include "unitysdk/unitysdk.h"

namespace Nap::NapECS
{
	inline static constexpr unsigned int EcsSystemUpdatePhase_TypeDefinitionIndex = 35777;

	enum class EcsSystemUpdatePhase : ::System::Byte
	{
		LateUpdate = 0x2,
		Update = 0x1,
		PostParticleSystemUpdate = 0xC,
		PostLateUpdate = 0x4,
		LateUpdateAgain = 0x3,
		FixedUpdateAgain = 0x6,
		Max = 0xE,
		PostSimulationUpdate = 0xD,
		WaitForFixedUpdate = 0x8,
		AfterAnimatorFixedUpdate = 0x7,
		FixedUpdate = 0x5,
		None = 0x0,
		AnimIKPostUpdate = 0xB,
		EndOfFixedUpdate = 0xA,
		WaitForFixedUpdateAgain = 0x9,
	};
}
