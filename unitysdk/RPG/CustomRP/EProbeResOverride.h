#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::CustomRP
{
	inline static constexpr unsigned int EProbeResOverride_TypeDefinitionIndex = 36103;

	enum class EProbeResOverride : ::System::Int32
	{
		None = 0,
		Full = 1,
		Half = 2,
	};
}
