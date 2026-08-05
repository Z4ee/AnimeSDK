#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int BaseMoveType_TypeDefinitionIndex = 50249;

	enum class BaseMoveType : ::System::Int32
	{
		Away = 1,
		Aside = 2,
		Around = 3,
		Follow = 0,
	};
}
