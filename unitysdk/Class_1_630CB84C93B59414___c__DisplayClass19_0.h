#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ExeCode.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_614;
class Class_0_16E4307DCC419505_616;
class Class_1_630CB84C93B59414;
class Class_2_570C2CCF5D0BF6A1;
class Class_2_7419679A7698613D;

#define CLASS_1_630CB84C93B59414___C__DISPLAYCLASS19_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14A33E00)
#define CLASS_1_630CB84C93B59414___C__DISPLAYCLASS19_0___MAKEPREDOWNLOAD_B__0_OFFSET UNITYSDK_OFFSET(0x14A47D60)

inline static constexpr unsigned int Class_1_630CB84C93B59414___c__DisplayClass19_0_TypeDefinitionIndex = 56866;

class Class_1_630CB84C93B59414___c__DisplayClass19_0 : public ::System::Object
{
public:
	::Class_1_630CB84C93B59414* __4__this; // 0x10
	::Class_2_570C2CCF5D0BF6A1* audioHPatch; // 0x18
	::Class_2_7419679A7698613D* blockHPatch; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_630CB84C93B59414___C__DISPLAYCLASS19_0__CTOR_OFFSET))(this);
	}

	::System::Void __MakePreDownload_b__0(::Class_0_16E4307DCC419505_614* a1, ::Class_0_16E4307DCC419505_616* a2, ::System::Object* a3, ::RPG::Client::ExeCode a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_614*, ::Class_0_16E4307DCC419505_616*, ::System::Object*, ::RPG::Client::ExeCode))((::PBYTE)hIl2Cpp + CLASS_1_630CB84C93B59414___C__DISPLAYCLASS19_0___MAKEPREDOWNLOAD_B__0_OFFSET))(this, a1, a2, a3, a4);
	}
};
