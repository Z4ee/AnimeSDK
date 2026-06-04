#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1166;
class Class_1_933C07741192A471;
namespace System { class Action; }

#define CLASS_1_933C07741192A471___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA9F3EB0)
#define CLASS_1_933C07741192A471___C__DISPLAYCLASS9_0__EXECUTE_B__0_OFFSET UNITYSDK_OFFSET(0xA9F40A0)

inline static constexpr unsigned int Class_1_933C07741192A471___c__DisplayClass9_0_TypeDefinitionIndex = 72749;

class Class_1_933C07741192A471___c__DisplayClass9_0 : public ::System::Object
{
public:
	::Class_1_933C07741192A471* __4__this; // 0x10
	::Class_0_16E4307DCC419505_1166* command; // 0x18
	::System::Action* onComplete; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_933C07741192A471___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
	}

	::System::Void _Execute_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_933C07741192A471___C__DISPLAYCLASS9_0__EXECUTE_B__0_OFFSET))(this);
	}
};
