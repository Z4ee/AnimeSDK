#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ActivityRank.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client { class FightFestChallengeLevelData; }

#define RPG_CLIENT_FIGHTFESTCHALLENGERESULTINFO_CREATE_OFFSET UNITYSDK_OFFSET(0x1AE4DFA0)
#define RPG_CLIENT_FIGHTFESTCHALLENGERESULTINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3B69380)

namespace RPG::Client
{
	inline static constexpr unsigned int FightFestChallengeResultInfo_TypeDefinitionIndex = 64254;

	struct alignas(8) FightFestChallengeResultInfo
	{
		::RPG::Client::FightFestChallengeLevelData* ChallengeLevelDataRef; // 0x10
		::System::Boolean IsNewHigh; // 0x18
		::System::Boolean IsNewHighLeftTurnCount; // 0x19
		::RPG::GameCore::ActivityRank Rank; // 0x1C
		::RPG::GameCore::ActivityRank HistoryMaxRank; // 0x20
		::System::UInt32 LeftTurnCount; // 0x24
		::System::UInt32 HistoryMaxLeftTurnCount; // 0x28

		static ::RPG::Client::FightFestChallengeResultInfo Create(::RPG::Client::FightFestChallengeLevelData* a1, ::RPG::GameCore::ActivityRank a2, ::RPG::GameCore::ActivityRank a3, ::System::UInt32 a4, ::System::Boolean a5, ::System::Boolean a6)
		{
			return ((::RPG::Client::FightFestChallengeResultInfo(*)(::RPG::Client::FightFestChallengeLevelData*, ::RPG::GameCore::ActivityRank, ::RPG::GameCore::ActivityRank, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTCHALLENGERESULTINFO_CREATE_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTCHALLENGERESULTINFO_DISPOSE_OFFSET))(this);
		}
	};
}
