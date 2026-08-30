#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChallengeTargetState.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_1_06E38C65842C3B24;
class Class_1_5EBDCA5E10FB9D5A;
namespace RPG::Client { class BaseChallengeTargetData; }
namespace RPG::Client::Challenge { class ChallengeTargetViewModel; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETARGETSVIEWMODEL_CREATEFORENGAGEMENTMAZEORBATTLE_OFFSET UNITYSDK_OFFSET(0xCA1D410)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETARGETSVIEWMODEL_CREATEFORENGAGEMENTSETTLE_OFFSET UNITYSDK_OFFSET(0xCA1DAF0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETARGETSVIEWMODEL_CREATEFOROUTOFENGAGEMENT_OFFSET UNITYSDK_OFFSET(0xCA15C00)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETARGETSVIEWMODEL_GETTARGETDATA_OFFSET UNITYSDK_OFFSET(0xCA1CB20)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETARGETSVIEWMODEL_GET_COUNT_OFFSET UNITYSDK_OFFSET(0xCA07850)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETARGETSVIEWMODEL_GET_TARGETDATALIST_OFFSET UNITYSDK_OFFSET(0xCA1CB10)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETARGETSVIEWMODEL_GET_TARGETS_OFFSET UNITYSDK_OFFSET(0xCA07710)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETARGETSVIEWMODEL_ISACHIEVED_OFFSET UNITYSDK_OFFSET(0xCA1CC90)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETARGETSVIEWMODEL__CREATE_1_OFFSET UNITYSDK_OFFSET(0xCA1D4F0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETARGETSVIEWMODEL__CREATE_OFFSET UNITYSDK_OFFSET(0xCA1CE10)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETARGETSVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xCA1DBD0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETARGETSVIEWMODEL__DETERMINESTATEFORENGAGEMENTMAZEORBATTLE_OFFSET UNITYSDK_OFFSET(0xCA1DCE0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETARGETSVIEWMODEL__DETERMINESTATEFORENGAGEMENTSETTLE_OFFSET UNITYSDK_OFFSET(0xCA1E950)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETARGETSVIEWMODEL__DETERMINESTATEFOROUTOFENGAGEMENT_OFFSET UNITYSDK_OFFSET(0xCA1DBE0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETARGETSVIEWMODEL__GET_TARGETS_B__10_0_OFFSET UNITYSDK_OFFSET(0xCA1EBA0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETARGETSVIEWMODEL__ISLEFTROUNDSTARGETFAILEDINCURRENTSESSION_OFFSET UNITYSDK_OFFSET(0xCA1E350)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETARGETSVIEWMODEL__ISMEMBERDEATHTARGETFAILEDINCURRENTSESSION_OFFSET UNITYSDK_OFFSET(0xCA1DE20)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETARGETSVIEWMODEL___ISLEFTROUNDSTARGETFAILEDINCURRENTSESSION_G__TRYGETCURRENTBATTLEUSEDROUNDCOUNT_21_0_OFFSET UNITYSDK_OFFSET(0xCA1EB40)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETARGETSVIEWMODEL___ISMEMBERDEATHTARGETFAILEDINCURRENTSESSION_G__TRYGETCURRENTBATTLEDEADMEMBERCOUNT_20_0_OFFSET UNITYSDK_OFFSET(0xCA1EAE0)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceTargetsViewModel_TypeDefinitionIndex = 80254;

	class ChallengeTierceTargetsViewModel : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::BaseChallengeTargetData*>* _TargetDataList_k__BackingField; // 0x10
		::Class_1_06E38C65842C3B24* _Tierce; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::Challenge::ChallengeTargetViewModel*>* _Targets; // 0x20

		::System::Void _ctor(::Class_1_06E38C65842C3B24* a1, ::System::Collections::Generic::List_1<::RPG::Client::BaseChallengeTargetData*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_06E38C65842C3B24*, ::System::Collections::Generic::List_1<::RPG::Client::BaseChallengeTargetData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETARGETSVIEWMODEL__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::BaseChallengeTargetData*>* get_TargetDataList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::BaseChallengeTargetData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETARGETSVIEWMODEL_GET_TARGETDATALIST_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETARGETSVIEWMODEL_GET_COUNT_OFFSET))(this);
		}

		::RPG::Client::BaseChallengeTargetData* GetTargetData(::System::Int32 a1)
		{
			return ((::RPG::Client::BaseChallengeTargetData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETARGETSVIEWMODEL_GETTARGETDATA_OFFSET))(this, a1);
		}

		::System::Boolean IsAchieved(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETARGETSVIEWMODEL_ISACHIEVED_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::Challenge::ChallengeTargetViewModel*>* get_Targets()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::Challenge::ChallengeTargetViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETARGETSVIEWMODEL_GET_TARGETS_OFFSET))(this);
		}

		static ::RPG::Client::Challenge::Tierce::ChallengeTierceTargetsViewModel* CreateForOutOfEngagement(::Class_1_06E38C65842C3B24* a1)
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceTargetsViewModel*(*)(::Class_1_06E38C65842C3B24*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETARGETSVIEWMODEL_CREATEFOROUTOFENGAGEMENT_OFFSET))(a1);
		}

		static ::RPG::Client::Challenge::Tierce::ChallengeTierceTargetsViewModel* CreateForEngagementMazeOrBattle(::Class_1_5EBDCA5E10FB9D5A* a1)
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceTargetsViewModel*(*)(::Class_1_5EBDCA5E10FB9D5A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETARGETSVIEWMODEL_CREATEFORENGAGEMENTMAZEORBATTLE_OFFSET))(a1);
		}

		static ::RPG::Client::Challenge::Tierce::ChallengeTierceTargetsViewModel* CreateForEngagementSettle(::Class_1_5EBDCA5E10FB9D5A* a1)
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceTargetsViewModel*(*)(::Class_1_5EBDCA5E10FB9D5A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETARGETSVIEWMODEL_CREATEFORENGAGEMENTSETTLE_OFFSET))(a1);
		}

		static ::RPG::Client::Challenge::Tierce::ChallengeTierceTargetsViewModel* _Create(::Class_1_06E38C65842C3B24* a1, ::System::Func_3<::Class_1_06E38C65842C3B24*, ::RPG::Client::BaseChallengeTargetData*, ::RPG::Client::ChallengeTargetState>* a2)
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceTargetsViewModel*(*)(::Class_1_06E38C65842C3B24*, ::System::Func_3<::Class_1_06E38C65842C3B24*, ::RPG::Client::BaseChallengeTargetData*, ::RPG::Client::ChallengeTargetState>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETARGETSVIEWMODEL__CREATE_OFFSET))(a1, a2);
		}

		static ::RPG::Client::Challenge::Tierce::ChallengeTierceTargetsViewModel* _Create_1(::Class_1_5EBDCA5E10FB9D5A* a1, ::System::Func_3<::Class_1_5EBDCA5E10FB9D5A*, ::RPG::Client::BaseChallengeTargetData*, ::RPG::Client::ChallengeTargetState>* a2)
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceTargetsViewModel*(*)(::Class_1_5EBDCA5E10FB9D5A*, ::System::Func_3<::Class_1_5EBDCA5E10FB9D5A*, ::RPG::Client::BaseChallengeTargetData*, ::RPG::Client::ChallengeTargetState>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETARGETSVIEWMODEL__CREATE_1_OFFSET))(a1, a2);
		}

		static ::RPG::Client::ChallengeTargetState _DetermineStateForOutOfEngagement(::Class_1_06E38C65842C3B24* a1, ::RPG::Client::BaseChallengeTargetData* a2)
		{
			return ((::RPG::Client::ChallengeTargetState(*)(::Class_1_06E38C65842C3B24*, ::RPG::Client::BaseChallengeTargetData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETARGETSVIEWMODEL__DETERMINESTATEFOROUTOFENGAGEMENT_OFFSET))(a1, a2);
		}

		static ::RPG::Client::ChallengeTargetState _DetermineStateForEngagementMazeOrBattle(::Class_1_5EBDCA5E10FB9D5A* a1, ::RPG::Client::BaseChallengeTargetData* a2)
		{
			return ((::RPG::Client::ChallengeTargetState(*)(::Class_1_5EBDCA5E10FB9D5A*, ::RPG::Client::BaseChallengeTargetData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETARGETSVIEWMODEL__DETERMINESTATEFORENGAGEMENTMAZEORBATTLE_OFFSET))(a1, a2);
		}

		static ::RPG::Client::ChallengeTargetState _DetermineStateForEngagementSettle(::Class_1_5EBDCA5E10FB9D5A* a1, ::RPG::Client::BaseChallengeTargetData* a2)
		{
			return ((::RPG::Client::ChallengeTargetState(*)(::Class_1_5EBDCA5E10FB9D5A*, ::RPG::Client::BaseChallengeTargetData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETARGETSVIEWMODEL__DETERMINESTATEFORENGAGEMENTSETTLE_OFFSET))(a1, a2);
		}

		static ::System::Boolean _IsMemberDeathTargetFailedInCurrentSession(::Class_1_5EBDCA5E10FB9D5A* a1, ::RPG::Client::BaseChallengeTargetData* a2)
		{
			return ((::System::Boolean(*)(::Class_1_5EBDCA5E10FB9D5A*, ::RPG::Client::BaseChallengeTargetData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETARGETSVIEWMODEL__ISMEMBERDEATHTARGETFAILEDINCURRENTSESSION_OFFSET))(a1, a2);
		}

		static ::System::Boolean _IsLeftRoundsTargetFailedInCurrentSession(::Class_1_5EBDCA5E10FB9D5A* a1, ::RPG::Client::BaseChallengeTargetData* a2)
		{
			return ((::System::Boolean(*)(::Class_1_5EBDCA5E10FB9D5A*, ::RPG::Client::BaseChallengeTargetData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETARGETSVIEWMODEL__ISLEFTROUNDSTARGETFAILEDINCURRENTSESSION_OFFSET))(a1, a2);
		}

		::RPG::Client::Challenge::ChallengeTargetViewModel* _get_Targets_b__10_0(::RPG::Client::BaseChallengeTargetData* a1)
		{
			return ((::RPG::Client::Challenge::ChallengeTargetViewModel*(*)(::PVOID, ::RPG::Client::BaseChallengeTargetData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETARGETSVIEWMODEL__GET_TARGETS_B__10_0_OFFSET))(this, a1);
		}

		static ::System::Nullable_1<::System::Int32> __IsMemberDeathTargetFailedInCurrentSession_g__TryGetCurrentBattleDeadMemberCount_20_0()
		{
			return ((::System::Nullable_1<::System::Int32>(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETARGETSVIEWMODEL___ISMEMBERDEATHTARGETFAILEDINCURRENTSESSION_G__TRYGETCURRENTBATTLEDEADMEMBERCOUNT_20_0_OFFSET))();
		}

		static ::System::Nullable_1<::System::Int32> __IsLeftRoundsTargetFailedInCurrentSession_g__TryGetCurrentBattleUsedRoundCount_21_0()
		{
			return ((::System::Nullable_1<::System::Int32>(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETARGETSVIEWMODEL___ISLEFTROUNDSTARGETFAILEDINCURRENTSESSION_G__TRYGETCURRENTBATTLEUSEDROUNDCOUNT_21_0_OFFSET))();
		}
	};
}
