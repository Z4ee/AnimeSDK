#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1298;
class Class_1_CD925DCDD7147BC4;
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Action; }

#define CLASS_1_CD925DCDD7147BC4___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0xDD99510)
#define CLASS_1_CD925DCDD7147BC4___C__DISPLAYCLASS10_0___EXECUTESWITCH_B__0_OFFSET UNITYSDK_OFFSET(0xDD99610)
#define CLASS_1_CD925DCDD7147BC4___C__DISPLAYCLASS10_0___EXECUTESWITCH_B__1_OFFSET UNITYSDK_OFFSET(0xDD99780)
#define CLASS_1_CD925DCDD7147BC4___C__DISPLAYCLASS10_0___EXECUTESWITCH_B__2_OFFSET UNITYSDK_OFFSET(0xDD997E0)
#define CLASS_1_CD925DCDD7147BC4___C__DISPLAYCLASS10_0___EXECUTESWITCH_B__3_OFFSET UNITYSDK_OFFSET(0xDD99920)
#define CLASS_1_CD925DCDD7147BC4___C__DISPLAYCLASS10_0___EXECUTESWITCH_B__5_OFFSET UNITYSDK_OFFSET(0xDD99940)

inline static constexpr unsigned int Class_1_CD925DCDD7147BC4___c__DisplayClass10_0_TypeDefinitionIndex = 77256;

class Class_1_CD925DCDD7147BC4___c__DisplayClass10_0 : public ::System::Object
{
public:
	::Class_1_CD925DCDD7147BC4* __4__this; // 0x10
	::System::Object* enterParam; // 0x18
	::System::Action* onFinish; // 0x20
	::Class_0_16E4307DCC419505_1298* nextPhase; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD925DCDD7147BC4___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* __ExecuteSwitch_b__0()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD925DCDD7147BC4___C__DISPLAYCLASS10_0___EXECUTESWITCH_B__0_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* __ExecuteSwitch_b__1()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD925DCDD7147BC4___C__DISPLAYCLASS10_0___EXECUTESWITCH_B__1_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* __ExecuteSwitch_b__2()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD925DCDD7147BC4___C__DISPLAYCLASS10_0___EXECUTESWITCH_B__2_OFFSET))(this);
	}

	::System::Void __ExecuteSwitch_b__3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD925DCDD7147BC4___C__DISPLAYCLASS10_0___EXECUTESWITCH_B__3_OFFSET))(this);
	}

	::System::Void __ExecuteSwitch_b__5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD925DCDD7147BC4___C__DISPLAYCLASS10_0___EXECUTESWITCH_B__5_OFFSET))(this);
	}
};
