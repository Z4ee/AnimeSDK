#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatPredicateConfig.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEALLEVEN_METHOD_4_803C741CB95AEFC5_OFFSET UNITYSDK_OFFSET(0x196AB3A0)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEALLEVEN_METHOD_4_C64246978AA202BD_OFFSET UNITYSDK_OFFSET(0x196AE910)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEALLEVEN__CTOR_OFFSET UNITYSDK_OFFSET(0x196AB350)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatPredicateConfig_DiceAllEven_TypeDefinitionIndex = 15326;

	class DiceCombatPredicateConfig_DiceAllEven : public ::RPG::GameCore::DiceCombatPredicateConfig
	{
	public:
		::RPG::GameCore::DiceCombatTarget Target; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEALLEVEN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_C64246978AA202BD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_DiceAllEven*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_DiceAllEven*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEALLEVEN_METHOD_4_C64246978AA202BD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_803C741CB95AEFC5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_DiceAllEven* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_DiceAllEven*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEALLEVEN_METHOD_4_803C741CB95AEFC5_OFFSET))(a1, a2);
		}
	};
}
