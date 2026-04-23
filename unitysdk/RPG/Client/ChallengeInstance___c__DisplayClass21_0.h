#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_147;

#define RPG_CLIENT_CHALLENGEINSTANCE___C__DISPLAYCLASS21_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9F31410)
#define RPG_CLIENT_CHALLENGEINSTANCE___C__DISPLAYCLASS21_0__REFRESHCHALLENGETARGET_B__0_OFFSET UNITYSDK_OFFSET(0x9F329B0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeInstance___c__DisplayClass21_0_TypeDefinitionIndex = 58116;

	class ChallengeInstance___c__DisplayClass21_0 : public ::System::Object
	{
	public:
		::Class_1_D17272E82AE804C2_147* curStageKillMonster; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE___C__DISPLAYCLASS21_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshChallengeTarget_b__0(::Class_1_D17272E82AE804C2_147* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_147*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE___C__DISPLAYCLASS21_0__REFRESHCHALLENGETARGET_B__0_OFFSET))(this, x);
		}
	};
}
