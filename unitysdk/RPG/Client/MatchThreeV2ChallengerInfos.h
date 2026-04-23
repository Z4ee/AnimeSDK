#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FBD57FD5B46A130F;
namespace RPG::Client { class MatchThreeV2ChallengerData; }
namespace RPG::Client { class MatchThreeV2LevelInfos; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_MATCHTHREEV2CHALLENGERINFOS_CREATE_OFFSET UNITYSDK_OFFSET(0xA851850)
#define RPG_CLIENT_MATCHTHREEV2CHALLENGERINFOS_GETCHALLENGERDATABYGAMELEVEL_OFFSET UNITYSDK_OFFSET(0xA851D30)
#define RPG_CLIENT_MATCHTHREEV2CHALLENGERINFOS_GETCHALLENGERDATA_OFFSET UNITYSDK_OFFSET(0xA851CD0)
#define RPG_CLIENT_MATCHTHREEV2CHALLENGERINFOS_ISCHALLENGINGLEVEL_OFFSET UNITYSDK_OFFSET(0xA851E00)
#define RPG_CLIENT_MATCHTHREEV2CHALLENGERINFOS__CTOR_OFFSET UNITYSDK_OFFSET(0xA8518D0)
#define RPG_CLIENT_MATCHTHREEV2CHALLENGERINFOS__INIT_OFFSET UNITYSDK_OFFSET(0xA8518E0)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeV2ChallengerInfos_TypeDefinitionIndex = 60764;

	class MatchThreeV2ChallengerInfos : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MatchThreeV2ChallengerData*>* _DataDict; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _LevelIDToChallenger; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2CHALLENGERINFOS__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MatchThreeV2ChallengerInfos* Create(::Class_1_FBD57FD5B46A130F* starTargetInfos, ::RPG::Client::MatchThreeV2LevelInfos* levelInfos)
		{
			return ((::RPG::Client::MatchThreeV2ChallengerInfos*(*)(::Class_1_FBD57FD5B46A130F*, ::RPG::Client::MatchThreeV2LevelInfos*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2CHALLENGERINFOS_CREATE_OFFSET))(starTargetInfos, levelInfos);
		}

		::System::Void _Init(::Class_1_FBD57FD5B46A130F* starTargetInfos, ::RPG::Client::MatchThreeV2LevelInfos* levelInfos)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FBD57FD5B46A130F*, ::RPG::Client::MatchThreeV2LevelInfos*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2CHALLENGERINFOS__INIT_OFFSET))(this, starTargetInfos, levelInfos);
		}

		::RPG::Client::MatchThreeV2ChallengerData* GetChallengerData(::System::UInt32 challengerID)
		{
			return ((::RPG::Client::MatchThreeV2ChallengerData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2CHALLENGERINFOS_GETCHALLENGERDATA_OFFSET))(this, challengerID);
		}

		::RPG::Client::MatchThreeV2ChallengerData* GetChallengerDataByGameLevel(::System::UInt32 levelID)
		{
			return ((::RPG::Client::MatchThreeV2ChallengerData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2CHALLENGERINFOS_GETCHALLENGERDATABYGAMELEVEL_OFFSET))(this, levelID);
		}

		::System::Boolean IsChallengingLevel(::System::UInt32 levelID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2CHALLENGERINFOS_ISCHALLENGINGLEVEL_OFFSET))(this, levelID);
		}
	};
}
