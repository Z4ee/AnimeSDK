#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/Battle/FateRinBattleHudCardAreaViewModel_CardCycleAnimationState.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::FateRin::Battle { class FateRinBattleHudCardAreaViewModel_CardPresentationTransition; }

#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDCARDAREAVIEWMODEL_CARDANIMATIONENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5C6850)

namespace RPG::Client::FateRin::Battle
{
	inline static constexpr unsigned int FateRinBattleHudCardAreaViewModel_CardAnimationEntry_TypeDefinitionIndex = 75929;

	class FateRinBattleHudCardAreaViewModel_CardAnimationEntry : public ::System::Object
	{
	public:
		::RPG::Client::FateRin::Battle::FateRinBattleHudCardAreaViewModel_CardPresentationTransition* Transition; // 0x10
		::RPG::Client::FateRin::Battle::FateRinBattleHudCardAreaViewModel_CardCycleAnimationState State; // 0x18

		::System::Void _ctor(::RPG::Client::FateRin::Battle::FateRinBattleHudCardAreaViewModel_CardPresentationTransition* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Battle::FateRinBattleHudCardAreaViewModel_CardPresentationTransition*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDCARDAREAVIEWMODEL_CARDANIMATIONENTRY__CTOR_OFFSET))(this, a1);
		}
	};
}
