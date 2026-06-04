#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ProducerKind_TypeDefinitionIndex = 58135;

	enum class ProducerKind : ::System::Int32
	{
		SystemDefault = 0,
		SourceDist = 1,
		ForceOverride = 2,
	};
}
