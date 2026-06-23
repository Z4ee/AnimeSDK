#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int HitDirectionType_TypeDefinitionIndex = 73726;

	enum class HitDirectionType : ::System::Int32
	{
		AttackeeBackDir = 12,
		AttackerToAttackeeDir = 1,
		PatternForwardDir = 2,
		None = 999,
		AttackeeForwardDir = 11,
		PatternRightDir = 6,
		PatternAside = 7,
		PatternLeftDir = 5,
		PatternToAttackeeDir = 3,
		AttackerLeftDir = 8,
		AttackerRightDir = 9,
		AttackerForwardDir = 0,
		AttackerBackDir = 10,
		PatternBackDir = 4,
		AttackerFromAttackeeSideDir = 13,
	};
}
