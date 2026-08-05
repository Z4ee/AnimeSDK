#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int InteractPosType_TypeDefinitionIndex = 48008;

	enum class InteractPosType : ::System::Int32
	{
		Near = 1,
		None = 0,
	};
}
