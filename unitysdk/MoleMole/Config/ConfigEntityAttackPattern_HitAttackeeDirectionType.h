#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityAttackPattern_HitAttackeeDirectionType_TypeDefinitionIndex = 59118;

	enum class ConfigEntityAttackPattern_HitAttackeeDirectionType : ::System::Byte
	{
		PatternToAttackeeDir = 0x1,
		AttackerToAttackeeDir = 0x3,
		AttackerForwardDir = 0x0,
		PatternForwardDir = 0x2,
	};
}
