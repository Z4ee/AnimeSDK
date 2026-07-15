#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_2C4471BA5FE34A73___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x176D7050)
#define CLASS_1_2C4471BA5FE34A73___C__DISPLAYCLASS10_0___FILLBOSSHP_B__0_OFFSET UNITYSDK_OFFSET(0x176D71D0)

inline static constexpr unsigned int Class_1_2C4471BA5FE34A73___c__DisplayClass10_0_TypeDefinitionIndex = 55038;

class Class_1_2C4471BA5FE34A73___c__DisplayClass10_0 : public ::System::Object
{
public:
	::System::UInt32 monsterId; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C4471BA5FE34A73___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __FillBossHp_b__0(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_2C4471BA5FE34A73___C__DISPLAYCLASS10_0___FILLBOSSHP_B__0_OFFSET))(this, a1);
	}
};
