#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_642E7BE5523E6A3C;
namespace System { class Action; }

#define CLASS_2_642E7BE5523E6A3C___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C54C510)
#define CLASS_2_642E7BE5523E6A3C___C__DISPLAYCLASS4_0___SUBSCRIBE_B__0_OFFSET UNITYSDK_OFFSET(0x1C54C6D0)

inline static constexpr unsigned int Class_2_642E7BE5523E6A3C___c__DisplayClass4_0_TypeDefinitionIndex = 41858;

class Class_2_642E7BE5523E6A3C___c__DisplayClass4_0 : public ::System::Object
{
public:
	::System::Action* unregisterFromSubject; // 0x10
	::Class_2_642E7BE5523E6A3C* __4__this; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_642E7BE5523E6A3C___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
	}

	::System::Void __Subscribe_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_642E7BE5523E6A3C___C__DISPLAYCLASS4_0___SUBSCRIBE_B__0_OFFSET))(this);
	}
};
