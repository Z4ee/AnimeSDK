#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HackerGameDamageData.h"
#include "unitysdk/MoleMole/StatusEffectType.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole
{
	inline static constexpr unsigned int HackerGamePlayerAttachEffectData_TypeDefinitionIndex = 38698;

	struct alignas(8) HackerGamePlayerAttachEffectData
	{
		::MoleMole::HackerGameDamageData Data; // 0x10
		::MoleMole::StatusEffectType EffectType; // 0x38
	};
}
