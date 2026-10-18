#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureModifierBehaviorFlag.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_3_A7EB72D68E4CD9A5_STRUCT_2_B37C9A4A26F7C215__CTOR_OFFSET UNITYSDK_OFFSET(0x140C0)

inline static constexpr unsigned int Class_3_A7EB72D68E4CD9A5_Struct_2_B37C9A4A26F7C215_TypeDefinitionIndex = 58492;

struct alignas(8) Class_3_A7EB72D68E4CD9A5_Struct_2_B37C9A4A26F7C215
{
	::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x10
	::RPG::GameCore::AdventureModifierBehaviorFlag FNPGDNFLMPC; // 0x18

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::AdventureModifierBehaviorFlag a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AdventureModifierBehaviorFlag))((::PBYTE)hIl2Cpp + CLASS_3_A7EB72D68E4CD9A5_STRUCT_2_B37C9A4A26F7C215__CTOR_OFFSET))(this, a1, a2);
	}
};
