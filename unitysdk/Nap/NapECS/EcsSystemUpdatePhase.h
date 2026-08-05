#pragma once
#include "unitysdk/unitysdk.h"

namespace Nap::NapECS
{
	inline static constexpr unsigned int EcsSystemUpdatePhase_TypeDefinitionIndex = 37927;

	enum class EcsSystemUpdatePhase : ::System::Byte
	{
		AnimIKPostUpdate = 0xB,
		WaitForFixedUpdateAgain = 0x9,
		Update = 0x1,
		PostLateUpdate = 0x4,
		PostParticleSystemUpdate = 0xC,
		LateUpdate = 0x2,
		LateUpdateAgain = 0x3,
		Max = 0xE,
		AfterAnimatorFixedUpdate = 0x7,
		EndOfFixedUpdate = 0xA,
		FixedUpdateAgain = 0x6,
		WaitForFixedUpdate = 0x8,
		FixedUpdate = 0x5,
		None = 0x0,
		PostSimulationUpdate = 0xD,
	};
}
