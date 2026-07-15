#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ExeCode.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_614;
class Class_0_16E4307DCC419505_616;
class Class_1_630CB84C93B59414;
class Class_2_4FFA1EF262510C03;
class Class_2_570C2CCF5D0BF6A1;
class Class_2_7419679A7698613D;
class Class_2_D7563FB108CF1D15;

#define CLASS_1_630CB84C93B59414___C__DISPLAYCLASS74_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14A43BE0)
#define CLASS_1_630CB84C93B59414___C__DISPLAYCLASS74_0___MAKEPATCHPROGRESS_B__0_OFFSET UNITYSDK_OFFSET(0x14A4ABA0)
#define CLASS_1_630CB84C93B59414___C__DISPLAYCLASS74_0___MAKEPATCHPROGRESS_B__1_OFFSET UNITYSDK_OFFSET(0x14A4ABE0)

inline static constexpr unsigned int Class_1_630CB84C93B59414___c__DisplayClass74_0_TypeDefinitionIndex = 56883;

class Class_1_630CB84C93B59414___c__DisplayClass74_0 : public ::System::Object
{
public:
	::Class_1_630CB84C93B59414* __4__this; // 0x10
	::Class_2_D7563FB108CF1D15* luaData; // 0x18
	::Class_2_7419679A7698613D* blockHPatch; // 0x20
	::Class_2_4FFA1EF262510C03* designHPatch; // 0x28
	::Class_2_570C2CCF5D0BF6A1* audioHPatch; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_630CB84C93B59414___C__DISPLAYCLASS74_0__CTOR_OFFSET))(this);
	}

	::System::Void __MakePatchProgress_b__0(::Class_0_16E4307DCC419505_614* a1, ::Class_0_16E4307DCC419505_616* a2, ::System::Object* a3, ::RPG::Client::ExeCode a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_614*, ::Class_0_16E4307DCC419505_616*, ::System::Object*, ::RPG::Client::ExeCode))((::PBYTE)hIl2Cpp + CLASS_1_630CB84C93B59414___C__DISPLAYCLASS74_0___MAKEPATCHPROGRESS_B__0_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void __MakePatchProgress_b__1(::Class_0_16E4307DCC419505_614* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_614*))((::PBYTE)hIl2Cpp + CLASS_1_630CB84C93B59414___C__DISPLAYCLASS74_0___MAKEPATCHPROGRESS_B__1_OFFSET))(this, a1);
	}
};
