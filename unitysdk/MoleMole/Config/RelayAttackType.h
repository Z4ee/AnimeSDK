#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int RelayAttackType_TypeDefinitionIndex = 70321;

	enum class RelayAttackType : ::System::Int32
	{
		ExQTE = 3,
		QTE = 2,
		Normal = 1,
		None = 0,
	};
}
