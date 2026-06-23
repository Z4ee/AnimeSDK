#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Level
{
	inline static constexpr unsigned int BangbooPlayTypeTemplate_TypeDefinitionIndex = 80321;

	enum class BangbooPlayTypeTemplate : ::System::Int32
	{
		NoJump = 1,
		JumpAndDive = 0,
		JumpAndDiveAndAttack = 2,
	};
}
