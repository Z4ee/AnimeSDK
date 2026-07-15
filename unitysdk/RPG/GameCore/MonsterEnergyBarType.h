#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonsterEnergyBarType_TypeDefinitionIndex = 23899;

	enum class MonsterEnergyBarType : ::System::Int32
	{
		Normal = 0,
		BossDot = 1,
		Hulei = 2,
		FireProwler = 3,
		Theoroi = 4,
		Custom = 5,
		HitCount = 6,
	};
}
