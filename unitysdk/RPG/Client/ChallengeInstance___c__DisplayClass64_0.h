#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_148;

#define RPG_CLIENT_CHALLENGEINSTANCE___C__DISPLAYCLASS64_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB5499A0)
#define RPG_CLIENT_CHALLENGEINSTANCE___C__DISPLAYCLASS64_0__REFRESHCHALLENGETARGET_B__0_OFFSET UNITYSDK_OFFSET(0xB54A8D0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeInstance___c__DisplayClass64_0_TypeDefinitionIndex = 59038;

	class ChallengeInstance___c__DisplayClass64_0 : public ::System::Object
	{
	public:
		::Class_1_D17272E82AE804C2_148* curStageKillMonster; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE___C__DISPLAYCLASS64_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshChallengeTarget_b__0(::Class_1_D17272E82AE804C2_148* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_148*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE___C__DISPLAYCLASS64_0__REFRESHCHALLENGETARGET_B__0_OFFSET))(this, a1);
		}
	};
}
