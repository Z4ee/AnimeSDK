#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_614;
class Class_1_630CB84C93B59414;
class Class_1_C6B3B57B6E91674E;
class Class_2_D7563FB108CF1D15;

#define CLASS_1_630CB84C93B59414___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14A2C9A0)
#define CLASS_1_630CB84C93B59414___C__DISPLAYCLASS1_0__STARTFORDESIGNPACK_B__0_OFFSET UNITYSDK_OFFSET(0x14A47DA0)
#define CLASS_1_630CB84C93B59414___C__DISPLAYCLASS1_0__STARTFORDESIGNPACK_B__1_OFFSET UNITYSDK_OFFSET(0x14A47DC0)

inline static constexpr unsigned int Class_1_630CB84C93B59414___c__DisplayClass1_0_TypeDefinitionIndex = 56867;

class Class_1_630CB84C93B59414___c__DisplayClass1_0 : public ::System::Object
{
public:
	::Class_1_C6B3B57B6E91674E* queue; // 0x10
	::Class_2_D7563FB108CF1D15* luaData; // 0x18
	::Class_1_630CB84C93B59414* __4__this; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_630CB84C93B59414___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
	}

	::System::Void _StartForDesignPack_b__0(::Class_0_16E4307DCC419505_614* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_614*))((::PBYTE)hIl2Cpp + CLASS_1_630CB84C93B59414___C__DISPLAYCLASS1_0__STARTFORDESIGNPACK_B__0_OFFSET))(this, a1);
	}

	::System::Void _StartForDesignPack_b__1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_630CB84C93B59414___C__DISPLAYCLASS1_0__STARTFORDESIGNPACK_B__1_OFFSET))(this);
	}
};
