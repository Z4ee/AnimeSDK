#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_BE764BAB439B58AC;
namespace RPG::Client::Promises { class IPromise; }

#define CLASS_1_BE764BAB439B58AC___C__DISPLAYCLASS22_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15BC6430)
#define CLASS_1_BE764BAB439B58AC___C__DISPLAYCLASS22_0___PERFORMELITEANDBOSSSTAGE_B__0_OFFSET UNITYSDK_OFFSET(0x15BC72F0)

inline static constexpr unsigned int Class_1_BE764BAB439B58AC___c__DisplayClass22_0_TypeDefinitionIndex = 74965;

class Class_1_BE764BAB439B58AC___c__DisplayClass22_0 : public ::System::Object
{
public:
	::Class_1_BE764BAB439B58AC* __4__this; // 0x10
	::System::Boolean isFirstWin; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE764BAB439B58AC___C__DISPLAYCLASS22_0__CTOR_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* __PerformEliteAndBossStage_b__0()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE764BAB439B58AC___C__DISPLAYCLASS22_0___PERFORMELITEANDBOSSSTAGE_B__0_OFFSET))(this);
	}
};
