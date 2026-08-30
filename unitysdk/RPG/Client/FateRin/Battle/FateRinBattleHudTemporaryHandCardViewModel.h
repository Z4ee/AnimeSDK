#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/BaseViewModel.h"

namespace RPG::Client::FateRin::Card { class IFateRinBattleCardViewModel; }
namespace System { class String; }

#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDTEMPORARYHANDCARDVIEWMODEL_GET_CARDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1CA46E80)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDTEMPORARYHANDCARDVIEWMODEL_GET_ISSTACKABLE_OFFSET UNITYSDK_OFFSET(0x1CA46E90)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDTEMPORARYHANDCARDVIEWMODEL_GET_STACKCOUNT_OFFSET UNITYSDK_OFFSET(0x1CA46FE0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDTEMPORARYHANDCARDVIEWMODEL_GET_STACKUISTATE_OFFSET UNITYSDK_OFFSET(0x1CA47030)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDTEMPORARYHANDCARDVIEWMODEL_GET_VISUALSTACKCOUNT_OFFSET UNITYSDK_OFFSET(0x1CA46FF0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDTEMPORARYHANDCARDVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA31F00)

namespace RPG::Client::FateRin::Battle
{
	inline static constexpr unsigned int FateRinBattleHudTemporaryHandCardViewModel_TypeDefinitionIndex = 79600;

	class FateRinBattleHudTemporaryHandCardViewModel : public ::RPG::Client::FateRin::BaseViewModel
	{
	public:
		::RPG::Client::FateRin::Card::IFateRinBattleCardViewModel* _CardViewModel_k__BackingField; // 0x20
		::System::UInt32 _StackCount_k__BackingField; // 0x28

		::System::Void _ctor(::RPG::Client::FateRin::Card::IFateRinBattleCardViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Card::IFateRinBattleCardViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDTEMPORARYHANDCARDVIEWMODEL__CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::FateRin::Card::IFateRinBattleCardViewModel* get_CardViewModel()
		{
			return ((::RPG::Client::FateRin::Card::IFateRinBattleCardViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDTEMPORARYHANDCARDVIEWMODEL_GET_CARDVIEWMODEL_OFFSET))(this);
		}

		::System::Boolean get_IsStackable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDTEMPORARYHANDCARDVIEWMODEL_GET_ISSTACKABLE_OFFSET))(this);
		}

		::System::UInt32 get_StackCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDTEMPORARYHANDCARDVIEWMODEL_GET_STACKCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_VisualStackCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDTEMPORARYHANDCARDVIEWMODEL_GET_VISUALSTACKCOUNT_OFFSET))(this);
		}

		::System::String* get_StackUIState()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDTEMPORARYHANDCARDVIEWMODEL_GET_STACKUISTATE_OFFSET))(this);
		}
	};
}
