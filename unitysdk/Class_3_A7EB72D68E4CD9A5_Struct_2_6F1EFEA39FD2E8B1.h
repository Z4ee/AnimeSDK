#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_3_A7EB72D68E4CD9A5_STRUCT_2_6F1EFEA39FD2E8B1__CTOR_OFFSET UNITYSDK_OFFSET(0x3B183D0)

inline static constexpr unsigned int Class_3_A7EB72D68E4CD9A5_Struct_2_6F1EFEA39FD2E8B1_TypeDefinitionIndex = 58640;

struct alignas(8) Class_3_A7EB72D68E4CD9A5_Struct_2_6F1EFEA39FD2E8B1
{
	::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x10
	::System::Single IDKONBFPBLH; // 0x18
	::System::Single HJLCCAJJIPH; // 0x1C

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_A7EB72D68E4CD9A5_STRUCT_2_6F1EFEA39FD2E8B1__CTOR_OFFSET))(this, a1, a2, a3);
	}
};
