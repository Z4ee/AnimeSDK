#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TreasureChallengeTargetStatus.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client { class ItemDisplayData; }

#define RPG_CLIENT_MUSICRHYTHMLEVELREWARDINFO_CREATE_OFFSET UNITYSDK_OFFSET(0xD911150)
#define RPG_CLIENT_MUSICRHYTHMLEVELREWARDINFO_GET_TEXTID_OFFSET UNITYSDK_OFFSET(0x153B80)

namespace RPG::Client
{
	inline static constexpr unsigned int MusicRhythmLevelRewardInfo_TypeDefinitionIndex = 61909;

	struct alignas(8) MusicRhythmLevelRewardInfo
	{
		::System::Boolean IsMaxDifficulty; // 0x10
		::System::UInt32 DescParam1; // 0x14
		::RPG::Client::TreasureChallengeTargetStatus Status; // 0x18
		::RPG::Client::ItemDisplayData* RewardDisplayData; // 0x20

		static ::RPG::Client::MusicRhythmLevelRewardInfo Create(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Boolean a4)
		{
			return ((::RPG::Client::MusicRhythmLevelRewardInfo(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMLEVELREWARDINFO_CREATE_OFFSET))(a1, a2, a3, a4);
		}

		/*
		::RPG::Client::TextID get_TextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMLEVELREWARDINFO_GET_TEXTID_OFFSET))(this);
		}
		*/
	};
}
