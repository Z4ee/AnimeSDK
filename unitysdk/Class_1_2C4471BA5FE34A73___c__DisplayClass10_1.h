#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_2C4471BA5FE34A73___C__DISPLAYCLASS10_1__CTOR_OFFSET UNITYSDK_OFFSET(0xED92060)
#define CLASS_1_2C4471BA5FE34A73___C__DISPLAYCLASS10_1___FILLBOSSHP_B__1_OFFSET UNITYSDK_OFFSET(0xED92130)

inline static constexpr unsigned int Class_1_2C4471BA5FE34A73___c__DisplayClass10_1_TypeDefinitionIndex = 57763;

class Class_1_2C4471BA5FE34A73___c__DisplayClass10_1 : public ::System::Object
{
public:
	::System::UInt32 tmpBossID; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C4471BA5FE34A73___C__DISPLAYCLASS10_1__CTOR_OFFSET))(this);
	}

	::System::Boolean __FillBossHp_b__1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_2C4471BA5FE34A73___C__DISPLAYCLASS10_1___FILLBOSSHP_B__1_OFFSET))(this, a1);
	}
};
