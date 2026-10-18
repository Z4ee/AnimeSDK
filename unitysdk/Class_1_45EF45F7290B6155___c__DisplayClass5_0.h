#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5F1B5D6380BD40EB;

#define CLASS_1_45EF45F7290B6155___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB8A6E10)
#define CLASS_1_45EF45F7290B6155___C__DISPLAYCLASS5_0___HOOK_B__0_OFFSET UNITYSDK_OFFSET(0xB8A7480)

inline static constexpr unsigned int Class_1_45EF45F7290B6155___c__DisplayClass5_0_TypeDefinitionIndex = 49822;

class Class_1_45EF45F7290B6155___c__DisplayClass5_0 : public ::System::Object
{
public:
	::Class_1_5F1B5D6380BD40EB* tab; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45EF45F7290B6155___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
	}

	::System::Void __Hook_b__0(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_45EF45F7290B6155___C__DISPLAYCLASS5_0___HOOK_B__0_OFFSET))(this, a1);
	}
};
