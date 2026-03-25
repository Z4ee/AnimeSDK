#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_2C4471BA5FE34A73___C__DISPLAYCLASS10_1__CTOR_OFFSET UNITYSDK_OFFSET(0x10AD1BB0)
#define CLASS_1_2C4471BA5FE34A73___C__DISPLAYCLASS10_1___FILLBOSSHP_B__1_OFFSET UNITYSDK_OFFSET(0x10AD1C90)

inline static constexpr unsigned int Class_1_2C4471BA5FE34A73___c__DisplayClass10_1_TypeDefinitionIndex = 46423;

class Class_1_2C4471BA5FE34A73___c__DisplayClass10_1 : public ::System::Object
{
public:
	::System::UInt32 tmpBossID; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C4471BA5FE34A73___C__DISPLAYCLASS10_1__CTOR_OFFSET))(this);
	}

	::System::Boolean __FillBossHp_b__1(::RPG::GameCore::GameEntity* pMonsterEntity)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_2C4471BA5FE34A73___C__DISPLAYCLASS10_1___FILLBOSSHP_B__1_OFFSET))(this, pMonsterEntity);
	}
};
