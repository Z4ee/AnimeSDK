#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::Client::Challenge { class ChallengeTargetInfoRowControl; }
namespace RPG::Client::Challenge { class ChallengeTargetViewModel; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceNodeVariantListControl; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceNodeVariantListControl_Class_1_3934BCE11C8FDFC0; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETARGETLISTCONTROL_GETTARGETCONTROL_OFFSET UNITYSDK_OFFSET(0x187646F0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETARGETLISTCONTROL_GET_TARGETS_OFFSET UNITYSDK_OFFSET(0x1877A320)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETARGETLISTCONTROL_METHOD_5_65A711E80B8FA950_OFFSET UNITYSDK_OFFSET(0x1877A360)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETARGETLISTCONTROL_SET_TARGETS_OFFSET UNITYSDK_OFFSET(0x187636C0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETARGETLISTCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1877A480)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETARGETLISTCONTROL___REFRESH_B__9_0_OFFSET UNITYSDK_OFFSET(0x1877A490)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceTargetListControl_TypeDefinitionIndex = 76574;

	class ChallengeTierceTargetListControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::Challenge::Tierce::ChallengeTierceNodeVariantListControl* _TargetList; // 0x18
		::RPG::Client::PrefabLoadMeta* _TargetPrefabLoadMeta; // 0x20
		::System::Int32 _NormalTargetPrefabIndex; // 0x28
		::System::Int32 _TierceTargetPrefabIndex; // 0x2C
		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::Challenge::ChallengeTargetViewModel*>* Field_5_4; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETARGETLISTCONTROL__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::Challenge::ChallengeTargetViewModel*>* get_Targets()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::Challenge::ChallengeTargetViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETARGETLISTCONTROL_GET_TARGETS_OFFSET))(this);
		}

		::System::Void set_Targets(::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::Challenge::ChallengeTargetViewModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::Challenge::ChallengeTargetViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETARGETLISTCONTROL_SET_TARGETS_OFFSET))(this, a1);
		}

		::RPG::Client::Challenge::ChallengeTargetInfoRowControl* GetTargetControl(::System::Int32 a1)
		{
			return ((::RPG::Client::Challenge::ChallengeTargetInfoRowControl*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETARGETLISTCONTROL_GETTARGETCONTROL_OFFSET))(this, a1);
		}

		::System::Void Method_5_65A711E80B8FA950(::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::Challenge::ChallengeTargetViewModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::Challenge::ChallengeTargetViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETARGETLISTCONTROL_METHOD_5_65A711E80B8FA950_OFFSET))(this, a1);
		}

		::RPG::Client::Challenge::Tierce::ChallengeTierceNodeVariantListControl_Class_1_3934BCE11C8FDFC0* __Refresh_b__9_0(::RPG::Client::Challenge::ChallengeTargetViewModel* a1, ::System::Int32 a2)
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceNodeVariantListControl_Class_1_3934BCE11C8FDFC0*(*)(::PVOID, ::RPG::Client::Challenge::ChallengeTargetViewModel*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETARGETLISTCONTROL___REFRESH_B__9_0_OFFSET))(this, a1, a2);
		}
	};
}
