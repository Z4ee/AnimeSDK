#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Challenge { class IChallengeEnvironmentHintViewModel; }

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGEENVIRONMENTHINTVIEWMODELTIERCEEXTENSIONS_CHECKISTIERCE_OFFSET UNITYSDK_OFFSET(0xC9F4000)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeEnvironmentHintViewModelTierceExtensions_TypeDefinitionIndex = 80267;

	class ChallengeEnvironmentHintViewModelTierceExtensions : public ::System::Object
	{
	public:
		static ::System::Boolean CheckIsTierce(::RPG::Client::Challenge::IChallengeEnvironmentHintViewModel* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::Challenge::IChallengeEnvironmentHintViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGEENVIRONMENTHINTVIEWMODELTIERCEEXTENSIONS_CHECKISTIERCE_OFFSET))(a1);
		}
	};
}
