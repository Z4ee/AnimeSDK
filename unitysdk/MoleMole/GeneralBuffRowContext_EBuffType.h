#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int GeneralBuffRowContext_EBuffType_TypeDefinitionIndex = 42588;

	enum class GeneralBuffRowContext_EBuffType : ::System::Int32
	{
		PairUp = 2,
		Coffee = 1,
		Ramen = 0,
	};
}
