#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Challenge/Tierce/ChallengeTierceSessionStageResultBase.h"

class Class_1_B019EAD7E127C874;
class Class_1_C9DFE5EE7107C629_6;
class Class_1_D17272E82AE804C2_185;

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESESSIONSTAGERESULTOFSTORY_GET_OBTAINEDSCORE_OFFSET UNITYSDK_OFFSET(0x1C875770)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESESSIONSTAGERESULTOFSTORY_WITHOBTAINEDSCORE_OFFSET UNITYSDK_OFFSET(0x1C875810)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESESSIONSTAGERESULTOFSTORY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C875790)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESESSIONSTAGERESULTOFSTORY__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1C8757B0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESESSIONSTAGERESULTOFSTORY__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1C8757F0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESESSIONSTAGERESULTOFSTORY__CTOR_OFFSET UNITYSDK_OFFSET(0x1C875780)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceSessionStageResultOfStory_TypeDefinitionIndex = 80162;

	class ChallengeTierceSessionStageResultOfStory : public ::RPG::Client::Challenge::Tierce::ChallengeTierceSessionStageResultBase
	{
	public:
		::System::Int32 _ObtainedScore_k__BackingField; // 0x18

		::System::Void _ctor(::System::Boolean a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESESSIONSTAGERESULTOFSTORY__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::Class_1_C9DFE5EE7107C629_6* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESESSIONSTAGERESULTOFSTORY__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::Class_1_B019EAD7E127C874* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B019EAD7E127C874*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESESSIONSTAGERESULTOFSTORY__CTOR_2_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_3(::Class_1_D17272E82AE804C2_185* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_185*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESESSIONSTAGERESULTOFSTORY__CTOR_3_OFFSET))(this, a1);
		}

		::System::Int32 get_ObtainedScore()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESESSIONSTAGERESULTOFSTORY_GET_OBTAINEDSCORE_OFFSET))(this);
		}

		::RPG::Client::Challenge::Tierce::ChallengeTierceSessionStageResultOfStory* WithObtainedScore(::System::Int32 a1)
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceSessionStageResultOfStory*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESESSIONSTAGERESULTOFSTORY_WITHOBTAINEDSCORE_OFFSET))(this, a1);
		}
	};
}
