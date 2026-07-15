#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class Class_1_3E9A0EFA0AAE76DD;
namespace RPG::Client::FateRin::Battle { class IFateRinBattleEnemySingleSpecialMarkViewModel; }
namespace System { class String; }

#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEENEMYSPECIALMARKVIEWMODEL___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5C3450)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEENEMYSPECIALMARKVIEWMODEL___C__DISPLAYCLASS1_0___ONBATTLEENEMYSPECIALMARKSTATEMODELCHANGEMESSAGE_B__0_OFFSET UNITYSDK_OFFSET(0x1A5C3780)

namespace RPG::Client::FateRin::Battle
{
	inline static constexpr unsigned int FateRinBattleEnemySpecialMarkViewModel___c__DisplayClass1_0_TypeDefinitionIndex = 75918;

	class FateRinBattleEnemySpecialMarkViewModel___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::KeyValuePair_2<::System::String*, ::Class_1_3E9A0EFA0AAE76DD*> spMarkModel; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEENEMYSPECIALMARKVIEWMODEL___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __OnBattleEnemySpecialMarkStateModelChangeMessage_b__0(::RPG::Client::FateRin::Battle::IFateRinBattleEnemySingleSpecialMarkViewModel* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FateRin::Battle::IFateRinBattleEnemySingleSpecialMarkViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEENEMYSPECIALMARKVIEWMODEL___C__DISPLAYCLASS1_0___ONBATTLEENEMYSPECIALMARKSTATEMODELCHANGEMESSAGE_B__0_OFFSET))(this, a1);
		}
	};
}
