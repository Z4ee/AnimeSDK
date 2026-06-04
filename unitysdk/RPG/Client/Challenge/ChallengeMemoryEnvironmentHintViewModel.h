#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Challenge/ChallengeEnvironmentHintViewModelBase.h"

namespace RPG::Client { class ChallengeInstance; }

#define RPG_CLIENT_CHALLENGE_CHALLENGEMEMORYENVIRONMENTHINTVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xB4C16E0)

namespace RPG::Client::Challenge
{
	inline static constexpr unsigned int ChallengeMemoryEnvironmentHintViewModel_TypeDefinitionIndex = 74087;

	class ChallengeMemoryEnvironmentHintViewModel : public ::RPG::Client::Challenge::ChallengeEnvironmentHintViewModelBase
	{
	public:
		::System::Void _ctor(::RPG::Client::ChallengeInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengeInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGEMEMORYENVIRONMENTHINTVIEWMODEL__CTOR_OFFSET))(this, a1);
		}
	};
}
