#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ExeCode.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_650;
class Class_0_16E4307DCC419505_652;
class Class_1_630CB84C93B59414;
class Class_2_154297DE1BCCA968;
class Class_2_570C2CCF5D0BF6A1;
class Class_2_7419679A7698613D;
class Class_2_D7563FB108CF1D15;

#define CLASS_1_630CB84C93B59414___C__DISPLAYCLASS74_0__CTOR_OFFSET UNITYSDK_OFFSET(0x162CEA20)
#define CLASS_1_630CB84C93B59414___C__DISPLAYCLASS74_0___MAKEPATCHPROGRESS_B__0_OFFSET UNITYSDK_OFFSET(0x162D5A50)
#define CLASS_1_630CB84C93B59414___C__DISPLAYCLASS74_0___MAKEPATCHPROGRESS_B__1_OFFSET UNITYSDK_OFFSET(0x162D5A90)

inline static constexpr unsigned int Class_1_630CB84C93B59414___c__DisplayClass74_0_TypeDefinitionIndex = 59671;

class Class_1_630CB84C93B59414___c__DisplayClass74_0 : public ::System::Object
{
public:
	::Class_1_630CB84C93B59414* __4__this; // 0x10
	::Class_2_D7563FB108CF1D15* luaData; // 0x18
	::Class_2_570C2CCF5D0BF6A1* audioHPatch; // 0x20
	::Class_2_154297DE1BCCA968* designHPatch; // 0x28
	::Class_2_7419679A7698613D* blockHPatch; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_630CB84C93B59414___C__DISPLAYCLASS74_0__CTOR_OFFSET))(this);
	}

	::System::Void __MakePatchProgress_b__0(::Class_0_16E4307DCC419505_650* a1, ::Class_0_16E4307DCC419505_652* a2, ::System::Object* a3, ::RPG::Client::ExeCode a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_650*, ::Class_0_16E4307DCC419505_652*, ::System::Object*, ::RPG::Client::ExeCode))((::PBYTE)hIl2Cpp + CLASS_1_630CB84C93B59414___C__DISPLAYCLASS74_0___MAKEPATCHPROGRESS_B__0_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void __MakePatchProgress_b__1(::Class_0_16E4307DCC419505_650* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_650*))((::PBYTE)hIl2Cpp + CLASS_1_630CB84C93B59414___C__DISPLAYCLASS74_0___MAKEPATCHPROGRESS_B__1_OFFSET))(this, a1);
	}
};
