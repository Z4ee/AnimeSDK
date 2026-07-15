#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/Battle/CardInteractionPhase.h"
#include "unitysdk/RPG/Client/FateRin/Battle/FateRinBattleHudInputBrainBase.h"
#include "unitysdk/RPG/Client/FateRin/Battle/HoverBrainStates/FateRinHoverPointerEventKind.h"
#include "unitysdk/RPG/Client/FateRin/Battle/HoverBrainStates/FateRinHoverPointerStateKind.h"
#include "unitysdk/Struct_2_B004C4EE67DB9A7D.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_0_16E4307DCC419505_1267;
class Class_1_9654EDC4BC82BD07;
namespace RPG::Client::FateRin::Battle { class IFateRinBattleHudCardAreaViewModel; }
namespace RPG::Client::FateRin::Battle { class IFateRinBattleHudHandCardViewModel; }
namespace RPG::Client::FateRin::Battle { class IFateRinBattleHudInputSource; }
namespace RPG::Client::FateRin::Battle { class IFateRinCardHitTestService; }

#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN_CANCELCLICKFINDINGTARGET_OFFSET UNITYSDK_OFFSET(0x1B48B1A0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN_CANCELDRAGFINDINGTARGET_OFFSET UNITYSDK_OFFSET(0x1B48B2A0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN_CANCEL_OFFSET UNITYSDK_OFFSET(0x1B48AF80)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN_DRAGTOTARGET_OFFSET UNITYSDK_OFFSET(0x1B48AF10)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN_GET_CURRENTPHASE_OFFSET UNITYSDK_OFFSET(0x1B48AA40)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN_GET_SELECTEDHANDCARDVM_OFFSET UNITYSDK_OFFSET(0x1B48AA90)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN_HITTESTCARDS_OFFSET UNITYSDK_OFFSET(0x1B48AB00)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN_ISCARDALLOWEDBYTUTORIAL_OFFSET UNITYSDK_OFFSET(0x1B48AB70)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN_ISINCANCELAREA_OFFSET UNITYSDK_OFFSET(0x1B48ADB0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN_ISINSELECTAREA_OFFSET UNITYSDK_OFFSET(0x1B48ACB0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN_RESETIFSELECTING_OFFSET UNITYSDK_OFFSET(0x1B48B140)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN_RESETINTERACTION_OFFSET UNITYSDK_OFFSET(0x1B48AFD0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN_RESETPOINTERSTATE_OFFSET UNITYSDK_OFFSET(0x1B48A6B0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN_SELECTCARD_OFFSET UNITYSDK_OFFSET(0x1B48AEB0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN_TRANSITIONTOANDHANDLE_OFFSET UNITYSDK_OFFSET(0x1B48B0C0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN_TRANSITIONTO_OFFSET UNITYSDK_OFFSET(0x1B489DE0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN_TRYPLAYANDRESETINTERACTION_OFFSET UNITYSDK_OFFSET(0x1B48B370)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN_TRYPLAYSELECTEDCARD_OFFSET UNITYSDK_OFFSET(0x1B48B460)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1B489BC0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN__GETPOINTERSTATE_OFFSET UNITYSDK_OFFSET(0x1B48B020)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN__HANDLEPOINTERCANCEL_OFFSET UNITYSDK_OFFSET(0x1B48A9F0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN__HANDLEPOINTERDRAG_OFFSET UNITYSDK_OFFSET(0x1B48A930)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN__HANDLEPOINTEREVENT_OFFSET UNITYSDK_OFFSET(0x1B48A7C0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN__HANDLEPOINTERHOVEREXIT_OFFSET UNITYSDK_OFFSET(0x1B48A880)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN__HANDLEPOINTERHOVER_OFFSET UNITYSDK_OFFSET(0x1B48A760)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN__HANDLEPOINTERPRESS_OFFSET UNITYSDK_OFFSET(0x1B48A8D0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN__HANDLEPOINTERRELEASE_OFFSET UNITYSDK_OFFSET(0x1B48A990)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN__ONINPUTINTERRUPTED_OFFSET UNITYSDK_OFFSET(0x1B48A5D0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN__SUBSCRIBEEVENTS_OFFSET UNITYSDK_OFFSET(0x1B489EB0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN__UNSUBSCRIBEEVENTS_OFFSET UNITYSDK_OFFSET(0x1B48A240)

namespace RPG::Client::FateRin::Battle
{
	inline static constexpr unsigned int FateRinBattleHudHoverBrain_TypeDefinitionIndex = 75999;

	class FateRinBattleHudHoverBrain : public ::RPG::Client::FateRin::Battle::FateRinBattleHudInputBrainBase
	{
	public:
		::Class_1_9654EDC4BC82BD07* _DraggingInsideSelectAreaState; // 0x40
		::Class_1_9654EDC4BC82BD07* _ClickWaitingConfirmPressState; // 0x48
		::Class_1_9654EDC4BC82BD07* _DraggingReadyToReleaseState; // 0x50
		::Class_1_9654EDC4BC82BD07* _PointerState; // 0x58
		::Class_1_9654EDC4BC82BD07* _IdleState; // 0x60
		::Class_1_9654EDC4BC82BD07* _ClickConfirmPressingState; // 0x68
		::Class_1_9654EDC4BC82BD07* _ClickWaitingInitialReleaseState; // 0x70
		::Class_1_9654EDC4BC82BD07* _CancelledAwaitingReleaseState; // 0x78

		::System::Void _ctor(::RPG::Client::FateRin::Battle::IFateRinBattleHudCardAreaViewModel* a1, ::RPG::Client::FateRin::Battle::IFateRinCardHitTestService* a2, ::Class_0_16E4307DCC419505_1267* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Battle::IFateRinBattleHudCardAreaViewModel*, ::RPG::Client::FateRin::Battle::IFateRinCardHitTestService*, ::Class_0_16E4307DCC419505_1267*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _SubscribeEvents(::RPG::Client::FateRin::Battle::IFateRinBattleHudInputSource* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Battle::IFateRinBattleHudInputSource*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN__SUBSCRIBEEVENTS_OFFSET))(this, a1);
		}

		::System::Void _UnsubscribeEvents(::RPG::Client::FateRin::Battle::IFateRinBattleHudInputSource* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Battle::IFateRinBattleHudInputSource*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN__UNSUBSCRIBEEVENTS_OFFSET))(this, a1);
		}

		::System::Void _OnInputInterrupted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN__ONINPUTINTERRUPTED_OFFSET))(this);
		}

		::System::Void _HandlePointerHover(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN__HANDLEPOINTERHOVER_OFFSET))(this, a1);
		}

		::System::Void _HandlePointerHoverExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN__HANDLEPOINTERHOVEREXIT_OFFSET))(this);
		}

		::System::Void _HandlePointerPress(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN__HANDLEPOINTERPRESS_OFFSET))(this, a1);
		}

		::System::Void _HandlePointerDrag(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN__HANDLEPOINTERDRAG_OFFSET))(this, a1);
		}

		::System::Void _HandlePointerRelease(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN__HANDLEPOINTERRELEASE_OFFSET))(this, a1);
		}

		::System::Void _HandlePointerCancel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN__HANDLEPOINTERCANCEL_OFFSET))(this);
		}

		::System::Void _HandlePointerEvent(::RPG::Client::FateRin::Battle::HoverBrainStates::FateRinHoverPointerEventKind a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Battle::HoverBrainStates::FateRinHoverPointerEventKind, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN__HANDLEPOINTEREVENT_OFFSET))(this, a1, a2);
		}

		::RPG::Client::FateRin::Battle::CardInteractionPhase get_CurrentPhase()
		{
			return ((::RPG::Client::FateRin::Battle::CardInteractionPhase(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN_GET_CURRENTPHASE_OFFSET))(this);
		}

		::RPG::Client::FateRin::Battle::IFateRinBattleHudHandCardViewModel* get_SelectedHandCardVM()
		{
			return ((::RPG::Client::FateRin::Battle::IFateRinBattleHudHandCardViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN_GET_SELECTEDHANDCARDVM_OFFSET))(this);
		}

		::Struct_2_B004C4EE67DB9A7D HitTestCards(::UnityEngine::Vector2 a1)
		{
			return ((::Struct_2_B004C4EE67DB9A7D(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN_HITTESTCARDS_OFFSET))(this, a1);
		}

		::System::Boolean IsCardAllowedByTutorial(::RPG::Client::FateRin::Battle::IFateRinBattleHudHandCardViewModel* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FateRin::Battle::IFateRinBattleHudHandCardViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN_ISCARDALLOWEDBYTUTORIAL_OFFSET))(this, a1);
		}

		::System::Boolean IsInSelectArea(::UnityEngine::Vector2 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN_ISINSELECTAREA_OFFSET))(this, a1);
		}

		::System::Boolean IsInCancelArea(::UnityEngine::Vector2 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN_ISINCANCELAREA_OFFSET))(this, a1);
		}

		::System::Void SelectCard(::RPG::Client::FateRin::Battle::IFateRinBattleHudHandCardViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Battle::IFateRinBattleHudHandCardViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN_SELECTCARD_OFFSET))(this, a1);
		}

		::System::Void DragToTarget(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN_DRAGTOTARGET_OFFSET))(this, a1);
		}

		::System::Void Cancel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN_CANCEL_OFFSET))(this);
		}

		::System::Void ResetInteraction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN_RESETINTERACTION_OFFSET))(this);
		}

		::System::Void TransitionTo(::RPG::Client::FateRin::Battle::HoverBrainStates::FateRinHoverPointerStateKind a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Battle::HoverBrainStates::FateRinHoverPointerStateKind))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN_TRANSITIONTO_OFFSET))(this, a1);
		}

		::System::Void TransitionToAndHandle(::RPG::Client::FateRin::Battle::HoverBrainStates::FateRinHoverPointerStateKind a1, ::RPG::Client::FateRin::Battle::HoverBrainStates::FateRinHoverPointerEventKind a2, ::UnityEngine::Vector2 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Battle::HoverBrainStates::FateRinHoverPointerStateKind, ::RPG::Client::FateRin::Battle::HoverBrainStates::FateRinHoverPointerEventKind, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN_TRANSITIONTOANDHANDLE_OFFSET))(this, a1, a2, a3);
		}

		::Class_1_9654EDC4BC82BD07* _GetPointerState(::RPG::Client::FateRin::Battle::HoverBrainStates::FateRinHoverPointerStateKind a1)
		{
			return ((::Class_1_9654EDC4BC82BD07*(*)(::PVOID, ::RPG::Client::FateRin::Battle::HoverBrainStates::FateRinHoverPointerStateKind))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN__GETPOINTERSTATE_OFFSET))(this, a1);
		}

		::System::Void ResetPointerState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN_RESETPOINTERSTATE_OFFSET))(this);
		}

		::System::Void ResetIfSelecting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN_RESETIFSELECTING_OFFSET))(this);
		}

		::System::Void CancelClickFindingTarget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN_CANCELCLICKFINDINGTARGET_OFFSET))(this);
		}

		::System::Void CancelDragFindingTarget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN_CANCELDRAGFINDINGTARGET_OFFSET))(this);
		}

		::System::Void TryPlayAndResetInteraction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN_TRYPLAYANDRESETINTERACTION_OFFSET))(this);
		}

		::System::Void TryPlaySelectedCard()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDHOVERBRAIN_TRYPLAYSELECTEDCARD_OFFSET))(this);
		}
	};
}
