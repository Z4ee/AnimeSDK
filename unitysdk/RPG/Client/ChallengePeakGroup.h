#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChallengePeakProgressInfo.h"
#include "unitysdk/RPG/Client/ChallengePeakRank.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChallengePeak; }
namespace RPG::Client { class ChallengePeakBoss; }
namespace RPG::Client { class ChallengePeakBossFriendLineupRecommendation; }
namespace RPG::Client { class ChallengePeakBossStatisticsLineupRecommendation; }
namespace RPG::Client { class ChallengePeakGroup_IServerAgent; }
namespace RPG::Client { class ChallengePeakNormalFriendLineupRecommendation; }
namespace RPG::Client { class ChallengePeakNormalStatisticsLineupRecommendation; }
namespace RPG::Client { class ChallengePeakRewardGroup; }
namespace RPG::Client { class ChallengeSettleConfirmation; }
namespace RPG::Client { class ScheduleData; }
namespace RPG::GameCore { class ChallengePeakGroupConfigRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHALLENGEPEAKGROUP_CHECKABOUTTOEXPIRE_OFFSET UNITYSDK_OFFSET(0x92E5F80)
#define RPG_CLIENT_CHALLENGEPEAKGROUP_CHECKALLMONSTERSAREPERFECTPASSEDINHISTORY_OFFSET UNITYSDK_OFFSET(0x92E5980)
#define RPG_CLIENT_CHALLENGEPEAKGROUP_CHECKALLNORMALHASPERFECTPASSED_OFFSET UNITYSDK_OFFSET(0x92E51B0)
#define RPG_CLIENT_CHALLENGEPEAKGROUP_CHECKEASYBOSSHASUNLOCKED_OFFSET UNITYSDK_OFFSET(0x92DD050)
#define RPG_CLIENT_CHALLENGEPEAKGROUP_CHECKHANDBOOKNEEDSHOWABOUTTOEXPIREHINT_OFFSET UNITYSDK_OFFSET(0x92E6B00)
#define RPG_CLIENT_CHALLENGEPEAKGROUP_CHECKHARDBOSSHASPASSED_OFFSET UNITYSDK_OFFSET(0x92E4C90)
#define RPG_CLIENT_CHALLENGEPEAKGROUP_CHECKHASANYPEAKISPASSEDINBESTRECORD_OFFSET UNITYSDK_OFFSET(0x92E4FA0)
#define RPG_CLIENT_CHALLENGEPEAKGROUP_CHECKHASANYPEAKISPASSED_OFFSET UNITYSDK_OFFSET(0x92E4D90)
#define RPG_CLIENT_CHALLENGEPEAKGROUP_CHECKHASSAVEDNORMALLINEUPS_OFFSET UNITYSDK_OFFSET(0x92E4D30)
#define RPG_CLIENT_CHALLENGEPEAKGROUP_CREATE_OFFSET UNITYSDK_OFFSET(0x92E4560)
#define RPG_CLIENT_CHALLENGEPEAKGROUP_GETBIGMEDALBACKGROUNDPREFABPATHBYRANK_OFFSET UNITYSDK_OFFSET(0x92E5F00)
#define RPG_CLIENT_CHALLENGEPEAKGROUP_GETBOSSFRIENDRECOMMENDATION_OFFSET UNITYSDK_OFFSET(0x92E5410)
#define RPG_CLIENT_CHALLENGEPEAKGROUP_GETBOSSSTARPROGRESSINFO_OFFSET UNITYSDK_OFFSET(0x92E4470)
#define RPG_CLIENT_CHALLENGEPEAKGROUP_GETBOSSSTATISTICRECOMMENDATION_OFFSET UNITYSDK_OFFSET(0x92E53C0)
#define RPG_CLIENT_CHALLENGEPEAKGROUP_GETCHALLENGEPEAKBOSS_OFFSET UNITYSDK_OFFSET(0x92DEAD0)
#define RPG_CLIENT_CHALLENGEPEAKGROUP_GETCHALLENGEPEAKBYINDEX_OFFSET UNITYSDK_OFFSET(0x92E47C0)
#define RPG_CLIENT_CHALLENGEPEAKGROUP_GETCHALLENGEPEAKS_OFFSET UNITYSDK_OFFSET(0x92E4A20)
#define RPG_CLIENT_CHALLENGEPEAKGROUP_GETLEVELPROGRESSINFO_OFFSET UNITYSDK_OFFSET(0x92E5720)
#define RPG_CLIENT_CHALLENGEPEAKGROUP_GETMEDALCOREICONPATHBYRANK_OFFSET UNITYSDK_OFFSET(0x92E5DF0)
#define RPG_CLIENT_CHALLENGEPEAKGROUP_GETMIDDLEMEDALBACKGROUNDICONPATHBYRANK_OFFSET UNITYSDK_OFFSET(0x92E5E80)
#define RPG_CLIENT_CHALLENGEPEAKGROUP_GETMONSTERSTARPROGRESSINFO_OFFSET UNITYSDK_OFFSET(0x92E4270)
#define RPG_CLIENT_CHALLENGEPEAKGROUP_GETNORMALFRIENDRECOMMENDATION_OFFSET UNITYSDK_OFFSET(0x92E5580)
#define RPG_CLIENT_CHALLENGEPEAKGROUP_GETNORMALSTATISTICRECOMMENDATION_OFFSET UNITYSDK_OFFSET(0x92E5460)
#define RPG_CLIENT_CHALLENGEPEAKGROUP_GETPEAKINDEXBYPEAKID_OFFSET UNITYSDK_OFFSET(0x92D9E30)
#define RPG_CLIENT_CHALLENGEPEAKGROUP_GETREMAINSECONDSTOEXPIREDAY_OFFSET UNITYSDK_OFFSET(0x92E66C0)
#define RPG_CLIENT_CHALLENGEPEAKGROUP_GETREMAINSECONDSTOSHOWABOUTTOEXPIREHINT_OFFSET UNITYSDK_OFFSET(0x92E6360)
#define RPG_CLIENT_CHALLENGEPEAKGROUP_GETSETTLECONFIRMATION_OFFSET UNITYSDK_OFFSET(0x92E6920)
#define RPG_CLIENT_CHALLENGEPEAKGROUP_GETSMALLMEDALICONPATHBYRANK_OFFSET UNITYSDK_OFFSET(0x92DE160)
#define RPG_CLIENT_CHALLENGEPEAKGROUP_GET_BOSSUI3DANIMATORPATH_OFFSET UNITYSDK_OFFSET(0x92E3EF0)
#define RPG_CLIENT_CHALLENGEPEAKGROUP_GET_BOSSUI3DPREFABPATH_OFFSET UNITYSDK_OFFSET(0x92E3ED0)
#define RPG_CLIENT_CHALLENGEPEAKGROUP_GET_COUNTOFPEAKS_OFFSET UNITYSDK_OFFSET(0x92E4010)
#define RPG_CLIENT_CHALLENGEPEAKGROUP_GET_HANDBOOKBANNERPATH_OFFSET UNITYSDK_OFFSET(0x92E3EB0)
#define RPG_CLIENT_CHALLENGEPEAKGROUP_GET_HINTGOODSID_OFFSET UNITYSDK_OFFSET(0x92E4240)
#define RPG_CLIENT_CHALLENGEPEAKGROUP_GET_ID_OFFSET UNITYSDK_OFFSET(0x92DA1B0)
#define RPG_CLIENT_CHALLENGEPEAKGROUP_GET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x92DC0D0)
#define RPG_CLIENT_CHALLENGEPEAKGROUP_GET_ISHARDMODEBOSS_OFFSET UNITYSDK_OFFSET(0x92E4070)
#define RPG_CLIENT_CHALLENGEPEAKGROUP_GET_ISNEW_OFFSET UNITYSDK_OFFSET(0x92DC1F0)
#define RPG_CLIENT_CHALLENGEPEAKGROUP_GET_RECOMMENDID_OFFSET UNITYSDK_OFFSET(0x92E3E50)
#define RPG_CLIENT_CHALLENGEPEAKGROUP_GET_REWARDGROUP_OFFSET UNITYSDK_OFFSET(0x92E4000)
#define RPG_CLIENT_CHALLENGEPEAKGROUP_GET_SCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0x92E3F10)
#define RPG_CLIENT_CHALLENGEPEAKGROUP_GET_SECONDSOFGOODSHINT_OFFSET UNITYSDK_OFFSET(0x92E4260)
#define RPG_CLIENT_CHALLENGEPEAKGROUP_GET_SHOPID_OFFSET UNITYSDK_OFFSET(0x92E40D0)
#define RPG_CLIENT_CHALLENGEPEAKGROUP_GET_THEMEICONPICPATH_OFFSET UNITYSDK_OFFSET(0x92E3E90)
#define RPG_CLIENT_CHALLENGEPEAKGROUP_GET_THEMEPOSTERTABPICPATH_OFFSET UNITYSDK_OFFSET(0x92E3E70)
#define RPG_CLIENT_CHALLENGEPEAKGROUP_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x92E3E20)
#define RPG_CLIENT_CHALLENGEPEAKGROUP_HASPASSREWARDCANTAKE_OFFSET UNITYSDK_OFFSET(0x92E5D20)
#define RPG_CLIENT_CHALLENGEPEAKGROUP_HASREWARDCANTAKE_OFFSET UNITYSDK_OFFSET(0x92DC440)
#define RPG_CLIENT_CHALLENGEPEAKGROUP_HASSTARREWARDCANTAKE_OFFSET UNITYSDK_OFFSET(0x92E5C30)
#define RPG_CLIENT_CHALLENGEPEAKGROUP_RECORDHANDBOOKHASSHOWNABOUTTOEXPIREHINT_OFFSET UNITYSDK_OFFSET(0x92E6C20)
#define RPG_CLIENT_CHALLENGEPEAKGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x92E4600)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengePeakGroup_TypeDefinitionIndex = 51267;

	class ChallengePeakGroup : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* _SmallMedalIconPathList; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ChallengePeak*>* _Peaks; // 0x18
		::RPG::GameCore::ChallengePeakGroupConfigRow* _Meta; // 0x20
		::RPG::Client::ChallengePeakRewardGroup* _RewardGroup_k__BackingField; // 0x28
		::RPG::Client::ChallengePeakGroup_IServerAgent* _ServerAgent; // 0x30
		::System::Collections::Generic::List_1<::System::String*>* _BigMedalBackgroundPrefabPathList; // 0x38
		::System::Collections::Generic::List_1<::System::String*>* _MiddleMedalBackgroundIconPathList; // 0x40
		::RPG::Client::ScheduleData* _ScheduleData; // 0x48

		::System::Void _ctor(::RPG::GameCore::ChallengePeakGroupConfigRow* meta, ::RPG::Client::ChallengePeakGroup_IServerAgent* serverAgent, ::RPG::Client::ChallengePeakRewardGroup* rewardGroup)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChallengePeakGroupConfigRow*, ::RPG::Client::ChallengePeakGroup_IServerAgent*, ::RPG::Client::ChallengePeakRewardGroup*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGROUP__CTOR_OFFSET))(this, meta, serverAgent, rewardGroup);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGROUP_GET_ID_OFFSET))(this);
		}

		::RPG::Client::TextID get_Title()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGROUP_GET_TITLE_OFFSET))(this);
		}

		::System::UInt32 get_RecommendID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGROUP_GET_RECOMMENDID_OFFSET))(this);
		}

		::System::String* get_ThemePosterTabPicPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGROUP_GET_THEMEPOSTERTABPICPATH_OFFSET))(this);
		}

		::System::String* get_ThemeIconPicPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGROUP_GET_THEMEICONPICPATH_OFFSET))(this);
		}

		::System::String* get_HandBookBannerPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGROUP_GET_HANDBOOKBANNERPATH_OFFSET))(this);
		}

		::System::String* get_BossUI3DPrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGROUP_GET_BOSSUI3DPREFABPATH_OFFSET))(this);
		}

		::System::String* get_BossUI3DAnimatorPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGROUP_GET_BOSSUI3DANIMATORPATH_OFFSET))(this);
		}

		::RPG::Client::ScheduleData* get_ScheduleData()
		{
			return ((::RPG::Client::ScheduleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGROUP_GET_SCHEDULEDATA_OFFSET))(this);
		}

		::RPG::Client::ChallengePeakRewardGroup* get_RewardGroup()
		{
			return ((::RPG::Client::ChallengePeakRewardGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGROUP_GET_REWARDGROUP_OFFSET))(this);
		}

		::System::Int32 get_CountOfPeaks()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGROUP_GET_COUNTOFPEAKS_OFFSET))(this);
		}

		::System::Boolean get_IsHardModeBoss()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGROUP_GET_ISHARDMODEBOSS_OFFSET))(this);
		}

		::System::Int32 get_ShopID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGROUP_GET_SHOPID_OFFSET))(this);
		}

		::System::UInt32 get_HintGoodsID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGROUP_GET_HINTGOODSID_OFFSET))(this);
		}

		::System::Single get_SecondsOfGoodsHint()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGROUP_GET_SECONDSOFGOODSHINT_OFFSET))(this);
		}

		::System::Boolean get_IsNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGROUP_GET_ISNEW_OFFSET))(this);
		}

		::System::Boolean get_IsCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGROUP_GET_ISCOMPLETED_OFFSET))(this);
		}

		static ::RPG::Client::ChallengePeakGroup* Create(::RPG::GameCore::ChallengePeakGroupConfigRow* meta, ::RPG::Client::ChallengePeakGroup_IServerAgent* serverAgent, ::RPG::Client::ChallengePeakRewardGroup* rewardGroup)
		{
			return ((::RPG::Client::ChallengePeakGroup*(*)(::RPG::GameCore::ChallengePeakGroupConfigRow*, ::RPG::Client::ChallengePeakGroup_IServerAgent*, ::RPG::Client::ChallengePeakRewardGroup*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGROUP_CREATE_OFFSET))(meta, serverAgent, rewardGroup);
		}

		::RPG::Client::ChallengePeak* GetChallengePeakByIndex(::System::Int32 index)
		{
			return ((::RPG::Client::ChallengePeak*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGROUP_GETCHALLENGEPEAKBYINDEX_OFFSET))(this, index);
		}

		::System::Int32 GetPeakIndexByPeakID(::System::UInt32 peakID)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGROUP_GETPEAKINDEXBYPEAKID_OFFSET))(this, peakID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChallengePeak*>* GetChallengePeaks()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChallengePeak*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGROUP_GETCHALLENGEPEAKS_OFFSET))(this);
		}

		::RPG::Client::ChallengePeakBoss* GetChallengePeakBoss()
		{
			return ((::RPG::Client::ChallengePeakBoss*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGROUP_GETCHALLENGEPEAKBOSS_OFFSET))(this);
		}

		::System::Boolean CheckHardBossHasPassed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGROUP_CHECKHARDBOSSHASPASSED_OFFSET))(this);
		}

		::System::Boolean CheckEasyBossHasUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGROUP_CHECKEASYBOSSHASUNLOCKED_OFFSET))(this);
		}

		::System::Boolean CheckHasSavedNormalLineups()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGROUP_CHECKHASSAVEDNORMALLINEUPS_OFFSET))(this);
		}

		::System::Boolean CheckHasAnyPeakIsPassed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGROUP_CHECKHASANYPEAKISPASSED_OFFSET))(this);
		}

		::System::Boolean CheckHasAnyPeakIsPassedInBestRecord()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGROUP_CHECKHASANYPEAKISPASSEDINBESTRECORD_OFFSET))(this);
		}

		::System::Boolean CheckAllNormalHasPerfectPassed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGROUP_CHECKALLNORMALHASPERFECTPASSED_OFFSET))(this);
		}

		::RPG::Client::ChallengePeakBossStatisticsLineupRecommendation* GetBossStatisticRecommendation()
		{
			return ((::RPG::Client::ChallengePeakBossStatisticsLineupRecommendation*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGROUP_GETBOSSSTATISTICRECOMMENDATION_OFFSET))(this);
		}

		::RPG::Client::ChallengePeakBossFriendLineupRecommendation* GetBossFriendRecommendation()
		{
			return ((::RPG::Client::ChallengePeakBossFriendLineupRecommendation*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGROUP_GETBOSSFRIENDRECOMMENDATION_OFFSET))(this);
		}

		::RPG::Client::ChallengePeakNormalStatisticsLineupRecommendation* GetNormalStatisticRecommendation()
		{
			return ((::RPG::Client::ChallengePeakNormalStatisticsLineupRecommendation*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGROUP_GETNORMALSTATISTICRECOMMENDATION_OFFSET))(this);
		}

		::RPG::Client::ChallengePeakNormalFriendLineupRecommendation* GetNormalFriendRecommendation()
		{
			return ((::RPG::Client::ChallengePeakNormalFriendLineupRecommendation*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGROUP_GETNORMALFRIENDRECOMMENDATION_OFFSET))(this);
		}

		::RPG::Client::ChallengePeakProgressInfo GetLevelProgressInfo()
		{
			return ((::RPG::Client::ChallengePeakProgressInfo(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGROUP_GETLEVELPROGRESSINFO_OFFSET))(this);
		}

		::RPG::Client::ChallengePeakProgressInfo GetMonsterStarProgressInfo()
		{
			return ((::RPG::Client::ChallengePeakProgressInfo(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGROUP_GETMONSTERSTARPROGRESSINFO_OFFSET))(this);
		}

		::RPG::Client::ChallengePeakProgressInfo GetBossStarProgressInfo()
		{
			return ((::RPG::Client::ChallengePeakProgressInfo(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGROUP_GETBOSSSTARPROGRESSINFO_OFFSET))(this);
		}

		::System::Boolean CheckAllMonstersArePerfectPassedInHistory()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGROUP_CHECKALLMONSTERSAREPERFECTPASSEDINHISTORY_OFFSET))(this);
		}

		::System::Boolean HasRewardCanTake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGROUP_HASREWARDCANTAKE_OFFSET))(this);
		}

		::System::Boolean HasStarRewardCanTake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGROUP_HASSTARREWARDCANTAKE_OFFSET))(this);
		}

		::System::Boolean HasPassRewardCanTake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGROUP_HASPASSREWARDCANTAKE_OFFSET))(this);
		}

		::System::String* GetMedalCoreIconPathByRank(::RPG::Client::ChallengePeakRank rank)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::Client::ChallengePeakRank))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGROUP_GETMEDALCOREICONPATHBYRANK_OFFSET))(this, rank);
		}

		::System::String* GetSmallMedalIconPathByRank(::RPG::Client::ChallengePeakRank rank)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::Client::ChallengePeakRank))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGROUP_GETSMALLMEDALICONPATHBYRANK_OFFSET))(this, rank);
		}

		::System::String* GetMiddleMedalBackgroundIconPathByRank(::RPG::Client::ChallengePeakRank rank)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::Client::ChallengePeakRank))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGROUP_GETMIDDLEMEDALBACKGROUNDICONPATHBYRANK_OFFSET))(this, rank);
		}

		::System::String* GetBigMedalBackgroundPrefabPathByRank(::RPG::Client::ChallengePeakRank rank)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::Client::ChallengePeakRank))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGROUP_GETBIGMEDALBACKGROUNDPREFABPATHBYRANK_OFFSET))(this, rank);
		}

		::System::Boolean CheckAboutToExpire()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGROUP_CHECKABOUTTOEXPIRE_OFFSET))(this);
		}

		::System::Int64 GetRemainSecondsToShowAboutToExpireHint()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGROUP_GETREMAINSECONDSTOSHOWABOUTTOEXPIREHINT_OFFSET))(this);
		}

		::System::Int64 GetRemainSecondsToExpireDay()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGROUP_GETREMAINSECONDSTOEXPIREDAY_OFFSET))(this);
		}

		::RPG::Client::ChallengeSettleConfirmation* GetSettleConfirmation()
		{
			return ((::RPG::Client::ChallengeSettleConfirmation*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGROUP_GETSETTLECONFIRMATION_OFFSET))(this);
		}

		::System::Boolean CheckHandbookNeedShowAboutToExpireHint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGROUP_CHECKHANDBOOKNEEDSHOWABOUTTOEXPIREHINT_OFFSET))(this);
		}

		::System::Void RecordHandbookHasShownAboutToExpireHint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGROUP_RECORDHANDBOOKHASSHOWNABOUTTOEXPIREHINT_OFFSET))(this);
		}
	};
}
