#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int HitForwardType_TypeDefinitionIndex = 53120;

	enum class HitForwardType : ::System::Int32
	{
		Pull = 1,
		Push = 0,
	};
}
