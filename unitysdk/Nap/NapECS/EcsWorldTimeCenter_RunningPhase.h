#pragma once
#include "unitysdk/unitysdk.h"

namespace Nap::NapECS
{
	inline static constexpr unsigned int EcsWorldTimeCenter_RunningPhase_TypeDefinitionIndex = 35758;

	enum class EcsWorldTimeCenter_RunningPhase : ::System::Byte
	{
		Destroyed = 0x6,
		Initialized = 0x1,
		Error = 0x5,
		None = 0x0,
		Running = 0x2,
		Stopped = 0x4,
		Paused = 0x3,
	};
}
