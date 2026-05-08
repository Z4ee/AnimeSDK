#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ShoesType_TypeDefinitionIndex = 76125;

	enum class ShoesType : ::System::Int32
	{
		Boots = 0,
		Sports = 3,
		Mech = 2,
		Heels = 1,
		Bear = 4,
	};
}
