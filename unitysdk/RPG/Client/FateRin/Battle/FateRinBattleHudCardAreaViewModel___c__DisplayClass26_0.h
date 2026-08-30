#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::FateRin::Battle { class FateRinBattleHudCardAreaViewModel; }
namespace RPG::Client::FateRin::Battle { class FateRinBattleHudCardAreaViewModel_CardAnimationEntry; }
namespace RPG::Client::FateRin::Battle { class IFateRinBattleHudHandCardViewModel; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDCARDAREAVIEWMODEL___C__DISPLAYCLASS26_0__CTOR_OFFSET UNITYSDK_OFFSET(0xCF6E0F0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDCARDAREAVIEWMODEL___C__DISPLAYCLASS26_0___RAISECARDCYCLEANIMATION_B__0_OFFSET UNITYSDK_OFFSET(0xCF73CA0)

namespace RPG::Client::FateRin::Battle
{
	inline static constexpr unsigned int FateRinBattleHudCardAreaViewModel___c__DisplayClass26_0_TypeDefinitionIndex = 79568;

	class FateRinBattleHudCardAreaViewModel___c__DisplayClass26_0 : public ::System::Object
	{
	public:
		::RPG::Client::FateRin::Battle::FateRinBattleHudCardAreaViewModel* __4__this; // 0x10
		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Battle::IFateRinBattleHudHandCardViewModel*>* affectedHandCardVMs; // 0x18
		::RPG::Client::FateRin::Battle::FateRinBattleHudCardAreaViewModel_CardAnimationEntry* entry; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDCARDAREAVIEWMODEL___C__DISPLAYCLASS26_0__CTOR_OFFSET))(this);
		}

		::System::Void __RaiseCardCycleAnimation_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDCARDAREAVIEWMODEL___C__DISPLAYCLASS26_0___RAISECARDCYCLEANIMATION_B__0_OFFSET))(this);
		}
	};
}
