#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class Promise; }

#define CLASS_2_0076F4905B051640___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA486740)
#define CLASS_2_0076F4905B051640___C__DISPLAYCLASS15_0___TRYSHOWWEEKCHALLENGEREWARDDIALOG_B__1_OFFSET UNITYSDK_OFFSET(0xA4869A0)

inline static constexpr unsigned int Class_2_0076F4905B051640___c__DisplayClass15_0_TypeDefinitionIndex = 63453;

class Class_2_0076F4905B051640___c__DisplayClass15_0 : public ::System::Object
{
public:
	::RPG::Client::Promises::Promise* promise; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0076F4905B051640___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
	}

	::System::Void __TryShowWeekChallengeRewardDialog_b__1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0076F4905B051640___C__DISPLAYCLASS15_0___TRYSHOWWEEKCHALLENGEREWARDDIALOG_B__1_OFFSET))(this);
	}
};
