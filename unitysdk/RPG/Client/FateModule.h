#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3BB6EC85B6B7001B_Enum_3_B7004B9B9B0ECE61.h"
#include "unitysdk/Class_1_943319D103CADBC3_Enum_3_FCBB2C507E9B21A3_16.h"
#include "unitysdk/Enum_3_71AA90D596A09AC8_12.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/Client/FateGameStateType.h"

class Class_1_53AFE00DD1E71CE4;
class Class_1_5A55E8BED8FA46A4_2;
class Class_1_61DFA98C734D0B78;
class Class_1_9BED8C2CAC924ACC;
class Class_1_C9DFE5EE7107C629_11;
class Class_1_EA9A86514D37684F;
class Class_1_EA9A86514D37684F_Class_3_93D96BDF1D9E64B8;
class Class_1_EA9A86514D37684F_Class_3_BE27BF221D2C7791_1;
namespace RPG::Client { class FateAreaInfo; }
namespace RPG::Client { class FateBGMState; }
namespace RPG::Client { class FateExpRewardInfo; }
namespace RPG::Client { class FateGameData; }
namespace RPG::Client { class FateHandbookInfo; }
namespace RPG::Client { class FateStatisticsInfo; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_FATEMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C198470)
#define RPG_CLIENT_FATEMODULE_ENTERBATTLE_OFFSET UNITYSDK_OFFSET(0x1C198B40)
#define RPG_CLIENT_FATEMODULE_FINISHFIRSTSYNCPROMISED_OFFSET UNITYSDK_OFFSET(0x1C199090)
#define RPG_CLIENT_FATEMODULE_GET_AREAINFO_OFFSET UNITYSDK_OFFSET(0x1C199500)
#define RPG_CLIENT_FATEMODULE_GET_BGMSTATE_OFFSET UNITYSDK_OFFSET(0x1C1995C0)
#define RPG_CLIENT_FATEMODULE_GET_EXPREWARDINFO_OFFSET UNITYSDK_OFFSET(0x1C16BFF0)
#define RPG_CLIENT_FATEMODULE_GET_GAMEDATA_OFFSET UNITYSDK_OFFSET(0x1C172910)
#define RPG_CLIENT_FATEMODULE_GET_HANDBOOKINFO_OFFSET UNITYSDK_OFFSET(0x1C199580)
#define RPG_CLIENT_FATEMODULE_GET_STATISTICSINFO_OFFSET UNITYSDK_OFFSET(0x1C199540)
#define RPG_CLIENT_FATEMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x1C198000)
#define RPG_CLIENT_FATEMODULE_LEAVEGAME_OFFSET UNITYSDK_OFFSET(0x1C198920)
#define RPG_CLIENT_FATEMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x1C1982D0)
#define RPG_CLIENT_FATEMODULE_SETAUTOSHOWENTRANCEPAGE_OFFSET UNITYSDK_OFFSET(0x1C198FD0)
#define RPG_CLIENT_FATEMODULE_SETAUTOSHOWROUNDPREPAREPAGE_OFFSET UNITYSDK_OFFSET(0x1C199010)
#define RPG_CLIENT_FATEMODULE_SETTLEGAME_OFFSET UNITYSDK_OFFSET(0x1C198970)
#define RPG_CLIENT_FATEMODULE_SETWAITSHOWSETTLEPAGE_OFFSET UNITYSDK_OFFSET(0x1C199050)
#define RPG_CLIENT_FATEMODULE_SWITCHGAMESTATEBYSERVERSTATUS_OFFSET UNITYSDK_OFFSET(0x1C1987A0)
#define RPG_CLIENT_FATEMODULE_TRYAUTOSHOW_OFFSET UNITYSDK_OFFSET(0x1C198BA0)
#define RPG_CLIENT_FATEMODULE__ADDACTIONHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1CA1D600)
#define RPG_CLIENT_FATEMODULE__ADDACTIONHANDLER_OFFSET UNITYSDK_OFFSET(0x1CA1D590)
#define RPG_CLIENT_FATEMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x1C198170)
#define RPG_CLIENT_FATEMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x1C199600)
#define RPG_CLIENT_FATEMODULE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CA1D830)
#define RPG_CLIENT_FATEMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C197EF0)
#define RPG_CLIENT_FATEMODULE__INITREQ_OFFSET UNITYSDK_OFFSET(0x1C1990D0)
#define RPG_CLIENT_FATEMODULE__INIT_B__1_0_OFFSET UNITYSDK_OFFSET(0x1CA1D9F0)
#define RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTADDHOUGU_OFFSET UNITYSDK_OFFSET(0x1C19CEB0)
#define RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTADDREIJU_OFFSET UNITYSDK_OFFSET(0x1C19D120)
#define RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTAVAILABLESPECIALAVATARUPDATE_OFFSET UNITYSDK_OFFSET(0x1C19BAE0)
#define RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTBATTLEPREPARE_OFFSET UNITYSDK_OFFSET(0x1C19BD80)
#define RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTBATTLESETTLE_OFFSET UNITYSDK_OFFSET(0x1C19BE60)
#define RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTBUFFAMPLIFICATIONUPDATE_OFFSET UNITYSDK_OFFSET(0x1C19C090)
#define RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTBUFFUPDATE_OFFSET UNITYSDK_OFFSET(0x1C19BF40)
#define RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTCOINCHANGE_OFFSET UNITYSDK_OFFSET(0x1C19C790)
#define RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTEXTRABUFFSLOT_OFFSET UNITYSDK_OFFSET(0x1C19C600)
#define RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTLEVELPHASECHANGE_OFFSET UNITYSDK_OFFSET(0x1C19B920)
#define RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTLEVELSTATUSCHANGE_OFFSET UNITYSDK_OFFSET(0x1C19B7E0)
#define RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTMASTERUPDATE_OFFSET UNITYSDK_OFFSET(0x1C19BA00)
#define RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTPARAMHOLDERREMOVE_OFFSET UNITYSDK_OFFSET(0x1C19BCA0)
#define RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTPARAMHOLDERUPDATE_OFFSET UNITYSDK_OFFSET(0x1C19BBC0)
#define RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTREMOVEHOUGU_OFFSET UNITYSDK_OFFSET(0x1C19CFF0)
#define RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTSHOPGOODSLOCKUPDATE_OFFSET UNITYSDK_OFFSET(0x1C19C930)
#define RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTSHOPMGRUPDATE_OFFSET UNITYSDK_OFFSET(0x1C19CB40)
#define RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTSHOPREFRESHUPDATE_OFFSET UNITYSDK_OFFSET(0x1C19CC90)
#define RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTTRAITBUFFUPDATE_OFFSET UNITYSDK_OFFSET(0x1C19C370)
#define RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTTRAITUPDATE_OFFSET UNITYSDK_OFFSET(0x1C19C220)
#define RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTTRANSFEREDMAINTRAITUPDATE_OFFSET UNITYSDK_OFFSET(0x1C19C4C0)
#define RPG_CLIENT_FATEMODULE__ONFATECHANGELINEUPSCRSP_OFFSET UNITYSDK_OFFSET(0x1C19B310)
#define RPG_CLIENT_FATEMODULE__ONFATEHANDLEPENDINGACTIONSCRSP_OFFSET UNITYSDK_OFFSET(0x1C19B5D0)
#define RPG_CLIENT_FATEMODULE__ONFATEPENDINGACTIONHOUGUSELECT_OFFSET UNITYSDK_OFFSET(0x1C19D260)
#define RPG_CLIENT_FATEMODULE__ONFATEPENDINGACTIONREIJUSELECT_OFFSET UNITYSDK_OFFSET(0x1C19D3A0)
#define RPG_CLIENT_FATEMODULE__ONFATEQUERYSCRSP_OFFSET UNITYSDK_OFFSET(0x1C19AAD0)
#define RPG_CLIENT_FATEMODULE__ONFATESETTLESCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1C19B050)
#define RPG_CLIENT_FATEMODULE__ONFATESHOPBUYGOODSSCRSP_OFFSET UNITYSDK_OFFSET(0x1C19D4E0)
#define RPG_CLIENT_FATEMODULE__ONFATESHOPLEAVESCRSP_OFFSET UNITYSDK_OFFSET(0x1C19DD50)
#define RPG_CLIENT_FATEMODULE__ONFATESHOPLOCKGOODSSCRSP_OFFSET UNITYSDK_OFFSET(0x1C19DB40)
#define RPG_CLIENT_FATEMODULE__ONFATESHOPREFRESHGOODSSCRSP_OFFSET UNITYSDK_OFFSET(0x1C19D8D0)
#define RPG_CLIENT_FATEMODULE__ONFATESHOPSELLBUFFSCRSP_OFFSET UNITYSDK_OFFSET(0x1C19D6D0)
#define RPG_CLIENT_FATEMODULE__ONFATESTARTSCRSP_OFFSET UNITYSDK_OFFSET(0x1C19AD70)
#define RPG_CLIENT_FATEMODULE__ONFATESWITCHTOROUNDPREPARESTATE_OFFSET UNITYSDK_OFFSET(0x1C198740)
#define RPG_CLIENT_FATEMODULE__ONFATESWITCHTOROUNDSETTLESTATE_OFFSET UNITYSDK_OFFSET(0x1C1986E0)
#define RPG_CLIENT_FATEMODULE__ONFATESYNCACTIONRESULTSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1C19B3F0)
#define RPG_CLIENT_FATEMODULE__ONFATESYNCPENDINGACTIONSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1C19B4E0)
#define RPG_CLIENT_FATEMODULE__ONFATETAKEEXPREWARDSCRSP_OFFSET UNITYSDK_OFFSET(0x1CA1D4C0)
#define RPG_CLIENT_FATEMODULE__SYNCAREAINFO_OFFSET UNITYSDK_OFFSET(0x1CA1D6E0)
#define RPG_CLIENT_FATEMODULE__SYNCEXPREWARDINFO_OFFSET UNITYSDK_OFFSET(0x1CA1D7D0)
#define RPG_CLIENT_FATEMODULE__SYNCGAMEDATA_OFFSET UNITYSDK_OFFSET(0x1CA1D670)
#define RPG_CLIENT_FATEMODULE__SYNCSTATISTICSINFO_OFFSET UNITYSDK_OFFSET(0x1CA1D740)
#define RPG_CLIENT_FATEMODULE__TRYAUTOSHOWENTRANCEPAGE_OFFSET UNITYSDK_OFFSET(0x1C198C90)
#define RPG_CLIENT_FATEMODULE__TRYAUTOSHOWROUNDPREPAREPAGE_OFFSET UNITYSDK_OFFSET(0x1C198CF0)
#define RPG_CLIENT_FATEMODULE__TRYAUTOSHOWROUNDSETTLEPAGE_OFFSET UNITYSDK_OFFSET(0x1C198EA0)
#define RPG_CLIENT_FATEMODULE__TRYAUTOSHOWSETTLEPAGE_OFFSET UNITYSDK_OFFSET(0x1C198F10)

namespace RPG::Client
{
	inline static constexpr unsigned int FateModule_TypeDefinitionIndex = 64088;

	class FateModule : public ::RPG::Client::BaseModule
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::Enum_3_71AA90D596A09AC8_12, ::RPG::Client::FateGameStateType>** StaticGet__ServerStatus2GameState()
		{
			return (::System::Collections::Generic::Dictionary_2<::Enum_3_71AA90D596A09AC8_12, ::RPG::Client::FateGameStateType>**)Il2CppClass::FromTypeDefinitionIndex(FateModule_TypeDefinitionIndex)->GetStaticField(0x65390);
		}
		::RPG::Client::Promises::Promise* _FinishFirstSyncPromise; // 0x10
		::RPG::Client::FateHandbookInfo* _HandbookInfo; // 0x18
		::RPG::Client::FateAreaInfo* _AreaInfo; // 0x20
		::RPG::Client::FateGameData* _GameData; // 0x28
		::Class_1_61DFA98C734D0B78* _GameStateMachine; // 0x30
		::RPG::Client::FateExpRewardInfo* _ExpRewardInfo; // 0x38
		::Class_1_EA9A86514D37684F* _ActionDispatcher; // 0x40
		::RPG::Client::FateStatisticsInfo* _StatisticsInfo; // 0x48
		::RPG::Client::FateBGMState* _BGMState; // 0x50
		::System::Boolean _IsWaitShowSettlePage; // 0x58
		::System::Boolean _IsWaitShowRoundSettlePage; // 0x59
		::System::Boolean _IsWaitShowRoundPreparePage; // 0x5A
		::System::Boolean _IsPendingGameSettleSwitch; // 0x5B
		::Enum_3_71AA90D596A09AC8_12 _ServerGameStatus; // 0x5C
		::System::UInt32 DebugSpecificTalkID; // 0x60
		::System::Boolean _IsManualSettle; // 0x64
		::System::Boolean _IsWaitShowEntrancePage; // 0x65

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__CCTOR_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE_INIT_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE_ONRECONNECT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void _OnFateSwitchToRoundSettleState(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATESWITCHTOROUNDSETTLESTATE_OFFSET))(this, a1);
		}

		::System::Void _OnFateSwitchToRoundPrepareState(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATESWITCHTOROUNDPREPARESTATE_OFFSET))(this, a1);
		}

		::System::Void SwitchGameStateByServerStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE_SWITCHGAMESTATEBYSERVERSTATUS_OFFSET))(this);
		}

		::System::Void LeaveGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE_LEAVEGAME_OFFSET))(this);
		}

		::System::Void SettleGame(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE_SETTLEGAME_OFFSET))(this, a1);
		}

		::System::Void EnterBattle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE_ENTERBATTLE_OFFSET))(this);
		}

		::System::Void TryAutoShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE_TRYAUTOSHOW_OFFSET))(this);
		}

		::System::Void SetAutoShowEntrancePage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE_SETAUTOSHOWENTRANCEPAGE_OFFSET))(this);
		}

		::System::Void SetAutoShowRoundPreparePage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE_SETAUTOSHOWROUNDPREPAREPAGE_OFFSET))(this);
		}

		::System::Void SetWaitShowSettlePage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE_SETWAITSHOWSETTLEPAGE_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* FinishFirstSyncPromised()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE_FINISHFIRSTSYNCPROMISED_OFFSET))(this);
		}

		::System::Void _InitReq()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__INITREQ_OFFSET))(this);
		}

		::System::Void _TryAutoShowEntrancePage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__TRYAUTOSHOWENTRANCEPAGE_OFFSET))(this);
		}

		::System::Void _TryAutoShowRoundPreparePage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__TRYAUTOSHOWROUNDPREPAREPAGE_OFFSET))(this);
		}

		::System::Void _TryAutoShowRoundSettlePage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__TRYAUTOSHOWROUNDSETTLEPAGE_OFFSET))(this);
		}

		::System::Void _TryAutoShowSettlePage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__TRYAUTOSHOWSETTLEPAGE_OFFSET))(this);
		}

		::RPG::Client::FateGameData* get_GameData()
		{
			return ((::RPG::Client::FateGameData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE_GET_GAMEDATA_OFFSET))(this);
		}

		::RPG::Client::FateAreaInfo* get_AreaInfo()
		{
			return ((::RPG::Client::FateAreaInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE_GET_AREAINFO_OFFSET))(this);
		}

		::RPG::Client::FateStatisticsInfo* get_StatisticsInfo()
		{
			return ((::RPG::Client::FateStatisticsInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE_GET_STATISTICSINFO_OFFSET))(this);
		}

		::RPG::Client::FateHandbookInfo* get_HandbookInfo()
		{
			return ((::RPG::Client::FateHandbookInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE_GET_HANDBOOKINFO_OFFSET))(this);
		}

		::RPG::Client::FateExpRewardInfo* get_ExpRewardInfo()
		{
			return ((::RPG::Client::FateExpRewardInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE_GET_EXPREWARDINFO_OFFSET))(this);
		}

		::RPG::Client::FateBGMState* get_BGMState()
		{
			return ((::RPG::Client::FateBGMState*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE_GET_BGMSTATE_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnFateQueryScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATEQUERYSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnFateStartScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATESTARTSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnFateSettleScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATESETTLESCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnFateChangeLineupScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATECHANGELINEUPSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnFateSyncActionResultScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATESYNCACTIONRESULTSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnFateSyncPendingActionScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATESYNCPENDINGACTIONSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnFateHandlePendingActionScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATEHANDLEPENDINGACTIONSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnFateActionResultLevelStatusChange(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTLEVELSTATUSCHANGE_OFFSET))(this, a1);
		}

		::System::Void _OnFateActionResultLevelPhaseChange(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTLEVELPHASECHANGE_OFFSET))(this, a1);
		}

		::System::Void _OnFateActionResultMasterUpdate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTMASTERUPDATE_OFFSET))(this, a1);
		}

		::System::Void _OnFateActionResultAvailableSpecialAvatarUpdate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTAVAILABLESPECIALAVATARUPDATE_OFFSET))(this, a1);
		}

		::System::Void _OnFateActionResultParamHolderUpdate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTPARAMHOLDERUPDATE_OFFSET))(this, a1);
		}

		::System::Void _OnFateActionResultParamHolderRemove(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTPARAMHOLDERREMOVE_OFFSET))(this, a1);
		}

		::System::Void _OnFateActionResultBattlePrepare(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTBATTLEPREPARE_OFFSET))(this, a1);
		}

		::System::Void _OnFateActionResultBattleSettle(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTBATTLESETTLE_OFFSET))(this, a1);
		}

		::System::Void _OnFateActionResultBuffUpdate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTBUFFUPDATE_OFFSET))(this, a1);
		}

		::System::Void _OnFateActionResultBuffAmplificationUpdate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTBUFFAMPLIFICATIONUPDATE_OFFSET))(this, a1);
		}

		::System::Void _OnFateActionResultTraitUpdate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTTRAITUPDATE_OFFSET))(this, a1);
		}

		::System::Void _OnFateActionResultTraitBuffUpdate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTTRAITBUFFUPDATE_OFFSET))(this, a1);
		}

		::System::Void _OnFateActionResultTransferedMainTraitUpdate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTTRANSFEREDMAINTRAITUPDATE_OFFSET))(this, a1);
		}

		::System::Void _OnFateActionResultExtraBuffSlot(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTEXTRABUFFSLOT_OFFSET))(this, a1);
		}

		::System::Void _OnFateActionResultCoinChange(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTCOINCHANGE_OFFSET))(this, a1);
		}

		::System::Void _OnFateActionResultShopGoodsLockUpdate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTSHOPGOODSLOCKUPDATE_OFFSET))(this, a1);
		}

		::System::Void _OnFateActionResultShopMgrUpdate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTSHOPMGRUPDATE_OFFSET))(this, a1);
		}

		::System::Void _OnFateActionResultShopRefreshUpdate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTSHOPREFRESHUPDATE_OFFSET))(this, a1);
		}

		::System::Void _OnFateActionResultAddHougu(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTADDHOUGU_OFFSET))(this, a1);
		}

		::System::Void _OnFateActionResultRemoveHougu(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTREMOVEHOUGU_OFFSET))(this, a1);
		}

		::System::Void _OnFateActionResultAddReiju(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATEACTIONRESULTADDREIJU_OFFSET))(this, a1);
		}

		::System::Void _OnFatePendingActionHouguSelect(::System::UInt32 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATEPENDINGACTIONHOUGUSELECT_OFFSET))(this, a1, a2);
		}

		::System::Void _OnFatePendingActionReijuSelect(::System::UInt32 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATEPENDINGACTIONREIJUSELECT_OFFSET))(this, a1, a2);
		}

		::System::Void _OnFateShopBuyGoodsScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATESHOPBUYGOODSSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnFateShopSellBuffScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATESHOPSELLBUFFSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnFateShopRefreshGoodsScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATESHOPREFRESHGOODSSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnFateShopLockGoodsScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATESHOPLOCKGOODSSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnFateShopLeaveScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATESHOPLEAVESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnFateTakeExpRewardScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ONFATETAKEEXPREWARDSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _AddActionHandler(::Class_1_3BB6EC85B6B7001B_Enum_3_B7004B9B9B0ECE61 a1, ::Class_1_EA9A86514D37684F_Class_3_BE27BF221D2C7791_1* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3BB6EC85B6B7001B_Enum_3_B7004B9B9B0ECE61, ::Class_1_EA9A86514D37684F_Class_3_BE27BF221D2C7791_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ADDACTIONHANDLER_OFFSET))(this, a1, a2);
		}

		::System::Void _AddActionHandler_1(::Class_1_943319D103CADBC3_Enum_3_FCBB2C507E9B21A3_16 a1, ::Class_1_EA9A86514D37684F_Class_3_93D96BDF1D9E64B8* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_943319D103CADBC3_Enum_3_FCBB2C507E9B21A3_16, ::Class_1_EA9A86514D37684F_Class_3_93D96BDF1D9E64B8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__ADDACTIONHANDLER_1_OFFSET))(this, a1, a2);
		}

		::System::Void _SyncGameData(::Class_1_C9DFE5EE7107C629_11* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_11*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__SYNCGAMEDATA_OFFSET))(this, a1);
		}

		::System::Void _SyncAreaInfo(::Class_1_53AFE00DD1E71CE4* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_53AFE00DD1E71CE4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__SYNCAREAINFO_OFFSET))(this, a1);
		}

		::System::Void _SyncStatisticsInfo(::Class_1_9BED8C2CAC924ACC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9BED8C2CAC924ACC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__SYNCSTATISTICSINFO_OFFSET))(this, a1);
		}

		::System::Void _SyncExpRewardInfo(::Class_1_5A55E8BED8FA46A4_2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5A55E8BED8FA46A4_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__SYNCEXPREWARDINFO_OFFSET))(this, a1);
		}

		::System::Void _Init_b__1_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEMODULE__INIT_B__1_0_OFFSET))(this);
		}
	};
}
