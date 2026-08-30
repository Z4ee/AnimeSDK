#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Challenge/Tierce/ChallengeTierceSessionStageResultBase.h"

class Class_1_B019EAD7E127C874;
class Class_1_C9DFE5EE7107C629_6;
class Class_1_D17272E82AE804C2_185;

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESESSIONSTAGERESULTOFBOSS_GET_OBTAINEDSCORE_OFFSET UNITYSDK_OFFSET(0x1C875560)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESESSIONSTAGERESULTOFBOSS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C8755A0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESESSIONSTAGERESULTOFBOSS__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1C8755E0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESESSIONSTAGERESULTOFBOSS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C875570)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceSessionStageResultOfBoss_TypeDefinitionIndex = 80160;

	class ChallengeTierceSessionStageResultOfBoss : public ::RPG::Client::Challenge::Tierce::ChallengeTierceSessionStageResultBase
	{
	public:
		::System::Int32 _ObtainedScore_k__BackingField; // 0x18

		::System::Void _ctor(::Class_1_C9DFE5EE7107C629_6* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESESSIONSTAGERESULTOFBOSS__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::Class_1_B019EAD7E127C874* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B019EAD7E127C874*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESESSIONSTAGERESULTOFBOSS__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_2(::Class_1_D17272E82AE804C2_185* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_185*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESESSIONSTAGERESULTOFBOSS__CTOR_2_OFFSET))(this, a1);
		}

		::System::Int32 get_ObtainedScore()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESESSIONSTAGERESULTOFBOSS_GET_OBTAINEDSCORE_OFFSET))(this);
		}
	};
}
