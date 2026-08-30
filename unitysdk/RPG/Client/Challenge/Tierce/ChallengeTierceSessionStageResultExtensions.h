#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Challenge::Tierce { class ChallengeTierceSessionStageResultBase; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceSessionStageResultOfBoss; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceSessionStageResultOfMemory; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceSessionStageResultOfStory; }

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESESSIONSTAGERESULTEXTENSIONS_OFBOSS_OFFSET UNITYSDK_OFFSET(0xC9FAD80)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESESSIONSTAGERESULTEXTENSIONS_OFMEMORY_OFFSET UNITYSDK_OFFSET(0xC9FAA60)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESESSIONSTAGERESULTEXTENSIONS_OFSTORY_OFFSET UNITYSDK_OFFSET(0xC9FACE0)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceSessionStageResultExtensions_TypeDefinitionIndex = 80159;

	class ChallengeTierceSessionStageResultExtensions : public ::System::Object
	{
	public:
		static ::RPG::Client::Challenge::Tierce::ChallengeTierceSessionStageResultOfMemory* OfMemory(::RPG::Client::Challenge::Tierce::ChallengeTierceSessionStageResultBase* a1)
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceSessionStageResultOfMemory*(*)(::RPG::Client::Challenge::Tierce::ChallengeTierceSessionStageResultBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESESSIONSTAGERESULTEXTENSIONS_OFMEMORY_OFFSET))(a1);
		}

		static ::RPG::Client::Challenge::Tierce::ChallengeTierceSessionStageResultOfStory* OfStory(::RPG::Client::Challenge::Tierce::ChallengeTierceSessionStageResultBase* a1)
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceSessionStageResultOfStory*(*)(::RPG::Client::Challenge::Tierce::ChallengeTierceSessionStageResultBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESESSIONSTAGERESULTEXTENSIONS_OFSTORY_OFFSET))(a1);
		}

		static ::RPG::Client::Challenge::Tierce::ChallengeTierceSessionStageResultOfBoss* OfBoss(::RPG::Client::Challenge::Tierce::ChallengeTierceSessionStageResultBase* a1)
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceSessionStageResultOfBoss*(*)(::RPG::Client::Challenge::Tierce::ChallengeTierceSessionStageResultBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESESSIONSTAGERESULTEXTENSIONS_OFBOSS_OFFSET))(a1);
		}
	};
}
