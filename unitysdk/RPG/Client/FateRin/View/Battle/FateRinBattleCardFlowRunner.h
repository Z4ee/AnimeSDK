#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_1268;
class Class_0_16E4307DCC419505_378;
namespace RPG::Client::FateRin::Battle { class IFateRinBattleHudCardAreaViewModel; }
namespace RPG::Client::FateRin::Battle { class IFateRinBattleHudCardPileBtnViewModel; }
namespace RPG::Client::FateRin::Battle { class IFateRinBattleHudHandCardDisplayViewModel; }
namespace RPG::Client::FateRin::Battle { class IFateRinBattleHudHandCardViewModel; }
namespace RPG::Client::FateRin::View::Battle { class FateRinAddCardToHandFlowView; }
namespace RPG::Client::FateRin::View::Battle { class FateRinAddCardToPileFlowView; }
namespace RPG::Client::FateRin::View::Battle { class FateRinBattleHudHandCardLayout; }
namespace RPG::Client::FateRin::View::Battle { class FateRinDiscardCardFlowView; }
namespace RPG::Client::FateRin::View::Battle { class FateRinDrawCardFlowView; }
namespace RPG::Client::FateRin::View::Battle { class FateRinEffectController; }
namespace RPG::Client::FateRin::View::Battle { class FateRinFireOutCardFlowView; }
namespace RPG::Client::FateRin::View::Battle { class FateRinShuffleTrailEffectView; }
namespace RPG::Client::FateRin::View::Battle { class FateRinStackableAddCardToHandFlowView; }
namespace RPG::Client::FateRin::View::Card { class FateRinCardPosControlView; }
namespace RPG::Client::Promises { class IPendingPromise; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLECARDFLOWRUNNER_CANCELALLFLOWS_OFFSET UNITYSDK_OFFSET(0x1A39EBC0)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLECARDFLOWRUNNER_CANCELPROJECTIONREPLICATEFLOW_OFFSET UNITYSDK_OFFSET(0x1A39F4B0)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLECARDFLOWRUNNER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A39EB70)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLECARDFLOWRUNNER_GET_ADDCARDTOHANDSPAWNANCHOR_OFFSET UNITYSDK_OFFSET(0x1A39EDF0)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLECARDFLOWRUNNER_GET__AUDIOSERVICE_OFFSET UNITYSDK_OFFSET(0x1A39EF70)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLECARDFLOWRUNNER_INIT_OFFSET UNITYSDK_OFFSET(0x1A39EB30)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLECARDFLOWRUNNER_PLAYADDCARDTODISCARDPILEFLOW_OFFSET UNITYSDK_OFFSET(0x1A39F820)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLECARDFLOWRUNNER_PLAYADDCARDTODRAWPILEFLOW_OFFSET UNITYSDK_OFFSET(0x1A39F750)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLECARDFLOWRUNNER_PLAYADDCARDTOHANDFLOW_OFFSET UNITYSDK_OFFSET(0x1A39F1A0)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLECARDFLOWRUNNER_PLAYDISCARDFLOWFROMWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0x1A39FA90)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLECARDFLOWRUNNER_PLAYDISCARDFLOW_OFFSET UNITYSDK_OFFSET(0x1A39F910)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLECARDFLOWRUNNER_PLAYDRAWFLOW_OFFSET UNITYSDK_OFFSET(0x1A39EE60)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLECARDFLOWRUNNER_PLAYFIREOUTFLOWFROMWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0x1A39FE10)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLECARDFLOWRUNNER_PLAYFIREOUTFLOW_OFFSET UNITYSDK_OFFSET(0x1A39FD00)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLECARDFLOWRUNNER_PLAYPROJECTIONREPLICATEFLOW_OFFSET UNITYSDK_OFFSET(0x1A39F360)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLECARDFLOWRUNNER_PLAYSHUFFLEFLOW_OFFSET UNITYSDK_OFFSET(0x1A3A0000)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLECARDFLOWRUNNER_PLAYSTACKABLEADDCARDTOHANDFLOW_OFFSET UNITYSDK_OFFSET(0x1A39F280)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLECARDFLOWRUNNER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3A00D0)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLECARDFLOWRUNNER__TRACK_OFFSET UNITYSDK_OFFSET(0x1A39F000)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLECARDFLOWRUNNER__UNTRACK_OFFSET UNITYSDK_OFFSET(0x1A39F620)

namespace RPG::Client::FateRin::View::Battle
{
	inline static constexpr unsigned int FateRinBattleCardFlowRunner_TypeDefinitionIndex = 75707;

	class FateRinBattleCardFlowRunner : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::FateRin::View::Battle::FateRinDrawCardFlowView* _DrawCardFlowView; // 0x18
		::RPG::Client::FateRin::View::Battle::FateRinAddCardToHandFlowView* _AddCardToHandFlowView; // 0x20
		::RPG::Client::FateRin::View::Battle::FateRinAddCardToPileFlowView* _AddCardToPileFlowView; // 0x28
		::RPG::Client::FateRin::View::Battle::FateRinStackableAddCardToHandFlowView* _StackableAddCardToHandFlowView; // 0x30
		::RPG::Client::FateRin::View::Battle::FateRinDiscardCardFlowView* _DiscardCardFlowView; // 0x38
		::RPG::Client::FateRin::View::Battle::FateRinFireOutCardFlowView* _FireOutCardFlowView; // 0x40
		::RPG::Client::FateRin::View::Battle::FateRinShuffleTrailEffectView* _ShuffleTrailEffectView; // 0x48
		::RPG::Client::FateRin::View::Battle::FateRinEffectController* _EffectController; // 0x50
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_378*>* _RunningCommands; // 0x58
		::Class_0_16E4307DCC419505_378* _ProjectionReplicateCommand; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLECARDFLOWRUNNER__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLECARDFLOWRUNNER_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLECARDFLOWRUNNER_DISPOSE_OFFSET))(this);
		}

		::UnityEngine::Transform* get_AddCardToHandSpawnAnchor()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLECARDFLOWRUNNER_GET_ADDCARDTOHANDSPAWNANCHOR_OFFSET))(this);
		}

		::System::Void PlayDrawFlow(::System::Collections::Generic::IList_1<::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*>* a1, ::System::Collections::Generic::IList_1<::RPG::Client::FateRin::Battle::IFateRinBattleHudHandCardViewModel*>* a2, ::RPG::Client::FateRin::Battle::IFateRinBattleHudCardAreaViewModel* a3, ::RPG::Client::FateRin::Battle::IFateRinBattleHudCardPileBtnViewModel* a4, ::RPG::Client::FateRin::View::Battle::FateRinBattleHudHandCardLayout* a5, ::RPG::Client::Promises::IPendingPromise* a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*>*, ::System::Collections::Generic::IList_1<::RPG::Client::FateRin::Battle::IFateRinBattleHudHandCardViewModel*>*, ::RPG::Client::FateRin::Battle::IFateRinBattleHudCardAreaViewModel*, ::RPG::Client::FateRin::Battle::IFateRinBattleHudCardPileBtnViewModel*, ::RPG::Client::FateRin::View::Battle::FateRinBattleHudHandCardLayout*, ::RPG::Client::Promises::IPendingPromise*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLECARDFLOWRUNNER_PLAYDRAWFLOW_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void PlayAddCardToHandFlow(::System::Collections::Generic::IList_1<::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*>* a1, ::RPG::Client::FateRin::Battle::IFateRinBattleHudCardAreaViewModel* a2, ::RPG::Client::FateRin::View::Battle::FateRinBattleHudHandCardLayout* a3, ::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* a4, ::RPG::Client::Promises::IPendingPromise* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*>*, ::RPG::Client::FateRin::Battle::IFateRinBattleHudCardAreaViewModel*, ::RPG::Client::FateRin::View::Battle::FateRinBattleHudHandCardLayout*, ::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*, ::RPG::Client::Promises::IPendingPromise*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLECARDFLOWRUNNER_PLAYADDCARDTOHANDFLOW_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void PlayStackableAddCardToHandFlow(::RPG::Client::FateRin::View::Card::FateRinCardPosControlView* a1, ::System::Collections::Generic::IList_1<::UnityEngine::RectTransform*>* a2, ::RPG::Client::FateRin::Battle::IFateRinBattleHudCardAreaViewModel* a3, ::RPG::Client::FateRin::View::Battle::FateRinBattleHudHandCardLayout* a4, ::RPG::Client::Promises::IPendingPromise* a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*, ::System::Collections::Generic::IList_1<::UnityEngine::RectTransform*>*, ::RPG::Client::FateRin::Battle::IFateRinBattleHudCardAreaViewModel*, ::RPG::Client::FateRin::View::Battle::FateRinBattleHudHandCardLayout*, ::RPG::Client::Promises::IPendingPromise*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLECARDFLOWRUNNER_PLAYSTACKABLEADDCARDTOHANDFLOW_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void PlayProjectionReplicateFlow(::System::Collections::Generic::IList_1<::UnityEngine::RectTransform*>* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::UnityEngine::RectTransform*>*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLECARDFLOWRUNNER_PLAYPROJECTIONREPLICATEFLOW_OFFSET))(this, a1, a2);
		}

		::System::Void CancelProjectionReplicateFlow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLECARDFLOWRUNNER_CANCELPROJECTIONREPLICATEFLOW_OFFSET))(this);
		}

		::System::Void PlayAddCardToDrawPileFlow(::System::Collections::Generic::IList_1<::UnityEngine::RectTransform*>* a1, ::System::Collections::Generic::IList_1<::RPG::Client::FateRin::Battle::IFateRinBattleHudHandCardDisplayViewModel*>* a2, ::RPG::Client::FateRin::Battle::IFateRinBattleHudCardPileBtnViewModel* a3, ::RPG::Client::Promises::IPendingPromise* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::UnityEngine::RectTransform*>*, ::System::Collections::Generic::IList_1<::RPG::Client::FateRin::Battle::IFateRinBattleHudHandCardDisplayViewModel*>*, ::RPG::Client::FateRin::Battle::IFateRinBattleHudCardPileBtnViewModel*, ::RPG::Client::Promises::IPendingPromise*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLECARDFLOWRUNNER_PLAYADDCARDTODRAWPILEFLOW_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void PlayAddCardToDiscardPileFlow(::System::Collections::Generic::IList_1<::UnityEngine::RectTransform*>* a1, ::System::Collections::Generic::IList_1<::RPG::Client::FateRin::Battle::IFateRinBattleHudHandCardDisplayViewModel*>* a2, ::RPG::Client::FateRin::Battle::IFateRinBattleHudCardPileBtnViewModel* a3, ::RPG::Client::Promises::IPendingPromise* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::UnityEngine::RectTransform*>*, ::System::Collections::Generic::IList_1<::RPG::Client::FateRin::Battle::IFateRinBattleHudHandCardDisplayViewModel*>*, ::RPG::Client::FateRin::Battle::IFateRinBattleHudCardPileBtnViewModel*, ::RPG::Client::Promises::IPendingPromise*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLECARDFLOWRUNNER_PLAYADDCARDTODISCARDPILEFLOW_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void PlayDiscardFlow(::System::Collections::Generic::IList_1<::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*>* a1, ::RPG::Client::FateRin::Battle::IFateRinBattleHudCardPileBtnViewModel* a2, ::RPG::Client::FateRin::View::Battle::FateRinBattleHudHandCardLayout* a3, ::RPG::Client::Promises::IPendingPromise* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*>*, ::RPG::Client::FateRin::Battle::IFateRinBattleHudCardPileBtnViewModel*, ::RPG::Client::FateRin::View::Battle::FateRinBattleHudHandCardLayout*, ::RPG::Client::Promises::IPendingPromise*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLECARDFLOWRUNNER_PLAYDISCARDFLOW_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void PlayDiscardFlowFromWorldPosition(::System::Collections::Generic::IList_1<::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*>* a1, ::RPG::Client::FateRin::Battle::IFateRinBattleHudCardPileBtnViewModel* a2, ::RPG::Client::FateRin::View::Battle::FateRinBattleHudHandCardLayout* a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Quaternion a5, ::RPG::Client::Promises::IPendingPromise* a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*>*, ::RPG::Client::FateRin::Battle::IFateRinBattleHudCardPileBtnViewModel*, ::RPG::Client::FateRin::View::Battle::FateRinBattleHudHandCardLayout*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::RPG::Client::Promises::IPendingPromise*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLECARDFLOWRUNNER_PLAYDISCARDFLOWFROMWORLDPOSITION_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void PlayFireOutFlow(::System::Collections::Generic::IList_1<::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*>* a1, ::RPG::Client::FateRin::View::Battle::FateRinBattleHudHandCardLayout* a2, ::RPG::Client::Promises::IPendingPromise* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*>*, ::RPG::Client::FateRin::View::Battle::FateRinBattleHudHandCardLayout*, ::RPG::Client::Promises::IPendingPromise*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLECARDFLOWRUNNER_PLAYFIREOUTFLOW_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PlayFireOutFlowFromWorldPosition(::System::Collections::Generic::IList_1<::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*>* a1, ::RPG::Client::FateRin::View::Battle::FateRinBattleHudHandCardLayout* a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion a4, ::RPG::Client::Promises::IPendingPromise* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*>*, ::RPG::Client::FateRin::View::Battle::FateRinBattleHudHandCardLayout*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::RPG::Client::Promises::IPendingPromise*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLECARDFLOWRUNNER_PLAYFIREOUTFLOWFROMWORLDPOSITION_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void PlayShuffleFlow(::RPG::Client::FateRin::Battle::IFateRinBattleHudCardPileBtnViewModel* a1, ::System::Int32 a2, ::System::Int32 a3, ::RPG::Client::Promises::IPendingPromise* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Battle::IFateRinBattleHudCardPileBtnViewModel*, ::System::Int32, ::System::Int32, ::RPG::Client::Promises::IPendingPromise*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLECARDFLOWRUNNER_PLAYSHUFFLEFLOW_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void CancelAllFlows()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLECARDFLOWRUNNER_CANCELALLFLOWS_OFFSET))(this);
		}

		::System::Void _Track(::Class_0_16E4307DCC419505_378* a1, ::RPG::Client::Promises::IPendingPromise* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_378*, ::RPG::Client::Promises::IPendingPromise*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLECARDFLOWRUNNER__TRACK_OFFSET))(this, a1, a2);
		}

		::System::Void _Untrack(::Class_0_16E4307DCC419505_378* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_378*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLECARDFLOWRUNNER__UNTRACK_OFFSET))(this, a1);
		}

		::Class_0_16E4307DCC419505_1268* get__AudioService()
		{
			return ((::Class_0_16E4307DCC419505_1268*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLECARDFLOWRUNNER_GET__AUDIOSERVICE_OFFSET))(this);
		}
	};
}
