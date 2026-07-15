#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChallengeData; }
namespace RPG::Client { class ChallengeInstance; }

#define RPG_CLIENT_CHALLENGE_CHALLENGEENVIRONMENTHINTVIEWMODELBASE_GET_CHALLENGEDATAREF_OFFSET UNITYSDK_OFFSET(0x1AC61000)
#define RPG_CLIENT_CHALLENGE_CHALLENGEENVIRONMENTHINTVIEWMODELBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC60FE0)

namespace RPG::Client::Challenge
{
	inline static constexpr unsigned int ChallengeEnvironmentHintViewModelBase_TypeDefinitionIndex = 76469;

	class ChallengeEnvironmentHintViewModelBase : public ::System::Object
	{
	public:
		::RPG::Client::ChallengeData* _ChallengeDataRef_k__BackingField; // 0x10

		::System::Void _ctor(::RPG::Client::ChallengeInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengeInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGEENVIRONMENTHINTVIEWMODELBASE__CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::ChallengeData* get_ChallengeDataRef()
		{
			return ((::RPG::Client::ChallengeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGEENVIRONMENTHINTVIEWMODELBASE_GET_CHALLENGEDATAREF_OFFSET))(this);
		}
	};
}
