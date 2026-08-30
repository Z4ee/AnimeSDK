#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::FateRin::Battle { class FateRinBattleHudCardAreaViewModel; }
namespace RPG::Client::FateRin::Battle { class IFateRinBattleHudHandCardViewModel; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDCARDAREAVIEWMODEL___C__DISPLAYCLASS27_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA31900)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDCARDAREAVIEWMODEL___C__DISPLAYCLASS27_0___RAISEDIRECTANIMATION_B__0_OFFSET UNITYSDK_OFFSET(0x1CA36EF0)

namespace RPG::Client::FateRin::Battle
{
	inline static constexpr unsigned int FateRinBattleHudCardAreaViewModel___c__DisplayClass27_0_TypeDefinitionIndex = 79568;

	class FateRinBattleHudCardAreaViewModel___c__DisplayClass27_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Battle::IFateRinBattleHudHandCardViewModel*>* affectedHandCardVMs; // 0x10
		::RPG::Client::FateRin::Battle::FateRinBattleHudCardAreaViewModel* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDCARDAREAVIEWMODEL___C__DISPLAYCLASS27_0__CTOR_OFFSET))(this);
		}

		::System::Void __RaiseDirectAnimation_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDCARDAREAVIEWMODEL___C__DISPLAYCLASS27_0___RAISEDIRECTANIMATION_B__0_OFFSET))(this);
		}
	};
}
