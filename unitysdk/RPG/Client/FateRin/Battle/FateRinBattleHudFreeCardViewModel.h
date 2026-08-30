#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/BaseViewModel.h"
#include "unitysdk/RPG/Client/FateRin/Battle/CardInteractionPhase.h"
#include "unitysdk/RPG/Client/FateRin/Battle/IFateRinBattleHudFreeCardViewModel_CardState.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client::FateRin { class ViewModelEventHandler; }
namespace RPG::Client::FateRin::Battle { class IFateRinBattleHudCardAreaViewModel; }
namespace RPG::Client::FateRin::Battle { class IFateRinBattleHudHandCardDisplayViewModel; }

#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFREECARDVIEWMODEL_ADD_ONCARDCHANGED_OFFSET UNITYSDK_OFFSET(0xCF7BD40)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFREECARDVIEWMODEL_ADD_ONSTATEUPDATE_OFFSET UNITYSDK_OFFSET(0xCF7BC80)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFREECARDVIEWMODEL_GET_DRAGPOINTERPOS_OFFSET UNITYSDK_OFFSET(0xCF7BC20)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFREECARDVIEWMODEL_GET_HANDCARDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xCF7BC00)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFREECARDVIEWMODEL_GET_ISSHOWTARGETINGCURVE_OFFSET UNITYSDK_OFFSET(0xCF7BC40)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFREECARDVIEWMODEL_GET_ISTARGETINGENEMY_OFFSET UNITYSDK_OFFSET(0xCF7BC60)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFREECARDVIEWMODEL_GET_STATE_OFFSET UNITYSDK_OFFSET(0xCF7BBE0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFREECARDVIEWMODEL_REMOVE_ONCARDCHANGED_OFFSET UNITYSDK_OFFSET(0xCF7BDA0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFREECARDVIEWMODEL_REMOVE_ONSTATEUPDATE_OFFSET UNITYSDK_OFFSET(0xCF7BCE0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFREECARDVIEWMODEL_SET_DRAGPOINTERPOS_OFFSET UNITYSDK_OFFSET(0xCF7BC30)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFREECARDVIEWMODEL_SET_HANDCARDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xCF7BC10)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFREECARDVIEWMODEL_SET_ISSHOWTARGETINGCURVE_OFFSET UNITYSDK_OFFSET(0xCF7BC50)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFREECARDVIEWMODEL_SET_ISTARGETINGENEMY_OFFSET UNITYSDK_OFFSET(0xCF7BC70)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFREECARDVIEWMODEL_SET_STATE_OFFSET UNITYSDK_OFFSET(0xCF7BBF0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFREECARDVIEWMODEL__APPLYCARDAREADISPLAYSTATE_OFFSET UNITYSDK_OFFSET(0xCF7B800)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFREECARDVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xCF68100)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFREECARDVIEWMODEL__MAPFINDINGTARGETTOCARDSTATE_OFFSET UNITYSDK_OFFSET(0xCF7BB80)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFREECARDVIEWMODEL__MAPPHASETOCARDSTATE_OFFSET UNITYSDK_OFFSET(0xCF7BAE0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFREECARDVIEWMODEL__ONINTERACTIONSTATECHANGED_OFFSET UNITYSDK_OFFSET(0xCF7B7B0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFREECARDVIEWMODEL__SYNCCARDFROMAREA_OFFSET UNITYSDK_OFFSET(0xCF7BA60)

namespace RPG::Client::FateRin::Battle
{
	inline static constexpr unsigned int FateRinBattleHudFreeCardViewModel_TypeDefinitionIndex = 79590;

	class FateRinBattleHudFreeCardViewModel : public ::RPG::Client::FateRin::BaseViewModel
	{
	public:
		::RPG::Client::FateRin::ViewModelEventHandler* OnStateUpdate; // 0x20
		::RPG::Client::FateRin::ViewModelEventHandler* OnCardChanged; // 0x28
		::RPG::Client::FateRin::Battle::IFateRinBattleHudHandCardDisplayViewModel* _HandCardViewModel_k__BackingField; // 0x30
		::RPG::Client::FateRin::Battle::IFateRinBattleHudCardAreaViewModel* _CardArea; // 0x38
		::UnityEngine::Vector2 _DragPointerPos_k__BackingField; // 0x40
		::System::Boolean _IsShowTargetingCurve_k__BackingField; // 0x48
		::System::Boolean _IsTargetingEnemy_k__BackingField; // 0x49
		::RPG::Client::FateRin::Battle::IFateRinBattleHudFreeCardViewModel_CardState _State_k__BackingField; // 0x4C

		::System::Void _ctor(::RPG::Client::FateRin::Battle::IFateRinBattleHudCardAreaViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Battle::IFateRinBattleHudCardAreaViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFREECARDVIEWMODEL__CTOR_OFFSET))(this, a1);
		}

		::System::Void _OnInteractionStateChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFREECARDVIEWMODEL__ONINTERACTIONSTATECHANGED_OFFSET))(this);
		}

		::System::Void _ApplyCardAreaDisplayState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFREECARDVIEWMODEL__APPLYCARDAREADISPLAYSTATE_OFFSET))(this);
		}

		::System::Void _SyncCardFromArea()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFREECARDVIEWMODEL__SYNCCARDFROMAREA_OFFSET))(this);
		}

		static ::RPG::Client::FateRin::Battle::IFateRinBattleHudFreeCardViewModel_CardState _MapPhaseToCardState(::RPG::Client::FateRin::Battle::CardInteractionPhase a1, ::System::Boolean a2)
		{
			return ((::RPG::Client::FateRin::Battle::IFateRinBattleHudFreeCardViewModel_CardState(*)(::RPG::Client::FateRin::Battle::CardInteractionPhase, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFREECARDVIEWMODEL__MAPPHASETOCARDSTATE_OFFSET))(a1, a2);
		}

		static ::RPG::Client::FateRin::Battle::IFateRinBattleHudFreeCardViewModel_CardState _MapFindingTargetToCardState(::System::Boolean a1)
		{
			return ((::RPG::Client::FateRin::Battle::IFateRinBattleHudFreeCardViewModel_CardState(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFREECARDVIEWMODEL__MAPFINDINGTARGETTOCARDSTATE_OFFSET))(a1);
		}

		::RPG::Client::FateRin::Battle::IFateRinBattleHudFreeCardViewModel_CardState get_State()
		{
			return ((::RPG::Client::FateRin::Battle::IFateRinBattleHudFreeCardViewModel_CardState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFREECARDVIEWMODEL_GET_STATE_OFFSET))(this);
		}

		::System::Void set_State(::RPG::Client::FateRin::Battle::IFateRinBattleHudFreeCardViewModel_CardState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Battle::IFateRinBattleHudFreeCardViewModel_CardState))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFREECARDVIEWMODEL_SET_STATE_OFFSET))(this, a1);
		}

		::RPG::Client::FateRin::Battle::IFateRinBattleHudHandCardDisplayViewModel* get_HandCardViewModel()
		{
			return ((::RPG::Client::FateRin::Battle::IFateRinBattleHudHandCardDisplayViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFREECARDVIEWMODEL_GET_HANDCARDVIEWMODEL_OFFSET))(this);
		}

		::System::Void set_HandCardViewModel(::RPG::Client::FateRin::Battle::IFateRinBattleHudHandCardDisplayViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Battle::IFateRinBattleHudHandCardDisplayViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFREECARDVIEWMODEL_SET_HANDCARDVIEWMODEL_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 get_DragPointerPos()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFREECARDVIEWMODEL_GET_DRAGPOINTERPOS_OFFSET))(this);
		}

		::System::Void set_DragPointerPos(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFREECARDVIEWMODEL_SET_DRAGPOINTERPOS_OFFSET))(this, a1);
		}

		::System::Boolean get_IsShowTargetingCurve()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFREECARDVIEWMODEL_GET_ISSHOWTARGETINGCURVE_OFFSET))(this);
		}

		::System::Void set_IsShowTargetingCurve(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFREECARDVIEWMODEL_SET_ISSHOWTARGETINGCURVE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsTargetingEnemy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFREECARDVIEWMODEL_GET_ISTARGETINGENEMY_OFFSET))(this);
		}

		::System::Void set_IsTargetingEnemy(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFREECARDVIEWMODEL_SET_ISTARGETINGENEMY_OFFSET))(this, a1);
		}

		::System::Void add_OnStateUpdate(::RPG::Client::FateRin::ViewModelEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::ViewModelEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFREECARDVIEWMODEL_ADD_ONSTATEUPDATE_OFFSET))(this, a1);
		}

		::System::Void remove_OnStateUpdate(::RPG::Client::FateRin::ViewModelEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::ViewModelEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFREECARDVIEWMODEL_REMOVE_ONSTATEUPDATE_OFFSET))(this, a1);
		}

		::System::Void add_OnCardChanged(::RPG::Client::FateRin::ViewModelEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::ViewModelEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFREECARDVIEWMODEL_ADD_ONCARDCHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_OnCardChanged(::RPG::Client::FateRin::ViewModelEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::ViewModelEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFREECARDVIEWMODEL_REMOVE_ONCARDCHANGED_OFFSET))(this, a1);
		}
	};
}
