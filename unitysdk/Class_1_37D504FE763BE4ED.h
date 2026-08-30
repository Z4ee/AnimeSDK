#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinBattleHudAreaType.h"
#include "unitysdk/System/Object.h"

class Class_1_B26E06FC40F846CD;

#define CLASS_1_37D504FE763BE4ED__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF50E20)

inline static constexpr unsigned int Class_1_37D504FE763BE4ED_TypeDefinitionIndex = 79252;

class Class_1_37D504FE763BE4ED : public ::System::Object
{
public:
	::Class_1_B26E06FC40F846CD* HNEOOKPBCNK; // 0x10
	::System::Boolean GNDCCBNILML; // 0x18
	::RPG::GameCore::FateRinBattleHudAreaType ANKBAKDHDJD; // 0x1C

	::System::Void _ctor(::Class_1_B26E06FC40F846CD* a1, ::RPG::GameCore::FateRinBattleHudAreaType a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B26E06FC40F846CD*, ::RPG::GameCore::FateRinBattleHudAreaType, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_37D504FE763BE4ED__CTOR_OFFSET))(this, a1, a2, a3);
	}
};
