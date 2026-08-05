#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigBuffMisc_DamageElementAbnormalItem_TypeDefinitionIndex = 71681;

	struct alignas(4) ConfigBuffMisc_DamageElementAbnormalItem
	{
		::MoleMole::Config::DamageElementType ElementType; // 0x10
		::System::Boolean TriggerByHeavyAttack_IsWeak; // 0x14
		::System::Boolean TriggerByCauseStun_IsWeak; // 0x15
		::System::Boolean TriggerByHeavyAttack_NonWeak; // 0x16
		::System::Boolean TriggerByCauseStun_NonWeak; // 0x17
	};
}
