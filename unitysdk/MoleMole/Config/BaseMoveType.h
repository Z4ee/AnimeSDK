#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int BaseMoveType_TypeDefinitionIndex = 82509;

	enum class BaseMoveType : ::System::Int32
	{
		Aside = 2,
		Around = 3,
		Away = 1,
		Follow = 0,
	};
}
