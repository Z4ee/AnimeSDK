#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/GameCore/RogueSubMode.h"

class Class_1_09F9B94762F07206;
class Class_1_14E02E1F6D70E487_3;
class Class_1_6CF32442E7A80121_1;
class Class_1_7FF19F6206AF6DD7_16;
class Class_1_AD6EAABC8C018C94;
class Class_1_D17272E82AE804C2_186;
class Class_1_FBCD4FF549575A07;
class Class_1_FFBE0C992415AD1F_1;
namespace RPG::Client { class ChessRogueBoardChangeData; }
namespace RPG::Client { class ChessRogueData; }
namespace RPG::Client { class ChessRogueDimensionData; }
namespace RPG::Client { class ChessRogueExploreFinishInfo; }
namespace RPG::Client { class ChessRogueRewardData; }
namespace RPG::Client { class FuncEntranceData; }
namespace RPG::Client { class RogueNousDiceBranchDataItem; }
namespace RPG::Client { class RogueNousTalentInfo; }
namespace RPG::Client { class ScheduleData; }
namespace RPG::Client { class ScheduleTask; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHESSROGUEMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9FE50E0)
#define RPG_CLIENT_CHESSROGUEMODULE_GETCHESSBOARDPAGEFUNCENTRANCELIST_OFFSET UNITYSDK_OFFSET(0x9FE5D10)
#define RPG_CLIENT_CHESSROGUEMODULE_GETCURROOMID_OFFSET UNITYSDK_OFFSET(0x9FE5C20)
#define RPG_CLIENT_CHESSROGUEMODULE_GETCURSUBMODE_OFFSET UNITYSDK_OFFSET(0x9FE6110)
#define RPG_CLIENT_CHESSROGUEMODULE_GETGIVEUPOBTAINCOIN_OFFSET UNITYSDK_OFFSET(0x9FE5CB0)
#define RPG_CLIENT_CHESSROGUEMODULE_GETPREAEONMODIFIERVALUE_OFFSET UNITYSDK_OFFSET(0x9FE62A0)
#define RPG_CLIENT_CHESSROGUEMODULE_GET_WAITTRIGGERLEAVEBYAEONEFFECT_OFFSET UNITYSDK_OFFSET(0x9FE6F90)
#define RPG_CLIENT_CHESSROGUEMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x9FE4600)
#define RPG_CLIENT_CHESSROGUEMODULE_ISINLASTLAYER_OFFSET UNITYSDK_OFFSET(0x9FE6390)
#define RPG_CLIENT_CHESSROGUEMODULE_ISINSCHEDULE_OFFSET UNITYSDK_OFFSET(0x9FE5400)
#define RPG_CLIENT_CHESSROGUEMODULE_LEAVECHESSROGUEANDSAVE_OFFSET UNITYSDK_OFFSET(0x9FEC1D0)
#define RPG_CLIENT_CHESSROGUEMODULE_LEAVECHESSROGUE_OFFSET UNITYSDK_OFFSET(0x9FEC0C0)
#define RPG_CLIENT_CHESSROGUEMODULE_NEEDSHOWAEONMODIFIERCHANGEEFFECT_OFFSET UNITYSDK_OFFSET(0x9FE6260)
#define RPG_CLIENT_CHESSROGUEMODULE_ONLOGINFINISH_OFFSET UNITYSDK_OFFSET(0x9FE48A0)
#define RPG_CLIENT_CHESSROGUEMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x9FE5370)
#define RPG_CLIENT_CHESSROGUEMODULE_PREPAREALLCHESSROGUEMISSIONS_OFFSET UNITYSDK_OFFSET(0x9FE49E0)
#define RPG_CLIENT_CHESSROGUEMODULE_RESETWAITLEAVESTATUS_OFFSET UNITYSDK_OFFSET(0x9FE6220)
#define RPG_CLIENT_CHESSROGUEMODULE_SENDCHESSROGUESKIPTEACHINGLEVELCSREQ_OFFSET UNITYSDK_OFFSET(0x9FEC7A0)
#define RPG_CLIENT_CHESSROGUEMODULE_SENDEDITCHESSROGUENOUSBRANCHSURFACECSREQ_OFFSET UNITYSDK_OFFSET(0x9FEC6D0)
#define RPG_CLIENT_CHESSROGUEMODULE_SENDGETCHESSROGUESTORYINFOCSREQ_OFFSET UNITYSDK_OFFSET(0x9FEC500)
#define RPG_CLIENT_CHESSROGUEMODULE_SENDGIVEUPCHESSROGUEREQ_OFFSET UNITYSDK_OFFSET(0x9FEC3F0)
#define RPG_CLIENT_CHESSROGUEMODULE_SENDREENTERROGUEREQ_OFFSET UNITYSDK_OFFSET(0x9FEC2E0)
#define RPG_CLIENT_CHESSROGUEMODULE_SENDRESETCHESSROGUEDICEBRANCHSURFACECSREQ_OFFSET UNITYSDK_OFFSET(0x9FEC610)
#define RPG_CLIENT_CHESSROGUEMODULE_SETSHOWAEONMODIFIERCHANGEEFFECT_OFFSET UNITYSDK_OFFSET(0x9FE61E0)
#define RPG_CLIENT_CHESSROGUEMODULE_SET_WAITTRIGGERLEAVEBYAEONEFFECT_OFFSET UNITYSDK_OFFSET(0x9FE6FA0)
#define RPG_CLIENT_CHESSROGUEMODULE_TRYAUTOSHOW_OFFSET UNITYSDK_OFFSET(0x9FE55B0)
#define RPG_CLIENT_CHESSROGUEMODULE_TRYSHOWAREANAMEAFTERTELEPOT_OFFSET UNITYSDK_OFFSET(0x9FE62E0)
#define RPG_CLIENT_CHESSROGUEMODULE_TRYSHOWMAINPAGE_OFFSET UNITYSDK_OFFSET(0x9FE5BB0)
#define RPG_CLIENT_CHESSROGUEMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x9FE64A0)
#define RPG_CLIENT_CHESSROGUEMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x9FE6FB0)
#define RPG_CLIENT_CHESSROGUEMODULE__CHANGECHESSROGUEDICEPASSICEACCUMULATEVALUE_OFFSET UNITYSDK_OFFSET(0x9FEAE50)
#define RPG_CLIENT_CHESSROGUEMODULE__CREATELAYERFINISHINFO_OFFSET UNITYSDK_OFFSET(0x9FE6E90)
#define RPG_CLIENT_CHESSROGUEMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x9FE42E0)
#define RPG_CLIENT_CHESSROGUEMODULE__GETACTIVITYSCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0x9FE6AC0)
#define RPG_CLIENT_CHESSROGUEMODULE__GETMODULESCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0x9FE5460)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUECELLUPDATENOTIFY_OFFSET UNITYSDK_OFFSET(0x9FE9CF0)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUECHANGEAEONDIMENSIONNOTIFY_OFFSET UNITYSDK_OFFSET(0x9FEA5A0)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUECHEATROLLSCRSP_OFFSET UNITYSDK_OFFSET(0x9FEA3B0)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUECONFIRMROLLSCRSP_OFFSET UNITYSDK_OFFSET(0x9FEA450)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEENTERCELLSCRSP_OFFSET UNITYSDK_OFFSET(0x9FE8FC0)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEENTERNEXTLAYERSCRSP_OFFSET UNITYSDK_OFFSET(0x9FE95B0)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEENTERSCRSP_OFFSET UNITYSDK_OFFSET(0x9FE8380)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEGIVEUPSCRSP_OFFSET UNITYSDK_OFFSET(0x9FE8B70)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUELAYERSETTLEMENT_OFFSET UNITYSDK_OFFSET(0x9FEA670)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUELEAVESCRSP_OFFSET UNITYSDK_OFFSET(0x9FE85D0)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUENOUSDICESURFACEUNLOCKNOTIFY_OFFSET UNITYSDK_OFFSET(0x9FEBC50)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUENOUSDICEUPDATENOTIFY_OFFSET UNITYSDK_OFFSET(0x9FEBCE0)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUENOUSEDITDICESCRSP_OFFSET UNITYSDK_OFFSET(0x9FEBBB0)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUENOUSENABLEROGUETALENTSCRSP_OFFSET UNITYSDK_OFFSET(0x9FEBFC0)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUENOUSGETROGUETALENTINFOSCRSP_OFFSET UNITYSDK_OFFSET(0x9FEBF40)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEQUERYSCRSP_OFFSET UNITYSDK_OFFSET(0x9FE7A50)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEQUESTFINISHNOTIFY_OFFSET UNITYSDK_OFFSET(0x9FE94B0)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEQUITSCRSP_OFFSET UNITYSDK_OFFSET(0x9FE87F0)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEREROLLDICESCRSP_OFFSET UNITYSDK_OFFSET(0x9FEA310)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEROLLDICESCRSP_OFFSET UNITYSDK_OFFSET(0x9FEA270)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUESELECTCELLSCRSP_OFFSET UNITYSDK_OFFSET(0x9FE8EC0)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUESKIPTEACHINGLEVELSCRSP_OFFSET UNITYSDK_OFFSET(0x9FEC040)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUESTARTSCRSP_OFFSET UNITYSDK_OFFSET(0x9FE80A0)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEUPDATEACTIONPOINTSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x9FE7FA0)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEUPDATEAEONMODIFIERVALUESCNOTIFY_OFFSET UNITYSDK_OFFSET(0x9FEAC80)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEUPDATEALLOWEDSELECTCELLSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x9FEA180)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEUPDATEDICEINFOSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x9FEA500)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEUPDATEDICEPASSIVEACCUMULATEVALUESCNOTIFY_OFFSET UNITYSDK_OFFSET(0x9FEADE0)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEUPDATELEVELBASEINFOSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x9FE9AF0)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEUPDATEMONEYINFOSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x9FE7D10)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEUPDATEREVIVEINFOSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x9FEB710)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEUPDATEUNLOCKLEVELSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x9FE8E30)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDENHANCEROGUEBUFFSCRSP_OFFSET UNITYSDK_OFFSET(0x9FEB090)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDENTERCHESSROGUEAEONROOMSCRSP_OFFSET UNITYSDK_OFFSET(0x9FE9970)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDFINISHCHESSROGUESUBSTORYSCRSP_OFFSET UNITYSDK_OFFSET(0x9FEB870)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDGETCHESSROGUENOUSSTORYINFOSCRSP_OFFSET UNITYSDK_OFFSET(0x9FEBE70)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDGETCHESSROGUESTORYINFOSCRSP_OFFSET UNITYSDK_OFFSET(0x9FEB9B0)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDGETROGUEBUFFENHANCEINFOSCRSP_OFFSET UNITYSDK_OFFSET(0x9FEAFD0)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDPICKROGUEAVATARSCRSP_OFFSET UNITYSDK_OFFSET(0x9FEB1B0)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDREVIVEROGUEAVATARSCRSP_OFFSET UNITYSDK_OFFSET(0x9FEB4E0)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDROGUEMODIFIERADDNOTIFY_OFFSET UNITYSDK_OFFSET(0x9FEA970)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDROGUEMODIFIERDELNOTIFY_OFFSET UNITYSDK_OFFSET(0x9FEAA50)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDROGUEMODIFIERSELECTCELLSCRSP_OFFSET UNITYSDK_OFFSET(0x9FEABD0)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDROGUEMODIFIERSTAGESTARTNOTIFY_OFFSET UNITYSDK_OFFSET(0x9FEAF40)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDROGUEMODIFIERUPDATENOTIFY_OFFSET UNITYSDK_OFFSET(0x9FEAAF0)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDSELECTCHESSROGUESUBSTORYSCRSP_OFFSET UNITYSDK_OFFSET(0x9FEB7B0)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDSYNCCHESSROGUEMAINSTORYFINISHSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x9FEB8F0)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDSYNCCHESSROGUENOUSMAINSTORYSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x9FEBDF0)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDSYNCCHESSROGUENOUSSUBSTORYSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x9FEBD70)
#define RPG_CLIENT_CHESSROGUEMODULE__ONONSYNCROGUEVIRTUALITEM_OFFSET UNITYSDK_OFFSET(0x9FE6DD0)
#define RPG_CLIENT_CHESSROGUEMODULE__ONSCHEDULECONFIGREFRESH_OFFSET UNITYSDK_OFFSET(0x9FE6E30)
#define RPG_CLIENT_CHESSROGUEMODULE__ONSCHEDULESTARTS_OFFSET UNITYSDK_OFFSET(0x9FE6C50)
#define RPG_CLIENT_CHESSROGUEMODULE__ONSYNCCHESSROGUENOUSVALUESCNOTIFY_OFFSET UNITYSDK_OFFSET(0x9FEBAD0)
#define RPG_CLIENT_CHESSROGUEMODULE__SETTRANSITIONPERFORMANCETYPEINROGUE_OFFSET UNITYSDK_OFFSET(0x9FE93C0)
#define RPG_CLIENT_CHESSROGUEMODULE__SETTRANSITIONPERFORMANCETYPEOUTOFROGUE_OFFSET UNITYSDK_OFFSET(0x9FE82F0)
#define RPG_CLIENT_CHESSROGUEMODULE__SYNCCHESSROGUEBOARDCHANGEDATA_OFFSET UNITYSDK_OFFSET(0x9FE7E30)
#define RPG_CLIENT_CHESSROGUEMODULE__SYNCCHESSROGUEINFO_OFFSET UNITYSDK_OFFSET(0x9FE7B30)
#define RPG_CLIENT_CHESSROGUEMODULE__SYNCDICESELECTABLESTATUS_OFFSET UNITYSDK_OFFSET(0x9FE7F30)
#define RPG_CLIENT_CHESSROGUEMODULE__SYNCGAMEPLAYINFO_OFFSET UNITYSDK_OFFSET(0x9FE7C60)
#define RPG_CLIENT_CHESSROGUEMODULE__SYNCROGUECOIN_OFFSET UNITYSDK_OFFSET(0x9FE7DD0)
#define RPG_CLIENT_CHESSROGUEMODULE__TRYADDSCHEDULECALLBACK_OFFSET UNITYSDK_OFFSET(0x9FE69B0)
#define RPG_CLIENT_CHESSROGUEMODULE__TRYAUTOSHOWENTRANCEPAGE_OFFSET UNITYSDK_OFFSET(0x9FE57F0)
#define RPG_CLIENT_CHESSROGUEMODULE__TRYAUTOSHOWFINISHPAGE_OFFSET UNITYSDK_OFFSET(0x9FE5730)
#define RPG_CLIENT_CHESSROGUEMODULE__TRYAUTOSHOWLAYERSETTLEMENT_OFFSET UNITYSDK_OFFSET(0x9FE5790)
#define RPG_CLIENT_CHESSROGUEMODULE__TRYAUTOSHOWNEWLAYERPAGE_OFFSET UNITYSDK_OFFSET(0x9FE56E0)
#define RPG_CLIENT_CHESSROGUEMODULE__TRYAUTOSHOWROGUENOUSENTRANCEPAGE_OFFSET UNITYSDK_OFFSET(0x9FE59F0)
#define RPG_CLIENT_CHESSROGUEMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9FEC9A0)
#define RPG_CLIENT_CHESSROGUEMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x9FEC8B0)
#define RPG_CLIENT_CHESSROGUEMODULE___IFIXBASEPROXY_ONLOGINFINISH_OFFSET UNITYSDK_OFFSET(0x9FEC940)
#define RPG_CLIENT_CHESSROGUEMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x9FEC9B0)
#define RPG_CLIENT_CHESSROGUEMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x9FECA10)
#define RPG_CLIENT_CHESSROGUEMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x9FECA70)

namespace RPG::Client
{
	inline static constexpr unsigned int ChessRogueModule_TypeDefinitionIndex = 61639;

	class ChessRogueModule : public ::RPG::Client::BaseModule
	{
	public:
		// static const ::System::String* _ModuleScheduleKey; // 0x0
		// static const ::System::String* _ActivityScheduleKey; // 0x0
		::RPG::Client::ChessRogueBoardChangeData* ChessRogueBoardChangeData; // 0x10
		::RPG::Client::ChessRogueExploreFinishInfo* _FinishInfo; // 0x18
		::RPG::Client::ChessRogueRewardData* ChessRogueRewardData; // 0x20
		::Class_1_AD6EAABC8C018C94* _LayerFinishInfo; // 0x28
		::RPG::Client::ScheduleTask* _WaitOpenTask; // 0x30
		::System::Collections::Generic::List_1<::System::String*>* _ChessRogueMainMissionKeys; // 0x38
		::RPG::Client::ChessRogueDimensionData* ChessRogueDimensionData; // 0x40
		::RPG::Client::ChessRogueData* ChessRogueData; // 0x48
		::RPG::Client::RogueNousTalentInfo* NousTalentInfo; // 0x50
		::System::Collections::Generic::List_1<::System::String*>* _ChessRogueSubMissionKeys; // 0x58
		::Class_1_09F9B94762F07206* _NewLayerInfo; // 0x60
		::System::Boolean WaitAutoShowEntrancePage; // 0x68
		::System::Boolean WaitAutoShowRogueNousEntrancePage; // 0x69
		::System::Int32 _PreAeonModifierValue; // 0x6C
		::System::Boolean _NeedShowAeonModifierValueChangeEffect; // 0x70
		::System::Boolean _NeedShowAreaNameAfterTelepot; // 0x71
		::System::Boolean _WaitTriggerLeaveByAeonEffect_k__BackingField; // 0x72

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE_INIT_OFFSET))(this);
		}

		::System::Void OnLoginFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE_ONLOGINFINISH_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE_ONRECONNECT_OFFSET))(this);
		}

		::System::Boolean IsInSchedule()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE_ISINSCHEDULE_OFFSET))(this);
		}

		::System::Void TryAutoShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE_TRYAUTOSHOW_OFFSET))(this);
		}

		::System::Void TryShowMainPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE_TRYSHOWMAINPAGE_OFFSET))(this);
		}

		::System::UInt32 GetCurRoomID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE_GETCURROOMID_OFFSET))(this);
		}

		::System::UInt32 GetGiveUpObtainCoin()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE_GETGIVEUPOBTAINCOIN_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FuncEntranceData*>* GetChessBoardPageFuncEntranceList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FuncEntranceData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE_GETCHESSBOARDPAGEFUNCENTRANCELIST_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* PrepareAllChessRogueMissions()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE_PREPAREALLCHESSROGUEMISSIONS_OFFSET))(this);
		}

		::System::Void SetShowAeonModifierChangeEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE_SETSHOWAEONMODIFIERCHANGEEFFECT_OFFSET))(this);
		}

		::System::Void ResetWaitLeaveStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE_RESETWAITLEAVESTATUS_OFFSET))(this);
		}

		::System::Boolean NeedShowAeonModifierChangeEffect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE_NEEDSHOWAEONMODIFIERCHANGEEFFECT_OFFSET))(this);
		}

		::System::Int32 GetPreAeonModifierValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE_GETPREAEONMODIFIERVALUE_OFFSET))(this);
		}

		::System::Boolean TryShowAreaNameAfterTelepot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE_TRYSHOWAREANAMEAFTERTELEPOT_OFFSET))(this);
		}

		::System::Boolean IsInLastLayer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE_ISINLASTLAYER_OFFSET))(this);
		}

		::RPG::GameCore::RogueSubMode GetCurSubMode()
		{
			return ((::RPG::GameCore::RogueSubMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE_GETCURSUBMODE_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _TryAutoShowFinishPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__TRYAUTOSHOWFINISHPAGE_OFFSET))(this);
		}

		::System::Void _TryAutoShowNewLayerPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__TRYAUTOSHOWNEWLAYERPAGE_OFFSET))(this);
		}

		::System::Void _TryAutoShowLayerSettlement()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__TRYAUTOSHOWLAYERSETTLEMENT_OFFSET))(this);
		}

		::System::Void _TryAutoShowEntrancePage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__TRYAUTOSHOWENTRANCEPAGE_OFFSET))(this);
		}

		::System::Void _TryAutoShowRogueNousEntrancePage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__TRYAUTOSHOWROGUENOUSENTRANCEPAGE_OFFSET))(this);
		}

		::System::Void _TryAddScheduleCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__TRYADDSCHEDULECALLBACK_OFFSET))(this);
		}

		::RPG::Client::ScheduleData* _GetModuleScheduleData()
		{
			return ((::RPG::Client::ScheduleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__GETMODULESCHEDULEDATA_OFFSET))(this);
		}

		::RPG::Client::ScheduleData* _GetActivityScheduleData()
		{
			return ((::RPG::Client::ScheduleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__GETACTIVITYSCHEDULEDATA_OFFSET))(this);
		}

		::System::Void _OnScheduleStarts(::RPG::Client::ScheduleData* scheduleData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONSCHEDULESTARTS_OFFSET))(this, scheduleData);
		}

		::System::Void _OnOnSyncRogueVirtualItem(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONONSYNCROGUEVIRTUALITEM_OFFSET))(this, obj);
		}

		::System::Void _OnScheduleConfigRefresh(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONSCHEDULECONFIGREFRESH_OFFSET))(this, obj);
		}

		::Class_1_AD6EAABC8C018C94* _CreateLayerFinishInfo(::RPG::GameCore::RogueSubMode subMode, ::Class_1_6CF32442E7A80121_1* proto, ::System::Boolean isReconnect)
		{
			return ((::Class_1_AD6EAABC8C018C94*(*)(::PVOID, ::RPG::GameCore::RogueSubMode, ::Class_1_6CF32442E7A80121_1*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__CREATELAYERFINISHINFO_OFFSET))(this, subMode, proto, isReconnect);
		}

		::System::Boolean get_WaitTriggerLeaveByAeonEffect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE_GET_WAITTRIGGERLEAVEBYAEONEFFECT_OFFSET))(this);
		}

		::System::Void set_WaitTriggerLeaveByAeonEffect(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE_SET_WAITTRIGGERLEAVEBYAEONEFFECT_OFFSET))(this, value);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnCmdChessRogueQueryScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEQUERYSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdChessRogueUpdateMoneyInfoScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEUPDATEMONEYINFOSCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _SyncChessRogueInfo(::Class_1_14E02E1F6D70E487_3* chessRogueInfo, ::Class_1_7FF19F6206AF6DD7_16* beforeInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_14E02E1F6D70E487_3*, ::Class_1_7FF19F6206AF6DD7_16*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__SYNCCHESSROGUEINFO_OFFSET))(this, chessRogueInfo, beforeInfo);
		}

		::System::Void _SyncChessRogueBoardChangeData(::Class_1_14E02E1F6D70E487_3* chessRogueInfo, ::Class_1_7FF19F6206AF6DD7_16* beforeInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_14E02E1F6D70E487_3*, ::Class_1_7FF19F6206AF6DD7_16*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__SYNCCHESSROGUEBOARDCHANGEDATA_OFFSET))(this, chessRogueInfo, beforeInfo);
		}

		::System::Void _SyncGamePlayInfo(::Class_1_FBCD4FF549575A07* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FBCD4FF549575A07*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__SYNCGAMEPLAYINFO_OFFSET))(this, info);
		}

		::System::Void _SyncDiceSelectableStatus(::Class_1_FFBE0C992415AD1F_1* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FFBE0C992415AD1F_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__SYNCDICESELECTABLESTATUS_OFFSET))(this, info);
		}

		::System::Void _SyncRogueCoin(::Class_1_D17272E82AE804C2_186* moneyInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_186*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__SYNCROGUECOIN_OFFSET))(this, moneyInfo);
		}

		::System::Void _OnCmdChessRogueUpdateActionPointScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEUPDATEACTIONPOINTSCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdChessRogueStartScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUESTARTSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdChessRogueEnterScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEENTERSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdChessRogueLeaveScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUELEAVESCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdChessRogueQuitScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEQUITSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdChessRogueGiveUpScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEGIVEUPSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdChessRogueUpdateUnlockLevelScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEUPDATEUNLOCKLEVELSCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdChessRogueSelectCellScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUESELECTCELLSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdChessRogueEnterCellScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEENTERCELLSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _SetTransitionPerformanceTypeInRogue(::System::Boolean crossMap)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__SETTRANSITIONPERFORMANCETYPEINROGUE_OFFSET))(this, crossMap);
		}

		::System::Void _SetTransitionPerformanceTypeOutOfRogue(::System::Boolean isEnter)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__SETTRANSITIONPERFORMANCETYPEOUTOFROGUE_OFFSET))(this, isEnter);
		}

		::System::Void _OnCmdChessRogueQuestFinishNotify(::System::UInt16 cmd, ::System::Object* ntfObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEQUESTFINISHNOTIFY_OFFSET))(this, cmd, ntfObject);
		}

		::System::Void _OnCmdChessRogueEnterNextLayerScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEENTERNEXTLAYERSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdEnterChessRogueAeonRoomScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDENTERCHESSROGUEAEONROOMSCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnCmdChessRogueUpdateLevelBaseInfoScNotify(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEUPDATELEVELBASEINFOSCNOTIFY_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnCmdChessRogueCellUpdateNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUECELLUPDATENOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdChessRogueUpdateAllowedSelectCellScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEUPDATEALLOWEDSELECTCELLSCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdChessRogueRollDiceScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEROLLDICESCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdChessRogueReRollDiceScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEREROLLDICESCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdChessRogueCheatRollScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUECHEATROLLSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdChessRogueConfirmRollScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUECONFIRMROLLSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdChessRogueUpdateDiceInfoScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEUPDATEDICEINFOSCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdChessRogueChangeAeonDimensionNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUECHANGEAEONDIMENSIONNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdChessRogueLayerSettlement(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUELAYERSETTLEMENT_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdRogueModifierAddNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDROGUEMODIFIERADDNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdRogueModifierDelNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDROGUEMODIFIERDELNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdRogueModifierUpdateNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDROGUEMODIFIERUPDATENOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdRogueModifierSelectCellScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDROGUEMODIFIERSELECTCELLSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdChessRogueUpdateAeonModifierValueScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEUPDATEAEONMODIFIERVALUESCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdChessRogueUpdateDicePassiveAccumulateValueScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEUPDATEDICEPASSIVEACCUMULATEVALUESCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _ChangeChessRogueDicePassiceAccumulateValue(::System::Int32 curPassiveAccumulateValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__CHANGECHESSROGUEDICEPASSICEACCUMULATEVALUE_OFFSET))(this, curPassiveAccumulateValue);
		}

		::System::Void _OnCmdRogueModifierStageStartNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDROGUEMODIFIERSTAGESTARTNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdGetRogueBuffEnhanceInfoScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDGETROGUEBUFFENHANCEINFOSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdEnhanceRogueBuffScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDENHANCEROGUEBUFFSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdPickRogueAvatarScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDPICKROGUEAVATARSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdReviveRogueAvatarScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDREVIVEROGUEAVATARSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdChessRogueUpdateReviveInfoScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEUPDATEREVIVEINFOSCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdSelectChessRogueSubStoryScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDSELECTCHESSROGUESUBSTORYSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdFinishChessRogueSubStoryScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDFINISHCHESSROGUESUBSTORYSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdSyncChessRogueMainStoryFinishScNotify(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDSYNCCHESSROGUEMAINSTORYFINISHSCNOTIFY_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnCmdGetChessRogueStoryInfoScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDGETCHESSROGUESTORYINFOSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnSyncChessRogueNousValueScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONSYNCCHESSROGUENOUSVALUESCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdChessRogueNousEditDiceScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUENOUSEDITDICESCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdChessRogueNousDiceSurfaceUnlockNotify(::System::UInt16 cmd, ::System::Object* ntfObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUENOUSDICESURFACEUNLOCKNOTIFY_OFFSET))(this, cmd, ntfObject);
		}

		::System::Void _OnCmdChessRogueNousDiceUpdateNotify(::System::UInt16 cmd, ::System::Object* ntfObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUENOUSDICEUPDATENOTIFY_OFFSET))(this, cmd, ntfObject);
		}

		::System::Void _OnCmdSyncChessRogueNousSubStoryScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDSYNCCHESSROGUENOUSSUBSTORYSCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdSyncChessRogueNousMainStoryScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDSYNCCHESSROGUENOUSMAINSTORYSCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdGetChessRogueNousStoryInfoScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDGETCHESSROGUENOUSSTORYINFOSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdChessRogueNousGetRogueTalentInfoScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUENOUSGETROGUETALENTINFOSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdChessRogueNousEnableRogueTalentScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUENOUSENABLEROGUETALENTSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdChessRogueSkipTeachingLevelScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUESKIPTEACHINGLEVELSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void LeaveChessRogue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE_LEAVECHESSROGUE_OFFSET))(this);
		}

		::System::Void LeaveChessRogueAndSave()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE_LEAVECHESSROGUEANDSAVE_OFFSET))(this);
		}

		::System::Void SendReEnterRogueReq()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE_SENDREENTERROGUEREQ_OFFSET))(this);
		}

		::System::Void SendGiveUpChessRogueReq()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE_SENDGIVEUPCHESSROGUEREQ_OFFSET))(this);
		}

		::System::Void SendGetChessRogueStoryInfoCsReq()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE_SENDGETCHESSROGUESTORYINFOCSREQ_OFFSET))(this);
		}

		::System::Void SendResetChessRogueDiceBranchSurfaceCsReq(::RPG::Client::RogueNousDiceBranchDataItem* branch)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueNousDiceBranchDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE_SENDRESETCHESSROGUEDICEBRANCHSURFACECSREQ_OFFSET))(this, branch);
		}

		::System::Void SendEditChessRogueNousBranchSurfaceCsReq(::System::UInt32 branchID, ::System::UInt32 slotID, ::System::UInt32 surfaceID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE_SENDEDITCHESSROGUENOUSBRANCHSURFACECSREQ_OFFSET))(this, branchID, slotID, surfaceID);
		}

		::System::Void SendChessRogueSkipTeachingLevelCsReq()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE_SENDCHESSROGUESKIPTEACHINGLEVELCSREQ_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnLoginFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE___IFIXBASEPROXY_ONLOGINFINISH_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}
	};
}
