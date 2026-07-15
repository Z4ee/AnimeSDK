#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinBattleHudAreaType.h"
#include "unitysdk/System/Object.h"

class Class_1_B26E06FC40F846CD;

#define CLASS_1_37D504FE763BE4ED__CTOR_OFFSET UNITYSDK_OFFSET(0x18B00730)

inline static constexpr unsigned int Class_1_37D504FE763BE4ED_TypeDefinitionIndex = 75619;

class Class_1_37D504FE763BE4ED : public ::System::Object
{
public:
	::Class_1_B26E06FC40F846CD* Field_1_0; // 0x10
	::RPG::GameCore::FateRinBattleHudAreaType Field_1_1; // 0x18
	::System::Boolean Field_1_2; // 0x1C

	::System::Void _ctor(::Class_1_B26E06FC40F846CD* a1, ::RPG::GameCore::FateRinBattleHudAreaType a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B26E06FC40F846CD*, ::RPG::GameCore::FateRinBattleHudAreaType, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_37D504FE763BE4ED__CTOR_OFFSET))(this, a1, a2, a3);
	}
};
