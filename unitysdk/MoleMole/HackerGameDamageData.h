#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class ChessEntity; }
namespace MoleMole { class HackerGameBaseDamage; }

namespace MoleMole
{
	inline static constexpr unsigned int HackerGameDamageData_TypeDefinitionIndex = 60969;

	struct alignas(8) HackerGameDamageData
	{
		::MoleMole::ChessEntity* Source; // 0x10
		::MoleMole::ChessEntity* Target; // 0x18
		::MoleMole::HackerGameBaseDamage* Damage; // 0x20
		::MoleMole::HollowChessboard::HollowCell Position; // 0x28
	};
}
