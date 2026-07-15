#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Challenge/Tierce/ChallengeTierceSessionStageResultBase.h"

class Class_1_B019EAD7E127C874;
class Class_1_D17272E82AE804C2_175;
class Class_1_E577B5580A99D425;

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESESSIONSTAGERESULTOFBOSS_GET_OBTAINEDSCORE_OFFSET UNITYSDK_OFFSET(0x187656D0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESESSIONSTAGERESULTOFBOSS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18765710)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESESSIONSTAGERESULTOFBOSS__CTOR_2_OFFSET UNITYSDK_OFFSET(0x18765750)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESESSIONSTAGERESULTOFBOSS__CTOR_OFFSET UNITYSDK_OFFSET(0x187656E0)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceSessionStageResultOfBoss_TypeDefinitionIndex = 76528;

	class ChallengeTierceSessionStageResultOfBoss : public ::RPG::Client::Challenge::Tierce::ChallengeTierceSessionStageResultBase
	{
	public:
		::System::Int32 _ObtainedScore_k__BackingField; // 0x18

		::System::Void _ctor(::Class_1_E577B5580A99D425* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E577B5580A99D425*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESESSIONSTAGERESULTOFBOSS__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::Class_1_B019EAD7E127C874* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B019EAD7E127C874*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESESSIONSTAGERESULTOFBOSS__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_2(::Class_1_D17272E82AE804C2_175* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_175*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESESSIONSTAGERESULTOFBOSS__CTOR_2_OFFSET))(this, a1);
		}

		::System::Int32 get_ObtainedScore()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESESSIONSTAGERESULTOFBOSS_GET_OBTAINEDSCORE_OFFSET))(this);
		}
	};
}
