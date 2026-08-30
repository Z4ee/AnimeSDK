#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_56190D054EB32434;
namespace RPG::Client { class ChallengeGroupData; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceRewardViewModel; }

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEREWARDVIEWMODEL_FACTORY_CREATE_OFFSET UNITYSDK_OFFSET(0xCA05430)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEREWARDVIEWMODEL_FACTORY__CTOR_OFFSET UNITYSDK_OFFSET(0xCA05420)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceRewardViewModel_Factory_TypeDefinitionIndex = 80288;

	class ChallengeTierceRewardViewModel_Factory : public ::System::Object
	{
	public:
		::Class_1_56190D054EB32434* _Repository; // 0x10

		::System::Void _ctor(::Class_1_56190D054EB32434* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_56190D054EB32434*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEREWARDVIEWMODEL_FACTORY__CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::Challenge::Tierce::ChallengeTierceRewardViewModel* Create(::RPG::Client::ChallengeGroupData* a1)
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceRewardViewModel*(*)(::PVOID, ::RPG::Client::ChallengeGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEREWARDVIEWMODEL_FACTORY_CREATE_OFFSET))(this, a1);
		}
	};
}
