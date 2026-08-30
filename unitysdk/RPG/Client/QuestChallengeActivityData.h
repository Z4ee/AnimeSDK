#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"

class Class_1_D17272E82AE804C2_893;
namespace Proto { class GetRaidInfoScRsp; }
namespace RPG::GameCore { class ChallengeActMarkConfigRow; }
namespace RPG::GameCore { class ChallengeActivityConfigRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define RPG_CLIENT_QUESTCHALLENGEACTIVITYDATA_CLEARNEWSCORECACHE_OFFSET UNITYSDK_OFFSET(0x18029AD0)
#define RPG_CLIENT_QUESTCHALLENGEACTIVITYDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0x180293E0)
#define RPG_CLIENT_QUESTCHALLENGEACTIVITYDATA_GETACTIVITYTOTALSCORE_OFFSET UNITYSDK_OFFSET(0x18029B70)
#define RPG_CLIENT_QUESTCHALLENGEACTIVITYDATA_GETCHALLENGEACTMARKROWBYSCORE_OFFSET UNITYSDK_OFFSET(0x18029980)
#define RPG_CLIENT_QUESTCHALLENGEACTIVITYDATA_GETMAXSCOREBYCHALLENGEID_OFFSET UNITYSDK_OFFSET(0x18029C20)
#define RPG_CLIENT_QUESTCHALLENGEACTIVITYDATA_GET_ISCANTAINAVAILABLEREWARD_OFFSET UNITYSDK_OFFSET(0x18029F80)
#define RPG_CLIENT_QUESTCHALLENGEACTIVITYDATA_ISCHALLENGEOBTAINNEWSCORE_OFFSET UNITYSDK_OFFSET(0x18029A70)
#define RPG_CLIENT_QUESTCHALLENGEACTIVITYDATA_ISCHALLENGERAIDFIRSTOPEN_OFFSET UNITYSDK_OFFSET(0x18029D10)
#define RPG_CLIENT_QUESTCHALLENGEACTIVITYDATA_ISREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0x18029CB0)
#define RPG_CLIENT_QUESTCHALLENGEACTIVITYDATA_ONENTERCHALLENGERAID_OFFSET UNITYSDK_OFFSET(0x18029EB0)
#define RPG_CLIENT_QUESTCHALLENGEACTIVITYDATA_SET_ISCANTAINAVAILABLEREWARD_OFFSET UNITYSDK_OFFSET(0x18029F90)
#define RPG_CLIENT_QUESTCHALLENGEACTIVITYDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x18029530)
#define RPG_CLIENT_QUESTCHALLENGEACTIVITYDATA_UPDATECHALLENGERAID_OFFSET UNITYSDK_OFFSET(0x180296B0)
#define RPG_CLIENT_QUESTCHALLENGEACTIVITYDATA_UPDATETAKENREWARD_OFFSET UNITYSDK_OFFSET(0x180297F0)
#define RPG_CLIENT_QUESTCHALLENGEACTIVITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x180292B0)
#define RPG_CLIENT_QUESTCHALLENGEACTIVITYDATA__REFRESHAVAILABLEREWARD_OFFSET UNITYSDK_OFFSET(0x18029870)

namespace RPG::Client
{
	inline static constexpr unsigned int QuestChallengeActivityData_TypeDefinitionIndex = 61744;

	class QuestChallengeActivityData : public ::RPG::Client::ActivityPanelData
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _TakenRewardIDSet; // 0xA0
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _ChallengeNewScoreCache; // 0xA8
		::RPG::GameCore::ChallengeActivityConfigRow* ChallengeRow; // 0xB0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _ChallengeRaidMaxScore; // 0xB8
		::System::Boolean _IsCantainAvailableReward_k__BackingField; // 0xC0

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTCHALLENGEACTIVITYDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTCHALLENGEACTIVITYDATA_CLEAR_OFFSET))(this);
		}

		::System::Void Sync(::Proto::GetRaidInfoScRsp* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::GetRaidInfoScRsp*))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTCHALLENGEACTIVITYDATA_SYNC_OFFSET))(this, a1);
		}

		::System::Void UpdateChallengeRaid(::Class_1_D17272E82AE804C2_893* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_893*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTCHALLENGEACTIVITYDATA_UPDATECHALLENGERAID_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateTakenReward(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTCHALLENGEACTIVITYDATA_UPDATETAKENREWARD_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::ChallengeActMarkConfigRow* GetChallengeActMarkRowByScore(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ChallengeActMarkConfigRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTCHALLENGEACTIVITYDATA_GETCHALLENGEACTMARKROWBYSCORE_OFFSET))(this, a1);
		}

		::System::Boolean IsChallengeObtainNewScore(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTCHALLENGEACTIVITYDATA_ISCHALLENGEOBTAINNEWSCORE_OFFSET))(this, a1);
		}

		::System::Void ClearNewScoreCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTCHALLENGEACTIVITYDATA_CLEARNEWSCORECACHE_OFFSET))(this);
		}

		::System::UInt32 GetActivityTotalScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTCHALLENGEACTIVITYDATA_GETACTIVITYTOTALSCORE_OFFSET))(this);
		}

		::System::UInt32 GetMaxScoreByChallengeID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTCHALLENGEACTIVITYDATA_GETMAXSCOREBYCHALLENGEID_OFFSET))(this, a1);
		}

		::System::Boolean IsRewardTaken(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTCHALLENGEACTIVITYDATA_ISREWARDTAKEN_OFFSET))(this, a1);
		}

		::System::Boolean IsChallengeRaidFirstOpen(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTCHALLENGEACTIVITYDATA_ISCHALLENGERAIDFIRSTOPEN_OFFSET))(this, a1);
		}

		::System::Void OnEnterChallengeRaid(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTCHALLENGEACTIVITYDATA_ONENTERCHALLENGERAID_OFFSET))(this, a1);
		}

		::System::Void _RefreshAvailableReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTCHALLENGEACTIVITYDATA__REFRESHAVAILABLEREWARD_OFFSET))(this);
		}

		::System::Boolean get_IsCantainAvailableReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTCHALLENGEACTIVITYDATA_GET_ISCANTAINAVAILABLEREWARD_OFFSET))(this);
		}

		::System::Void set_IsCantainAvailableReward(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTCHALLENGEACTIVITYDATA_SET_ISCANTAINAVAILABLEREWARD_OFFSET))(this, a1);
		}
	};
}
