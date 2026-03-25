#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_24.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/GameCore/RecordType.h"
#include "unitysdk/UnityEngine/AnyTuple3.h"

class Class_0_16E4307DCC419505_530;
class Class_1_50693F60BB22CCFC;
namespace RPG::Client { class AchievementData; }
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::Client { class RspHandler; }
namespace RPG::GameCore { class AchievementSeriesRow; }
namespace RPG::GameCore { class RewardRow; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACHIEVEMENTMODULE_ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x8EC8C10)
#define RPG_CLIENT_ACHIEVEMENTMODULE_CALUNTAKENACHIEVEMENTSERIESREWARDNUM_OFFSET UNITYSDK_OFFSET(0x8ECC6F0)
#define RPG_CLIENT_ACHIEVEMENTMODULE_CHECKACHIEVEMENTALLOWSHOWSTATUS_OFFSET UNITYSDK_OFFSET(0x8ECB150)
#define RPG_CLIENT_ACHIEVEMENTMODULE_CHECKACHIEVEMENTSHOULDBENOTIFIED_OFFSET UNITYSDK_OFFSET(0x8ECD9B0)
#define RPG_CLIENT_ACHIEVEMENTMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8EC9280)
#define RPG_CLIENT_ACHIEVEMENTMODULE_GETACHIEVEDNUMBYRARITY_OFFSET UNITYSDK_OFFSET(0x8EC96C0)
#define RPG_CLIENT_ACHIEVEMENTMODULE_GETACHIEVEDNUM_OFFSET UNITYSDK_OFFSET(0x8EC9520)
#define RPG_CLIENT_ACHIEVEMENTMODULE_GETACHIEVEMENTDATABYQUESTID_OFFSET UNITYSDK_OFFSET(0x8EC8390)
#define RPG_CLIENT_ACHIEVEMENTMODULE_GETACHIEVEMENTDATABYSCORINGID_OFFSET UNITYSDK_OFFSET(0x8ECABD0)
#define RPG_CLIENT_ACHIEVEMENTMODULE_GETACHIEVEMENTDATABYSERIES_OFFSET UNITYSDK_OFFSET(0x8ECADA0)
#define RPG_CLIENT_ACHIEVEMENTMODULE_GETACHIEVEMENTSERIES_OFFSET UNITYSDK_OFFSET(0x8EC9D90)
#define RPG_CLIENT_ACHIEVEMENTMODULE_GETACHIEVEMENTSHOWQUESTIONMARK_OFFSET UNITYSDK_OFFSET(0x8ECA6B0)
#define RPG_CLIENT_ACHIEVEMENTMODULE_GETALLACHIEVEMENTDATA_OFFSET UNITYSDK_OFFSET(0x8ECBD60)
#define RPG_CLIENT_ACHIEVEMENTMODULE_GETDATA_OFFSET UNITYSDK_OFFSET(0x8EC82D0)
#define RPG_CLIENT_ACHIEVEMENTMODULE_GETFINISHHINTDATA_OFFSET UNITYSDK_OFFSET(0x8ECB860)
#define RPG_CLIENT_ACHIEVEMENTMODULE_GETITEMDISPLAYDATAS_OFFSET UNITYSDK_OFFSET(0x8ECB560)
#define RPG_CLIENT_ACHIEVEMENTMODULE_GETSERIESACHIEVEDNUM_OFFSET UNITYSDK_OFFSET(0x8EC9FB0)
#define RPG_CLIENT_ACHIEVEMENTMODULE_GETSERIESTOTALACHIEVEMENTSNUM_OFFSET UNITYSDK_OFFSET(0x8ECA2A0)
#define RPG_CLIENT_ACHIEVEMENTMODULE_GETVISIBLEACHIEVEMENTSNUMBYSERIES_OFFSET UNITYSDK_OFFSET(0x8ECA390)
#define RPG_CLIENT_ACHIEVEMENTMODULE_GET_ACHIEVEDNUM_OFFSET UNITYSDK_OFFSET(0x8EC9570)
#define RPG_CLIENT_ACHIEVEMENTMODULE_GET_RECORDPROCESS_OFFSET UNITYSDK_OFFSET(0x8ECE530)
#define RPG_CLIENT_ACHIEVEMENTMODULE_GET_SERIESIDREDDOTLIST_OFFSET UNITYSDK_OFFSET(0x8ECE4F0)
#define RPG_CLIENT_ACHIEVEMENTMODULE_GET_SERIESREDDOTINFO_OFFSET UNITYSDK_OFFSET(0x8ECE510)
#define RPG_CLIENT_ACHIEVEMENTMODULE_HIDEHINT_OFFSET UNITYSDK_OFFSET(0x8ECC190)
#define RPG_CLIENT_ACHIEVEMENTMODULE_INITACHIEVEMENTDATA_OFFSET UNITYSDK_OFFSET(0x8EC8500)
#define RPG_CLIENT_ACHIEVEMENTMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x8EC8450)
#define RPG_CLIENT_ACHIEVEMENTMODULE_ISACHIEVEMENTLEVELREWARDPARTIALCLOSED_OFFSET UNITYSDK_OFFSET(0x8ECBC30)
#define RPG_CLIENT_ACHIEVEMENTMODULE_ISBATTLEACHIEVEMENTINDOING_OFFSET UNITYSDK_OFFSET(0x8ECAC90)
#define RPG_CLIENT_ACHIEVEMENTMODULE_ONCMDGETQUESTDATASCRSP_OFFSET UNITYSDK_OFFSET(0x8ECC420)
#define RPG_CLIENT_ACHIEVEMENTMODULE_ONCMDGETQUESTRECORDSCRSP_OFFSET UNITYSDK_OFFSET(0x8ECE100)
#define RPG_CLIENT_ACHIEVEMENTMODULE_ONCMDPLAYERSYNCSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x8ECD130)
#define RPG_CLIENT_ACHIEVEMENTMODULE_ONCMDQUESTRECORDSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x8ECE430)
#define RPG_CLIENT_ACHIEVEMENTMODULE_ONCMDTAKEQUESTREWARDSCRSP_OFFSET UNITYSDK_OFFSET(0x8ECDB50)
#define RPG_CLIENT_ACHIEVEMENTMODULE_SENDFINISHCLIENTACHIEVEMENTCSREQ_OFFSET UNITYSDK_OFFSET(0x8ECBDD0)
#define RPG_CLIENT_ACHIEVEMENTMODULE_SENDTAKEQUESTREWARDPACKET_OFFSET UNITYSDK_OFFSET(0x8ECB450)
#define RPG_CLIENT_ACHIEVEMENTMODULE_SETTRACKMISSIONDATA_OFFSET UNITYSDK_OFFSET(0x8EC8D60)
#define RPG_CLIENT_ACHIEVEMENTMODULE_SET_RECORDPROCESS_OFFSET UNITYSDK_OFFSET(0x8ECE540)
#define RPG_CLIENT_ACHIEVEMENTMODULE_SET_SERIESIDREDDOTLIST_OFFSET UNITYSDK_OFFSET(0x8ECE500)
#define RPG_CLIENT_ACHIEVEMENTMODULE_SET_SERIESREDDOTINFO_OFFSET UNITYSDK_OFFSET(0x8ECE520)
#define RPG_CLIENT_ACHIEVEMENTMODULE_TRYGETUNDISPLAYHIDDENACHIEVEMENTBYSERIES_OFFSET UNITYSDK_OFFSET(0x8EC9920)
#define RPG_CLIENT_ACHIEVEMENTMODULE_TRYSETUNDISPLAYEDHIDDENACHIEVEMENT_OFFSET UNITYSDK_OFFSET(0x8ECD6C0)
#define RPG_CLIENT_ACHIEVEMENTMODULE_UNINITSPECIALACHIEVEMENTHANDLERS_OFFSET UNITYSDK_OFFSET(0x8ECC260)
#define RPG_CLIENT_ACHIEVEMENTMODULE_UPDATEHIDDENACHIEVEMENTSTATUSONFINISHDISPLAY_OFFSET UNITYSDK_OFFSET(0x8EC9BA0)
#define RPG_CLIENT_ACHIEVEMENTMODULE_UPDATESERIESREDDOT_OFFSET UNITYSDK_OFFSET(0x8ECDF40)
#define RPG_CLIENT_ACHIEVEMENTMODULE__ADDSPECIALCLIENTACHIEVEMENTHANDLER_OFFSET UNITYSDK_OFFSET(0x8ECCF00)
#define RPG_CLIENT_ACHIEVEMENTMODULE__CREATESPECIALACHIEVEMENTHANDLERS_OFFSET UNITYSDK_OFFSET(0x8EC9000)
#define RPG_CLIENT_ACHIEVEMENTMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x8ECE550)
#define RPG_CLIENT_ACHIEVEMENTMODULE__DISPOSEACHIEVEMENTMANAGER_OFFSET UNITYSDK_OFFSET(0x8EC9310)
#define RPG_CLIENT_ACHIEVEMENTMODULE__DISPOSESPECIALACHIEVEMENTHANDLERS_OFFSET UNITYSDK_OFFSET(0x8EC9360)
#define RPG_CLIENT_ACHIEVEMENTMODULE__INITACHIEVEMENTMANAGER_OFFSET UNITYSDK_OFFSET(0x8ECC1F0)
#define RPG_CLIENT_ACHIEVEMENTMODULE__INITSPECIALACHIEVEMENTHANDLERS_OFFSET UNITYSDK_OFFSET(0x8EC90D0)
#define RPG_CLIENT_ACHIEVEMENTMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8ECE990)
#define RPG_CLIENT_ACHIEVEMENTMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x8ECE900)

namespace RPG::Client
{
	inline static constexpr unsigned int AchievementModule_TypeDefinitionIndex = 49764;

	class AchievementModule : public ::RPG::Client::BaseModule
	{
	public:
		// static const ::System::Single _ClientAchievementCsReqCdTime; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* _SeriesRedDotInfo; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::AchievementData*>*>* _AchievementsBySeries; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::AchievementData*>* _AchievementsByBatlleScoring; // 0x20
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _HideHintSet; // 0x28
		::Class_1_50693F60BB22CCFC* _AchievementManager; // 0x30
		::System::Collections::Generic::Dictionary_2<::UnityEngine::AnyTuple3, ::System::Single>* _ClientAchievementCsReqCd; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::AchievementData*>* _AchievementsByQuest; // 0x40
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RecordType, ::System::UInt32>* _RecordProcess; // 0x48
		::System::Collections::Generic::List_1<::System::UInt32>* _SeriesIDRedDotList; // 0x50
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_530*>* _SpecialAchievementHandlers; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::AchievementData*>* _Achievements; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTMODULE__CTOR_OFFSET))(this);
		}

		::RPG::Client::AchievementData* GetData(::System::UInt32 id)
		{
			return ((::RPG::Client::AchievementData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTMODULE_GETDATA_OFFSET))(this, id);
		}

		::RPG::Client::AchievementData* GetAchievementDataByQuestID(::System::UInt32 questID)
		{
			return ((::RPG::Client::AchievementData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTMODULE_GETACHIEVEMENTDATABYQUESTID_OFFSET))(this, questID);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTMODULE_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTMODULE_DISPOSE_OFFSET))(this);
		}

		::System::UInt32 GetAchievedNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTMODULE_GETACHIEVEDNUM_OFFSET))(this);
		}

		::System::UInt32 GetAchievedNumByRarity(::System::String* rarity)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTMODULE_GETACHIEVEDNUMBYRARITY_OFFSET))(this, rarity);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* TryGetUnDisplayHiddenAchievementBySeries(::System::UInt32 series)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTMODULE_TRYGETUNDISPLAYHIDDENACHIEVEMENTBYSERIES_OFFSET))(this, series);
		}

		::System::Void UpdateHiddenAchievementStatusOnFinishDisplay(::System::UInt32 achievementID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTMODULE_UPDATEHIDDENACHIEVEMENTSTATUSONFINISHDISPLAY_OFFSET))(this, achievementID);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::AchievementSeriesRow*>* GetAchievementSeries()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::AchievementSeriesRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTMODULE_GETACHIEVEMENTSERIES_OFFSET))(this);
		}

		::System::UInt32 GetSeriesAchievedNum(::System::UInt32 index)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTMODULE_GETSERIESACHIEVEDNUM_OFFSET))(this, index);
		}

		::System::Int32 GetSeriesTotalAchievementsNum(::System::UInt32 index)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTMODULE_GETSERIESTOTALACHIEVEMENTSNUM_OFFSET))(this, index);
		}

		::System::UInt32 GetVisibleAchievementsNumBySeries(::System::UInt32 seriesIndex)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTMODULE_GETVISIBLEACHIEVEMENTSNUMBYSERIES_OFFSET))(this, seriesIndex);
		}

		::System::Boolean GetAchievementShowQuestionMark(::RPG::Client::AchievementData* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AchievementData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTMODULE_GETACHIEVEMENTSHOWQUESTIONMARK_OFFSET))(this, data);
		}

		::RPG::Client::AchievementData* GetAchievementDataByScoringID(::System::UInt32 scoringID)
		{
			return ((::RPG::Client::AchievementData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTMODULE_GETACHIEVEMENTDATABYSCORINGID_OFFSET))(this, scoringID);
		}

		::System::Boolean IsBattleAchievementInDoing(::System::UInt32 scoringId)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTMODULE_ISBATTLEACHIEVEMENTINDOING_OFFSET))(this, scoringId);
		}

		::System::Collections::Generic::List_1<::RPG::Client::AchievementData*>* GetAchievementDataBySeries(::System::UInt32 index)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::AchievementData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTMODULE_GETACHIEVEMENTDATABYSERIES_OFFSET))(this, index);
		}

		::System::Void SendTakeQuestRewardPacket(::System::Collections::Generic::List_1<::System::UInt32>* questids)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTMODULE_SENDTAKEQUESTREWARDPACKET_OFFSET))(this, questids);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* GetItemDisplayDatas(::RPG::GameCore::RewardRow* row)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::PVOID, ::RPG::GameCore::RewardRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTMODULE_GETITEMDISPLAYDATAS_OFFSET))(this, row);
		}

		::System::Collections::Generic::List_1<::RPG::Client::AchievementData*>* GetFinishHintData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::AchievementData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTMODULE_GETFINISHHINTDATA_OFFSET))(this);
		}

		::System::Boolean IsAchievementLevelRewardPartialClosed(::System::UInt32 level, ::System::Boolean isShowToast)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTMODULE_ISACHIEVEMENTLEVELREWARDPARTIALCLOSED_OFFSET))(this, level, isShowToast);
		}

		::System::Collections::Generic::List_1<::RPG::Client::AchievementData*>* GetAllAchievementData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::AchievementData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTMODULE_GETALLACHIEVEMENTDATA_OFFSET))(this);
		}

		::System::Void SendFinishClientAchievementCsReq(::System::UInt32 questID, ::System::UInt32 groupID, ::System::UInt32 propID, ::System::Boolean sendOnFinished, ::System::Boolean retryCd)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTMODULE_SENDFINISHCLIENTACHIEVEMENTCSREQ_OFFSET))(this, questID, groupID, propID, sendOnFinished, retryCd);
		}

		::System::Void HideHint(::System::UInt32 achievementID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTMODULE_HIDEHINT_OFFSET))(this, achievementID);
		}

		::System::Void InitAchievementData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTMODULE_INITACHIEVEMENTDATA_OFFSET))(this);
		}

		::System::Void _CreateSpecialAchievementHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTMODULE__CREATESPECIALACHIEVEMENTHANDLERS_OFFSET))(this);
		}

		::System::Void _InitSpecialAchievementHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTMODULE__INITSPECIALACHIEVEMENTHANDLERS_OFFSET))(this);
		}

		::System::Void _InitAchievementManager()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTMODULE__INITACHIEVEMENTMANAGER_OFFSET))(this);
		}

		::System::Void UninitSpecialAchievementHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTMODULE_UNINITSPECIALACHIEVEMENTHANDLERS_OFFSET))(this);
		}

		::System::Void _DisposeAchievementManager()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTMODULE__DISPOSEACHIEVEMENTMANAGER_OFFSET))(this);
		}

		::System::Void _DisposeSpecialAchievementHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTMODULE__DISPOSESPECIALACHIEVEMENTHANDLERS_OFFSET))(this);
		}

		::System::Boolean CheckAchievementAllowShowStatus(::RPG::Client::AchievementData* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AchievementData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTMODULE_CHECKACHIEVEMENTALLOWSHOWSTATUS_OFFSET))(this, data);
		}

		::System::Void OnCmdGetQuestDataScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTMODULE_ONCMDGETQUESTDATASCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _AddSpecialClientAchievementHandler()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTMODULE__ADDSPECIALCLIENTACHIEVEMENTHANDLER_OFFSET))(this);
		}

		::System::Void OnCmdPlayerSyncScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTMODULE_ONCMDPLAYERSYNCSCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void OnCmdTakeQuestRewardScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTMODULE_ONCMDTAKEQUESTREWARDSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void OnCmdGetQuestRecordScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTMODULE_ONCMDGETQUESTRECORDSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void OnCmdQuestRecordScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTMODULE_ONCMDQUESTRECORDSCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTMODULE_ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void CalUntakenAchievementSeriesRewardNum()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTMODULE_CALUNTAKENACHIEVEMENTSERIESREWARDNUM_OFFSET))(this);
		}

		::System::Void UpdateSeriesRedDot(::RPG::Client::AchievementData* data)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AchievementData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTMODULE_UPDATESERIESREDDOT_OFFSET))(this, data);
		}

		::System::Void SetTrackMissionData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTMODULE_SETTRACKMISSIONDATA_OFFSET))(this);
		}

		::System::Void TrySetUndisplayedHiddenAchievement(::RPG::Client::AchievementData* data, ::Enum_3_4608E37A1B3D374A_24 status)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AchievementData*, ::Enum_3_4608E37A1B3D374A_24))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTMODULE_TRYSETUNDISPLAYEDHIDDENACHIEVEMENT_OFFSET))(this, data, status);
		}

		::System::Boolean CheckAchievementShouldBeNotified(::RPG::Client::AchievementData* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AchievementData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTMODULE_CHECKACHIEVEMENTSHOULDBENOTIFIED_OFFSET))(this, data);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_SeriesIDRedDotList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTMODULE_GET_SERIESIDREDDOTLIST_OFFSET))(this);
		}

		::System::Void set_SeriesIDRedDotList(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTMODULE_SET_SERIESIDREDDOTLIST_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* get_SeriesRedDotInfo()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTMODULE_GET_SERIESREDDOTINFO_OFFSET))(this);
		}

		::System::Void set_SeriesRedDotInfo(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTMODULE_SET_SERIESREDDOTINFO_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RecordType, ::System::UInt32>* get_RecordProcess()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RecordType, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTMODULE_GET_RECORDPROCESS_OFFSET))(this);
		}

		::System::Void set_RecordProcess(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RecordType, ::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RecordType, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTMODULE_SET_RECORDPROCESS_OFFSET))(this, value);
		}

		::System::UInt32 get_AchievedNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTMODULE_GET_ACHIEVEDNUM_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTMODULE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}
	};
}
