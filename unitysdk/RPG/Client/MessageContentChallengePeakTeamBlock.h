#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MessageContentBlock_BlockType.h"
#include "unitysdk/RPG/Client/MessageContentFunctionCallBlock.h"

class Class_0_16E4307DCC419505_692;
namespace RPG::Client { class MessageContentBlock; }
namespace System { class String; }

#define RPG_CLIENT_MESSAGECONTENTCHALLENGEPEAKTEAMBLOCK_EQUALS_OFFSET UNITYSDK_OFFSET(0xA889850)
#define RPG_CLIENT_MESSAGECONTENTCHALLENGEPEAKTEAMBLOCK_GET_RECOMMENDLINEUPDATA_OFFSET UNITYSDK_OFFSET(0xA8898F0)
#define RPG_CLIENT_MESSAGECONTENTCHALLENGEPEAKTEAMBLOCK_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xA8895E0)
#define RPG_CLIENT_MESSAGECONTENTCHALLENGEPEAKTEAMBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0xA8895F0)

namespace RPG::Client
{
	inline static constexpr unsigned int MessageContentChallengePeakTeamBlock_TypeDefinitionIndex = 58272;

	class MessageContentChallengePeakTeamBlock : public ::RPG::Client::MessageContentFunctionCallBlock
	{
	public:
		::Class_0_16E4307DCC419505_692* _RecommendLineupData_k__BackingField; // 0x28

		::System::Void _ctor(::System::String* functionCallID)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTCHALLENGEPEAKTEAMBLOCK__CTOR_OFFSET))(this, functionCallID);
		}

		::RPG::Client::MessageContentBlock_BlockType get_Type()
		{
			return ((::RPG::Client::MessageContentBlock_BlockType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTCHALLENGEPEAKTEAMBLOCK_GET_TYPE_OFFSET))(this);
		}

		::System::Boolean Equals(::RPG::Client::MessageContentBlock* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MessageContentBlock*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTCHALLENGEPEAKTEAMBLOCK_EQUALS_OFFSET))(this, other);
		}

		::Class_0_16E4307DCC419505_692* get_RecommendLineupData()
		{
			return ((::Class_0_16E4307DCC419505_692*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTCHALLENGEPEAKTEAMBLOCK_GET_RECOMMENDLINEUPDATA_OFFSET))(this);
		}
	};
}
