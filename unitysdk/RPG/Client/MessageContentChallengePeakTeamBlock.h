#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MessageContentBlock.h"
#include "unitysdk/RPG/Client/MessageContentBlock_BlockType.h"

class Class_0_16E4307DCC419505_602;

#define RPG_CLIENT_MESSAGECONTENTCHALLENGEPEAKTEAMBLOCK_EQUALS_OFFSET UNITYSDK_OFFSET(0x9B8FB20)
#define RPG_CLIENT_MESSAGECONTENTCHALLENGEPEAKTEAMBLOCK_GET_RECOMMENDLINEUPDATA_OFFSET UNITYSDK_OFFSET(0x9B8FBC0)
#define RPG_CLIENT_MESSAGECONTENTCHALLENGEPEAKTEAMBLOCK_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9B8F920)
#define RPG_CLIENT_MESSAGECONTENTCHALLENGEPEAKTEAMBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x9B8F930)

namespace RPG::Client
{
	inline static constexpr unsigned int MessageContentChallengePeakTeamBlock_TypeDefinitionIndex = 51344;

	class MessageContentChallengePeakTeamBlock : public ::RPG::Client::MessageContentBlock
	{
	public:
		::Class_0_16E4307DCC419505_602* _RecommendLineupData_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTCHALLENGEPEAKTEAMBLOCK__CTOR_OFFSET))(this);
		}

		::RPG::Client::MessageContentBlock_BlockType get_Type()
		{
			return ((::RPG::Client::MessageContentBlock_BlockType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTCHALLENGEPEAKTEAMBLOCK_GET_TYPE_OFFSET))(this);
		}

		::System::Boolean Equals(::RPG::Client::MessageContentBlock* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MessageContentBlock*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTCHALLENGEPEAKTEAMBLOCK_EQUALS_OFFSET))(this, other);
		}

		::Class_0_16E4307DCC419505_602* get_RecommendLineupData()
		{
			return ((::Class_0_16E4307DCC419505_602*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTCHALLENGEPEAKTEAMBLOCK_GET_RECOMMENDLINEUPDATA_OFFSET))(this);
		}
	};
}
