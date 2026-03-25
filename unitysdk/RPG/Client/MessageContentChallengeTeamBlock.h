#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MessageContentBlock.h"
#include "unitysdk/RPG/Client/MessageContentBlock_BlockType.h"
#include "unitysdk/RPG/GameCore/ChallengeGroupType.h"

namespace RPG::Client { class ChallengeData; }
namespace RPG::Client { class ChallengeStatisticRecommendLineupData; }

#define RPG_CLIENT_MESSAGECONTENTCHALLENGETEAMBLOCK_EQUALS_OFFSET UNITYSDK_OFFSET(0x9B8FF40)
#define RPG_CLIENT_MESSAGECONTENTCHALLENGETEAMBLOCK_GET_RECOMMENDLINEUPDATA_OFFSET UNITYSDK_OFFSET(0x9B8FFE0)
#define RPG_CLIENT_MESSAGECONTENTCHALLENGETEAMBLOCK_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9B8FC40)
#define RPG_CLIENT_MESSAGECONTENTCHALLENGETEAMBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x9B8FC50)
#define RPG_CLIENT_MESSAGECONTENTCHALLENGETEAMBLOCK__FINDDESIRECHALLENGE_OFFSET UNITYSDK_OFFSET(0x9B8FCC0)

namespace RPG::Client
{
	inline static constexpr unsigned int MessageContentChallengeTeamBlock_TypeDefinitionIndex = 51343;

	class MessageContentChallengeTeamBlock : public ::RPG::Client::MessageContentBlock
	{
	public:
		::RPG::Client::ChallengeStatisticRecommendLineupData* _RecommendLineupData_k__BackingField; // 0x18

		::System::Void _ctor(::RPG::GameCore::ChallengeGroupType challengeGroupType)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTCHALLENGETEAMBLOCK__CTOR_OFFSET))(this, challengeGroupType);
		}

		::RPG::Client::MessageContentBlock_BlockType get_Type()
		{
			return ((::RPG::Client::MessageContentBlock_BlockType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTCHALLENGETEAMBLOCK_GET_TYPE_OFFSET))(this);
		}

		::System::Boolean Equals(::RPG::Client::MessageContentBlock* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MessageContentBlock*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTCHALLENGETEAMBLOCK_EQUALS_OFFSET))(this, other);
		}

		::RPG::Client::ChallengeData* _FindDesireChallenge(::RPG::GameCore::ChallengeGroupType challengeGroupType)
		{
			return ((::RPG::Client::ChallengeData*(*)(::PVOID, ::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTCHALLENGETEAMBLOCK__FINDDESIRECHALLENGE_OFFSET))(this, challengeGroupType);
		}

		::RPG::Client::ChallengeStatisticRecommendLineupData* get_RecommendLineupData()
		{
			return ((::RPG::Client::ChallengeStatisticRecommendLineupData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTCHALLENGETEAMBLOCK_GET_RECOMMENDLINEUPDATA_OFFSET))(this);
		}
	};
}
