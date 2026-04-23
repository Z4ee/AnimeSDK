#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"

class Class_1_D17272E82AE804C2_732;
namespace Proto { class GetRaidInfoScRsp; }
namespace RPG::GameCore { class ChallengeActMarkConfigRow; }
namespace RPG::GameCore { class ChallengeActivityConfigRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define RPG_CLIENT_QUESTCHALLENGEACTIVITYDATA_CLEARNEWSCORECACHE_OFFSET UNITYSDK_OFFSET(0xAF37260)
#define RPG_CLIENT_QUESTCHALLENGEACTIVITYDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0xAF36B50)
#define RPG_CLIENT_QUESTCHALLENGEACTIVITYDATA_GETACTIVITYTOTALSCORE_OFFSET UNITYSDK_OFFSET(0xAF372F0)
#define RPG_CLIENT_QUESTCHALLENGEACTIVITYDATA_GETCHALLENGEACTMARKROWBYSCORE_OFFSET UNITYSDK_OFFSET(0xAF37100)
#define RPG_CLIENT_QUESTCHALLENGEACTIVITYDATA_GETMAXSCOREBYCHALLENGEID_OFFSET UNITYSDK_OFFSET(0xAF373A0)
#define RPG_CLIENT_QUESTCHALLENGEACTIVITYDATA_GET_ISCANTAINAVAILABLEREWARD_OFFSET UNITYSDK_OFFSET(0xAF37710)
#define RPG_CLIENT_QUESTCHALLENGEACTIVITYDATA_ISCHALLENGEOBTAINNEWSCORE_OFFSET UNITYSDK_OFFSET(0xAF37200)
#define RPG_CLIENT_QUESTCHALLENGEACTIVITYDATA_ISCHALLENGERAIDFIRSTOPEN_OFFSET UNITYSDK_OFFSET(0xAF374A0)
#define RPG_CLIENT_QUESTCHALLENGEACTIVITYDATA_ISREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0xAF37440)
#define RPG_CLIENT_QUESTCHALLENGEACTIVITYDATA_ONENTERCHALLENGERAID_OFFSET UNITYSDK_OFFSET(0xAF37640)
#define RPG_CLIENT_QUESTCHALLENGEACTIVITYDATA_SET_ISCANTAINAVAILABLEREWARD_OFFSET UNITYSDK_OFFSET(0xAF37720)
#define RPG_CLIENT_QUESTCHALLENGEACTIVITYDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xAF36CB0)
#define RPG_CLIENT_QUESTCHALLENGEACTIVITYDATA_UPDATECHALLENGERAID_OFFSET UNITYSDK_OFFSET(0xAF36E10)
#define RPG_CLIENT_QUESTCHALLENGEACTIVITYDATA_UPDATETAKENREWARD_OFFSET UNITYSDK_OFFSET(0xAF36F60)
#define RPG_CLIENT_QUESTCHALLENGEACTIVITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xAF36A50)
#define RPG_CLIENT_QUESTCHALLENGEACTIVITYDATA__REFRESHAVAILABLEREWARD_OFFSET UNITYSDK_OFFSET(0xAF36FE0)

namespace RPG::Client
{
	inline static constexpr unsigned int QuestChallengeActivityData_TypeDefinitionIndex = 56856;

	class QuestChallengeActivityData : public ::RPG::Client::ActivityPanelData
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _ChallengeNewScoreCache; // 0xA0
		::RPG::GameCore::ChallengeActivityConfigRow* ChallengeRow; // 0xA8
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _TakenRewardIDSet; // 0xB0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _ChallengeRaidMaxScore; // 0xB8
		::System::Boolean _IsCantainAvailableReward_k__BackingField; // 0xC0

		::System::Void _ctor(::System::UInt32 ID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTCHALLENGEACTIVITYDATA__CTOR_OFFSET))(this, ID);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTCHALLENGEACTIVITYDATA_CLEAR_OFFSET))(this);
		}

		::System::Void Sync(::Proto::GetRaidInfoScRsp* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::GetRaidInfoScRsp*))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTCHALLENGEACTIVITYDATA_SYNC_OFFSET))(this, rsp);
		}

		::System::Void UpdateChallengeRaid(::Class_1_D17272E82AE804C2_732* raidInfo, ::System::Boolean cacheNewScore)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_732*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTCHALLENGEACTIVITYDATA_UPDATECHALLENGERAID_OFFSET))(this, raidInfo, cacheNewScore);
		}

		::System::Void UpdateTakenReward(::System::UInt32 rewardID, ::System::Boolean refresh)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTCHALLENGEACTIVITYDATA_UPDATETAKENREWARD_OFFSET))(this, rewardID, refresh);
		}

		::RPG::GameCore::ChallengeActMarkConfigRow* GetChallengeActMarkRowByScore(::System::UInt32 score)
		{
			return ((::RPG::GameCore::ChallengeActMarkConfigRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTCHALLENGEACTIVITYDATA_GETCHALLENGEACTMARKROWBYSCORE_OFFSET))(this, score);
		}

		::System::Boolean IsChallengeObtainNewScore(::System::UInt32 challengeID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTCHALLENGEACTIVITYDATA_ISCHALLENGEOBTAINNEWSCORE_OFFSET))(this, challengeID);
		}

		::System::Void ClearNewScoreCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTCHALLENGEACTIVITYDATA_CLEARNEWSCORECACHE_OFFSET))(this);
		}

		::System::UInt32 GetActivityTotalScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTCHALLENGEACTIVITYDATA_GETACTIVITYTOTALSCORE_OFFSET))(this);
		}

		::System::UInt32 GetMaxScoreByChallengeID(::System::UInt32 challengeID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTCHALLENGEACTIVITYDATA_GETMAXSCOREBYCHALLENGEID_OFFSET))(this, challengeID);
		}

		::System::Boolean IsRewardTaken(::System::UInt32 rewardID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTCHALLENGEACTIVITYDATA_ISREWARDTAKEN_OFFSET))(this, rewardID);
		}

		::System::Boolean IsChallengeRaidFirstOpen(::System::UInt32 challengeID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTCHALLENGEACTIVITYDATA_ISCHALLENGERAIDFIRSTOPEN_OFFSET))(this, challengeID);
		}

		::System::Void OnEnterChallengeRaid(::System::UInt32 challengeID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTCHALLENGEACTIVITYDATA_ONENTERCHALLENGERAID_OFFSET))(this, challengeID);
		}

		::System::Void _RefreshAvailableReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTCHALLENGEACTIVITYDATA__REFRESHAVAILABLEREWARD_OFFSET))(this);
		}

		::System::Boolean get_IsCantainAvailableReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTCHALLENGEACTIVITYDATA_GET_ISCANTAINAVAILABLEREWARD_OFFSET))(this);
		}

		::System::Void set_IsCantainAvailableReward(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTCHALLENGEACTIVITYDATA_SET_ISCANTAINAVAILABLEREWARD_OFFSET))(this, value);
		}
	};
}
