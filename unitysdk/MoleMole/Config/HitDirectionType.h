#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int HitDirectionType_TypeDefinitionIndex = 71258;

	enum class HitDirectionType : ::System::Int32
	{
		PatternLeftDir = 5,
		AttackeeForwardDir = 11,
		AttackeeBackDir = 12,
		PatternRightDir = 6,
		PatternAside = 7,
		AttackerFromAttackeeSideDir = 13,
		AttackerLeftDir = 8,
		PatternToAttackeeDir = 3,
		AttackerRightDir = 9,
		AttackerToAttackeeDir = 1,
		PatternBackDir = 4,
		AttackerBackDir = 10,
		None = 999,
		PatternForwardDir = 2,
		AttackerForwardDir = 0,
	};
}
