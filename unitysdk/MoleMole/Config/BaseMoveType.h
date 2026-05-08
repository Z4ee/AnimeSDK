#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int BaseMoveType_TypeDefinitionIndex = 48991;

	enum class BaseMoveType : ::System::Int32
	{
		Away = 1,
		Follow = 0,
		Aside = 2,
		Around = 3,
	};
}
