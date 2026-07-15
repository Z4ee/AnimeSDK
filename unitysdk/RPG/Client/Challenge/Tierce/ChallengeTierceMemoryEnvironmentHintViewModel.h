#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChallengeData; }

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMEMORYENVIRONMENTHINTVIEWMODEL_GET_CHALLENGEDATAREF_OFFSET UNITYSDK_OFFSET(0x1AC6CA40)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMEMORYENVIRONMENTHINTVIEWMODEL_SET_CHALLENGEDATAREF_OFFSET UNITYSDK_OFFSET(0x1AC6CA50)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMEMORYENVIRONMENTHINTVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC6CA60)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceMemoryEnvironmentHintViewModel_TypeDefinitionIndex = 76633;

	class ChallengeTierceMemoryEnvironmentHintViewModel : public ::System::Object
	{
	public:
		::RPG::Client::ChallengeData* _ChallengeDataRef_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMEMORYENVIRONMENTHINTVIEWMODEL__CTOR_OFFSET))(this);
		}

		::RPG::Client::ChallengeData* get_ChallengeDataRef()
		{
			return ((::RPG::Client::ChallengeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMEMORYENVIRONMENTHINTVIEWMODEL_GET_CHALLENGEDATAREF_OFFSET))(this);
		}

		::System::Void set_ChallengeDataRef(::RPG::Client::ChallengeData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMEMORYENVIRONMENTHINTVIEWMODEL_SET_CHALLENGEDATAREF_OFFSET))(this, a1);
		}
	};
}
