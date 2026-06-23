#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int SinkAllThenRiseAllPhaseType_TypeDefinitionIndex = 58680;

	enum class SinkAllThenRiseAllPhaseType : ::System::Int32
	{
		Rise = 2,
		SinkAndRise = 0,
		Sink = 1,
	};
}
