#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ExeCode.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_579;
class Class_0_16E4307DCC419505_581;
class Class_1_275454CE65A12492;
class Class_2_047DF171B0451D59;
class Class_2_7419679A7698613D;
class Class_2_C5B09DEAAF6D0487;
class Class_2_C5B09DEAAF6D0487_1;

#define CLASS_1_275454CE65A12492___C__DISPLAYCLASS74_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14390D40)
#define CLASS_1_275454CE65A12492___C__DISPLAYCLASS74_0___MAKEPATCHPROGRESS_B__0_OFFSET UNITYSDK_OFFSET(0x14397310)
#define CLASS_1_275454CE65A12492___C__DISPLAYCLASS74_0___MAKEPATCHPROGRESS_B__1_OFFSET UNITYSDK_OFFSET(0x14397350)

inline static constexpr unsigned int Class_1_275454CE65A12492___c__DisplayClass74_0_TypeDefinitionIndex = 55646;

class Class_1_275454CE65A12492___c__DisplayClass74_0 : public ::System::Object
{
public:
	::Class_2_C5B09DEAAF6D0487* audioHPatch; // 0x10
	::Class_2_7419679A7698613D* blockHPatch; // 0x18
	::Class_2_C5B09DEAAF6D0487_1* designHPatch; // 0x20
	::Class_1_275454CE65A12492* __4__this; // 0x28
	::Class_2_047DF171B0451D59* luaData; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_275454CE65A12492___C__DISPLAYCLASS74_0__CTOR_OFFSET))(this);
	}

	::System::Void __MakePatchProgress_b__0(::Class_0_16E4307DCC419505_579* a1, ::Class_0_16E4307DCC419505_581* a2, ::System::Object* a3, ::RPG::Client::ExeCode a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_579*, ::Class_0_16E4307DCC419505_581*, ::System::Object*, ::RPG::Client::ExeCode))((::PBYTE)hIl2Cpp + CLASS_1_275454CE65A12492___C__DISPLAYCLASS74_0___MAKEPATCHPROGRESS_B__0_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void __MakePatchProgress_b__1(::Class_0_16E4307DCC419505_579* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_579*))((::PBYTE)hIl2Cpp + CLASS_1_275454CE65A12492___C__DISPLAYCLASS74_0___MAKEPATCHPROGRESS_B__1_OFFSET))(this, a1);
	}
};
