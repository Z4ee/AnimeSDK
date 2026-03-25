#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TreasureChallengeTargetStatus.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client { class ItemDisplayData; }

#define RPG_CLIENT_MUSICRHYTHMLEVELREWARDINFO_CREATE_OFFSET UNITYSDK_OFFSET(0x9DD2C90)
#define RPG_CLIENT_MUSICRHYTHMLEVELREWARDINFO_GET_TEXTID_OFFSET UNITYSDK_OFFSET(0x814D0)

namespace RPG::Client
{
	inline static constexpr unsigned int MusicRhythmLevelRewardInfo_TypeDefinitionIndex = 50174;

	struct alignas(8) MusicRhythmLevelRewardInfo
	{
		::System::Boolean IsMaxDifficulty; // 0x10
		::System::UInt32 DescParam1; // 0x14
		::RPG::Client::TreasureChallengeTargetStatus Status; // 0x18
		::RPG::Client::ItemDisplayData* RewardDisplayData; // 0x20

		static ::RPG::Client::MusicRhythmLevelRewardInfo Create(::System::UInt32 rewardIdx, ::System::UInt32 nowStarNum, ::System::UInt32 rewardID, ::System::Boolean isMaxDifficulty)
		{
			return ((::RPG::Client::MusicRhythmLevelRewardInfo(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMLEVELREWARDINFO_CREATE_OFFSET))(rewardIdx, nowStarNum, rewardID, isMaxDifficulty);
		}

		/*
		::RPG::Client::TextID get_TextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMLEVELREWARDINFO_GET_TEXTID_OFFSET))(this);
		}
		*/
	};
}
