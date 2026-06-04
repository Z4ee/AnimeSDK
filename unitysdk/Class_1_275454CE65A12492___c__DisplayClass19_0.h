#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ExeCode.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_579;
class Class_0_16E4307DCC419505_581;
class Class_1_275454CE65A12492;
class Class_2_7419679A7698613D;
class Class_2_C5B09DEAAF6D0487;

#define CLASS_1_275454CE65A12492___C__DISPLAYCLASS19_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14381930)
#define CLASS_1_275454CE65A12492___C__DISPLAYCLASS19_0___MAKEPREDOWNLOAD_B__0_OFFSET UNITYSDK_OFFSET(0x143948C0)

inline static constexpr unsigned int Class_1_275454CE65A12492___c__DisplayClass19_0_TypeDefinitionIndex = 55629;

class Class_1_275454CE65A12492___c__DisplayClass19_0 : public ::System::Object
{
public:
	::Class_1_275454CE65A12492* __4__this; // 0x10
	::Class_2_C5B09DEAAF6D0487* audioHPatch; // 0x18
	::Class_2_7419679A7698613D* blockHPatch; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_275454CE65A12492___C__DISPLAYCLASS19_0__CTOR_OFFSET))(this);
	}

	::System::Void __MakePreDownload_b__0(::Class_0_16E4307DCC419505_579* a1, ::Class_0_16E4307DCC419505_581* a2, ::System::Object* a3, ::RPG::Client::ExeCode a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_579*, ::Class_0_16E4307DCC419505_581*, ::System::Object*, ::RPG::Client::ExeCode))((::PBYTE)hIl2Cpp + CLASS_1_275454CE65A12492___C__DISPLAYCLASS19_0___MAKEPREDOWNLOAD_B__0_OFFSET))(this, a1, a2, a3, a4);
	}
};
