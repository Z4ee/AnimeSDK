#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int HitDirectionType_TypeDefinitionIndex = 60265;

	enum class HitDirectionType : ::System::Int32
	{
		AttackerBackDir = 10,
		None = 999,
		PatternAside = 7,
		PatternToAttackeeDir = 3,
		AttackerFromAttackeeSideDir = 13,
		PatternRightDir = 6,
		PatternLeftDir = 5,
		AttackerLeftDir = 8,
		AttackeeForwardDir = 11,
		AttackerRightDir = 9,
		AttackerForwardDir = 0,
		AttackeeBackDir = 12,
		PatternForwardDir = 2,
		AttackerToAttackeeDir = 1,
		PatternBackDir = 4,
	};
}
