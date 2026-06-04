#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/GameCore/RogueSubMode.h"

class Class_1_09F9B94762F07206;
class Class_1_14E02E1F6D70E487_3;
class Class_1_6CF32442E7A80121;
class Class_1_7FF19F6206AF6DD7_17;
class Class_1_AD6EAABC8C018C94;
class Class_1_D17272E82AE804C2_200;
class Class_1_FBCD4FF549575A07;
class Class_1_FFBE0C992415AD1F;
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

#define RPG_CLIENT_CHESSROGUEMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB65BA10)
#define RPG_CLIENT_CHESSROGUEMODULE_GETCHESSBOARDPAGEFUNCENTRANCELIST_OFFSET UNITYSDK_OFFSET(0xB65C650)
#define RPG_CLIENT_CHESSROGUEMODULE_GETCURROOMID_OFFSET UNITYSDK_OFFSET(0xB65C560)
#define RPG_CLIENT_CHESSROGUEMODULE_GETCURSUBMODE_OFFSET UNITYSDK_OFFSET(0xB65C990)
#define RPG_CLIENT_CHESSROGUEMODULE_GETGIVEUPOBTAINCOIN_OFFSET UNITYSDK_OFFSET(0xB65C5F0)
#define RPG_CLIENT_CHESSROGUEMODULE_GETPREAEONMODIFIERVALUE_OFFSET UNITYSDK_OFFSET(0xB65CBC0)
#define RPG_CLIENT_CHESSROGUEMODULE_GET_WAITTRIGGERLEAVEBYAEONEFFECT_OFFSET UNITYSDK_OFFSET(0xB65D960)
#define RPG_CLIENT_CHESSROGUEMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xB65AF80)
#define RPG_CLIENT_CHESSROGUEMODULE_ISINLASTLAYER_OFFSET UNITYSDK_OFFSET(0xB65CCB0)
#define RPG_CLIENT_CHESSROGUEMODULE_ISINSCHEDULE_OFFSET UNITYSDK_OFFSET(0xB65BD40)
#define RPG_CLIENT_CHESSROGUEMODULE_LEAVECHESSROGUEANDSAVE_OFFSET UNITYSDK_OFFSET(0xB664140)
#define RPG_CLIENT_CHESSROGUEMODULE_LEAVECHESSROGUE_OFFSET UNITYSDK_OFFSET(0xB664030)
#define RPG_CLIENT_CHESSROGUEMODULE_NEEDSHOWAEONMODIFIERCHANGEEFFECT_OFFSET UNITYSDK_OFFSET(0xB65CB80)
#define RPG_CLIENT_CHESSROGUEMODULE_ONLOGINFINISH_OFFSET UNITYSDK_OFFSET(0xB65B240)
#define RPG_CLIENT_CHESSROGUEMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xB65BCB0)
#define RPG_CLIENT_CHESSROGUEMODULE_PREPAREALLCHESSROGUEMISSIONS_OFFSET UNITYSDK_OFFSET(0xB65B3B0)
#define RPG_CLIENT_CHESSROGUEMODULE_RESETWAITLEAVESTATUS_OFFSET UNITYSDK_OFFSET(0xB65CB40)
#define RPG_CLIENT_CHESSROGUEMODULE_SENDCHESSROGUESKIPTEACHINGLEVELCSREQ_OFFSET UNITYSDK_OFFSET(0xB664710)
#define RPG_CLIENT_CHESSROGUEMODULE_SENDEDITCHESSROGUENOUSBRANCHSURFACECSREQ_OFFSET UNITYSDK_OFFSET(0xB664640)
#define RPG_CLIENT_CHESSROGUEMODULE_SENDGETCHESSROGUESTORYINFOCSREQ_OFFSET UNITYSDK_OFFSET(0xB664470)
#define RPG_CLIENT_CHESSROGUEMODULE_SENDGIVEUPCHESSROGUEREQ_OFFSET UNITYSDK_OFFSET(0xB664360)
#define RPG_CLIENT_CHESSROGUEMODULE_SENDREENTERROGUEREQ_OFFSET UNITYSDK_OFFSET(0xB664250)
#define RPG_CLIENT_CHESSROGUEMODULE_SENDRESETCHESSROGUEDICEBRANCHSURFACECSREQ_OFFSET UNITYSDK_OFFSET(0xB664580)
#define RPG_CLIENT_CHESSROGUEMODULE_SETSHOWAEONMODIFIERCHANGEEFFECT_OFFSET UNITYSDK_OFFSET(0xB65CB00)
#define RPG_CLIENT_CHESSROGUEMODULE_SET_WAITTRIGGERLEAVEBYAEONEFFECT_OFFSET UNITYSDK_OFFSET(0xB65D970)
#define RPG_CLIENT_CHESSROGUEMODULE_TRYAUTOSHOW_OFFSET UNITYSDK_OFFSET(0xB65BEF0)
#define RPG_CLIENT_CHESSROGUEMODULE_TRYSHOWAREANAMEAFTERTELEPOT_OFFSET UNITYSDK_OFFSET(0xB65CC00)
#define RPG_CLIENT_CHESSROGUEMODULE_TRYSHOWMAINPAGE_OFFSET UNITYSDK_OFFSET(0xB65C4F0)
#define RPG_CLIENT_CHESSROGUEMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xB65CED0)
#define RPG_CLIENT_CHESSROGUEMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xB65D980)
#define RPG_CLIENT_CHESSROGUEMODULE__CHANGECHESSROGUEDICEPASSICEACCUMULATEVALUE_OFFSET UNITYSDK_OFFSET(0xB662DA0)
#define RPG_CLIENT_CHESSROGUEMODULE__CREATELAYERFINISHINFO_OFFSET UNITYSDK_OFFSET(0xB65D860)
#define RPG_CLIENT_CHESSROGUEMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xB65A5A0)
#define RPG_CLIENT_CHESSROGUEMODULE__GETACTIVITYSCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0xB65D490)
#define RPG_CLIENT_CHESSROGUEMODULE__GETMODULESCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0xB65BDA0)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUECELLUPDATENOTIFY_OFFSET UNITYSDK_OFFSET(0xB661C60)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUECHANGEAEONDIMENSIONNOTIFY_OFFSET UNITYSDK_OFFSET(0xB6625D0)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUECHEATROLLSCRSP_OFFSET UNITYSDK_OFFSET(0xB6623E0)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUECONFIRMROLLSCRSP_OFFSET UNITYSDK_OFFSET(0xB662480)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEENTERCELLSCRSP_OFFSET UNITYSDK_OFFSET(0xB660DE0)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEENTERNEXTLAYERSCRSP_OFFSET UNITYSDK_OFFSET(0xB661420)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEENTERSCRSP_OFFSET UNITYSDK_OFFSET(0xB65FFF0)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEGIVEUPSCRSP_OFFSET UNITYSDK_OFFSET(0xB6608F0)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUELAYERSETTLEMENT_OFFSET UNITYSDK_OFFSET(0xB6626A0)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUELEAVESCRSP_OFFSET UNITYSDK_OFFSET(0xB660240)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUENOUSDICESURFACEUNLOCKNOTIFY_OFFSET UNITYSDK_OFFSET(0xB663BC0)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUENOUSDICEUPDATENOTIFY_OFFSET UNITYSDK_OFFSET(0xB663C50)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUENOUSEDITDICESCRSP_OFFSET UNITYSDK_OFFSET(0xB663B20)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUENOUSENABLEROGUETALENTSCRSP_OFFSET UNITYSDK_OFFSET(0xB663F30)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUENOUSGETROGUETALENTINFOSCRSP_OFFSET UNITYSDK_OFFSET(0xB663EB0)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEQUERYSCRSP_OFFSET UNITYSDK_OFFSET(0xB65F6B0)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEQUESTFINISHNOTIFY_OFFSET UNITYSDK_OFFSET(0xB6612D0)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEQUITSCRSP_OFFSET UNITYSDK_OFFSET(0xB6604E0)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEREROLLDICESCRSP_OFFSET UNITYSDK_OFFSET(0xB662340)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEROLLDICESCRSP_OFFSET UNITYSDK_OFFSET(0xB6622A0)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUESELECTCELLSCRSP_OFFSET UNITYSDK_OFFSET(0xB660CE0)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUESKIPTEACHINGLEVELSCRSP_OFFSET UNITYSDK_OFFSET(0xB663FB0)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUESTARTSCRSP_OFFSET UNITYSDK_OFFSET(0xB65FD10)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEUPDATEACTIONPOINTSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xB65FC10)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEUPDATEAEONMODIFIERVALUESCNOTIFY_OFFSET UNITYSDK_OFFSET(0xB662BD0)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEUPDATEALLOWEDSELECTCELLSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xB662150)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEUPDATEDICEINFOSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xB662530)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEUPDATEDICEPASSIVEACCUMULATEVALUESCNOTIFY_OFFSET UNITYSDK_OFFSET(0xB662D30)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEUPDATELEVELBASEINFOSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xB661960)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEUPDATEMONEYINFOSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xB65F970)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEUPDATEREVIVEINFOSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xB663680)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEUPDATEUNLOCKLEVELSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xB660C50)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDENHANCEROGUEBUFFSCRSP_OFFSET UNITYSDK_OFFSET(0xB662FE0)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDENTERCHESSROGUEAEONROOMSCRSP_OFFSET UNITYSDK_OFFSET(0xB6617E0)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDFINISHCHESSROGUESUBSTORYSCRSP_OFFSET UNITYSDK_OFFSET(0xB6637E0)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDGETCHESSROGUENOUSSTORYINFOSCRSP_OFFSET UNITYSDK_OFFSET(0xB663DE0)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDGETCHESSROGUESTORYINFOSCRSP_OFFSET UNITYSDK_OFFSET(0xB663920)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDGETROGUEBUFFENHANCEINFOSCRSP_OFFSET UNITYSDK_OFFSET(0xB662F20)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDPICKROGUEAVATARSCRSP_OFFSET UNITYSDK_OFFSET(0xB663100)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDREVIVEROGUEAVATARSCRSP_OFFSET UNITYSDK_OFFSET(0xB663430)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDROGUEMODIFIERADDNOTIFY_OFFSET UNITYSDK_OFFSET(0xB6628E0)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDROGUEMODIFIERDELNOTIFY_OFFSET UNITYSDK_OFFSET(0xB6629B0)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDROGUEMODIFIERSELECTCELLSCRSP_OFFSET UNITYSDK_OFFSET(0xB662B20)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDROGUEMODIFIERSTAGESTARTNOTIFY_OFFSET UNITYSDK_OFFSET(0xB662E90)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDROGUEMODIFIERUPDATENOTIFY_OFFSET UNITYSDK_OFFSET(0xB662A50)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDSELECTCHESSROGUESUBSTORYSCRSP_OFFSET UNITYSDK_OFFSET(0xB663720)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDSYNCCHESSROGUEMAINSTORYFINISHSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xB663860)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDSYNCCHESSROGUENOUSMAINSTORYSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xB663D60)
#define RPG_CLIENT_CHESSROGUEMODULE__ONCMDSYNCCHESSROGUENOUSSUBSTORYSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xB663CE0)
#define RPG_CLIENT_CHESSROGUEMODULE__ONONSYNCROGUEVIRTUALITEM_OFFSET UNITYSDK_OFFSET(0xB65D7A0)
#define RPG_CLIENT_CHESSROGUEMODULE__ONSCHEDULECONFIGREFRESH_OFFSET UNITYSDK_OFFSET(0xB65D800)
#define RPG_CLIENT_CHESSROGUEMODULE__ONSCHEDULESTARTS_OFFSET UNITYSDK_OFFSET(0xB65D620)
#define RPG_CLIENT_CHESSROGUEMODULE__ONSYNCCHESSROGUENOUSVALUESCNOTIFY_OFFSET UNITYSDK_OFFSET(0xB663A40)
#define RPG_CLIENT_CHESSROGUEMODULE__SETTRANSITIONPERFORMANCETYPEINROGUE_OFFSET UNITYSDK_OFFSET(0xB6611E0)
#define RPG_CLIENT_CHESSROGUEMODULE__SETTRANSITIONPERFORMANCETYPEOUTOFROGUE_OFFSET UNITYSDK_OFFSET(0xB65FF60)
#define RPG_CLIENT_CHESSROGUEMODULE__SYNCCHESSROGUEBOARDCHANGEDATA_OFFSET UNITYSDK_OFFSET(0xB65FA90)
#define RPG_CLIENT_CHESSROGUEMODULE__SYNCCHESSROGUEINFO_OFFSET UNITYSDK_OFFSET(0xB65F790)
#define RPG_CLIENT_CHESSROGUEMODULE__SYNCDICESELECTABLESTATUS_OFFSET UNITYSDK_OFFSET(0xB65FBA0)
#define RPG_CLIENT_CHESSROGUEMODULE__SYNCGAMEPLAYINFO_OFFSET UNITYSDK_OFFSET(0xB65F8C0)
#define RPG_CLIENT_CHESSROGUEMODULE__SYNCROGUECOIN_OFFSET UNITYSDK_OFFSET(0xB65FA30)
#define RPG_CLIENT_CHESSROGUEMODULE__TRYADDSCHEDULECALLBACK_OFFSET UNITYSDK_OFFSET(0xB65D370)
#define RPG_CLIENT_CHESSROGUEMODULE__TRYAUTOSHOWENTRANCEPAGE_OFFSET UNITYSDK_OFFSET(0xB65C130)
#define RPG_CLIENT_CHESSROGUEMODULE__TRYAUTOSHOWFINISHPAGE_OFFSET UNITYSDK_OFFSET(0xB65C070)
#define RPG_CLIENT_CHESSROGUEMODULE__TRYAUTOSHOWLAYERSETTLEMENT_OFFSET UNITYSDK_OFFSET(0xB65C0D0)
#define RPG_CLIENT_CHESSROGUEMODULE__TRYAUTOSHOWNEWLAYERPAGE_OFFSET UNITYSDK_OFFSET(0xB65C020)
#define RPG_CLIENT_CHESSROGUEMODULE__TRYAUTOSHOWROGUENOUSENTRANCEPAGE_OFFSET UNITYSDK_OFFSET(0xB65C330)
#define RPG_CLIENT_CHESSROGUEMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB664900)
#define RPG_CLIENT_CHESSROGUEMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xB664820)
#define RPG_CLIENT_CHESSROGUEMODULE___IFIXBASEPROXY_ONLOGINFINISH_OFFSET UNITYSDK_OFFSET(0xB6648A0)
#define RPG_CLIENT_CHESSROGUEMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xB664910)
#define RPG_CLIENT_CHESSROGUEMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xB664970)
#define RPG_CLIENT_CHESSROGUEMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xB6649D0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChessRogueModule_TypeDefinitionIndex = 62572;

	class ChessRogueModule : public ::RPG::Client::BaseModule
	{
	public:
		// static const ::System::String* _ModuleScheduleKey; // 0x0
		// static const ::System::String* _ActivityScheduleKey; // 0x0
		::Class_1_AD6EAABC8C018C94* _LayerFinishInfo; // 0x10
		::RPG::Client::RogueNousTalentInfo* NousTalentInfo; // 0x18
		::RPG::Client::ChessRogueExploreFinishInfo* _FinishInfo; // 0x20
		::RPG::Client::ScheduleTask* _WaitOpenTask; // 0x28
		::System::Collections::Generic::List_1<::System::String*>* _ChessRogueMainMissionKeys; // 0x30
		::RPG::Client::ChessRogueDimensionData* ChessRogueDimensionData; // 0x38
		::RPG::Client::ChessRogueRewardData* ChessRogueRewardData; // 0x40
		::RPG::Client::ChessRogueBoardChangeData* ChessRogueBoardChangeData; // 0x48
		::System::Collections::Generic::List_1<::System::String*>* _ChessRogueSubMissionKeys; // 0x50
		::Class_1_09F9B94762F07206* _NewLayerInfo; // 0x58
		::RPG::Client::ChessRogueData* ChessRogueData; // 0x60
		::System::Boolean WaitAutoShowRogueNousEntrancePage; // 0x68
		::System::Boolean _NeedShowAeonModifierValueChangeEffect; // 0x69
		::System::Boolean _NeedShowAreaNameAfterTelepot; // 0x6A
		::System::Int32 _PreAeonModifierValue; // 0x6C
		::System::Boolean WaitAutoShowEntrancePage; // 0x70
		::System::Boolean _WaitTriggerLeaveByAeonEffect_k__BackingField; // 0x71

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

		::System::Void _OnScheduleStarts(::RPG::Client::ScheduleData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONSCHEDULESTARTS_OFFSET))(this, a1);
		}

		::System::Void _OnOnSyncRogueVirtualItem(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONONSYNCROGUEVIRTUALITEM_OFFSET))(this, a1);
		}

		::System::Void _OnScheduleConfigRefresh(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONSCHEDULECONFIGREFRESH_OFFSET))(this, a1);
		}

		::Class_1_AD6EAABC8C018C94* _CreateLayerFinishInfo(::RPG::GameCore::RogueSubMode a1, ::Class_1_6CF32442E7A80121* a2, ::System::Boolean a3)
		{
			return ((::Class_1_AD6EAABC8C018C94*(*)(::PVOID, ::RPG::GameCore::RogueSubMode, ::Class_1_6CF32442E7A80121*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__CREATELAYERFINISHINFO_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean get_WaitTriggerLeaveByAeonEffect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE_GET_WAITTRIGGERLEAVEBYAEONEFFECT_OFFSET))(this);
		}

		::System::Void set_WaitTriggerLeaveByAeonEffect(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE_SET_WAITTRIGGERLEAVEBYAEONEFFECT_OFFSET))(this, a1);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnCmdChessRogueQueryScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEQUERYSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdChessRogueUpdateMoneyInfoScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEUPDATEMONEYINFOSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _SyncChessRogueInfo(::Class_1_14E02E1F6D70E487_3* a1, ::Class_1_7FF19F6206AF6DD7_17* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_14E02E1F6D70E487_3*, ::Class_1_7FF19F6206AF6DD7_17*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__SYNCCHESSROGUEINFO_OFFSET))(this, a1, a2);
		}

		::System::Void _SyncChessRogueBoardChangeData(::Class_1_14E02E1F6D70E487_3* a1, ::Class_1_7FF19F6206AF6DD7_17* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_14E02E1F6D70E487_3*, ::Class_1_7FF19F6206AF6DD7_17*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__SYNCCHESSROGUEBOARDCHANGEDATA_OFFSET))(this, a1, a2);
		}

		::System::Void _SyncGamePlayInfo(::Class_1_FBCD4FF549575A07* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FBCD4FF549575A07*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__SYNCGAMEPLAYINFO_OFFSET))(this, a1);
		}

		::System::Void _SyncDiceSelectableStatus(::Class_1_FFBE0C992415AD1F* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FFBE0C992415AD1F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__SYNCDICESELECTABLESTATUS_OFFSET))(this, a1);
		}

		::System::Void _SyncRogueCoin(::Class_1_D17272E82AE804C2_200* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_200*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__SYNCROGUECOIN_OFFSET))(this, a1);
		}

		::System::Void _OnCmdChessRogueUpdateActionPointScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEUPDATEACTIONPOINTSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdChessRogueStartScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUESTARTSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdChessRogueEnterScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEENTERSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdChessRogueLeaveScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUELEAVESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdChessRogueQuitScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEQUITSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdChessRogueGiveUpScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEGIVEUPSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdChessRogueUpdateUnlockLevelScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEUPDATEUNLOCKLEVELSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdChessRogueSelectCellScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUESELECTCELLSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdChessRogueEnterCellScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEENTERCELLSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _SetTransitionPerformanceTypeInRogue(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__SETTRANSITIONPERFORMANCETYPEINROGUE_OFFSET))(this, a1);
		}

		::System::Void _SetTransitionPerformanceTypeOutOfRogue(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__SETTRANSITIONPERFORMANCETYPEOUTOFROGUE_OFFSET))(this, a1);
		}

		::System::Void _OnCmdChessRogueQuestFinishNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEQUESTFINISHNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdChessRogueEnterNextLayerScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEENTERNEXTLAYERSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdEnterChessRogueAeonRoomScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDENTERCHESSROGUEAEONROOMSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdChessRogueUpdateLevelBaseInfoScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEUPDATELEVELBASEINFOSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdChessRogueCellUpdateNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUECELLUPDATENOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdChessRogueUpdateAllowedSelectCellScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEUPDATEALLOWEDSELECTCELLSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdChessRogueRollDiceScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEROLLDICESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdChessRogueReRollDiceScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEREROLLDICESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdChessRogueCheatRollScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUECHEATROLLSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdChessRogueConfirmRollScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUECONFIRMROLLSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdChessRogueUpdateDiceInfoScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEUPDATEDICEINFOSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdChessRogueChangeAeonDimensionNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUECHANGEAEONDIMENSIONNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdChessRogueLayerSettlement(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUELAYERSETTLEMENT_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdRogueModifierAddNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDROGUEMODIFIERADDNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdRogueModifierDelNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDROGUEMODIFIERDELNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdRogueModifierUpdateNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDROGUEMODIFIERUPDATENOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdRogueModifierSelectCellScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDROGUEMODIFIERSELECTCELLSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdChessRogueUpdateAeonModifierValueScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEUPDATEAEONMODIFIERVALUESCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdChessRogueUpdateDicePassiveAccumulateValueScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEUPDATEDICEPASSIVEACCUMULATEVALUESCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _ChangeChessRogueDicePassiceAccumulateValue(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__CHANGECHESSROGUEDICEPASSICEACCUMULATEVALUE_OFFSET))(this, a1);
		}

		::System::Void _OnCmdRogueModifierStageStartNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDROGUEMODIFIERSTAGESTARTNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdGetRogueBuffEnhanceInfoScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDGETROGUEBUFFENHANCEINFOSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdEnhanceRogueBuffScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDENHANCEROGUEBUFFSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdPickRogueAvatarScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDPICKROGUEAVATARSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdReviveRogueAvatarScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDREVIVEROGUEAVATARSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdChessRogueUpdateReviveInfoScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUEUPDATEREVIVEINFOSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdSelectChessRogueSubStoryScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDSELECTCHESSROGUESUBSTORYSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdFinishChessRogueSubStoryScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDFINISHCHESSROGUESUBSTORYSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdSyncChessRogueMainStoryFinishScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDSYNCCHESSROGUEMAINSTORYFINISHSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdGetChessRogueStoryInfoScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDGETCHESSROGUESTORYINFOSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnSyncChessRogueNousValueScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONSYNCCHESSROGUENOUSVALUESCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdChessRogueNousEditDiceScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUENOUSEDITDICESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdChessRogueNousDiceSurfaceUnlockNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUENOUSDICESURFACEUNLOCKNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdChessRogueNousDiceUpdateNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUENOUSDICEUPDATENOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdSyncChessRogueNousSubStoryScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDSYNCCHESSROGUENOUSSUBSTORYSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdSyncChessRogueNousMainStoryScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDSYNCCHESSROGUENOUSMAINSTORYSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdGetChessRogueNousStoryInfoScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDGETCHESSROGUENOUSSTORYINFOSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdChessRogueNousGetRogueTalentInfoScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUENOUSGETROGUETALENTINFOSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdChessRogueNousEnableRogueTalentScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUENOUSENABLEROGUETALENTSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdChessRogueSkipTeachingLevelScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE__ONCMDCHESSROGUESKIPTEACHINGLEVELSCRSP_OFFSET))(this, a1, a2);
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

		::System::Void SendResetChessRogueDiceBranchSurfaceCsReq(::RPG::Client::RogueNousDiceBranchDataItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueNousDiceBranchDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE_SENDRESETCHESSROGUEDICEBRANCHSURFACECSREQ_OFFSET))(this, a1);
		}

		::System::Void SendEditChessRogueNousBranchSurfaceCsReq(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE_SENDEDITCHESSROGUENOUSBRANCHSURFACECSREQ_OFFSET))(this, a1, a2, a3);
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
