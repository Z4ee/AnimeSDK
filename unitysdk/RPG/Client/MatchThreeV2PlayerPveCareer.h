#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_735612C94F558EAE_49;
namespace RPG::Client { class MatchThreeV2ChallengerData; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER_ADD_ONPASSEDLEVELSCHANGED_OFFSET UNITYSDK_OFFSET(0x9B64160)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER_CREATE_OFFSET UNITYSDK_OFFSET(0x9B64070)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER_GETDEFEATEDCHALLENGERCOUNTFORCURRENTREPUTATION_OFFSET UNITYSDK_OFFSET(0x9B66C70)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER_GETSTARTARGETACHIEVEDCOUNTFORCHALLENGER_OFFSET UNITYSDK_OFFSET(0x9B66D60)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER_GET_REPUTATION_OFFSET UNITYSDK_OFFSET(0x9B65750)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER_ISCHALLENGERDEFEATED_OFFSET UNITYSDK_OFFSET(0x9B669E0)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER_ISCHALLENGERLOCKED_OFFSET UNITYSDK_OFFSET(0x9B66680)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER_ISCHALLENGERUNEXPECTEDLYLOCKED_OFFSET UNITYSDK_OFFSET(0x9B66810)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER_ISLEVELPASSED_OFFSET UNITYSDK_OFFSET(0x9B5E5C0)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER_ISSTARTARGETACHIEVED_OFFSET UNITYSDK_OFFSET(0x9B66CC0)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER_REMOVE_ONPASSEDLEVELSCHANGED_OFFSET UNITYSDK_OFFSET(0x9B62F70)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER_SET_REPUTATION_OFFSET UNITYSDK_OFFSET(0x9B65760)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER_SYNCDEFEATEDCHALLENGERSANDACHIEVEDSTARTARGETS_1_OFFSET UNITYSDK_OFFSET(0x9B65CE0)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER_SYNCDEFEATEDCHALLENGERSANDACHIEVEDSTARTARGETS_OFFSET UNITYSDK_OFFSET(0x9B63450)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER_SYNCNEWLYDEFEATEDCHALLENGERANDACHIEVEDSTARTARGETS_OFFSET UNITYSDK_OFFSET(0x9B5EC20)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER_SYNCREPUTATION_OFFSET UNITYSDK_OFFSET(0x9B5EBD0)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER__CTOR_OFFSET UNITYSDK_OFFSET(0x9B65770)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER__GETDEFEATEDCHALLENGERCOUNTFORREPUTATION_OFFSET UNITYSDK_OFFSET(0x9B66A40)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER__RECORDNEWUNLOCKBIRDTOPREF_OFFSET UNITYSDK_OFFSET(0x9B66310)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER__REGISTERDEFEATEDCHALLENGERANDACHIEVEDSTARTARGETS_OFFSET UNITYSDK_OFFSET(0x9B65820)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER___GETDEFEATEDCHALLENGERCOUNTFORREPUTATION_B__22_0_OFFSET UNITYSDK_OFFSET(0x9B66DF0)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeV2PlayerPveCareer_TypeDefinitionIndex = 53631;

	class MatchThreeV2PlayerPveCareer : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _DefeatedChallengers; // 0x10
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _PassedLevels; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::UInt32>*>* _AchievedStarTargetsOfChallenger; // 0x20
		::System::Action* OnPassedLevelsChanged; // 0x28
		::System::UInt32 _Reputation_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_Reputation()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER_GET_REPUTATION_OFFSET))(this);
		}

		::System::Void set_Reputation(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER_SET_REPUTATION_OFFSET))(this, value);
		}

		::System::Void add_OnPassedLevelsChanged(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER_ADD_ONPASSEDLEVELSCHANGED_OFFSET))(this, value);
		}

		::System::Void remove_OnPassedLevelsChanged(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER_REMOVE_ONPASSEDLEVELSCHANGED_OFFSET))(this, value);
		}

		static ::RPG::Client::MatchThreeV2PlayerPveCareer* Create()
		{
			return ((::RPG::Client::MatchThreeV2PlayerPveCareer*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER_CREATE_OFFSET))();
		}

		::System::Void SyncReputation(::System::UInt32 reputation)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER_SYNCREPUTATION_OFFSET))(this, reputation);
		}

		::System::Void SyncDefeatedChallengersAndAchievedStarTargets(::System::Collections::Generic::IEnumerable_1<::Class_1_735612C94F558EAE_49*>* passedLevels)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_735612C94F558EAE_49*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER_SYNCDEFEATEDCHALLENGERSANDACHIEVEDSTARTARGETS_OFFSET))(this, passedLevels);
		}

		::System::Void SyncDefeatedChallengersAndAchievedStarTargets_1(::System::Collections::Generic::List_1<::System::UInt32>* challengers, ::System::Collections::Generic::List_1<::System::UInt32>* starTargets)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER_SYNCDEFEATEDCHALLENGERSANDACHIEVEDSTARTARGETS_1_OFFSET))(this, challengers, starTargets);
		}

		::System::Void SyncNewlyDefeatedChallengerAndAchievedStarTargets(::Class_1_735612C94F558EAE_49* levelInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_735612C94F558EAE_49*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER_SYNCNEWLYDEFEATEDCHALLENGERANDACHIEVEDSTARTARGETS_OFFSET))(this, levelInfo);
		}

		::System::Void _RecordNewUnlockBirdToPref(::System::UInt32 newlyDefeatedLevelID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER__RECORDNEWUNLOCKBIRDTOPREF_OFFSET))(this, newlyDefeatedLevelID);
		}

		::System::Void _RegisterDefeatedChallengerAndAchievedStarTargets(::Class_1_735612C94F558EAE_49* levelInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_735612C94F558EAE_49*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER__REGISTERDEFEATEDCHALLENGERANDACHIEVEDSTARTARGETS_OFFSET))(this, levelInfo);
		}

		::System::Boolean IsLevelPassed(::System::UInt32 levelID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER_ISLEVELPASSED_OFFSET))(this, levelID);
		}

		::System::Boolean IsChallengerLocked(::System::UInt32 challengerID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER_ISCHALLENGERLOCKED_OFFSET))(this, challengerID);
		}

		::System::Boolean IsChallengerUnexpectedlyLocked(::System::UInt32 challengerID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER_ISCHALLENGERUNEXPECTEDLYLOCKED_OFFSET))(this, challengerID);
		}

		::System::Boolean IsChallengerDefeated(::System::UInt32 challengerID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER_ISCHALLENGERDEFEATED_OFFSET))(this, challengerID);
		}

		::System::Int32 _GetDefeatedChallengerCountForReputation(::System::UInt32 reputation)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER__GETDEFEATEDCHALLENGERCOUNTFORREPUTATION_OFFSET))(this, reputation);
		}

		::System::Int32 GetDefeatedChallengerCountForCurrentReputation()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER_GETDEFEATEDCHALLENGERCOUNTFORCURRENTREPUTATION_OFFSET))(this);
		}

		::System::Boolean IsStarTargetAchieved(::System::UInt32 challengerID, ::System::UInt32 starTargetID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER_ISSTARTARGETACHIEVED_OFFSET))(this, challengerID, starTargetID);
		}

		::System::Int32 GetStarTargetAchievedCountForChallenger(::System::UInt32 challengerID)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER_GETSTARTARGETACHIEVEDCOUNTFORCHALLENGER_OFFSET))(this, challengerID);
		}

		::System::Boolean __GetDefeatedChallengerCountForReputation_b__22_0(::RPG::Client::MatchThreeV2ChallengerData* challenger)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MatchThreeV2ChallengerData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER___GETDEFEATEDCHALLENGERCOUNTFORREPUTATION_B__22_0_OFFSET))(this, challenger);
		}
	};
}
