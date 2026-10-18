#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_416;

#define CLASS_5_50C85806DB125A64___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC58730)
#define CLASS_5_50C85806DB125A64___C__DISPLAYCLASS4_0___ONTICKIMPLEMENT_B__0_OFFSET UNITYSDK_OFFSET(0x1EC58E40)

inline static constexpr unsigned int Class_5_50C85806DB125A64___c__DisplayClass4_0_TypeDefinitionIndex = 44204;

class Class_5_50C85806DB125A64___c__DisplayClass4_0 : public ::System::Object
{
public:
	::System::Single deltaTime; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_50C85806DB125A64___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
	}

	::System::Void __OnTickImplement_b__0(::Class_0_16E4307DCC419505_416* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_416*))((::PBYTE)hIl2Cpp + CLASS_5_50C85806DB125A64___C__DISPLAYCLASS4_0___ONTICKIMPLEMENT_B__0_OFFSET))(this, a1);
	}
};
