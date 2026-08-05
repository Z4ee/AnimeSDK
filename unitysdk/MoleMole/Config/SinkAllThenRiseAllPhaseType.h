#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int SinkAllThenRiseAllPhaseType_TypeDefinitionIndex = 51996;

	enum class SinkAllThenRiseAllPhaseType : ::System::Int32
	{
		Sink = 1,
		Rise = 2,
		SinkAndRise = 0,
	};
}
