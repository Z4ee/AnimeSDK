#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MatchThreeV2ChallengerInfos; }
namespace RPG::Client { class MatchThreeV2ReputationData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MATCHTHREEV2REPUTATIONINFOS_CREATE_OFFSET UNITYSDK_OFFSET(0xBFA26A0)
#define RPG_CLIENT_MATCHTHREEV2REPUTATIONINFOS_GETCHALLENGINGREPUTATIONDATALIST_OFFSET UNITYSDK_OFFSET(0xBFB0150)
#define RPG_CLIENT_MATCHTHREEV2REPUTATIONINFOS_GETMAXREPUTATION_OFFSET UNITYSDK_OFFSET(0xBFA1B40)
#define RPG_CLIENT_MATCHTHREEV2REPUTATIONINFOS_GETREPUTATIONDATALIST_OFFSET UNITYSDK_OFFSET(0xBFA1B80)
#define RPG_CLIENT_MATCHTHREEV2REPUTATIONINFOS_GETREPUTATIONDATA_OFFSET UNITYSDK_OFFSET(0xBFA9FF0)
#define RPG_CLIENT_MATCHTHREEV2REPUTATIONINFOS__CTOR_OFFSET UNITYSDK_OFFSET(0xBFAFEB0)
#define RPG_CLIENT_MATCHTHREEV2REPUTATIONINFOS__INIT_OFFSET UNITYSDK_OFFSET(0xBFAFEC0)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeV2ReputationInfos_TypeDefinitionIndex = 61725;

	class MatchThreeV2ReputationInfos : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MatchThreeV2ReputationData*>* _DataDict; // 0x10
		::System::UInt32 _MaxReputation; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2REPUTATIONINFOS__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MatchThreeV2ReputationInfos* Create(::RPG::Client::MatchThreeV2ChallengerInfos* a1)
		{
			return ((::RPG::Client::MatchThreeV2ReputationInfos*(*)(::RPG::Client::MatchThreeV2ChallengerInfos*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2REPUTATIONINFOS_CREATE_OFFSET))(a1);
		}

		::System::Void _Init(::RPG::Client::MatchThreeV2ChallengerInfos* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreeV2ChallengerInfos*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2REPUTATIONINFOS__INIT_OFFSET))(this, a1);
		}

		::RPG::Client::MatchThreeV2ReputationData* GetReputationData(::System::UInt32 a1)
		{
			return ((::RPG::Client::MatchThreeV2ReputationData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2REPUTATIONINFOS_GETREPUTATIONDATA_OFFSET))(this, a1);
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
