#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_23.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/GameCore/RecordType.h"
#include "unitysdk/UnityEngine/AnyTuple3.h"

class Class_0_16E4307DCC419505_616;
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

#define RPG_CLIENT_ACHIEVEMENTMODULE_ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x9A9A4F0)
#define RPG_CLIENT_ACHIEVEMENTMODULE_CALUNTAKENACHIEVEMENTSERIESREWARDNUM_OFFSET UNITYSDK_OFFSET(0x9A9E0B0)
#define RPG_CLIENT_ACHIEVEMENTMODULE_CHECKACHIEVEMENTALLOWSHOWSTATUS_OFFSET UNITYSDK_OFFSET(0x9A9CA90)
#define RPG_CLIENT_ACHIEVEMENTMODULE_CHECKACHIEVEMENTSHOULDBENOTIFIED_OFFSET UNITYSDK_OFFSET(0x9A9F390)
#define RPG_CLIENT_ACHIEVEMENTMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9A9AB70)
#define RPG_CLIENT_ACHIEVEMENTMODULE_GETACHIEVEDNUMBYRARITY_OFFSET UNITYSDK_OFFSET(0x9A9AFB0)
#define RPG_CLIENT_ACHIEVEMENTMODULE_GETACHIEVEDNUM_OFFSET UNITYSDK_OFFSET(0x9A9AE10)
#define RPG_CLIENT_ACHIEVEMENTMODULE_GETACHIEVEMENTDATABYQUESTID_OFFSET UNITYSDK_OFFSET(0x9A99C60)
#define RPG_CLIENT_ACHIEVEMENTMODULE_GETACHIEVEMENTDATABYSCORINGID_OFFSET UNITYSDK_OFFSET(0x9A9C510)
#define RPG_CLIENT_ACHIEVEMENTMODULE_GETACHIEVEMENTDATABYSERIES_OFFSET UNITYSDK_OFFSET(0x9A9C6E0)
#define RPG_CLIENT_ACHIEVEMENTMODULE_GETACHIEVEMENTSERIES_OFFSET UNITYSDK_OFFSET(0x9A9B6B0)
#define RPG_CLIENT_ACHIEVEMENTMODULE_GETACHIEVEMENTSHOWQUESTIONMARK_OFFSET UNITYSDK_OFFSET(0x9A9BFE0)
#define RPG_CLIENT_ACHIEVEMENTMODULE_GETALLACHIEVEMENTDATA_OFFSET UNITYSDK_OFFSET(0x9A9D6B0)
#define RPG_CLIENT_ACHIEVEMENTMODULE_GETDATA_OFFSET UNITYSDK_OFFSET(0x9A99BA0)
#define RPG_CLIENT_ACHIEVEMENTMODULE_GETFINISHHINTDATA_OFFSET UNITYSDK_OFFSET(0x9A9D1B0)
#define RPG_CLIENT_ACHIEVEMENTMODULE_GETITEMDISPLAYDATAS_OFFSET UNITYSDK_OFFSET(0x9A9CEB0)
#define RPG_CLIENT_ACHIEVEMENTMODULE_GETSERIESACHIEVEDNUM_OFFSET UNITYSDK_OFFSET(0x9A9B8D0)
#define RPG_CLIENT_ACHIEVEMENTMODULE_GETSERIESTOTALACHIEVEMENTSNUM_OFFSET UNITYSDK_OFFSET(0x9A9BBC0)
#define RPG_CLIENT_ACHIEVEMENTMODULE_GETVISIBLEACHIEVEMENTSNUMBYSERIES_OFFSET UNITYSDK_OFFSET(0x9A9BCB0)
#define RPG_CLIENT_ACHIEVEMENTMODULE_GET_ACHIEVEDNUM_OFFSET UNITYSDK_OFFSET(0x9A9AE60)
#define RPG_CLIENT_ACHIEVEMENTMODULE_GET_RECORDPROCESS_OFFSET UNITYSDK_OFFSET(0x9A9FF10)
#define RPG_CLIENT_ACHIEVEMENTMODULE_GET_SERIESIDREDDOTLIST_OFFSET UNITYSDK_OFFSET(0x9A9FED0)
#define RPG_CLIENT_ACHIEVEMENTMODULE_GET_SERIESREDDOTINFO_OFFSET UNITYSDK_OFFSET(0x9A9FEF0)
#define RPG_CLIENT_ACHIEVEMENTMODULE_HIDEHINT_OFFSET UNITYSDK_OFFSET(0x9A9DB50)
#define RPG_CLIENT_ACHIEVEMENTMODULE_INITACHIEVEMENTDATA_OFFSET UNITYSDK_OFFSET(0x9A99DD0)
#define RPG_CLIENT_ACHIEVEMENTMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x9A99D20)
#define RPG_CLIENT_ACHIEVEMENTMODULE_ISACHIEVEMENTLEVELREWARDPARTIALCLOSED_OFFSET UNITYSDK_OFFSET(0x9A9D580)
#define RPG_CLIENT_ACHIEVEMENTMODULE_ISBATTLEACHIEVEMENTINDOING_OFFSET UNITYSDK_OFFSET(0x9A9C5D0)
#define RPG_CLIENT_ACHIEVEMENTMODULE_ONCMDGETQUESTDATASCRSP_OFFSET UNITYSDK_OFFSET(0x9A9DDE0)
#define RPG_CLIENT_ACHIEVEMENTMODULE_ONCMDGETQUESTRECORDSCRSP_OFFSET UNITYSDK_OFFSET(0x9A9FAE0)
#define RPG_CLIENT_ACHIEVEMENTMODULE_ONCMDPLAYERSYNCSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x9A9EAF0)
#define RPG_CLIENT_ACHIEVEMENTMODULE_ONCMDQUESTRECORDSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x9A9FE10)
#define RPG_CLIENT_ACHIEVEMENTMODULE_ONCMDTAKEQUESTREWARDSCRSP_OFFSET UNITYSDK_OFFSET(0x9A9F530)
#define RPG_CLIENT_ACHIEVEMENTMODULE_SENDFINISHCLIENTACHIEVEMENTCSREQ_OFFSET UNITYSDK_OFFSET(0x9A9D720)
#define RPG_CLIENT_ACHIEVEMENTMODULE_SENDTAKEQUESTREWARDPACKET_OFFSET UNITYSDK_OFFSET(0x9A9CDA0)
#define RPG_CLIENT_ACHIEVEMENTMODULE_SETTRACKMISSIONDATA_OFFSET UNITYSDK_OFFSET(0x9A9A640)
#define RPG_CLIENT_ACHIEVEMENTMODULE_SET_RECORDPROCESS_OFFSET UNITYSDK_OFFSET(0x9A9FF20)
#define RPG_CLIENT_ACHIEVEMENTMODULE_SET_SERIESIDREDDOTLIST_OFFSET UNITYSDK_OFFSET(0x9A9FEE0)
#define RPG_CLIENT_ACHIEVEMENTMODULE_SET_SERIESREDDOTINFO_OFFSET UNITYSDK_OFFSET(0x9A9FF00)
#define RPG_CLIENT_ACHIEVEMENTMODULE_TRYGETUNDISPLAYHIDDENACHIEVEMENTBYSERIES_OFFSET UNITYSDK_OFFSET(0x9A9B210)
#define RPG_CLIENT_ACHIEVEMENTMODULE_TRYSETUNDISPLAYEDHIDDENACHIEVEMENT_OFFSET UNITYSDK_OFFSET(0x9A9F070)
#define RPG_CLIENT_ACHIEVEMENTMODULE_UNINITSPECIALACHIEVEMENTHANDLERS_OFFSET UNITYSDK_OFFSET(0x9A9DC20)
#define RPG_CLIENT_ACHIEVEMENTMODULE_UPDATEHIDDENACHIEVEMENTSTATUSONFINISHDISPLAY_OFFSET UNITYSDK_OFFSET(0x9A9B490)
#define RPG_CLIENT_ACHIEVEMENTMODULE_UPDATESERIESREDDOT_OFFSET UNITYSDK_OFFSET(0x9A9F920)
#define RPG_CLIENT_ACHIEVEMENTMODULE__ADDSPECIALCLIENTACHIEVEMENTHANDLER_OFFSET UNITYSDK_OFFSET(0x9A9E8C0)
#define RPG_CLIENT_ACHIEVEMENTMODULE__CREATESPECIALACHIEVEMENTHANDLERS_OFFSET UNITYSDK_OFFSET(0x9A9A8F0)
#define RPG_CLIENT_ACHIEVEMENTMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x9A9FF30)
#define RPG_CLIENT_ACHIEVEMENTMODULE__DISPOSEACHIEVEMENTMANAGER_OFFSET UNITYSDK_OFFSET(0x9A9AC00)
#define RPG_CLIENT_ACHIEVEMENTMODULE__DISPOSESPECIALACHIEVEMENTHANDLERS_OFFSET UNITYSDK_OFFSET(0x9A9AC50)
#define RPG_CLIENT_ACHIEVEMENTMODULE__INITACHIEVEMENTMANAGER_OFFSET UNITYSDK_OFFSET(0x9A9DBB0)
#define RPG_CLIENT_ACHIEVEMENTMODULE__INITSPECIALACHIEVEMENTHANDLERS_OFFSET UNITYSDK_OFFSET(0x9A9A9C0)
#define RPG_CLIENT_ACHIEVEMENTMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9AA0370)
#define RPG_CLIENT_ACHIEVEMENTMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x9AA02E0)

namespace RPG::Client
{
	inline static constexpr unsigned int AchievementModule_TypeDefinitionIndex = 56586;

	class AchievementModule : public ::RPG::Client::BaseModule
	{
	public:
		// static const ::System::Single _ClientAchievementCsReqCdTime; // 0x0
		::System::Collections::Generic::List_1<::System::UInt32>* _SeriesIDRedDotList; // 0x10
		::Class_1_50693F60BB22CCFC* _AchievementManager; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::AchievementData*>*>* _AchievementsBySeries; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::AchievementData*>* _AchievementsByBatlleScoring; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::AchievementData*>* _AchievementsByQuest; // 0x30
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RecordType, ::System::UInt32>* _RecordProcess; // 0x38
		::System::Collections::Generic::Dictionary_2<::UnityEngine::AnyTuple3, ::System::Single>* _ClientAchievementCsReqCd; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* _SeriesRedDotInfo; // 0x48
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_616*>* _SpecialAchievementHandlers; // 0x50
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _HideHintSet; // 0x58
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

		::System::Void TrySetUndisplayedHiddenAchievement(::RPG::Client::AchievementData* data, ::Enum_3_4608E37A1B3D374A_23 status)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AchievementData*, ::Enum_3_4608E37A1B3D374A_23))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTMODULE_TRYSETUNDISPLAYEDHIDDENACHIEVEMENT_OFFSET))(this, data, status);
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
