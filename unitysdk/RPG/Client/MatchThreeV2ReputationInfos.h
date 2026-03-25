#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MatchThreeV2ChallengerInfos; }
namespace RPG::Client { class MatchThreeV2ReputationData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MATCHTHREEV2REPUTATIONINFOS_CREATE_OFFSET UNITYSDK_OFFSET(0x9B5F7F0)
#define RPG_CLIENT_MATCHTHREEV2REPUTATIONINFOS_GETCHALLENGINGREPUTATIONDATALIST_OFFSET UNITYSDK_OFFSET(0x9B6C260)
#define RPG_CLIENT_MATCHTHREEV2REPUTATIONINFOS_GETMAXREPUTATION_OFFSET UNITYSDK_OFFSET(0x9B5ECA0)
#define RPG_CLIENT_MATCHTHREEV2REPUTATIONINFOS_GETREPUTATIONDATALIST_OFFSET UNITYSDK_OFFSET(0x9B5ECE0)
#define RPG_CLIENT_MATCHTHREEV2REPUTATIONINFOS_GETREPUTATIONDATA_OFFSET UNITYSDK_OFFSET(0x9B66BF0)
#define RPG_CLIENT_MATCHTHREEV2REPUTATIONINFOS__CTOR_OFFSET UNITYSDK_OFFSET(0x9B6C010)
#define RPG_CLIENT_MATCHTHREEV2REPUTATIONINFOS__INIT_OFFSET UNITYSDK_OFFSET(0x9B6C020)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeV2ReputationInfos_TypeDefinitionIndex = 53647;

	class MatchThreeV2ReputationInfos : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MatchThreeV2ReputationData*>* _DataDict; // 0x10
		::System::UInt32 _MaxReputation; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2REPUTATIONINFOS__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MatchThreeV2ReputationInfos* Create(::RPG::Client::MatchThreeV2ChallengerInfos* challengerInfos)
		{
			return ((::RPG::Client::MatchThreeV2ReputationInfos*(*)(::RPG::Client::MatchThreeV2ChallengerInfos*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2REPUTATIONINFOS_CREATE_OFFSET))(challengerInfos);
		}

		::System::Void _Init(::RPG::Client::MatchThreeV2ChallengerInfos* challengerInfos)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreeV2ChallengerInfos*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2REPUTATIONINFOS__INIT_OFFSET))(this, challengerInfos);
		}

		::RPG::Client::MatchThreeV2ReputationData* GetReputationData(::System::UInt32 reputationID)
		{
			return ((::RPG::Client::MatchThreeV2ReputationData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2REPUTATIONINFOS_GETREPUTATIONDATA_OFFSET))(this, reputationID);
		}

		::System::UInt32 GetMaxReputation()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2REPUTATIONINFOS_GETMAXREPUTATION_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MatchThreeV2ReputationData*>* GetChallengingReputationDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MatchThreeV2ReputationData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2REPUTATIONINFOS_GETCHALLENGINGREPUTATIONDATALIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MatchThreeV2ReputationData*>* GetReputationDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MatchThreeV2ReputationData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2REPUTATIONINFOS_GETREPUTATIONDATALIST_OFFSET))(this);
		}
	};
}
