#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/GameCore/AssistantShowCaseType.h"

namespace RPG::Client { class AssistantTipsData; }
namespace RPG::Client { class ExpeditionBattleFlowViewModel; }
namespace RPG::Client { class ExpeditionBattleMapOverviewViewModel; }
namespace RPG::Client { class ExpeditionBattleRecommendLineupViewModel; }
namespace RPG::Client { class ExpeditionBattleSettleViewModel; }
namespace RPG::Client { class ExpeditionBattleStageDetailViewModel; }
namespace RPG::Client { class ExpeditionBattleTeamEditViewModel; }
namespace RPG::Client { class ScheduleData; }
namespace RPG::Client { class ScheduleTask; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class String; }

#define RPG_CLIENT_EXPEDITIONBATTLEMODULE_CREATEFLOWVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1B891810)
#define RPG_CLIENT_EXPEDITIONBATTLEMODULE_CREATEHISTORYBESTSETTLEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1B891740)
#define RPG_CLIENT_EXPEDITIONBATTLEMODULE_CREATEMAPOVERVIEWVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1B8913D0)
#define RPG_CLIENT_EXPEDITIONBATTLEMODULE_CREATERECOMMENDLINEUPVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1B8918E0)
#define RPG_CLIENT_EXPEDITIONBATTLEMODULE_CREATESETTLEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1B891680)
#define RPG_CLIENT_EXPEDITIONBATTLEMODULE_CREATESTAGEDETAILVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1B8914E0)
#define RPG_CLIENT_EXPEDITIONBATTLEMODULE_CREATETEAMEDITVIEWMODE_OFFSET UNITYSDK_OFFSET(0x1B8915B0)
#define RPG_CLIENT_EXPEDITIONBATTLEMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B8912D0)
#define RPG_CLIENT_EXPEDITIONBATTLEMODULE_GETSHOWTIPS_OFFSET UNITYSDK_OFFSET(0x1B891A10)
#define RPG_CLIENT_EXPEDITIONBATTLEMODULE_HASPASSLEVELLESS_OFFSET UNITYSDK_OFFSET(0x1B891F60)
#define RPG_CLIENT_EXPEDITIONBATTLEMODULE_HASSETTLEALLTRIAL_OFFSET UNITYSDK_OFFSET(0x1B891AC0)
#define RPG_CLIENT_EXPEDITIONBATTLEMODULE_HASSETTLEBUFFDATAPOOR_OFFSET UNITYSDK_OFFSET(0x1B891B90)
#define RPG_CLIENT_EXPEDITIONBATTLEMODULE_HASSETTLECOMBATPOWERPOOR_OFFSET UNITYSDK_OFFSET(0x1B891DC0)
#define RPG_CLIENT_EXPEDITIONBATTLEMODULE_HASSETTLEMEMBERDEAD_OFFSET UNITYSDK_OFFSET(0x1B891C60)
#define RPG_CLIENT_EXPEDITIONBATTLEMODULE_HASSETTLEVICTORY_OFFSET UNITYSDK_OFFSET(0x1B891E90)
#define RPG_CLIENT_EXPEDITIONBATTLEMODULE_HASTEAMVACANCY_OFFSET UNITYSDK_OFFSET(0x1B8920D0)
#define RPG_CLIENT_EXPEDITIONBATTLEMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x1B890E10)
#define RPG_CLIENT_EXPEDITIONBATTLEMODULE_ONLOGINFINISH_OFFSET UNITYSDK_OFFSET(0x1B890EE0)
#define RPG_CLIENT_EXPEDITIONBATTLEMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x1B8921A0)
#define RPG_CLIENT_EXPEDITIONBATTLEMODULE_ONTEMPBATTLEPAGEDISPOSED_OFFSET UNITYSDK_OFFSET(0x1B8924F0)
#define RPG_CLIENT_EXPEDITIONBATTLEMODULE_ONTEMPBATTLEPAGESHOWN_OFFSET UNITYSDK_OFFSET(0x1B892490)
#define RPG_CLIENT_EXPEDITIONBATTLEMODULE_STARTBATTLE_OFFSET UNITYSDK_OFFSET(0x1B891320)
#define RPG_CLIENT_EXPEDITIONBATTLEMODULE_TRYAUTOSHOW_OFFSET UNITYSDK_OFFSET(0x1B8922B0)
#define RPG_CLIENT_EXPEDITIONBATTLEMODULE__CLEARWAITFOROPENSCHEDULE_OFFSET UNITYSDK_OFFSET(0x1B891230)
#define RPG_CLIENT_EXPEDITIONBATTLEMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B892550)
#define RPG_CLIENT_EXPEDITIONBATTLEMODULE__OPENTEAMEDITPAGE_OFFSET UNITYSDK_OFFSET(0x1B892320)
#define RPG_CLIENT_EXPEDITIONBATTLEMODULE__REGISTERWAITFOROPENSCHEDULE_OFFSET UNITYSDK_OFFSET(0x1B890F50)
#define RPG_CLIENT_EXPEDITIONBATTLEMODULE__SENDINITREQUEST_OFFSET UNITYSDK_OFFSET(0x1B891190)
#define RPG_CLIENT_EXPEDITIONBATTLEMODULE__SHOULDMARKRESTORETEAMEDITONRECONNECT_OFFSET UNITYSDK_OFFSET(0x1B892250)
#define RPG_CLIENT_EXPEDITIONBATTLEMODULE___REGISTERWAITFOROPENSCHEDULE_B__3_0_OFFSET UNITYSDK_OFFSET(0x1B892570)

namespace RPG::Client
{
	inline static constexpr unsigned int ExpeditionBattleModule_TypeDefinitionIndex = 63922;

	class ExpeditionBattleModule : public ::RPG::Client::BaseModule
	{
	public:
		// static const ::System::String* _ACTIVITY_MODULE_ID_KEY; // 0x0
		::RPG::Client::ScheduleTask* _WaitForOpenScheduleTask; // 0x10
		::System::UInt32 _CurrentSettleRouteID; // 0x18
		::System::UInt32 _tempBattlePageMapID; // 0x1C
		::System::Boolean _isTempBattlePageVisible; // 0x20
		::System::Boolean _shouldRestoreTeamEditOnAutoShow; // 0x21

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEMODULE__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEMODULE_INIT_OFFSET))(this);
		}

		::System::Void OnLoginFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEMODULE_ONLOGINFINISH_OFFSET))(this);
		}

		::System::Void _SendInitRequest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEMODULE__SENDINITREQUEST_OFFSET))(this);
		}

		::System::Void _RegisterWaitForOpenSchedule()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEMODULE__REGISTERWAITFOROPENSCHEDULE_OFFSET))(this);
		}

		::System::Void _ClearWaitForOpenSchedule()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEMODULE__CLEARWAITFOROPENSCHEDULE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEMODULE_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* StartBattle(::System::UInt32 a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEMODULE_STARTBATTLE_OFFSET))(this, a1);
		}

		::RPG::Client::ExpeditionBattleMapOverviewViewModel* CreateMapOverviewViewModel()
		{
			return ((::RPG::Client::ExpeditionBattleMapOverviewViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEMODULE_CREATEMAPOVERVIEWVIEWMODEL_OFFSET))(this);
		}

		::RPG::Client::ExpeditionBattleStageDetailViewModel* CreateStageDetailViewModel(::System::UInt32 a1)
		{
			return ((::RPG::Client::ExpeditionBattleStageDetailViewModel*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEMODULE_CREATESTAGEDETAILVIEWMODEL_OFFSET))(this, a1);
		}

		::RPG::Client::ExpeditionBattleTeamEditViewModel* CreateTeamEditViewMode(::System::UInt32 a1)
		{
			return ((::RPG::Client::ExpeditionBattleTeamEditViewModel*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEMODULE_CREATETEAMEDITVIEWMODE_OFFSET))(this, a1);
		}

		::RPG::Client::ExpeditionBattleSettleViewModel* CreateSettleViewModel()
		{
			return ((::RPG::Client::ExpeditionBattleSettleViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEMODULE_CREATESETTLEVIEWMODEL_OFFSET))(this);
		}

		::RPG::Client::ExpeditionBattleSettleViewModel* CreateHistoryBestSettleViewModel(::System::UInt32 a1)
		{
			return ((::RPG::Client::ExpeditionBattleSettleViewModel*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEMODULE_CREATEHISTORYBESTSETTLEVIEWMODEL_OFFSET))(this, a1);
		}

		::RPG::Client::ExpeditionBattleFlowViewModel* CreateFlowViewModel(::System::UInt32 a1)
		{
			return ((::RPG::Client::ExpeditionBattleFlowViewModel*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEMODULE_CREATEFLOWVIEWMODEL_OFFSET))(this, a1);
		}

		::RPG::Client::ExpeditionBattleRecommendLineupViewModel* CreateRecommendLineupViewModel(::System::UInt32 a1)
		{
			return ((::RPG::Client::ExpeditionBattleRecommendLineupViewModel*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEMODULE_CREATERECOMMENDLINEUPVIEWMODEL_OFFSET))(this, a1);
		}

		::RPG::Client::AssistantTipsData* GetShowTips(::RPG::GameCore::AssistantShowCaseType a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::AssistantTipsData*(*)(::PVOID, ::RPG::GameCore::AssistantShowCaseType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEMODULE_GETSHOWTIPS_OFFSET))(this, a1, a2);
		}

		::System::Boolean HasSettleAllTrial()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEMODULE_HASSETTLEALLTRIAL_OFFSET))(this);
		}

		::System::Boolean HasSettleBuffDataPoor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEMODULE_HASSETTLEBUFFDATAPOOR_OFFSET))(this);
		}

		::System::Boolean HasSettleMemberDead()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEMODULE_HASSETTLEMEMBERDEAD_OFFSET))(this);
		}

		::System::Boolean HasSettleCombatPowerPoor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEMODULE_HASSETTLECOMBATPOWERPOOR_OFFSET))(this);
		}

		::System::Boolean HasSettleVictory()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEMODULE_HASSETTLEVICTORY_OFFSET))(this);
		}

		::System::Boolean HasPassLevelLess(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEMODULE_HASPASSLEVELLESS_OFFSET))(this, a1);
		}

		::System::Boolean HasTeamVacancy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEMODULE_HASTEAMVACANCY_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEMODULE_ONRECONNECT_OFFSET))(this);
		}

		::System::Void TryAutoShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEMODULE_TRYAUTOSHOW_OFFSET))(this);
		}

		::System::Void OnTempBattlePageShown(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEMODULE_ONTEMPBATTLEPAGESHOWN_OFFSET))(this, a1);
		}

		::System::Void OnTempBattlePageDisposed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEMODULE_ONTEMPBATTLEPAGEDISPOSED_OFFSET))(this);
		}

		::System::Void _OpenTeamEditPage(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEMODULE__OPENTEAMEDITPAGE_OFFSET))(this, a1);
		}

		::System::Boolean _ShouldMarkRestoreTeamEditOnReconnect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEMODULE__SHOULDMARKRESTORETEAMEDITONRECONNECT_OFFSET))(this);
		}

		::System::Void __RegisterWaitForOpenSchedule_b__3_0(::RPG::Client::ScheduleData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEMODULE___REGISTERWAITFOROPENSCHEDULE_B__3_0_OFFSET))(this, a1);
		}
	};
}
