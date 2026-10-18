#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChallengeGroupType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_1_1294FEF8E985635C;
class Class_1_5EBDCA5E10FB9D5A;
namespace RPG::Client { class ChallengeData; }
namespace RPG::Client::Challenge { class IChallengeEnvironmentHintViewModel; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceMazeProgressHintViewModel; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceMazeViewModel_EnvironmentHintMessage; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceMazeViewModel_ProgressHintMessage; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceRecordBase; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceTargetsViewModel; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL_ADD_ONHINTENVIRONMENT_OFFSET UNITYSDK_OFFSET(0xC942120)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL_ADD_ONHINTPROGRESS_OFFSET UNITYSDK_OFFSET(0xC942060)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC942450)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL_GETENVIRONMENTHINT_OFFSET UNITYSDK_OFFSET(0xC9426F0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL_GETLEAVECONFIRMTITLE_OFFSET UNITYSDK_OFFSET(0xC9424C0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL_GET_GROUPTYPE_OFFSET UNITYSDK_OFFSET(0xC9422A0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL_GET_ISPASSED_OFFSET UNITYSDK_OFFSET(0xC941CC0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL_GET_JUSTFINISHEDTARGETIDS_OFFSET UNITYSDK_OFFSET(0xC9422F0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL_GET_NAME_OFFSET UNITYSDK_OFFSET(0xC9421E0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL_GET_RECORD_OFFSET UNITYSDK_OFFSET(0xC941F50)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL_GET_TARGETS_OFFSET UNITYSDK_OFFSET(0xC942050)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL_LEAVE_OFFSET UNITYSDK_OFFSET(0xC9426A0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL_REMOVE_ONHINTENVIRONMENT_OFFSET UNITYSDK_OFFSET(0xC942180)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL_REMOVE_ONHINTPROGRESS_OFFSET UNITYSDK_OFFSET(0xC9420C0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL_TRYGETSTORYCONFIGCLEARSCORE_OFFSET UNITYSDK_OFFSET(0xC9425C0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xC942360)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL__ONENVIRONMENTHINTMESSAGE_OFFSET UNITYSDK_OFFSET(0xC942740)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL__ONPROGRESSHINTMESSAGE_OFFSET UNITYSDK_OFFSET(0xC9427F0)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceMazeViewModel_TypeDefinitionIndex = 81590;

	class ChallengeTierceMazeViewModel : public ::System::Object
	{
	public:
		::System::Action_1<::RPG::Client::Challenge::Tierce::ChallengeTierceMazeProgressHintViewModel*>* OnHintProgress; // 0x10
		::RPG::Client::Challenge::Tierce::ChallengeTierceTargetsViewModel* _Targets_k__BackingField; // 0x18
		::Class_1_5EBDCA5E10FB9D5A* _Engagement; // 0x20
		::RPG::Client::ChallengeData* _Challenge; // 0x28
		::System::Action_1<::RPG::Client::Challenge::IChallengeEnvironmentHintViewModel*>* OnHintEnvironment; // 0x30
		::Class_1_1294FEF8E985635C* _Messenger; // 0x38

		::System::Void _ctor(::RPG::Client::ChallengeData* a1, ::Class_1_5EBDCA5E10FB9D5A* a2, ::Class_1_1294FEF8E985635C* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengeData*, ::Class_1_5EBDCA5E10FB9D5A*, ::Class_1_1294FEF8E985635C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean get_IsPassed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL_GET_ISPASSED_OFFSET))(this);
		}

		::RPG::Client::Challenge::Tierce::ChallengeTierceTargetsViewModel* get_Targets()
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceTargetsViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL_GET_TARGETS_OFFSET))(this);
		}

		::RPG::Client::Challenge::Tierce::ChallengeTierceRecordBase* get_Record()
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceRecordBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL_GET_RECORD_OFFSET))(this);
		}

		::System::Void add_OnHintProgress(::System::Action_1<::RPG::Client::Challenge::Tierce::ChallengeTierceMazeProgressHintViewModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::Challenge::Tierce::ChallengeTierceMazeProgressHintViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL_ADD_ONHINTPROGRESS_OFFSET))(this, a1);
		}

		::System::Void remove_OnHintProgress(::System::Action_1<::RPG::Client::Challenge::Tierce::ChallengeTierceMazeProgressHintViewModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::Challenge::Tierce::ChallengeTierceMazeProgressHintViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL_REMOVE_ONHINTPROGRESS_OFFSET))(this, a1);
		}

		::System::Void add_OnHintEnvironment(::System::Action_1<::RPG::Client::Challenge::IChallengeEnvironmentHintViewModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::Challenge::IChallengeEnvironmentHintViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL_ADD_ONHINTENVIRONMENT_OFFSET))(this, a1);
		}

		::System::Void remove_OnHintEnvironment(::System::Action_1<::RPG::Client::Challenge::IChallengeEnvironmentHintViewModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::Challenge::IChallengeEnvironmentHintViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL_REMOVE_ONHINTENVIRONMENT_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL_GET_NAME_OFFSET))(this);
		}

		::RPG::GameCore::ChallengeGroupType get_GroupType()
		{
			return ((::RPG::GameCore::ChallengeGroupType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL_GET_GROUPTYPE_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* get_JustFinishedTargetIDs()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL_GET_JUSTFINISHEDTARGETIDS_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::TextID GetLeaveConfirmTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL_GETLEAVECONFIRMTITLE_OFFSET))(this);
		}

		::System::Nullable_1<::System::Int32> TryGetStoryConfigClearScore()
		{
			return ((::System::Nullable_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL_TRYGETSTORYCONFIGCLEARSCORE_OFFSET))(this);
		}

		::System::Void Leave()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL_LEAVE_OFFSET))(this);
		}

		::RPG::Client::Challenge::IChallengeEnvironmentHintViewModel* GetEnvironmentHint()
		{
			return ((::RPG::Client::Challenge::IChallengeEnvironmentHintViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL_GETENVIRONMENTHINT_OFFSET))(this);
		}

		::System::Void _OnEnvironmentHintMessage(::System::Object* a1, ::RPG::Client::Challenge::Tierce::ChallengeTierceMazeViewModel_EnvironmentHintMessage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::RPG::Client::Challenge::Tierce::ChallengeTierceMazeViewModel_EnvironmentHintMessage*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL__ONENVIRONMENTHINTMESSAGE_OFFSET))(this, a1, a2);
		}

		::System::Void _OnProgressHintMessage(::System::Object* a1, ::RPG::Client::Challenge::Tierce::ChallengeTierceMazeViewModel_ProgressHintMessage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::RPG::Client::Challenge::Tierce::ChallengeTierceMazeViewModel_ProgressHintMessage*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL__ONPROGRESSHINTMESSAGE_OFFSET))(this, a1, a2);
		}
	};
}
