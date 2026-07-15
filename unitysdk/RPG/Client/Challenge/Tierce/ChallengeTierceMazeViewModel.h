#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChallengeGroupType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_1_367B452FA4E5EC2C;
class Class_1_5F4D64A4B97E38F9;
namespace RPG::Client { class ChallengeData; }
namespace RPG::Client::Challenge { class IChallengeEnvironmentHintViewModel; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceMazeProgressHintViewModel; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceMazeViewModel_EnvironmentHintMessage; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceMazeViewModel_ProgressHintMessage; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceRecordBase; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceTargetsViewModel; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL_ADD_ONHINTENVIRONMENT_OFFSET UNITYSDK_OFFSET(0x1AC6C1B0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL_ADD_ONHINTPROGRESS_OFFSET UNITYSDK_OFFSET(0x1AC6C0F0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AC6C4D0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL_GETENVIRONMENTHINT_OFFSET UNITYSDK_OFFSET(0x1AC6C760)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL_GETLEAVECONFIRMTITLE_OFFSET UNITYSDK_OFFSET(0x1AC6C530)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL_GET_GROUPTYPE_OFFSET UNITYSDK_OFFSET(0x1AC6C320)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL_GET_ISPASSED_OFFSET UNITYSDK_OFFSET(0x1AC6BDF0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL_GET_JUSTFINISHEDTARGETIDS_OFFSET UNITYSDK_OFFSET(0x1AC6C370)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1AC6C270)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL_GET_RECORD_OFFSET UNITYSDK_OFFSET(0x1AC6C080)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL_GET_TARGETS_OFFSET UNITYSDK_OFFSET(0x1AC6C0E0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL_LEAVE_OFFSET UNITYSDK_OFFSET(0x1AC6C710)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL_REMOVE_ONHINTENVIRONMENT_OFFSET UNITYSDK_OFFSET(0x1AC6C210)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL_REMOVE_ONHINTPROGRESS_OFFSET UNITYSDK_OFFSET(0x1AC6C150)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL_TRYGETSTORYCONFIGCLEARSCORE_OFFSET UNITYSDK_OFFSET(0x1AC6C630)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC6C3E0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL__ONENVIRONMENTHINTMESSAGE_OFFSET UNITYSDK_OFFSET(0x1AC6C7B0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL__ONPROGRESSHINTMESSAGE_OFFSET UNITYSDK_OFFSET(0x1AC6C860)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceMazeViewModel_TypeDefinitionIndex = 76626;

	class ChallengeTierceMazeViewModel : public ::System::Object
	{
	public:
		::Class_1_5F4D64A4B97E38F9* _Messenger; // 0x10
		::Class_1_367B452FA4E5EC2C* _Engagement; // 0x18
		::System::Action_1<::RPG::Client::Challenge::IChallengeEnvironmentHintViewModel*>* OnHintEnvironment; // 0x20
		::RPG::Client::ChallengeData* _Challenge; // 0x28
		::System::Action_1<::RPG::Client::Challenge::Tierce::ChallengeTierceMazeProgressHintViewModel*>* OnHintProgress; // 0x30
		::RPG::Client::Challenge::Tierce::ChallengeTierceTargetsViewModel* _Targets_k__BackingField; // 0x38

		::System::Void _ctor(::RPG::Client::ChallengeData* a1, ::Class_1_367B452FA4E5EC2C* a2, ::Class_1_5F4D64A4B97E38F9* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengeData*, ::Class_1_367B452FA4E5EC2C*, ::Class_1_5F4D64A4B97E38F9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL__CTOR_OFFSET))(this, a1, a2, a3);
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
