#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MessageContentBlock_BlockType.h"
#include "unitysdk/RPG/Client/MessageContentFunctionCallBlock.h"

class Class_0_16E4307DCC419505_743;
namespace RPG::Client { class MessageContentBlock; }
namespace System { class String; }

#define RPG_CLIENT_MESSAGECONTENTCHALLENGEPEAKTEAMBLOCK_EQUALS_OFFSET UNITYSDK_OFFSET(0xBFD5400)
#define RPG_CLIENT_MESSAGECONTENTCHALLENGEPEAKTEAMBLOCK_GET_RECOMMENDLINEUPDATA_OFFSET UNITYSDK_OFFSET(0xBFD54B0)
#define RPG_CLIENT_MESSAGECONTENTCHALLENGEPEAKTEAMBLOCK_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xBFD5160)
#define RPG_CLIENT_MESSAGECONTENTCHALLENGEPEAKTEAMBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0xBFD5170)

namespace RPG::Client
{
	inline static constexpr unsigned int MessageContentChallengePeakTeamBlock_TypeDefinitionIndex = 59202;

	class MessageContentChallengePeakTeamBlock : public ::RPG::Client::MessageContentFunctionCallBlock
	{
	public:
		::Class_0_16E4307DCC419505_743* _RecommendLineupData_k__BackingField; // 0x28

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

		::Class_0_16E4307DCC419505_743* get_RecommendLineupData()
		{
			return ((::Class_0_16E4307DCC419505_743*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTCHALLENGEPEAKTEAMBLOCK_GET_RECOMMENDLINEUPDATA_OFFSET))(this);
		}
	};
}
