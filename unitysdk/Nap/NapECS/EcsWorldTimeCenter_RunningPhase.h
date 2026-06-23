#pragma once
#include "unitysdk/unitysdk.h"

namespace Nap::NapECS
{
	inline static constexpr unsigned int EcsWorldTimeCenter_RunningPhase_TypeDefinitionIndex = 37291;

	enum class EcsWorldTimeCenter_RunningPhase : ::System::Byte
	{
		Stopped = 0x4,
		Destroyed = 0x6,
		None = 0x0,
		Paused = 0x3,
		Error = 0x5,
		Running = 0x2,
		Initialized = 0x1,
	};
}
