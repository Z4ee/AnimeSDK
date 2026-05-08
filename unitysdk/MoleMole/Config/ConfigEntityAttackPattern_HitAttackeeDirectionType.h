#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityAttackPattern_HitAttackeeDirectionType_TypeDefinitionIndex = 71088;

	enum class ConfigEntityAttackPattern_HitAttackeeDirectionType : ::System::Byte
	{
		AttackerForwardDir = 0x0,
		PatternToAttackeeDir = 0x1,
		PatternForwardDir = 0x2,
		AttackerToAttackeeDir = 0x3,
	};
}
