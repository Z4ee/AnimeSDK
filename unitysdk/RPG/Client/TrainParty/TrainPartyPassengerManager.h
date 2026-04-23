#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_075C34D03AFA1215_120;
class Class_1_455008579EB95638_113;
class Class_1_7FF19F6206AF6DD7_48;
class Class_1_ACA38760E7F8B37E_1;
class Class_1_C4B679728AD83B32_21;
class Class_1_D1E0AD3915BCCF29_126;
class Class_1_D40936EF3BF54118_93;
class Class_1_FB4A4ADDA7338C08_5;
namespace RPG::Client::TrainParty { class TrainPartyPassengerData; }
namespace RPG::Client::TrainParty { class TrainPartyPassengerDiaryInfo; }
namespace RPG::Client::TrainParty { class TrainPartyPassengerSkillInfo; }
namespace RPG::Client::TrainParty { class TrainPartyPassengerSkillSettleData; }
namespace RPG::Client::TrainParty { class TrainPartyPassengerStatusRankConfig; }
namespace RPG::GameCore { class TrainPartyTeamRow; }
namespace RPG::GameCore { class TrainPartyWorkingBuffConfigRow; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_CLEARGAMEPLAYDATA_OFFSET UNITYSDK_OFFSET(0xB34B7D0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_CLEARPAMDIARYREDDOT_OFFSET UNITYSDK_OFFSET(0xB35D900)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_CLEARSKILLSETTLEDATA_OFFSET UNITYSDK_OFFSET(0xB34FE10)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB34D660)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_GETALLPASSENGERLIST_OFFSET UNITYSDK_OFFSET(0xB35E260)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_GETINVITABLEPASSENGERCOUNT_OFFSET UNITYSDK_OFFSET(0xB35DA60)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_GETINVITABLEPASSENGERDATALIST_OFFSET UNITYSDK_OFFSET(0xB35D690)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_GETPASSENGERDATABYID_OFFSET UNITYSDK_OFFSET(0xB34C790)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_GETPASSENGERDATALIST_OFFSET UNITYSDK_OFFSET(0xB34FA70)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_GETPASSENGERSTATUSRANKCONFIGBYEXP_OFFSET UNITYSDK_OFFSET(0xB35DB80)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_GETPASSENGERSTATUSRANKCONFIGBYVALUE_OFFSET UNITYSDK_OFFSET(0xB35E170)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_GETSKILLINFOS_OFFSET UNITYSDK_OFFSET(0xB357CC0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_GET_LEADERPASSENGERDATA_OFFSET UNITYSDK_OFFSET(0xB35E8A0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_GET_LEADERPASSENGERID_OFFSET UNITYSDK_OFFSET(0xB35E880)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_GET_LEADERWORKINGBUFFID_OFFSET UNITYSDK_OFFSET(0xB35E9F0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_GET_PLAYERPASSENGERID_OFFSET UNITYSDK_OFFSET(0xB35E9D0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_GET_REMAINSTEPNUM_OFFSET UNITYSDK_OFFSET(0xB35E830)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_GET_SKILLSETTLEDATA_OFFSET UNITYSDK_OFFSET(0xB35EA70)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_GET_TEAMID_OFFSET UNITYSDK_OFFSET(0xB35E7B0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_GET_TEAMROW_OFFSET UNITYSDK_OFFSET(0xB35E7D0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_GET_WORKINGBUFFROW_OFFSET UNITYSDK_OFFSET(0xB35EA10)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_HANDLEREPLACESKILLACTION_OFFSET UNITYSDK_OFFSET(0xB3514E0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_HASANYREWARDCANTAKE_OFFSET UNITYSDK_OFFSET(0xB35E3C0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0xB34D1D0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_ONREPLACESKILL_OFFSET UNITYSDK_OFFSET(0xB34F0B0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_ONSHOWSETTLEFINISH_OFFSET UNITYSDK_OFFSET(0xB3501C0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_SET_LEADERPASSENGERID_OFFSET UNITYSDK_OFFSET(0xB35E890)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_SET_LEADERWORKINGBUFFID_OFFSET UNITYSDK_OFFSET(0xB35EA00)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_SET_PLAYERPASSENGERID_OFFSET UNITYSDK_OFFSET(0xB35E9E0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_SET_SKILLSETTLEDATA_OFFSET UNITYSDK_OFFSET(0xB35EA80)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_SET_TEAMID_OFFSET UNITYSDK_OFFSET(0xB35E7C0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_SYNCDIARYINFO_OFFSET UNITYSDK_OFFSET(0xB34D060)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_SYNCPERSISTENTDATA_OFFSET UNITYSDK_OFFSET(0xB34CEE0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_SYNCPERSISTENT_OFFSET UNITYSDK_OFFSET(0xB34B210)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_SYNCSKILLLIST_OFFSET UNITYSDK_OFFSET(0xB34D010)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_SYNC_OFFSET UNITYSDK_OFFSET(0xB34B710)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_UPDATEPASSEDSTEPNUM_OFFSET UNITYSDK_OFFSET(0xB34C870)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_UPDATESKILLINFO_OFFSET UNITYSDK_OFFSET(0xB34CCA0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xB34D160)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER__DISPLAYPASSENGERSORTFUNC_OFFSET UNITYSDK_OFFSET(0xB35E670)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER__GETONTRAINPASSENGERDATALIST_OFFSET UNITYSDK_OFFSET(0xB35D530)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER__GETUNLOCKPASSENGERDATALIST_OFFSET UNITYSDK_OFFSET(0xB35D7A0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER__INITALLPASSENGERS_OFFSET UNITYSDK_OFFSET(0xB35C640)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER__INITPASSENGERSTATUSRANKCONFIG_OFFSET UNITYSDK_OFFSET(0xB35DC90)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER__INVITATIONPASSENGERSORTFUNC_OFFSET UNITYSDK_OFFSET(0xB35E710)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER__SYNCPASSENGERLIST_OFFSET UNITYSDK_OFFSET(0xB35C890)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER__SYNCPERSISTENTDATALIST_OFFSET UNITYSDK_OFFSET(0xB35CF00)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER__SYNCSKILLINFOS_OFFSET UNITYSDK_OFFSET(0xB35CC80)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartyPassengerManager_TypeDefinitionIndex = 68614;

	class TrainPartyPassengerManager : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyPassengerStatusRankConfig*>* _AllPassengerStatusRankConfigs; // 0x10
		::RPG::Client::TrainParty::TrainPartyPassengerSkillSettleData* _SkillSettleData_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyPassengerSkillInfo*>* _SkillList; // 0x20
		::RPG::Client::TrainParty::TrainPartyPassengerDiaryInfo* DiaryInfo; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyPassengerData*>* _AllPassengers; // 0x30
		::System::UInt32 _PassedStepNum; // 0x38
		::System::UInt32 _TotalStep; // 0x3C
		::System::UInt32 _LeaderWorkingBuffID_k__BackingField; // 0x40
		::System::UInt32 _LeaderPassengerID_k__BackingField; // 0x44
		::System::UInt32 _TeamID_k__BackingField; // 0x48
		::System::UInt32 _PlayerPassengerID_k__BackingField; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void SyncDiaryInfo(::Class_1_075C34D03AFA1215_120* serverInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_120*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_SYNCDIARYINFO_OFFSET))(this, serverInfo);
		}

		::System::Void Sync(::Class_1_ACA38760E7F8B37E_1* serverInfo, ::System::UInt32 teamID)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_ACA38760E7F8B37E_1*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_SYNC_OFFSET))(this, serverInfo, teamID);
		}

		::System::Void SyncPersistent(::Class_1_455008579EB95638_113* serverInfo, ::System::Boolean markNewPassenger)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_455008579EB95638_113*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_SYNCPERSISTENT_OFFSET))(this, serverInfo, markNewPassenger);
		}

		::System::Void SyncPersistentData(::Class_1_FB4A4ADDA7338C08_5* serverInfo, ::System::Boolean markNewPassenger)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FB4A4ADDA7338C08_5*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_SYNCPERSISTENTDATA_OFFSET))(this, serverInfo, markNewPassenger);
		}

		::System::Void ClearGameplayData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_CLEARGAMEPLAYDATA_OFFSET))(this);
		}

		::System::Void ClearSkillSettleData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_CLEARSKILLSETTLEDATA_OFFSET))(this);
		}

		::System::Void UpdatePassedStepNum(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_UPDATEPASSEDSTEPNUM_OFFSET))(this, value);
		}

		::System::Void UpdateSkillInfo(::Class_1_D1E0AD3915BCCF29_126* skillInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D1E0AD3915BCCF29_126*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_UPDATESKILLINFO_OFFSET))(this, skillInfo);
		}

		::System::Void SyncSkillList(::System::Collections::Generic::IList_1<::Class_1_D1E0AD3915BCCF29_126*>* skillInfos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_D1E0AD3915BCCF29_126*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_SYNCSKILLLIST_OFFSET))(this, skillInfos);
		}

		::System::Void HandleReplaceSkillAction(::Class_1_7FF19F6206AF6DD7_48* action)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_48*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_HANDLEREPLACESKILLACTION_OFFSET))(this, action);
		}

		::System::Void OnShowSettleFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_ONSHOWSETTLEFINISH_OFFSET))(this);
		}

		::System::Void OnReplaceSkill(::Class_1_D40936EF3BF54118_93* actionResult)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_93*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_ONREPLACESKILL_OFFSET))(this, actionResult);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyPassengerData*>* GetPassengerDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyPassengerData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_GETPASSENGERDATALIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyPassengerData*>* GetInvitablePassengerDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyPassengerData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_GETINVITABLEPASSENGERDATALIST_OFFSET))(this);
		}

		::System::Void ClearPamDiaryReddot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_CLEARPAMDIARYREDDOT_OFFSET))(this);
		}

		::System::UInt32 GetInvitablePassengerCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_GETINVITABLEPASSENGERCOUNT_OFFSET))(this);
		}

		::RPG::Client::TrainParty::TrainPartyPassengerData* GetPassengerDataByID(::System::UInt32 id)
		{
			return ((::RPG::Client::TrainParty::TrainPartyPassengerData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_GETPASSENGERDATABYID_OFFSET))(this, id);
		}

		::RPG::Client::TrainParty::TrainPartyPassengerStatusRankConfig* GetPassengerStatusRankConfigByExp(::System::UInt32 value)
		{
			return ((::RPG::Client::TrainParty::TrainPartyPassengerStatusRankConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_GETPASSENGERSTATUSRANKCONFIGBYEXP_OFFSET))(this, value);
		}

		::RPG::Client::TrainParty::TrainPartyPassengerStatusRankConfig* GetPassengerStatusRankConfigByValue(::System::UInt32 value)
		{
			return ((::RPG::Client::TrainParty::TrainPartyPassengerStatusRankConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_GETPASSENGERSTATUSRANKCONFIGBYVALUE_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyPassengerSkillInfo*>* GetSkillInfos()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyPassengerSkillInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_GETSKILLINFOS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyPassengerData*>* GetAllPassengerList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyPassengerData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_GETALLPASSENGERLIST_OFFSET))(this);
		}

		::System::Boolean HasAnyRewardCanTake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_HASANYREWARDCANTAKE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyPassengerData*>* _GetOnTrainPassengerDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyPassengerData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER__GETONTRAINPASSENGERDATALIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyPassengerData*>* _GetUnlockPassengerDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyPassengerData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER__GETUNLOCKPASSENGERDATALIST_OFFSET))(this);
		}

		::System::Void _InitAllPassengers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER__INITALLPASSENGERS_OFFSET))(this);
		}

		::System::Void _SyncPersistentDataList(::System::Collections::Generic::IList_1<::Class_1_FB4A4ADDA7338C08_5*>* serverInfos, ::System::Boolean markNewPassenger)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_FB4A4ADDA7338C08_5*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER__SYNCPERSISTENTDATALIST_OFFSET))(this, serverInfos, markNewPassenger);
		}

		::System::Void _SyncPassengerList(::System::Collections::Generic::IList_1<::Class_1_C4B679728AD83B32_21*>* serverPassengerList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_C4B679728AD83B32_21*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER__SYNCPASSENGERLIST_OFFSET))(this, serverPassengerList);
		}

		::System::Void _InitPassengerStatusRankConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER__INITPASSENGERSTATUSRANKCONFIG_OFFSET))(this);
		}

		::System::Int32 _DisplayPassengerSortFunc(::RPG::Client::TrainParty::TrainPartyPassengerData* a, ::RPG::Client::TrainParty::TrainPartyPassengerData* b)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyPassengerData*, ::RPG::Client::TrainParty::TrainPartyPassengerData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER__DISPLAYPASSENGERSORTFUNC_OFFSET))(this, a, b);
		}

		::System::Int32 _InvitationPassengerSortFunc(::RPG::Client::TrainParty::TrainPartyPassengerData* a, ::RPG::Client::TrainParty::TrainPartyPassengerData* b)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyPassengerData*, ::RPG::Client::TrainParty::TrainPartyPassengerData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER__INVITATIONPASSENGERSORTFUNC_OFFSET))(this, a, b);
		}

		::System::Void _SyncSkillInfos(::System::Collections::Generic::IList_1<::Class_1_D1E0AD3915BCCF29_126*>* serverInfos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_D1E0AD3915BCCF29_126*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER__SYNCSKILLINFOS_OFFSET))(this, serverInfos);
		}

		::System::UInt32 get_TeamID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_GET_TEAMID_OFFSET))(this);
		}

		::System::Void set_TeamID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_SET_TEAMID_OFFSET))(this, value);
		}

		::RPG::GameCore::TrainPartyTeamRow* get_TeamRow()
		{
			return ((::RPG::GameCore::TrainPartyTeamRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_GET_TEAMROW_OFFSET))(this);
		}

		::System::UInt32 get_RemainStepNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_GET_REMAINSTEPNUM_OFFSET))(this);
		}

		::System::UInt32 get_LeaderPassengerID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_GET_LEADERPASSENGERID_OFFSET))(this);
		}

		::System::Void set_LeaderPassengerID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_SET_LEADERPASSENGERID_OFFSET))(this, value);
		}

		::RPG::Client::TrainParty::TrainPartyPassengerData* get_LeaderPassengerData()
		{
			return ((::RPG::Client::TrainParty::TrainPartyPassengerData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_GET_LEADERPASSENGERDATA_OFFSET))(this);
		}

		::System::UInt32 get_PlayerPassengerID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_GET_PLAYERPASSENGERID_OFFSET))(this);
		}

		::System::Void set_PlayerPassengerID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_SET_PLAYERPASSENGERID_OFFSET))(this, value);
		}

		::System::UInt32 get_LeaderWorkingBuffID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_GET_LEADERWORKINGBUFFID_OFFSET))(this);
		}

		::System::Void set_LeaderWorkingBuffID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_SET_LEADERWORKINGBUFFID_OFFSET))(this, value);
		}

		::RPG::GameCore::TrainPartyWorkingBuffConfigRow* get_WorkingBuffRow()
		{
			return ((::RPG::GameCore::TrainPartyWorkingBuffConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_GET_WORKINGBUFFROW_OFFSET))(this);
		}

		::RPG::Client::TrainParty::TrainPartyPassengerSkillSettleData* get_SkillSettleData()
		{
			return ((::RPG::Client::TrainParty::TrainPartyPassengerSkillSettleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_GET_SKILLSETTLEDATA_OFFSET))(this);
		}

		::System::Void set_SkillSettleData(::RPG::Client::TrainParty::TrainPartyPassengerSkillSettleData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyPassengerSkillSettleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_SET_SKILLSETTLEDATA_OFFSET))(this, value);
		}
	};
}
