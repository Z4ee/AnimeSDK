#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ExeCode.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_650;
class Class_0_16E4307DCC419505_652;
class Class_1_630CB84C93B59414;
class Class_2_154297DE1BCCA968;

#define CLASS_1_630CB84C93B59414___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x162B82D0)
#define CLASS_1_630CB84C93B59414___C__DISPLAYCLASS3_0___MAKETEXTMAPPACKPROGRESS_B__0_OFFSET UNITYSDK_OFFSET(0x162D2F70)

inline static constexpr unsigned int Class_1_630CB84C93B59414___c__DisplayClass3_0_TypeDefinitionIndex = 59660;

class Class_1_630CB84C93B59414___c__DisplayClass3_0 : public ::System::Object
{
public:
	::Class_1_630CB84C93B59414* __4__this; // 0x10
	::Class_2_154297DE1BCCA968* designHPatch; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_630CB84C93B59414___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
	}

	::System::Void __MakeTextmapPackProgress_b__0(::Class_0_16E4307DCC419505_650* a1, ::Class_0_16E4307DCC419505_652* a2, ::System::Object* a3, ::RPG::Client::ExeCode a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_650*, ::Class_0_16E4307DCC419505_652*, ::System::Object*, ::RPG::Client::ExeCode))((::PBYTE)hIl2Cpp + CLASS_1_630CB84C93B59414___C__DISPLAYCLASS3_0___MAKETEXTMAPPACKPROGRESS_B__0_OFFSET))(this, a1, a2, a3, a4);
	}
};
