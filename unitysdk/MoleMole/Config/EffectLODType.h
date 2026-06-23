#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int EffectLODType_TypeDefinitionIndex = 73239;

	enum class EffectLODType : ::System::Int32
	{
		Medium = 2,
		High = 3,
		LowBefore = 4,
		Default = 0,
		Low = 1,
	};
}
