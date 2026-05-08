#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int RelayAttackType_TypeDefinitionIndex = 46888;

	enum class RelayAttackType : ::System::Int32
	{
		Normal = 1,
		ExQTE = 3,
		QTE = 2,
		None = 0,
	};
}
