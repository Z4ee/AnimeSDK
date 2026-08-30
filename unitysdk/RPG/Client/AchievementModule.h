#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_25.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/GameCore/RecordType.h"
#include "unitysdk/UnityEngine/AnyTuple3.h"

class Class_0_16E4307DCC419505_713;
class Class_1_39422E68D4A0CFA7;
namespace RPG::Client { class AchievementData; }
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::Client { class RspHandler; }
namespace RPG::GameCore { class AchievementSeriesRow; }
namespace RPG::GameCore { class RewardRow; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACHIEVEMENTMODULE_ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xC4A4C60)
#define RPG_CLIENT_ACHIEVEMENTMODULE_CALUNTAKENACHIEVEMENTSERIESREWARDNUM_OFFSET UNITYSDK_OFFSET(0xC4A8170)
#define RPG_CLIENT_ACHIEVEMENTMODULE_CHECKACHIEVEMENTALLOWSHOWSTATUS_OFFSET UNITYSDK_OFFSET(0xC4A6810)
#define RPG_CLIENT_ACHIEVEMENTMODULE_CHECKACHIEVEMENTSHOULDBENOTIFIED_OFFSET UNITYSDK_OFFSET(0xC4A95F0)
#define RPG_CLIENT_ACHIEVEMENTMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC4A5300)
#define RPG_CLIENT_ACHIEVEMENTMODULE_GETACHIEVEDNUMBYRARITY_OFFSET UNITYSDK_OFFSET(0xC4A5880)
#define RPG_CLIENT_ACHIEVEMENTMODULE_GETACHIEVEDNUM_OFFSET UNITYSDK_OFFSET(0xC4A5600)
#define RPG_CLIENT_ACHIEVEMENTMODULE_GETACHIEVEMENTDATABYQUESTID_OFFSET UNITYSDK_OFFSET(0xC4A43C0)
#define RPG_CLIENT_ACHIEVEMENTMODULE_GETACHIEVEMENTDATABYSCORINGID_OFFSET UNITYSDK_OFFSET(0xC4A6660)
#define RPG_CLIENT_ACHIEVEMENTMODULE_GETACHIEVEMENTDATABYSERIES_OFFSET UNITYSDK_OFFSET(0xC4A27A0)
#define RPG_CLIENT_ACHIEVEMENTMODULE_GETACHIEVEMENTSERIES_OFFSET UNITYSDK_OFFSET(0xC4A2470)
#define RPG_CLIENT_ACHIEVEMENTMODULE_GETALLACHIEVEMENTDATA_OFFSET UNITYSDK_OFFSET(0xC4A7600)
#define RPG_CLIENT_ACHIEVEMENTMODULE_GETDATA_OFFSET UNITYSDK_OFFSET(0xC4A4330)
#define RPG_CLIENT_ACHIEVEMENTMODULE_GETFINISHHINTDATA_OFFSET UNITYSDK_OFFSET(0xC4A6F60)
#define RPG_CLIENT_ACHIEVEMENTMODULE_GETITEMDISPLAYDATAS_OFFSET UNITYSDK_OFFSET(0xC4A6B30)
#define RPG_CLIENT_ACHIEVEMENTMODULE_GETSERIESACHIEVEDNUM_OFFSET UNITYSDK_OFFSET(0xC4A5FE0)
#define RPG_CLIENT_ACHIEVEMENTMODULE_GETSERIESTOTALACHIEVEMENTSNUM_OFFSET UNITYSDK_OFFSET(0xC4A62A0)
#define RPG_CLIENT_ACHIEVEMENTMODULE_GETVISIBLEACHIEVEMENTSNUMBYSERIES_OFFSET UNITYSDK_OFFSET(0xC4A6360)
#define RPG_CLIENT_ACHIEVEMENTMODULE_GET_ACHIEVEDNUM_OFFSET UNITYSDK_OFFSET(0xC4A5650)
#define RPG_CLIENT_ACHIEVEMENTMODULE_GET_ACHIEVEMENTS_OFFSET UNITYSDK_OFFSET(0xC4AA530)
#define RPG_CLIENT_ACHIEVEMENTMODULE_GET_RECORDPROCESS_OFFSET UNITYSDK_OFFSET(0xC4AA4A0)
#define RPG_CLIENT_ACHIEVEMENTMODULE_GET_SERIESIDREDDOTLIST_OFFSET UNITYSDK_OFFSET(0xC4AA380)
#define RPG_CLIENT_ACHIEVEMENTMODULE_GET_SERIESREDDOTINFO_OFFSET UNITYSDK_OFFSET(0xC4AA410)
#define RPG_CLIENT_ACHIEVEMENTMODULE_HIDEHINT_OFFSET UNITYSDK_OFFSET(0xC4A7B10)
#define RPG_CLIENT_ACHIEVEMENTMODULE_INITACHIEVEMENTDATA_OFFSET UNITYSDK_OFFSET(0xC4A44C0)
#define RPG_CLIENT_ACHIEVEMENTMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xC4A4450)
#define RPG_CLIENT_ACHIEVEMENTMODULE_ISACHIEVEMENTLEVELREWARDPARTIALCLOSED_OFFSET UNITYSDK_OFFSET(0xC4A74E0)
#define RPG_CLIENT_ACHIEVEMENTMODULE_ISBATTLEACHIEVEMENTINDOING_OFFSET UNITYSDK_OFFSET(0xC4A66F0)
#define RPG_CLIENT_ACHIEVEMENTMODULE_ONCMDGETQUESTDATASCRSP_OFFSET UNITYSDK_OFFSET(0xC4A7E00)
#define RPG_CLIENT_ACHIEVEMENTMODULE_ONCMDGETQUESTRECORDSCRSP_OFFSET UNITYSDK_OFFSET(0xC4A9E70)
#define RPG_CLIENT_ACHIEVEMENTMODULE_ONCMDPLAYERSYNCSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xC4A8A80)
#define RPG_CLIENT_ACHIEVEMENTMODULE_ONCMDQUESTRECORDSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xC4AA2C0)
#define RPG_CLIENT_ACHIEVEMENTMODULE_ONCMDTAKEQUESTREWARDSCRSP_OFFSET UNITYSDK_OFFSET(0xC4A9790)
#define RPG_CLIENT_ACHIEVEMENTMODULE_SENDFINISHCLIENTACHIEVEMENTCSREQ_OFFSET UNITYSDK_OFFSET(0xC4A76F0)
#define RPG_CLIENT_ACHIEVEMENTMODULE_SENDTAKEQUESTREWARDPACKET_OFFSET UNITYSDK_OFFSET(0xC4A6A20)
#define RPG_CLIENT_ACHIEVEMENTMODULE_SET_RECORDPROCESS_OFFSET UNITYSDK_OFFSET(0xC4AA4E0)
#define RPG_CLIENT_ACHIEVEMENTMODULE_SET_SERIESIDREDDOTLIST_OFFSET UNITYSDK_OFFSET(0xC4AA3C0)
#define RPG_CLIENT_ACHIEVEMENTMODULE_SET_SERIESREDDOTINFO_OFFSET UNITYSDK_OFFSET(0xC4AA450)
#define RPG_CLIENT_ACHIEVEMENTMODULE_TRYGETUNDISPLAYHIDDENACHIEVEMENTBYSERIES_OFFSET UNITYSDK_OFFSET(0xC4A5B20)
#define RPG_CLIENT_ACHIEVEMENTMODULE_TRYSETUNDISPLAYEDHIDDENACHIEVEMENT_OFFSET UNITYSDK_OFFSET(0xC4A92D0)
#define RPG_CLIENT_ACHIEVEMENTMODULE_UNINITSPECIALACHIEVEMENTHANDLERS_OFFSET UNITYSDK_OFFSET(0xC4A7BE0)
#define RPG_CLIENT_ACHIEVEMENTMODULE_UPDATEHIDDENACHIEVEMENTSTATUSONFINISHDISPLAY_OFFSET UNITYSDK_OFFSET(0xC4A5DC0)
#define RPG_CLIENT_ACHIEVEMENTMODULE_UPDATESERIESREDDOT_OFFSET UNITYSDK_OFFSET(0xC4A9B90)
#define RPG_CLIENT_ACHIEVEMENTMODULE__ADDSPECIALCLIENTACHIEVEMENTHANDLER_OFFSET UNITYSDK_OFFSET(0xC4A8760)
#define RPG_CLIENT_ACHIEVEMENTMODULE__CREATESPECIALACHIEVEMENTHANDLERS_OFFSET UNITYSDK_OFFSET(0xC4A4F60)
#define RPG_CLIENT_ACHIEVEMENTMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xC4AA570)
#define RPG_CLIENT_ACHIEVEMENTMODULE__DISPOSEACHIEVEMENTMANAGER_OFFSET UNITYSDK_OFFSET(0xC4A5390)
#define RPG_CLIENT_ACHIEVEMENTMODULE__DISPOSESPECIALACHIEVEMENTHANDLERS_OFFSET UNITYSDK_OFFSET(0xC4A53E0)
#define RPG_CLIENT_ACHIEVEMENTMODULE__INITACHIEVEMENTMANAGER_OFFSET UNITYSDK_OFFSET(0xC4A7B70)
#define RPG_CLIENT_ACHIEVEMENTMODULE__INITSPECIALACHIEVEMENTHANDLERS_OFFSET UNITYSDK_OFFSET(0xC4A50E0)

namespace RPG::Client
{
	inline static constexpr unsigned int AchievementModule_TypeDefinitionIndex = 61454;

	class AchievementModule : public ::RPG::Client::BaseModule
	{
	public:
		// static const ::System::Single _ClientAchievementCsReqCdTime; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::AchievementData*>* _AchievementsByBatlleScoring; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::AchievementData*>* _AchievementsByQuest; // 0x18
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _HideHintSet; // 0x20
		::Class_1_39422E68D4A0CFA7* _AchievementManager; // 0x28
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RecordType, ::System::UInt32>* _RecordProcess; // 0x30
		::System::Collections::Generic::List_1<::System::UInt32>* _SeriesIDRedDotList; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::AchievementData*>* _Achievements; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* _SeriesRedDotInfo; // 0x48
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_713*>* _SpecialAchievementHandlers; // 0x50
		::System::Collections::Generic::Dictionary_2<::UnityEngine::AnyTuple3, ::System::Single>* _ClientAchievementCsReqCd; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::AchievementData*>*>* _AchievementsBySeries; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTMODULE__CTOR_OFFSET))(this);
		}

		::RPG::Client::AchievementData* GetData(::System::UInt32 a1)
		{
			return ((::RPG::Client::AchievementData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTMODULE_GETDATA_OFFSET))(this, a1);
		}

		::RPG::Client::AchievementData* GetAchievementDataByQuestID(::System::UInt32 a1)
		{
			return ((::RPG::Client::AchievementData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTMODULE_GETACHIEVEMENTDATABYQUESTID_OFFSET))(this, a1);
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

		::System::UInt32 GetAchievedNumByRarity(::System::String* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTMODULE_GETACHIEVEDNUMBYRARITY_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* TryGetUnDisplayHiddenAchievementBySeries(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTMODULE_TRYGETUNDISPLAYHIDDENACHIEVEMENTBYSERIES_OFFSET))(this, a1);
		}

		::System::Void UpdateHiddenAchievementStatusOnFinishDisplay(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTMODULE_UPDATEHIDDENACHIEVEMENTSTATUSONFINISHDISPLAY_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::AchievementSeriesRow*>* GetAchievementSeries()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::AchievementSeriesRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTMODULE_GETACHIEVEMENTSERIES_OFFSET))(this);
		}

		::System::UInt32 GetSeriesAchievedNum(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTMODULE_GETSERIESACHIEVEDNUM_OFFSET))(this, a1);
		}

		::System::Int32 GetSeriesTotalAchievementsNum(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTMODULE_GETSERIESTOTALACHIEVEMENTSNUM_OFFSET))(this, a1);
		}

		::System::UInt32 GetVisibleAchievementsNumBySeries(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTMODULE_GETVISIBLEACHIEVEMENTSNUMBYSERIES_OFFSET))(this, a1);
		}

		::RPG::Client::AchievementData* GetAchievementDataByScoringID(::System::UInt32 a1)
		{
			return ((::RPG::Client::AchievementData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTMODULE_GETACHIEVEMENTDATABYSCORINGID_OFFSET))(this, a1);
		}

		::System::Boolean IsBattleAchievementInDoing(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTMODULE_ISBATTLEACHIEVEMENTINDOING_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::AchievementData*>* GetAchievementDataBySeries(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::AchievementData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTMODULE_GETACHIEVEMENTDATABYSERIES_OFFSET))(this, a1);
		}

		::System::Void SendTakeQuestRewardPacket(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTMODULE_SENDTAKEQUESTREWARDPACKET_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* GetItemDisplayDatas(::RPG::GameCore::RewardRow* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::PVOID, ::RPG::GameCore::RewardRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTMODULE_GETITEMDISPLAYDATAS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::AchievementData*>* GetFinishHintData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::AchievementData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTMODULE_GETFINISHHINTDATA_OFFSET))(this);
		}

		::System::Boolean IsAchievementLevelRewardPartialClosed(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTMODULE_ISACHIEVEMENTLEVELREWARDPARTIALCLOSED_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::AchievementData*>* GetAllAchievementData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::AchievementData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTMODULE_GETALLACHIEVEMENTDATA_OFFSET))(this);
		}

		::System::Void SendFinishClientAchievementCsReq(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTMODULE_SENDFINISHCLIENTACHIEVEMENTCSREQ_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void HideHint(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTMODULE_HIDEHINT_OFFSET))(this, a1);
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

		::System::Boolean CheckAchievementAllowShowStatus(::RPG::Client::AchievementData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AchievementData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTMODULE_CHECKACHIEVEMENTALLOWSHOWSTATUS_OFFSET))(this, a1);
		}

		::System::Void OnCmdGetQuestDataScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTMODULE_ONCMDGETQUESTDATASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _AddSpecialClientAchievementHandler()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTMODULE__ADDSPECIALCLIENTACHIEVEMENTHANDLER_OFFSET))(this);
		}

		::System::Void OnCmdPlayerSyncScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTMODULE_ONCMDPLAYERSYNCSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void OnCmdTakeQuestRewardScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTMODULE_ONCMDTAKEQUESTREWARDSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void OnCmdGetQuestRecordScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTMODULE_ONCMDGETQUESTRECORDSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void OnCmdQuestRecordScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTMODULE_ONCMDQUESTRECORDSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTMODULE_ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void CalUntakenAchievementSeriesRewardNum()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTMODULE_CALUNTAKENACHIEVEMENTSERIESREWARDNUM_OFFSET))(this);
		}

		::System::Void UpdateSeriesRedDot(::RPG::Client::AchievementData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AchievementData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTMODULE_UPDATESERIESREDDOT_OFFSET))(this, a1);
		}

		::System::Void TrySetUndisplayedHiddenAchievement(::RPG::Client::AchievementData* a1, ::Enum_3_4608E37A1B3D374A_25 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AchievementData*, ::Enum_3_4608E37A1B3D374A_25))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTMODULE_TRYSETUNDISPLAYEDHIDDENACHIEVEMENT_OFFSET))(this, a1, a2);
		}

		::System::Boolean CheckAchievementShouldBeNotified(::RPG::Client::AchievementData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AchievementData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTMODULE_CHECKACHIEVEMENTSHOULDBENOTIFIED_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_SeriesIDRedDotList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTMODULE_GET_SERIESIDREDDOTLIST_OFFSET))(this);
		}

		::System::Void set_SeriesIDRedDotList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTMODULE_SET_SERIESIDREDDOTLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* get_SeriesRedDotInfo()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTMODULE_GET_SERIESREDDOTINFO_OFFSET))(this);
		}

		::System::Void set_SeriesRedDotInfo(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTMODULE_SET_SERIESREDDOTINFO_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RecordType, ::System::UInt32>* get_RecordProcess()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RecordType, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTMODULE_GET_RECORDPROCESS_OFFSET))(this);
		}

		::System::Void set_RecordProcess(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RecordType, ::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RecordType, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTMODULE_SET_RECORDPROCESS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::RPG::Client::AchievementData*>* get_Achievements()
		{
			return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::RPG::Client::AchievementData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTMODULE_GET_ACHIEVEMENTS_OFFSET))(this);
		}

		::System::UInt32 get_AchievedNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTMODULE_GET_ACHIEVEDNUM_OFFSET))(this);
		}
	};
}
