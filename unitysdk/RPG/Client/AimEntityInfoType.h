#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int AimEntityInfoType_TypeDefinitionIndex = 58201;

	enum class AimEntityInfoType : ::System::Int32
	{
		Entity = 0,
		Union = 1,
	};
}
