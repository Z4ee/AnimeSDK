#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChallengeInstance; }
namespace RPG::Client::Challenge { class IChallengeEnvironmentHintViewModel; }

#define RPG_CLIENT_CHALLENGE_CHALLENGEENVIRONMENTHINTVIEWMODELFACTORY_CREATE_OFFSET UNITYSDK_OFFSET(0x1AC61010)

namespace RPG::Client::Challenge
{
	inline static constexpr unsigned int ChallengeEnvironmentHintViewModelFactory_TypeDefinitionIndex = 76470;

	class ChallengeEnvironmentHintViewModelFactory : public ::System::Object
	{
	public:
		static ::RPG::Client::Challenge::IChallengeEnvironmentHintViewModel* Create(::RPG::Client::ChallengeInstance* a1)
		{
			return ((::RPG::Client::Challenge::IChallengeEnvironmentHintViewModel*(*)(::RPG::Client::ChallengeInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGEENVIRONMENTHINTVIEWMODELFACTORY_CREATE_OFFSET))(a1);
		}
	};
}
