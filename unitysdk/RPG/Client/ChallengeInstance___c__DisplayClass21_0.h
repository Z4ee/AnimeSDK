#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FA4F4A67B1C04320_140;

#define RPG_CLIENT_CHALLENGEINSTANCE___C__DISPLAYCLASS21_0__CTOR_OFFSET UNITYSDK_OFFSET(0x92C95C0)
#define RPG_CLIENT_CHALLENGEINSTANCE___C__DISPLAYCLASS21_0__REFRESHCHALLENGETARGET_B__0_OFFSET UNITYSDK_OFFSET(0x92CA910)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeInstance___c__DisplayClass21_0_TypeDefinitionIndex = 51195;

	class ChallengeInstance___c__DisplayClass21_0 : public ::System::Object
	{
	public:
		::Class_1_FA4F4A67B1C04320_140* curStageKillMonster; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE___C__DISPLAYCLASS21_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshChallengeTarget_b__0(::Class_1_FA4F4A67B1C04320_140* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_140*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE___C__DISPLAYCLASS21_0__REFRESHCHALLENGETARGET_B__0_OFFSET))(this, x);
		}
	};
}
