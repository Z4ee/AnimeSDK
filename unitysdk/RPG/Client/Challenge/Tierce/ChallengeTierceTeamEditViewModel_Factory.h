#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_19DB14C0C5CFE108;
class Class_1_56190D054EB32434;
class Class_1_7D46F1066EF90FA6_3;
class Class_1_FA2301FC3580108A;
namespace RPG::Client { class ChallengeGroupData; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceFriendLineupRecommendationViewModel_Factory; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceStatisticsLineupRecommendationViewModel_Factory; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceTeamEditTeamViewModel_Factory; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceTeamEditViewModel; }

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMEDITVIEWMODEL_FACTORY_CREATE_OFFSET UNITYSDK_OFFSET(0xCA21E40)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMEDITVIEWMODEL_FACTORY__CTOR_OFFSET UNITYSDK_OFFSET(0xCA21E10)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceTeamEditViewModel_Factory_TypeDefinitionIndex = 80303;

	class ChallengeTierceTeamEditViewModel_Factory : public ::System::Object
	{
	public:
		::Class_1_19DB14C0C5CFE108* _TeamConflictCheckService; // 0x10
		::Class_1_FA2301FC3580108A* _PlayerReturnTrialAvatarService; // 0x18
		::Class_1_7D46F1066EF90FA6_3* _ObtainedAvatarService; // 0x20
		::Class_1_56190D054EB32434* _Repository; // 0x28
		::RPG::Client::Challenge::Tierce::ChallengeTierceFriendLineupRecommendationViewModel_Factory* _FriendRecommendationFactory; // 0x30
		::RPG::Client::Challenge::Tierce::ChallengeTierceStatisticsLineupRecommendationViewModel_Factory* _StatisticsRecommendationFactory; // 0x38
		::RPG::Client::Challenge::Tierce::ChallengeTierceTeamEditTeamViewModel_Factory* _TeamFactory; // 0x40

		::System::Void _ctor(::Class_1_56190D054EB32434* a1, ::Class_1_7D46F1066EF90FA6_3* a2, ::Class_1_19DB14C0C5CFE108* a3, ::RPG::Client::Challenge::Tierce::ChallengeTierceTeamEditTeamViewModel_Factory* a4, ::RPG::Client::Challenge::Tierce::ChallengeTierceFriendLineupRecommendationViewModel_Factory* a5, ::RPG::Client::Challenge::Tierce::ChallengeTierceStatisticsLineupRecommendationViewModel_Factory* a6, ::Class_1_FA2301FC3580108A* a7)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_56190D054EB32434*, ::Class_1_7D46F1066EF90FA6_3*, ::Class_1_19DB14C0C5CFE108*, ::RPG::Client::Challenge::Tierce::ChallengeTierceTeamEditTeamViewModel_Factory*, ::RPG::Client::Challenge::Tierce::ChallengeTierceFriendLineupRecommendationViewModel_Factory*, ::RPG::Client::Challenge::Tierce::ChallengeTierceStatisticsLineupRecommendationViewModel_Factory*, ::Class_1_FA2301FC3580108A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMEDITVIEWMODEL_FACTORY__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::RPG::Client::Challenge::Tierce::ChallengeTierceTeamEditViewModel* Create(::RPG::Client::ChallengeGroupData* a1)
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceTeamEditViewModel*(*)(::PVOID, ::RPG::Client::ChallengeGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMEDITVIEWMODEL_FACTORY_CREATE_OFFSET))(this, a1);
		}
	};
}
