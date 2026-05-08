#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/StatusEffectType.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class ChessEntity; }

namespace MoleMole
{
	inline static constexpr unsigned int HackerGamePlayerEffectTypeChangedData_TypeDefinitionIndex = 79546;

	struct alignas(8) HackerGamePlayerEffectTypeChangedData
	{
		::MoleMole::ChessEntity* ChessEntity; // 0x10
		::MoleMole::StatusEffectType EffectType; // 0x18
		::System::Boolean Value; // 0x1C
	};
}
