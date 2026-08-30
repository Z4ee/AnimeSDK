#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_06E38C65842C3B24;
class Class_1_19DB14C0C5CFE108;
class Class_1_7D46F1066EF90FA6_3;
class Class_1_F963C9FA5FC80637;
class Class_1_FA2301FC3580108A;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class ChallengeGroupData; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceChallengeViewModel; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceFriendLineupRecommendationViewModel; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceFriendLineupRecommendationViewModel_Factory; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceStatisticsLineupRecommendationViewModel; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceStatisticsLineupRecommendationViewModel_Factory; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceTeamEditTeamViewModel; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceTeamEditTeamViewModel_Factory; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMEDITVIEWMODEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCA206C0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMEDITVIEWMODEL_GETALLAVATARS_OFFSET UNITYSDK_OFFSET(0xCA20EB0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMEDITVIEWMODEL_GETTEAM_OFFSET UNITYSDK_OFFSET(0xCA20C40)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMEDITVIEWMODEL_GET_CHALLENGE_OFFSET UNITYSDK_OFFSET(0xCA20290)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMEDITVIEWMODEL_GET_COUNTOFTEAMSLOTS_OFFSET UNITYSDK_OFFSET(0xCA20400)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMEDITVIEWMODEL_GET_COUNTOFTEAMS_OFFSET UNITYSDK_OFFSET(0xCA202A0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMEDITVIEWMODEL_GET_FRIENDRECOMMENDATION_OFFSET UNITYSDK_OFFSET(0xCA20460)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMEDITVIEWMODEL_GET_HASBUFF_OFFSET UNITYSDK_OFFSET(0xCA20480)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMEDITVIEWMODEL_GET_STATISTICSRECOMMENDATION_OFFSET UNITYSDK_OFFSET(0xCA20470)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMEDITVIEWMODEL_SUBMITCHANGE_OFFSET UNITYSDK_OFFSET(0xCA21680)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMEDITVIEWMODEL_TRYSTARTCHALLENGE_OFFSET UNITYSDK_OFFSET(0xCA21500)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMEDITVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xCA20510)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMEDITVIEWMODEL__EXPORTPLAN_OFFSET UNITYSDK_OFFSET(0xCA20F80)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceTeamEditViewModel_TypeDefinitionIndex = 80302;

	class ChallengeTierceTeamEditViewModel : public ::System::Object
	{
	public:
		::Class_1_7D46F1066EF90FA6_3* _ObtainedAvatarService; // 0x10
		::RPG::Client::Challenge::Tierce::ChallengeTierceChallengeViewModel* _Challenge_k__BackingField; // 0x18
		::RPG::Client::Challenge::Tierce::ChallengeTierceStatisticsLineupRecommendationViewModel* _StatisticsRecommendation_k__BackingField; // 0x20
		::RPG::Client::ChallengeGroupData* _GroupData; // 0x28
		::Class_1_19DB14C0C5CFE108* _TeamConflictCheckService; // 0x30
		::RPG::Client::Challenge::Tierce::ChallengeTierceFriendLineupRecommendationViewModel* _FriendRecommendation_k__BackingField; // 0x38
		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::Challenge::Tierce::ChallengeTierceTeamEditTeamViewModel*>* _Teams; // 0x40
		::Class_1_FA2301FC3580108A* _PlayerReturnTrialAvatarService; // 0x48
		::Class_1_06E38C65842C3B24* _Tierce; // 0x50

		::System::Void _ctor(::Class_1_7D46F1066EF90FA6_3* a1, ::Class_1_19DB14C0C5CFE108* a2, ::RPG::Client::Challenge::Tierce::ChallengeTierceTeamEditTeamViewModel_Factory* a3, ::RPG::Client::Challenge::Tierce::ChallengeTierceFriendLineupRecommendationViewModel_Factory* a4, ::RPG::Client::Challenge::Tierce::ChallengeTierceStatisticsLineupRecommendationViewModel_Factory* a5, ::Class_1_FA2301FC3580108A* a6, ::RPG::Client::ChallengeGroupData* a7, ::Class_1_06E38C65842C3B24* a8)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7D46F1066EF90FA6_3*, ::Class_1_19DB14C0C5CFE108*, ::RPG::Client::Challenge::Tierce::ChallengeTierceTeamEditTeamViewModel_Factory*, ::RPG::Client::Challenge::Tierce::ChallengeTierceFriendLineupRecommendationViewModel_Factory*, ::RPG::Client::Challenge::Tierce::ChallengeTierceStatisticsLineupRecommendationViewModel_Factory*, ::Class_1_FA2301FC3580108A*, ::RPG::Client::ChallengeGroupData*, ::Class_1_06E38C65842C3B24*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMEDITVIEWMODEL__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::RPG::Client::Challenge::Tierce::ChallengeTierceChallengeViewModel* get_Challenge()
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceChallengeViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMEDITVIEWMODEL_GET_CHALLENGE_OFFSET))(this);
		}

		::System::Int32 get_CountOfTeams()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMEDITVIEWMODEL_GET_COUNTOFTEAMS_OFFSET))(this);
		}

		::System::Int32 get_CountOfTeamSlots()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMEDITVIEWMODEL_GET_COUNTOFTEAMSLOTS_OFFSET))(this);
		}

		::RPG::Client::Challenge::Tierce::ChallengeTierceFriendLineupRecommendationViewModel* get_FriendRecommendation()
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceFriendLineupRecommendationViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMEDITVIEWMODEL_GET_FRIENDRECOMMENDATION_OFFSET))(this);
		}

		::RPG::Client::Challenge::Tierce::ChallengeTierceStatisticsLineupRecommendationViewModel* get_StatisticsRecommendation()
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceStatisticsLineupRecommendationViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMEDITVIEWMODEL_GET_STATISTICSRECOMMENDATION_OFFSET))(this);
		}

		::System::Boolean get_HasBuff()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMEDITVIEWMODEL_GET_HASBUFF_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMEDITVIEWMODEL_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::Challenge::Tierce::ChallengeTierceTeamEditTeamViewModel* GetTeam(::System::Int32 a1)
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceTeamEditTeamViewModel*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMEDITVIEWMODEL_GETTEAM_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* GetAllAvatars()
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMEDITVIEWMODEL_GETALLAVATARS_OFFSET))(this);
		}

		::Class_1_F963C9FA5FC80637* _ExportPlan()
		{
			return ((::Class_1_F963C9FA5FC80637*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMEDITVIEWMODEL__EXPORTPLAN_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* TryStartChallenge()
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMEDITVIEWMODEL_TRYSTARTCHALLENGE_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* SubmitChange()
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMEDITVIEWMODEL_SUBMITCHANGE_OFFSET))(this);
		}
	};
}
