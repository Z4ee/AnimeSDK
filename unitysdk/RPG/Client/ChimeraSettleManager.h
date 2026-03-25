#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChimeraEvaluationManager; }
namespace RPG::Client { class ChimeraSettleCommandManager; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }

#define RPG_CLIENT_CHIMERASETTLEMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x93C7710)
#define RPG_CLIENT_CHIMERASETTLEMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x93C72B0)
#define RPG_CLIENT_CHIMERASETTLEMANAGER_ISNOTENOUGHALIVECHIMERA_OFFSET UNITYSDK_OFFSET(0x93CB440)
#define RPG_CLIENT_CHIMERASETTLEMANAGER_LEAVEBATTLE_OFFSET UNITYSDK_OFFSET(0x93CB840)
#define RPG_CLIENT_CHIMERASETTLEMANAGER_TRYSETTLEBATTLE_OFFSET UNITYSDK_OFFSET(0x93C1470)
#define RPG_CLIENT_CHIMERASETTLEMANAGER__CLEARCHIMERABATTLEINSTANCE_OFFSET UNITYSDK_OFFSET(0x93CCEF0)
#define RPG_CLIENT_CHIMERASETTLEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x93C72A0)
#define RPG_CLIENT_CHIMERASETTLEMANAGER__EXECUTESETTLECOMMAND_OFFSET UNITYSDK_OFFSET(0x93CD320)
#define RPG_CLIENT_CHIMERASETTLEMANAGER__FINISHFINALROUND_OFFSET UNITYSDK_OFFSET(0x93CCDF0)
#define RPG_CLIENT_CHIMERASETTLEMANAGER__FINISHORDINARYROUND_OFFSET UNITYSDK_OFFSET(0x93CD280)
#define RPG_CLIENT_CHIMERASETTLEMANAGER__HIDETRANSITIONDIALOG_OFFSET UNITYSDK_OFFSET(0x93CD210)
#define RPG_CLIENT_CHIMERASETTLEMANAGER__ISFINISHALLWORK_OFFSET UNITYSDK_OFFSET(0x93CC900)
#define RPG_CLIENT_CHIMERASETTLEMANAGER__LEAVEBATTLE_B__3_0_OFFSET UNITYSDK_OFFSET(0x93CD610)
#define RPG_CLIENT_CHIMERASETTLEMANAGER__LEAVEBATTLE_B__3_1_OFFSET UNITYSDK_OFFSET(0x93CD680)
#define RPG_CLIENT_CHIMERASETTLEMANAGER__LOCKPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x93CC5B0)
#define RPG_CLIENT_CHIMERASETTLEMANAGER__NOTIFYTOMISSION_OFFSET UNITYSDK_OFFSET(0x93CC7A0)
#define RPG_CLIENT_CHIMERASETTLEMANAGER__SETBATTLEEXITTRANSITIONFINISH_OFFSET UNITYSDK_OFFSET(0x93CD520)
#define RPG_CLIENT_CHIMERASETTLEMANAGER__SETTLEFINALROUND_OFFSET UNITYSDK_OFFSET(0x93CBEC0)
#define RPG_CLIENT_CHIMERASETTLEMANAGER__SETTLETUTORIAL_OFFSET UNITYSDK_OFFSET(0x93CBCB0)
#define RPG_CLIENT_CHIMERASETTLEMANAGER__SHOWBATTLERESULTDIALOG_OFFSET UNITYSDK_OFFSET(0x93CCA00)
#define RPG_CLIENT_CHIMERASETTLEMANAGER__SHOWTRANSITIONDIALOG_OFFSET UNITYSDK_OFFSET(0x93CBAA0)
#define RPG_CLIENT_CHIMERASETTLEMANAGER__TRYSETTLEBATTLE_B__4_0_OFFSET UNITYSDK_OFFSET(0x93CD6F0)
#define RPG_CLIENT_CHIMERASETTLEMANAGER__TRYSETTLEBATTLE_B__4_1_OFFSET UNITYSDK_OFFSET(0x93CD760)
#define RPG_CLIENT_CHIMERASETTLEMANAGER__UNLOCKPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x93CD370)
#define RPG_CLIENT_CHIMERASETTLEMANAGER__UPDATECHIMERAENVIRONMENT_OFFSET UNITYSDK_OFFSET(0x93CD190)
#define RPG_CLIENT_CHIMERASETTLEMANAGER__WAITLOADINGFINISH_OFFSET UNITYSDK_OFFSET(0x93CD150)
#define RPG_CLIENT_CHIMERASETTLEMANAGER___SETTLEFINALROUND_B__6_0_OFFSET UNITYSDK_OFFSET(0x93CD7D0)
#define RPG_CLIENT_CHIMERASETTLEMANAGER___SETTLEFINALROUND_B__6_1_OFFSET UNITYSDK_OFFSET(0x93CD840)
#define RPG_CLIENT_CHIMERASETTLEMANAGER___SETTLEFINALROUND_B__6_2_OFFSET UNITYSDK_OFFSET(0x93CD8B0)
#define RPG_CLIENT_CHIMERASETTLEMANAGER___SETTLEFINALROUND_B__6_3_OFFSET UNITYSDK_OFFSET(0x93CD920)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraSettleManager_TypeDefinitionIndex = 51522;

	class ChimeraSettleManager : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* ExitBattleLoadingPromise; // 0x10
		::RPG::Client::ChimeraSettleCommandManager* CommandMgr; // 0x18
		::RPG::Client::ChimeraEvaluationManager* EvaluationManager; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASETTLEMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASETTLEMANAGER_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASETTLEMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Boolean IsNotEnoughAliveChimera(::System::UInt32 leastChimeras)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASETTLEMANAGER_ISNOTENOUGHALIVECHIMERA_OFFSET))(this, leastChimeras);
		}

		::System::Void LeaveBattle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASETTLEMANAGER_LEAVEBATTLE_OFFSET))(this);
		}

		::System::Void TrySettleBattle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASETTLEMANAGER_TRYSETTLEBATTLE_OFFSET))(this);
		}

		::System::Void _SettleTutorial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASETTLEMANAGER__SETTLETUTORIAL_OFFSET))(this);
		}

		::System::Void _SettleFinalRound()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASETTLEMANAGER__SETTLEFINALROUND_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _ShowBattleResultDialog()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASETTLEMANAGER__SHOWBATTLERESULTDIALOG_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _ClearChimeraBattleInstance()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASETTLEMANAGER__CLEARCHIMERABATTLEINSTANCE_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _WaitLoadingFinish()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASETTLEMANAGER__WAITLOADINGFINISH_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _NotifyToMission()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASETTLEMANAGER__NOTIFYTOMISSION_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _ShowTransitionDialog()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASETTLEMANAGER__SHOWTRANSITIONDIALOG_OFFSET))(this);
		}

		::System::Void _UpdateChimeraEnvironment(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASETTLEMANAGER__UPDATECHIMERAENVIRONMENT_OFFSET))(this, value);
		}

		::RPG::Client::Promises::IPromise* _HideTransitionDialog()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASETTLEMANAGER__HIDETRANSITIONDIALOG_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _FinishOrdinaryRound()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASETTLEMANAGER__FINISHORDINARYROUND_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _FinishFinalRound()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASETTLEMANAGER__FINISHFINALROUND_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _ExecuteSettleCommand()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASETTLEMANAGER__EXECUTESETTLECOMMAND_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _LockPerformance()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASETTLEMANAGER__LOCKPERFORMANCE_OFFSET))(this);
		}

		::System::Void _UnlockPerformance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASETTLEMANAGER__UNLOCKPERFORMANCE_OFFSET))(this);
		}

		::System::Void _SetBattleExitTransitionFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASETTLEMANAGER__SETBATTLEEXITTRANSITIONFINISH_OFFSET))(this);
		}

		::System::Boolean _IsFinishAllWork()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASETTLEMANAGER__ISFINISHALLWORK_OFFSET))(this);
		}

		::System::Void _LeaveBattle_b__3_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASETTLEMANAGER__LEAVEBATTLE_B__3_0_OFFSET))(this);
		}

		::System::Void _LeaveBattle_b__3_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASETTLEMANAGER__LEAVEBATTLE_B__3_1_OFFSET))(this);
		}

		::System::Void _TrySettleBattle_b__4_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASETTLEMANAGER__TRYSETTLEBATTLE_B__4_0_OFFSET))(this);
		}

		::System::Void _TrySettleBattle_b__4_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASETTLEMANAGER__TRYSETTLEBATTLE_B__4_1_OFFSET))(this);
		}

		::System::Void __SettleFinalRound_b__6_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASETTLEMANAGER___SETTLEFINALROUND_B__6_0_OFFSET))(this);
		}

		::System::Void __SettleFinalRound_b__6_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASETTLEMANAGER___SETTLEFINALROUND_B__6_1_OFFSET))(this);
		}

		::System::Void __SettleFinalRound_b__6_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASETTLEMANAGER___SETTLEFINALROUND_B__6_2_OFFSET))(this);
		}

		::System::Void __SettleFinalRound_b__6_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASETTLEMANAGER___SETTLEFINALROUND_B__6_3_OFFSET))(this);
		}
	};
}
