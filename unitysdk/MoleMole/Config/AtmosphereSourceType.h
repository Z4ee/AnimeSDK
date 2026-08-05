#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AtmosphereSourceType_TypeDefinitionIndex = 86100;

	enum class AtmosphereSourceType : ::System::Int32
	{
		None = 0,
		TimeRewind = 1,
	};
}
