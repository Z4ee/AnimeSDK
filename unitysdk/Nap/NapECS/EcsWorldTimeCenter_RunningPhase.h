#pragma once
#include "unitysdk/unitysdk.h"

namespace Nap::NapECS
{
	inline static constexpr unsigned int EcsWorldTimeCenter_RunningPhase_TypeDefinitionIndex = 37948;

	enum class EcsWorldTimeCenter_RunningPhase : ::System::Byte
	{
		None = 0x0,
		Paused = 0x3,
		Running = 0x2,
		Initialized = 0x1,
		Destroyed = 0x6,
		Stopped = 0x4,
		Error = 0x5,
	};
}
