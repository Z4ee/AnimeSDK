#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MessageContentBlock_BlockType.h"
#include "unitysdk/RPG/Client/MessageContentFunctionCallBlock.h"

class Class_0_16E4307DCC419505_817;
namespace RPG::Client { class MessageContentBlock; }
namespace System { class String; }

#define RPG_CLIENT_MESSAGECONTENTCHALLENGEPEAKTEAMBLOCK_EQUALS_OFFSET UNITYSDK_OFFSET(0xD6A1C30)
#define RPG_CLIENT_MESSAGECONTENTCHALLENGEPEAKTEAMBLOCK_GET_RECOMMENDLINEUPDATA_OFFSET UNITYSDK_OFFSET(0xD6A1CE0)
#define RPG_CLIENT_MESSAGECONTENTCHALLENGEPEAKTEAMBLOCK_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xD6A1950)
#define RPG_CLIENT_MESSAGECONTENTCHALLENGEPEAKTEAMBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0xD6A19A0)

namespace RPG::Client
{
	inline static constexpr unsigned int MessageContentChallengePeakTeamBlock_TypeDefinitionIndex = 63326;

	class MessageContentChallengePeakTeamBlock : public ::RPG::Client::MessageContentFunctionCallBlock
	{
	public:
		::Class_0_16E4307DCC419505_817* _RecommendLineupData_k__BackingField; // 0x28

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTCHALLENGEPEAKTEAMBLOCK__CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::MessageContentBlock_BlockType get_Type()
		{
			return ((::RPG::Client::MessageContentBlock_BlockType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTCHALLENGEPEAKTEAMBLOCK_GET_TYPE_OFFSET))(this);
		}

		::System::Boolean Equals(::RPG::Client::MessageContentBlock* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MessageContentBlock*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTCHALLENGEPEAKTEAMBLOCK_EQUALS_OFFSET))(this, a1);
		}

		::Class_0_16E4307DCC419505_817* get_RecommendLineupData()
		{
			return ((::Class_0_16E4307DCC419505_817*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTCHALLENGEPEAKTEAMBLOCK_GET_RECOMMENDLINEUPDATA_OFFSET))(this);
		}
	};
}
