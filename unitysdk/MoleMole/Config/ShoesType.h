#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ShoesType_TypeDefinitionIndex = 85419;

	enum class ShoesType : ::System::Int32
	{
		Mech = 2,
		Sports = 3,
		Bear = 4,
		Heels = 1,
		Boots = 0,
	};
}
