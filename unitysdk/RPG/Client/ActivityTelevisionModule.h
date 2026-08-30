#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityTelevisionModule__TreasureQuestInfo.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/GameCore/ActivityRank.h"

class Class_1_1CBA230307F9C289_101;
class Class_1_D17272E82AE804C2_1148;
namespace RPG::Client { class ActivityTelevisionBattleResult; }
namespace RPG::Client { class ActivityTelevisionData; }
namespace RPG::GameCore { class DynamicValue; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE_CLEARBATTLETEMPPARAM_OFFSET UNITYSDK_OFFSET(0x1963E1B0)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GETALLTELEVISIONDATABYSEASON_OFFSET UNITYSDK_OFFSET(0x1963E210)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GETALLTELEVISIONDATA_OFFSET UNITYSDK_OFFSET(0x1963B9D0)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GETBUFFMAXLAYER_OFFSET UNITYSDK_OFFSET(0x1963F600)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GETBUFFRELATEDTELEVISIONDATA_OFFSET UNITYSDK_OFFSET(0x1963F6C0)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GETBUFFSHOWBACKGROUNDIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1963FB00)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GETBUFFSHOWLEVELIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1963F9C0)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GETBUFFSHOWLEVEL_OFFSET UNITYSDK_OFFSET(0x1963FCC0)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GETDEATHLEVELID_OFFSET UNITYSDK_OFFSET(0x1963C6D0)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GETDEATHLEVELMESSAGESUBMISSION_OFFSET UNITYSDK_OFFSET(0x1963FFB0)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GETDEFAULTBUFFSHOWBACKGROUNDIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1963FC30)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GETGUIDEMISSIONID_OFFSET UNITYSDK_OFFSET(0x1963FDF0)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GETLINEUPDATA_OFFSET UNITYSDK_OFFSET(0x1963F210)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GETSCORERANK_OFFSET UNITYSDK_OFFSET(0x1963F2E0)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GETSHOWLEVEL_OFFSET UNITYSDK_OFFSET(0x1963F770)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GETTELEVISIONAVATARLISTFROMIDLIST_OFFSET UNITYSDK_OFFSET(0x1963EC60)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GETTELEVISIONDATABYMAPPINGINFOID_OFFSET UNITYSDK_OFFSET(0x1963F820)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GETTELEVISIONDATA_OFFSET UNITYSDK_OFFSET(0x1963CCD0)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GETTREASUREQUESTGROUPID_OFFSET UNITYSDK_OFFSET(0x1963FE70)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GETTREASUREQUESTID_OFFSET UNITYSDK_OFFSET(0x1963FEF0)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GET_BUFFTELEVISIONDATAREF_OFFSET UNITYSDK_OFFSET(0x19640B40)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GET_CURRENTBUFFLIST_OFFSET UNITYSDK_OFFSET(0x19640B80)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GET_CURRENTTELEVISIONDATA_OFFSET UNITYSDK_OFFSET(0x1963E030)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GET_CURRENTTELEVISIONID_OFFSET UNITYSDK_OFFSET(0x19640B60)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GET_CURRENTTELEVISIONSEASON_OFFSET UNITYSDK_OFFSET(0x19640BC0)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GET_REDDOTQUESTSERIES_OFFSET UNITYSDK_OFFSET(0x19640F60)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GET_SHOWLEVEL_OFFSET UNITYSDK_OFFSET(0x19640F80)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GET_TELEVISIONDATACOUNT_OFFSET UNITYSDK_OFFSET(0x19640A00)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GET_TELEVISIONDATALIST_OFFSET UNITYSDK_OFFSET(0x196409E0)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE_HASLEVELNOTCHALLENGED_OFFSET UNITYSDK_OFFSET(0x1963B880)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x1963CD80)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE_ISINACTIVITYTELEVISIONBATTLE_OFFSET UNITYSDK_OFFSET(0x1963DE70)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE_ISSHOWEVERYDAYREDDOT_OFFSET UNITYSDK_OFFSET(0x19640BE0)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE_RESTARTTELEVISIONBATTLE_OFFSET UNITYSDK_OFFSET(0x1963F030)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE_SAVELINEUPDATA_OFFSET UNITYSDK_OFFSET(0x1963F0E0)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE_SENDMODULEINITREQUEST_OFFSET UNITYSDK_OFFSET(0x1963E3C0)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE_SETAUTOSHOWONEXITBATTLE_OFFSET UNITYSDK_OFFSET(0x19640900)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE_SET_BUFFTELEVISIONDATAREF_OFFSET UNITYSDK_OFFSET(0x19640B50)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE_SET_CURRENTTELEVISIONID_OFFSET UNITYSDK_OFFSET(0x19640B70)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE_SET_CURRENTTELEVISIONSEASON_OFFSET UNITYSDK_OFFSET(0x19640BD0)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE_SET_REDDOTQUESTSERIES_OFFSET UNITYSDK_OFFSET(0x19640F70)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE_SET_SHOWLEVEL_OFFSET UNITYSDK_OFFSET(0x19640F90)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE_SET_TELEVISIONDATALIST_OFFSET UNITYSDK_OFFSET(0x196409F0)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE_STARTTELEVISIONBATTLE_OFFSET UNITYSDK_OFFSET(0x1963EAE0)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE_TRYAUTOSHOW_OFFSET UNITYSDK_OFFSET(0x19640770)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE_UPDATECURRENTSEASON_OFFSET UNITYSDK_OFFSET(0x1963E9B0)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE_UPDATETELEVISIONDATA_OFFSET UNITYSDK_OFFSET(0x1963DAB0)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x1963D330)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x1963D400)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE__CLEARAUTOSHOWPARAM_OFFSET UNITYSDK_OFFSET(0x196408B0)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE__CMDENTERTELEVISIONACTIVITYSTAGESCRSP_OFFSET UNITYSDK_OFFSET(0x1963DB60)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE__CMDGETTELEVISIONACTIVITYDATASCRSP_OFFSET UNITYSDK_OFFSET(0x1963D6B0)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x19640FA0)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE__INITCONSTVALUE_OFFSET UNITYSDK_OFFSET(0x1963CDE0)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE__INITMODULERELATEDMISSIONDATA_OFFSET UNITYSDK_OFFSET(0x1963E4A0)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE__INITQUESTREFRESHINFO_OFFSET UNITYSDK_OFFSET(0x19640030)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE__INITTELEVISIONDATA_OFFSET UNITYSDK_OFFSET(0x1963CE90)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE__ONADVENTUREPHASEENTERED_OFFSET UNITYSDK_OFFSET(0x1963E090)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE__ONBATTLERESULTBEFOREPHASE_OFFSET UNITYSDK_OFFSET(0x1963DD20)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE__ONTELEVISIONACTIVITYBATTLEENDSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1963DC80)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE__REFRESHFINISHEDQUEST_OFFSET UNITYSDK_OFFSET(0x196402E0)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE__STARTTELEVISIONBATTLE_OFFSET UNITYSDK_OFFSET(0x1963EEF0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityTelevisionModule_TypeDefinitionIndex = 62082;

	class ActivityTelevisionModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _RankScoreLine; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::GameCore::ActivityRank>* _SSNumToRank; // 0x18
		::RPG::Client::ActivityTelevisionBattleResult* BattleResult; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* _TempBattleAvatarIDList; // 0x28
		::Il2CppArray<::RPG::GameCore::DynamicValue*>* _ShowLevel_k__BackingField; // 0x30
		::System::Collections::Generic::List_1<::System::UInt32>* _TempBattleBuffIDList; // 0x38
		::System::Collections::Generic::List_1<::System::UInt32>* _RedDotQuestSeries_k__BackingField; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityTelevisionData*>* _TelevisionDataList_k__BackingField; // 0x48
		::System::Collections::Generic::List_1<::RPG::Client::ActivityTelevisionModule__TreasureQuestInfo>* _TreasureQuestInfoList; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityTelevisionData*>* _BuffTelevisionDataRef_k__BackingField; // 0x58
		::System::Boolean _ShowMainPage; // 0x60
		::System::UInt32 _CurrentTelevisionSeason_k__BackingField; // 0x64
		::System::UInt32 _AutoShowTelevisionID; // 0x68
		::System::UInt32 _CurrentTelevisionID_k__BackingField; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE_INIT_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _CmdGetTelevisionActivityDataScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE__CMDGETTELEVISIONACTIVITYDATASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _CmdEnterTelevisionActivityStageScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE__CMDENTERTELEVISIONACTIVITYSTAGESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnTelevisionActivityBattleEndScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE__ONTELEVISIONACTIVITYBATTLEENDSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnBattleResultBeforePhase(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE__ONBATTLERESULTBEFOREPHASE_OFFSET))(this, a1);
		}

		::System::Void _OnAdventurePhaseEntered(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE__ONADVENTUREPHASEENTERED_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityTelevisionData* GetTelevisionData(::System::UInt32 a1)
		{
			return ((::RPG::Client::ActivityTelevisionData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GETTELEVISIONDATA_OFFSET))(this, a1);
		}

		::System::Void UpdateTelevisionData(::Class_1_D17272E82AE804C2_1148* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_1148*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE_UPDATETELEVISIONDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityTelevisionData*>* GetAllTelevisionData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityTelevisionData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GETALLTELEVISIONDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityTelevisionData*>* GetAllTelevisionDataBySeason(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityTelevisionData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GETALLTELEVISIONDATABYSEASON_OFFSET))(this, a1);
		}

		::System::Void SendModuleInitRequest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE_SENDMODULEINITREQUEST_OFFSET))(this);
		}

		::System::Void UpdateCurrentSeason()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE_UPDATECURRENTSEASON_OFFSET))(this);
		}

		::System::Void StartTelevisionBattle(::System::UInt32 a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2, ::System::Collections::Generic::List_1<::System::UInt32>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE_STARTTELEVISIONBATTLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RestartTelevisionBattle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE_RESTARTTELEVISIONBATTLE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_1_1CBA230307F9C289_101*>* GetTelevisionAvatarListFromIDList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Collections::Generic::List_1<::Class_1_1CBA230307F9C289_101*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GETTELEVISIONAVATARLISTFROMIDLIST_OFFSET))(this, a1);
		}

		::System::Void SaveLineupData(::System::UInt32 a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE_SAVELINEUPDATA_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetLineupData(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GETLINEUPDATA_OFFSET))(this, a1);
		}

		::System::Int32 GetScoreRank(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GETSCORERANK_OFFSET))(this, a1);
		}

		::System::UInt32 GetBuffMaxLayer(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GETBUFFMAXLAYER_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityTelevisionData* GetBuffRelatedTelevisionData(::System::UInt32 a1)
		{
			return ((::RPG::Client::ActivityTelevisionData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GETBUFFRELATEDTELEVISIONDATA_OFFSET))(this, a1);
		}

		::System::Boolean IsInActivityTelevisionBattle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE_ISINACTIVITYTELEVISIONBATTLE_OFFSET))(this);
		}

		::System::Void ClearBattleTempParam()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE_CLEARBATTLETEMPPARAM_OFFSET))(this);
		}

		::System::UInt32 GetShowLevel(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GETSHOWLEVEL_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityTelevisionData* GetTelevisionDataByMappingInfoID(::System::UInt32 a1)
		{
			return ((::RPG::Client::ActivityTelevisionData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GETTELEVISIONDATABYMAPPINGINFOID_OFFSET))(this, a1);
		}

		::System::String* GetBuffShowLevelImagePath(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GETBUFFSHOWLEVELIMAGEPATH_OFFSET))(this, a1, a2);
		}

		::System::String* GetBuffShowBackGroundImagePath(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GETBUFFSHOWBACKGROUNDIMAGEPATH_OFFSET))(this, a1, a2);
		}

		::System::String* GetDefaultBuffShowBackGroundImagePath(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GETDEFAULTBUFFSHOWBACKGROUNDIMAGEPATH_OFFSET))(this, a1);
		}

		::System::Int32 GetBuffShowLevel(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GETBUFFSHOWLEVEL_OFFSET))(this, a1, a2);
		}

		::System::Boolean HasLevelNotChallenged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE_HASLEVELNOTCHALLENGED_OFFSET))(this);
		}

		::System::UInt32 GetDeathLevelID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GETDEATHLEVELID_OFFSET))(this, a1);
		}

		::System::UInt32 GetGuideMissionID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GETGUIDEMISSIONID_OFFSET))(this, a1);
		}

		::System::UInt32 GetTreasureQuestGroupID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GETTREASUREQUESTGROUPID_OFFSET))(this, a1);
		}

		::System::UInt32 GetTreasureQuestID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GETTREASUREQUESTID_OFFSET))(this, a1);
		}

		::System::UInt32 GetDeathLevelMessageSubmission(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GETDEATHLEVELMESSAGESUBMISSION_OFFSET))(this, a1);
		}

		::System::Void _InitConstValue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE__INITCONSTVALUE_OFFSET))(this);
		}

		::System::Void _InitTelevisionData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE__INITTELEVISIONDATA_OFFSET))(this);
		}

		::System::Void _InitModuleRelatedMissionData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE__INITMODULERELATEDMISSIONDATA_OFFSET))(this);
		}

		::System::Void _StartTelevisionBattle(::System::UInt32 a1, ::System::Collections::Generic::List_1<::Class_1_1CBA230307F9C289_101*>* a2, ::System::Collections::Generic::List_1<::System::UInt32>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::Class_1_1CBA230307F9C289_101*>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE__STARTTELEVISIONBATTLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _InitQuestRefreshInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE__INITQUESTREFRESHINFO_OFFSET))(this);
		}

		::System::Void _RefreshFinishedQuest(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE__REFRESHFINISHEDQUEST_OFFSET))(this, a1);
		}

		::System::Void TryAutoShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE_TRYAUTOSHOW_OFFSET))(this);
		}

		::System::Void SetAutoShowOnExitBattle(::System::Boolean a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE_SETAUTOSHOWONEXITBATTLE_OFFSET))(this, a1, a2);
		}

		::System::Void _ClearAutoShowParam()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE__CLEARAUTOSHOWPARAM_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityTelevisionData*>* get_TelevisionDataList()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityTelevisionData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GET_TELEVISIONDATALIST_OFFSET))(this);
		}

		::System::Void set_TelevisionDataList(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityTelevisionData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityTelevisionData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE_SET_TELEVISIONDATALIST_OFFSET))(this, a1);
		}

		::System::Int32 get_TelevisionDataCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GET_TELEVISIONDATACOUNT_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityTelevisionData*>* get_BuffTelevisionDataRef()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityTelevisionData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GET_BUFFTELEVISIONDATAREF_OFFSET))(this);
		}

		::System::Void set_BuffTelevisionDataRef(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityTelevisionData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityTelevisionData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE_SET_BUFFTELEVISIONDATAREF_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurrentTelevisionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GET_CURRENTTELEVISIONID_OFFSET))(this);
		}

		::System::Void set_CurrentTelevisionID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE_SET_CURRENTTELEVISIONID_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityTelevisionData* get_CurrentTelevisionData()
		{
			return ((::RPG::Client::ActivityTelevisionData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GET_CURRENTTELEVISIONDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_CurrentBuffList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GET_CURRENTBUFFLIST_OFFSET))(this);
		}

		::System::UInt32 get_CurrentTelevisionSeason()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GET_CURRENTTELEVISIONSEASON_OFFSET))(this);
		}

		::System::Void set_CurrentTelevisionSeason(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE_SET_CURRENTTELEVISIONSEASON_OFFSET))(this, a1);
		}

		::System::Boolean IsShowEveryDayRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE_ISSHOWEVERYDAYREDDOT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_RedDotQuestSeries()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GET_REDDOTQUESTSERIES_OFFSET))(this);
		}

		::System::Void set_RedDotQuestSeries(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE_SET_REDDOTQUESTSERIES_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::GameCore::DynamicValue*>* get_ShowLevel()
		{
			return ((::Il2CppArray<::RPG::GameCore::DynamicValue*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE_GET_SHOWLEVEL_OFFSET))(this);
		}

		::System::Void set_ShowLevel(::Il2CppArray<::RPG::GameCore::DynamicValue*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::DynamicValue*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE_SET_SHOWLEVEL_OFFSET))(this, a1);
		}
	};
}
