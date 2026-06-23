#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityAttackPattern_HitAttackeeDirectionType_TypeDefinitionIndex = 49860;

	enum class ConfigEntityAttackPattern_HitAttackeeDirectionType : ::System::Byte
	{
		AttackerToAttackeeDir = 0x3,
		PatternToAttackeeDir = 0x1,
		PatternForwardDir = 0x2,
		AttackerForwardDir = 0x0,
	};
}
