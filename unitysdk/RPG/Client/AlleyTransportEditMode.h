#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int AlleyTransportEditMode_TypeDefinitionIndex = 59525;

	enum class AlleyTransportEditMode : ::System::Int32
	{
		None = 0,
		Preview = 1,
		Draw = 2,
		Erase = 3,
	};
}
