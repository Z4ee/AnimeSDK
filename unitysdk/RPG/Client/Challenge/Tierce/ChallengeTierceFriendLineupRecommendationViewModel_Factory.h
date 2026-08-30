#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_06E38C65842C3B24;
namespace RPG::Client { class ChallengeGroupData; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceFriendLineupRecommendationViewModel; }

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEFRIENDLINEUPRECOMMENDATIONVIEWMODEL_FACTORY_CREATE_OFFSET UNITYSDK_OFFSET(0x1C86A100)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEFRIENDLINEUPRECOMMENDATIONVIEWMODEL_FACTORY__CTOR_OFFSET UNITYSDK_OFFSET(0x1C86A260)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceFriendLineupRecommendationViewModel_Factory_TypeDefinitionIndex = 80273;

	class ChallengeTierceFriendLineupRecommendationViewModel_Factory : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEFRIENDLINEUPRECOMMENDATIONVIEWMODEL_FACTORY__CTOR_OFFSET))(this);
		}

		::RPG::Client::Challenge::Tierce::ChallengeTierceFriendLineupRecommendationViewModel* Create(::Class_1_06E38C65842C3B24* a1, ::RPG::Client::ChallengeGroupData* a2)
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceFriendLineupRecommendationViewModel*(*)(::PVOID, ::Class_1_06E38C65842C3B24*, ::RPG::Client::ChallengeGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEFRIENDLINEUPRECOMMENDATIONVIEWMODEL_FACTORY_CREATE_OFFSET))(this, a1, a2);
		}
	};
}
