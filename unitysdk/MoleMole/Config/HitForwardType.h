#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int HitForwardType_TypeDefinitionIndex = 75207;

	enum class HitForwardType : ::System::Int32
	{
		Push = 0,
		Pull = 1,
	};
}
