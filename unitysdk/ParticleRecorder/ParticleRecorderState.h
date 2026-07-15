#pragma once
#include "unitysdk/unitysdk.h"

namespace ParticleRecorder
{
	inline static constexpr unsigned int ParticleRecorderState_TypeDefinitionIndex = 35939;

	enum class ParticleRecorderState : ::System::Int32
	{
		kStopped = 0,
		kBegin = 1,
		kLoop = 2,
		kBackwardLoop = 3,
		kBackwardEnd = 4,
	};
}
