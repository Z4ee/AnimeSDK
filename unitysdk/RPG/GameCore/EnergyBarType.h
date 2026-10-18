#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int EnergyBarType_TypeDefinitionIndex = 16549;

	enum class EnergyBarType : ::System::Int32
	{
		Invalid = 0,
		Common = 1,
		Qingque = 2,
		Feixiao = 3,
		Cipher = 4,
		Archer = 5,
		Pearl = 6,
	};
}
