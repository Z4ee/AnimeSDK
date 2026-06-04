#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_151B93D9C4BBDCA4.h"

class Class_1_3B1EA953A4067E26_1;
class Class_1_4CD8A1ACD565F336;
class Class_3_1ACADD354F8A3264;
class Class_3_B2E9C9A94252C4E0;
namespace RPG::Client { class ChimeraGameInstance_ActionReplayHook; }
namespace RPG::Client { class IChimeraSettleCommand; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::Client::Prop { class ChimeraBattlePuzzleBoard; }
namespace RPG::Client::Prop { class ChimeraViewTimeManager; }
namespace System { class Action; }
namespace System { class String; }

#define RPG_CLIENT_CHIMERAGAMEINSTANCE_ADDHOOKONACTIONREPLAY_OFFSET UNITYSDK_OFFSET(0xB6AB460)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE_DOCLEARBATTLE_OFFSET UNITYSDK_OFFSET(0xB6AB8B0)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE_FINISHCHIMERABATTLE_OFFSET UNITYSDK_OFFSET(0xB6AB860)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE_GETCONTEXTS_OFFSET UNITYSDK_OFFSET(0xB6AC160)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE_GETLEVELGRAPHPATH_OFFSET UNITYSDK_OFFSET(0xB6AA2B0)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE_GET_ISPAUSED_OFFSET UNITYSDK_OFFSET(0xB6A88C0)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE_GET_LOCKCOUNT_OFFSET UNITYSDK_OFFSET(0xB6A89F0)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE_GET_PUZZLE_OFFSET UNITYSDK_OFFSET(0xB6A8A00)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE_GET__ISPAUSED_OFFSET UNITYSDK_OFFSET(0xB6A88B0)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE_REFRESHAUDIOENV_OFFSET UNITYSDK_OFFSET(0xB6AA8E0)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE_REMOVEHOOKONACTIONREPLAY_OFFSET UNITYSDK_OFFSET(0xB6AB4E0)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE_SETGAMEPAUSE_OFFSET UNITYSDK_OFFSET(0xB6AA240)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE_SETWAITNEXTSTEP_OFFSET UNITYSDK_OFFSET(0xB6AC110)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE_TRYSETTLEBATTLE_OFFSET UNITYSDK_OFFSET(0xB6ABA90)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE_TRYSWITCHAREA_OFFSET UNITYSDK_OFFSET(0xB6AB560)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE__CLEARPREPARATION_OFFSET UNITYSDK_OFFSET(0xB6A9080)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE__CREATECONTEXTS_OFFSET UNITYSDK_OFFSET(0xB6A91C0)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE__CREATESERVICES_OFFSET UNITYSDK_OFFSET(0xB6A9220)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE__CREATESYSTEMS_OFFSET UNITYSDK_OFFSET(0xB6A92B0)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0xB6AC1B0)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE__FINISHINIT_OFFSET UNITYSDK_OFFSET(0xB6AA1C0)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE__FORCELOD_OFFSET UNITYSDK_OFFSET(0xB6AA440)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE__GOTONEXTSTREET_OFFSET UNITYSDK_OFFSET(0xB6AB7E0)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE__HIDETRANSITIONCOVER_OFFSET UNITYSDK_OFFSET(0xB6A9FE0)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE__INITIALIZETIMEMANAGER_OFFSET UNITYSDK_OFFSET(0xB6A90D0)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE__ONCLEAR_OFFSET UNITYSDK_OFFSET(0xB6AC020)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE__ONINIT_OFFSET UNITYSDK_OFFSET(0xB6A8AA0)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE__ONTICK_OFFSET UNITYSDK_OFFSET(0xB6AB310)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE__PERFORMINITCOMMANDS_OFFSET UNITYSDK_OFFSET(0xB6A9C70)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE__PREPAREAUDIOENV_OFFSET UNITYSDK_OFFSET(0xB6A9A80)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE__PREPAREGAME_OFFSET UNITYSDK_OFFSET(0xB6A8EA0)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE__PREPARESCENEENV_OFFSET UNITYSDK_OFFSET(0xB6A9810)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE__PUSHINITCOMMANDS_OFFSET UNITYSDK_OFFSET(0xB6A9350)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE__RESETAUDIOENV_OFFSET UNITYSDK_OFFSET(0xB6AB120)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE__RESETSCENEENV_OFFSET UNITYSDK_OFFSET(0xB6AAC30)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE__SHOWBATTLEPAGE_OFFSET UNITYSDK_OFFSET(0xB6AA050)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE__SHOWTRANSITIONCOVER_OFFSET UNITYSDK_OFFSET(0xB6A8D30)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE__SIMULATE_OFFSET UNITYSDK_OFFSET(0xB6A9720)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE__STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0xB6A9AD0)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE___IFIXBASEPROXY_GETLEVELGRAPHPATH_OFFSET UNITYSDK_OFFSET(0xB6AC310)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE___IFIXBASEPROXY__FINISHINIT_OFFSET UNITYSDK_OFFSET(0xB6AC2B0)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE___IFIXBASEPROXY__ONCLEAR_OFFSET UNITYSDK_OFFSET(0xB6AC3F0)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE___IFIXBASEPROXY__ONINIT_OFFSET UNITYSDK_OFFSET(0xB6AC250)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0xB6AC390)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraGameInstance_TypeDefinitionIndex = 56495;

	class ChimeraGameInstance : public ::Class_1_151B93D9C4BBDCA4
	{
	public:
		// static const ::System::String* _ChimeraLittleGameLGPath; // 0x0
		::RPG::Client::Promises::Promise* EnterGameLoadingFinishPromise; // 0x78
		::RPG::Client::Promises::Promise* ExitGameLoadingFinishPromise; // 0x80
		::RPG::Client::IChimeraSettleCommand* _CachedSettleCommand; // 0x88
		::RPG::Client::ChimeraGameInstance_ActionReplayHook* _ActionReplayHooks; // 0x90
		::Class_3_B2E9C9A94252C4E0* _Feature; // 0x98
		::Class_3_1ACADD354F8A3264* _Services; // 0xA0
		::Class_1_3B1EA953A4067E26_1* _Contexts; // 0xA8
		::RPG::Client::Prop::ChimeraViewTimeManager* TimeManager; // 0xB0
		::System::Int32 _LockCount; // 0xB8
		::System::Boolean _IsWaitNextStep; // 0xBC
		::System::UInt32 _SpawnWorkID; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGAMEINSTANCE__CTOR_OFFSET))(this);
		}

		::System::Boolean get__IsPaused()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGAMEINSTANCE_GET__ISPAUSED_OFFSET))(this);
		}

		::System::Boolean get_IsPaused()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGAMEINSTANCE_GET_ISPAUSED_OFFSET))(this);
		}

		::System::Int32 get_LockCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGAMEINSTANCE_GET_LOCKCOUNT_OFFSET))(this);
		}

		::RPG::Client::Prop::ChimeraBattlePuzzleBoard* get_Puzzle()
		{
			return ((::RPG::Client::Prop::ChimeraBattlePuzzleBoard*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGAMEINSTANCE_GET_PUZZLE_OFFSET))(this);
		}

		::System::Void _OnInit(::Class_1_4CD8A1ACD565F336* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4CD8A1ACD565F336*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGAMEINSTANCE__ONINIT_OFFSET))(this, a1);
		}

		::System::Void _PrepareGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGAMEINSTANCE__PREPAREGAME_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _StartPuzzle()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGAMEINSTANCE__STARTPUZZLE_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _PerformInitCommands()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGAMEINSTANCE__PERFORMINITCOMMANDS_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _HideTransitionCover()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGAMEINSTANCE__HIDETRANSITIONCOVER_OFFSET))(this);
		}

		::System::Void _ShowBattlePage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGAMEINSTANCE__SHOWBATTLEPAGE_OFFSET))(this);
		}

		::System::Void _ClearPreparation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGAMEINSTANCE__CLEARPREPARATION_OFFSET))(this);
		}

		::System::Void _InitializeTimeManager()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGAMEINSTANCE__INITIALIZETIMEMANAGER_OFFSET))(this);
		}

		::System::Void _CreateContexts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGAMEINSTANCE__CREATECONTEXTS_OFFSET))(this);
		}

		::System::Void _CreateServices()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGAMEINSTANCE__CREATESERVICES_OFFSET))(this);
		}

		::System::Void _CreateSystems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGAMEINSTANCE__CREATESYSTEMS_OFFSET))(this);
		}

		::System::Void _PushInitCommands()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGAMEINSTANCE__PUSHINITCOMMANDS_OFFSET))(this);
		}

		::System::Void _FinishInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGAMEINSTANCE__FINISHINIT_OFFSET))(this);
		}

		::System::String* GetLevelGraphPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGAMEINSTANCE_GETLEVELGRAPHPATH_OFFSET))(this);
		}

		::System::Void _PrepareSceneEnv()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGAMEINSTANCE__PREPARESCENEENV_OFFSET))(this);
		}

		::System::Void _ForceLOD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGAMEINSTANCE__FORCELOD_OFFSET))(this);
		}

		::System::Void _PrepareAudioEnv()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGAMEINSTANCE__PREPAREAUDIOENV_OFFSET))(this);
		}

		::System::Void RefreshAudioEnv()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGAMEINSTANCE_REFRESHAUDIOENV_OFFSET))(this);
		}

		::System::Void _ResetSceneEnv()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGAMEINSTANCE__RESETSCENEENV_OFFSET))(this);
		}

		::System::Void _ResetAudioEnv()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGAMEINSTANCE__RESETAUDIOENV_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGAMEINSTANCE__ONTICK_OFFSET))(this, a1);
		}

		::System::Void _Simulate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGAMEINSTANCE__SIMULATE_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _ShowTransitionCover()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGAMEINSTANCE__SHOWTRANSITIONCOVER_OFFSET))(this);
		}

		::System::Void AddHookOnActionReplay(::RPG::Client::ChimeraGameInstance_ActionReplayHook* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraGameInstance_ActionReplayHook*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGAMEINSTANCE_ADDHOOKONACTIONREPLAY_OFFSET))(this, a1);
		}

		::System::Void RemoveHookOnActionReplay(::RPG::Client::ChimeraGameInstance_ActionReplayHook* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraGameInstance_ActionReplayHook*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGAMEINSTANCE_REMOVEHOOKONACTIONREPLAY_OFFSET))(this, a1);
		}

		::System::Void TrySwitchArea(::System::Int32 a1, ::System::Action* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGAMEINSTANCE_TRYSWITCHAREA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _GotoNextStreet(::RPG::Client::Prop::ChimeraBattlePuzzleBoard* a1, ::System::Int32 a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard*, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGAMEINSTANCE__GOTONEXTSTREET_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FinishChimeraBattle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGAMEINSTANCE_FINISHCHIMERABATTLE_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* DoClearBattle()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGAMEINSTANCE_DOCLEARBATTLE_OFFSET))(this);
		}

		::System::Void TrySettleBattle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGAMEINSTANCE_TRYSETTLEBATTLE_OFFSET))(this);
		}

		::System::Void _OnClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGAMEINSTANCE__ONCLEAR_OFFSET))(this);
		}

		::System::Void SetGamePause(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGAMEINSTANCE_SETGAMEPAUSE_OFFSET))(this, a1);
		}

		::System::Void SetWaitNextStep(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGAMEINSTANCE_SETWAITNEXTSTEP_OFFSET))(this, a1);
		}

		::Class_1_3B1EA953A4067E26_1* GetContexts()
		{
			return ((::Class_1_3B1EA953A4067E26_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGAMEINSTANCE_GETCONTEXTS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnInit(::Class_1_4CD8A1ACD565F336* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4CD8A1ACD565F336*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGAMEINSTANCE___IFIXBASEPROXY__ONINIT_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy__FinishInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGAMEINSTANCE___IFIXBASEPROXY__FINISHINIT_OFFSET))(this);
		}

		::System::String* __iFixBaseProxy_GetLevelGraphPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGAMEINSTANCE___IFIXBASEPROXY_GETLEVELGRAPHPATH_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGAMEINSTANCE___IFIXBASEPROXY__ONTICK_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy__OnClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGAMEINSTANCE___IFIXBASEPROXY__ONCLEAR_OFFSET))(this);
		}
	};
}
