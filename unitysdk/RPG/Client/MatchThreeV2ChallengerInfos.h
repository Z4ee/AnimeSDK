#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2EC3A5163E0CD5F4;
namespace RPG::Client { class MatchThreeV2ChallengerData; }
namespace RPG::Client { class MatchThreeV2LevelInfos; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_MATCHTHREEV2CHALLENGERINFOS_CREATE_OFFSET UNITYSDK_OFFSET(0x1AB81690)
#define RPG_CLIENT_MATCHTHREEV2CHALLENGERINFOS_GETCHALLENGERDATABYGAMELEVEL_OFFSET UNITYSDK_OFFSET(0x1AB81C50)
#define RPG_CLIENT_MATCHTHREEV2CHALLENGERINFOS_GETCHALLENGERDATA_OFFSET UNITYSDK_OFFSET(0x1AB81BA0)
#define RPG_CLIENT_MATCHTHREEV2CHALLENGERINFOS_ISCHALLENGINGLEVEL_OFFSET UNITYSDK_OFFSET(0x1AB81D60)
#define RPG_CLIENT_MATCHTHREEV2CHALLENGERINFOS__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB81710)
#define RPG_CLIENT_MATCHTHREEV2CHALLENGERINFOS__INIT_OFFSET UNITYSDK_OFFSET(0x1AB81720)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeV2ChallengerInfos_TypeDefinitionIndex = 63060;

	class MatchThreeV2ChallengerInfos : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MatchThreeV2ChallengerData*>* _DataDict; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _LevelIDToChallenger; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2CHALLENGERINFOS__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MatchThreeV2ChallengerInfos* Create(::Class_1_2EC3A5163E0CD5F4* a1, ::RPG::Client::MatchThreeV2LevelInfos* a2)
		{
			return ((::RPG::Client::MatchThreeV2ChallengerInfos*(*)(::Class_1_2EC3A5163E0CD5F4*, ::RPG::Client::MatchThreeV2LevelInfos*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2CHALLENGERINFOS_CREATE_OFFSET))(a1, a2);
		}

		::System::Void _Init(::Class_1_2EC3A5163E0CD5F4* a1, ::RPG::Client::MatchThreeV2LevelInfos* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2EC3A5163E0CD5F4*, ::RPG::Client::MatchThreeV2LevelInfos*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2CHALLENGERINFOS__INIT_OFFSET))(this, a1, a2);
		}

		::RPG::Client::MatchThreeV2ChallengerData* GetChallengerData(::System::UInt32 a1)
		{
			return ((::RPG::Client::MatchThreeV2ChallengerData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2CHALLENGERINFOS_GETCHALLENGERDATA_OFFSET))(this, a1);
		}

		::RPG::Client::MatchThreeV2ChallengerData* GetChallengerDataByGameLevel(::System::UInt32 a1)
		{
			return ((::RPG::Client::MatchThreeV2ChallengerData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2CHALLENGERINFOS_GETCHALLENGERDATABYGAMELEVEL_OFFSET))(this, a1);
		}

		::System::Boolean IsChallengingLevel(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2CHALLENGERINFOS_ISCHALLENGINGLEVEL_OFFSET))(this, a1);
		}
	};
}
