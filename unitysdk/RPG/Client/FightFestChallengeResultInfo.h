#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ActivityRank.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client { class FightFestChallengeLevelData; }

#define RPG_CLIENT_FIGHTFESTCHALLENGERESULTINFO_CREATE_OFFSET UNITYSDK_OFFSET(0x96B3560)
#define RPG_CLIENT_FIGHTFESTCHALLENGERESULTINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x7DC50)

namespace RPG::Client
{
	inline static constexpr unsigned int FightFestChallengeResultInfo_TypeDefinitionIndex = 52108;

	struct alignas(8) FightFestChallengeResultInfo
	{
		::RPG::Client::FightFestChallengeLevelData* ChallengeLevelDataRef; // 0x10
		::System::Boolean IsNewHigh; // 0x18
		::System::Boolean IsNewHighLeftTurnCount; // 0x19
		::RPG::GameCore::ActivityRank Rank; // 0x1C
		::RPG::GameCore::ActivityRank HistoryMaxRank; // 0x20
		::System::UInt32 LeftTurnCount; // 0x24
		::System::UInt32 HistoryMaxLeftTurnCount; // 0x28

		static ::RPG::Client::FightFestChallengeResultInfo Create(::RPG::Client::FightFestChallengeLevelData* challengeLevelData, ::RPG::GameCore::ActivityRank rank, ::RPG::GameCore::ActivityRank historyMaxRank, ::System::UInt32 LeftTurnCount, ::System::Boolean isNewHigh, ::System::Boolean isNewNewHighLeftTurnCount)
		{
			return ((::RPG::Client::FightFestChallengeResultInfo(*)(::RPG::Client::FightFestChallengeLevelData*, ::RPG::GameCore::ActivityRank, ::RPG::GameCore::ActivityRank, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTCHALLENGERESULTINFO_CREATE_OFFSET))(challengeLevelData, rank, historyMaxRank, LeftTurnCount, isNewHigh, isNewNewHighLeftTurnCount);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTCHALLENGERESULTINFO_DISPOSE_OFFSET))(this);
		}
	};
}
