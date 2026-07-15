#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int HipplenLookAtType_TypeDefinitionIndex = 23690;

	enum class HipplenLookAtType : ::System::Int32
	{
		None = 0,
		Camera = 1,
		InteractProp = 2,
		AttachPoint = 3,
		Butterfly = 4,
	};
}
