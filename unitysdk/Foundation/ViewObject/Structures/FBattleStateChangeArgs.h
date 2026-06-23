#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/EnterBattleState.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation::ViewObject::Structures
{
	inline static constexpr unsigned int FBattleStateChangeArgs_TypeDefinitionIndex = 56014;

	struct alignas(4) FBattleStateChangeArgs
	{
		::MoleMole::Config::EnterBattleState FromState; // 0x10
		::MoleMole::Config::EnterBattleState ToState; // 0x14
	};
}
