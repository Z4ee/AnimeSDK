#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C9DFE5EE7107C629_5;

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESESSIONSTAGERESULTBASE_GET_ISWIN_OFFSET UNITYSDK_OFFSET(0xCA05510)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESESSIONSTAGERESULTBASE__CTOR_1_OFFSET UNITYSDK_OFFSET(0xCA05530)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESESSIONSTAGERESULTBASE__CTOR_OFFSET UNITYSDK_OFFSET(0xCA05520)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceSessionStageResultBase_TypeDefinitionIndex = 80158;

	class ChallengeTierceSessionStageResultBase : public ::System::Object
	{
	public:
		::System::Boolean _IsWin_k__BackingField; // 0x10

		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESESSIONSTAGERESULTBASE__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::Class_1_C9DFE5EE7107C629_5* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESESSIONSTAGERESULTBASE__CTOR_1_OFFSET))(this, a1);
		}

		::System::Boolean get_IsWin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESESSIONSTAGERESULTBASE_GET_ISWIN_OFFSET))(this);
		}
	};
}
