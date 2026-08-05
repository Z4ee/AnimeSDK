#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int EffectLODType_TypeDefinitionIndex = 51211;

	enum class EffectLODType : ::System::Int32
	{
		High = 3,
		Medium = 2,
		LowBefore = 4,
		Default = 0,
		Low = 1,
	};
}
