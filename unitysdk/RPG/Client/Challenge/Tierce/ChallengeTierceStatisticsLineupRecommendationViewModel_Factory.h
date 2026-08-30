#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_06E38C65842C3B24;
namespace RPG::Client { class ChallengeGroupData; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceStatisticsLineupRecommendationViewModel; }

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTATISTICSLINEUPRECOMMENDATIONVIEWMODEL_FACTORY_CREATE_OFFSET UNITYSDK_OFFSET(0x18C006D0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTATISTICSLINEUPRECOMMENDATIONVIEWMODEL_FACTORY__CTOR_OFFSET UNITYSDK_OFFSET(0x18C007B0)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceStatisticsLineupRecommendationViewModel_Factory_TypeDefinitionIndex = 80275;

	class ChallengeTierceStatisticsLineupRecommendationViewModel_Factory : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTATISTICSLINEUPRECOMMENDATIONVIEWMODEL_FACTORY__CTOR_OFFSET))(this);
		}

		::RPG::Client::Challenge::Tierce::ChallengeTierceStatisticsLineupRecommendationViewModel* Create(::Class_1_06E38C65842C3B24* a1, ::RPG::Client::ChallengeGroupData* a2)
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceStatisticsLineupRecommendationViewModel*(*)(::PVOID, ::Class_1_06E38C65842C3B24*, ::RPG::Client::ChallengeGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTATISTICSLINEUPRECOMMENDATIONVIEWMODEL_FACTORY_CREATE_OFFSET))(this, a1, a2);
		}
	};
}
