#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int FiveDimEntityLodStateChangeType_TypeDefinitionIndex = 57808;

	enum class FiveDimEntityLodStateChangeType : ::System::Int32
	{
		Add = 0,
		Remove = 1,
	};
}
