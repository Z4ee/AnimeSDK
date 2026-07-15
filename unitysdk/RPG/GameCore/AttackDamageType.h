#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AttackDamageType_TypeDefinitionIndex = 10059;

	enum class AttackDamageType : ::System::Int32
	{
		Unknow = 0,
		Physical = 1,
		Fire = 2,
		Ice = 4,
		Thunder = 8,
		Wind = 16,
		Quantum = 32,
		Imaginary = 64,
		Heal = 128,
		AllType = 255,
	};
}
