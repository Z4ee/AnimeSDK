#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_45BB92167AED63A0_52;
namespace RPG::Client { class MatchThreeV2ChallengerData; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER_ADD_ONPASSEDLEVELSCHANGED_OFFSET UNITYSDK_OFFSET(0xBFA77C0)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER_CREATE_OFFSET UNITYSDK_OFFSET(0xBFA76D0)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER_GETDEFEATEDCHALLENGERCOUNTFORCURRENTREPUTATION_OFFSET UNITYSDK_OFFSET(0xBFAA0C0)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER_GETSTARTARGETACHIEVEDCOUNTFORCHALLENGER_OFFSET UNITYSDK_OFFSET(0xBFAA210)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER_GET_REPUTATION_OFFSET UNITYSDK_OFFSET(0xBFA8CB0)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER_ISCHALLENGERDEFEATED_OFFSET UNITYSDK_OFFSET(0xBFA9D60)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER_ISCHALLENGERLOCKED_OFFSET UNITYSDK_OFFSET(0xBFA9AB0)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER_ISCHALLENGERUNEXPECTEDLYLOCKED_OFFSET UNITYSDK_OFFSET(0xBFA9BE0)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER_ISLEVELPASSED_OFFSET UNITYSDK_OFFSET(0xBFA14A0)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER_ISSTARTARGETACHIEVED_OFFSET UNITYSDK_OFFSET(0xBFAA110)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER_REMOVE_ONPASSEDLEVELSCHANGED_OFFSET UNITYSDK_OFFSET(0xBFA65D0)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER_SET_REPUTATION_OFFSET UNITYSDK_OFFSET(0xBFA8CC0)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER_SYNCDEFEATEDCHALLENGERSANDACHIEVEDSTARTARGETS_1_OFFSET UNITYSDK_OFFSET(0xBFA91E0)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER_SYNCDEFEATEDCHALLENGERSANDACHIEVEDSTARTARGETS_OFFSET UNITYSDK_OFFSET(0xBFA6A50)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER_SYNCNEWLYDEFEATEDCHALLENGERANDACHIEVEDSTARTARGETS_OFFSET UNITYSDK_OFFSET(0xBFA1AC0)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER_SYNCREPUTATION_OFFSET UNITYSDK_OFFSET(0xBFA1A70)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER__CTOR_OFFSET UNITYSDK_OFFSET(0xBFA8CD0)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER__GETDEFEATEDCHALLENGERCOUNTFORREPUTATION_OFFSET UNITYSDK_OFFSET(0xBFA9DC0)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER__RECORDNEWUNLOCKBIRDTOPREF_OFFSET UNITYSDK_OFFSET(0xBFA9730)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER__REGISTERDEFEATEDCHALLENGERANDACHIEVEDSTARTARGETS_OFFSET UNITYSDK_OFFSET(0xBFA8D80)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER___GETDEFEATEDCHALLENGERCOUNTFORREPUTATION_B__22_0_OFFSET UNITYSDK_OFFSET(0xBFAA2F0)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeV2PlayerPveCareer_TypeDefinitionIndex = 61709;

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

		::System::Void set_Reputation(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER_SET_REPUTATION_OFFSET))(this, a1);
		}

		::System::Void add_OnPassedLevelsChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER_ADD_ONPASSEDLEVELSCHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_OnPassedLevelsChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER_REMOVE_ONPASSEDLEVELSCHANGED_OFFSET))(this, a1);
		}

		static ::RPG::Client::MatchThreeV2PlayerPveCareer* Create()
		{
			return ((::RPG::Client::MatchThreeV2PlayerPveCareer*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER_CREATE_OFFSET))();
		}

		::System::Void SyncReputation(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER_SYNCREPUTATION_OFFSET))(this, a1);
		}

		::System::Void SyncDefeatedChallengersAndAchievedStarTargets(::System::Collections::Generic::IEnumerable_1<::Class_1_45BB92167AED63A0_52*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_45BB92167AED63A0_52*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER_SYNCDEFEATEDCHALLENGERSANDACHIEVEDSTARTARGETS_OFFSET))(this, a1);
		}

		::System::Void SyncDefeatedChallengersAndAchievedStarTargets_1(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER_SYNCDEFEATEDCHALLENGERSANDACHIEVEDSTARTARGETS_1_OFFSET))(this, a1, a2);
		}

		::System::Void SyncNewlyDefeatedChallengerAndAchievedStarTargets(::Class_1_45BB92167AED63A0_52* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_52*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER_SYNCNEWLYDEFEATEDCHALLENGERANDACHIEVEDSTARTARGETS_OFFSET))(this, a1);
		}

		::System::Void _RecordNewUnlockBirdToPref(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER__RECORDNEWUNLOCKBIRDTOPREF_OFFSET))(this, a1);
		}

		::System::Void _RegisterDefeatedChallengerAndAchievedStarTargets(::Class_1_45BB92167AED63A0_52* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_52*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER__REGISTERDEFEATEDCHALLENGERANDACHIEVEDSTARTARGETS_OFFSET))(this, a1);
		}

		::System::Boolean IsLevelPassed(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER_ISLEVELPASSED_OFFSET))(this, a1);
		}

		::System::Boolean IsChallengerLocked(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER_ISCHALLENGERLOCKED_OFFSET))(this, a1);
		}

		::System::Boolean IsChallengerUnexpectedlyLocked(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER_ISCHALLENGERUNEXPECTEDLYLOCKED_OFFSET))(this, a1);
		}

		::System::Boolean IsChallengerDefeated(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER_ISCHALLENGERDEFEATED_OFFSET))(this, a1);
		}

		::System::Int32 _GetDefeatedChallengerCountForReputation(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER__GETDEFEATEDCHALLENGERCOUNTFORREPUTATION_OFFSET))(this, a1);
		}

		::System::Int32 GetDefeatedChallengerCountForCurrentReputation()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER_GETDEFEATEDCHALLENGERCOUNTFORCURRENTREPUTATION_OFFSET))(this);
		}

		::System::Boolean IsStarTargetAchieved(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER_ISSTARTARGETACHIEVED_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetStarTargetAchievedCountForChallenger(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER_GETSTARTARGETACHIEVEDCOUNTFORCHALLENGER_OFFSET))(this, a1);
		}

		::System::Boolean __GetDefeatedChallengerCountForReputation_b__22_0(::RPG::Client::MatchThreeV2ChallengerData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MatchThreeV2ChallengerData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPVECAREER___GETDEFEATEDCHALLENGERCOUNTFORREPUTATION_B__22_0_OFFSET))(this, a1);
		}
	};
}
