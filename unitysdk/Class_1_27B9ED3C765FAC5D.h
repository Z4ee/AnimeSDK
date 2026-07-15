#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/Battle/FateRinBattleEnemyHudHideType.h"
#include "unitysdk/System/Object.h"

class Class_1_0471857D35382E2E;

#define CLASS_1_27B9ED3C765FAC5D__CTOR_OFFSET UNITYSDK_OFFSET(0x1699B8F0)

inline static constexpr unsigned int Class_1_27B9ED3C765FAC5D_TypeDefinitionIndex = 75599;

class Class_1_27B9ED3C765FAC5D : public ::System::Object
{
public:
	::Class_1_0471857D35382E2E* Field_1_0; // 0x10
	::RPG::Client::FateRin::Battle::FateRinBattleEnemyHudHideType Field_1_1; // 0x18
	::System::Boolean Field_1_2; // 0x1C

	::System::Void _ctor(::Class_1_0471857D35382E2E* a1, ::RPG::Client::FateRin::Battle::FateRinBattleEnemyHudHideType a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0471857D35382E2E*, ::RPG::Client::FateRin::Battle::FateRinBattleEnemyHudHideType, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_27B9ED3C765FAC5D__CTOR_OFFSET))(this, a1, a2, a3);
	}
};
