#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int CrosshairType_TypeDefinitionIndex = 15901;

	enum class CrosshairType : ::System::Int32
	{
		Unknown = 0,
		Default = 1,
		Cyrene = 2,
		SilverWolf999 = 3,
		Gluttony = 4,
		HimekoNova = 5,
	};
}
