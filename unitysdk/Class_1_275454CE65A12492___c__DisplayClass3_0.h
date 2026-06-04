#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ExeCode.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_579;
class Class_0_16E4307DCC419505_581;
class Class_1_275454CE65A12492;
class Class_2_C5B09DEAAF6D0487_1;

#define CLASS_1_275454CE65A12492___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1437B530)
#define CLASS_1_275454CE65A12492___C__DISPLAYCLASS3_0___MAKETEXTMAPPACKPROGRESS_B__0_OFFSET UNITYSDK_OFFSET(0x14394C20)

inline static constexpr unsigned int Class_1_275454CE65A12492___c__DisplayClass3_0_TypeDefinitionIndex = 55635;

class Class_1_275454CE65A12492___c__DisplayClass3_0 : public ::System::Object
{
public:
	::Class_2_C5B09DEAAF6D0487_1* designHPatch; // 0x10
	::Class_1_275454CE65A12492* __4__this; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_275454CE65A12492___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
	}

	::System::Void __MakeTextmapPackProgress_b__0(::Class_0_16E4307DCC419505_579* a1, ::Class_0_16E4307DCC419505_581* a2, ::System::Object* a3, ::RPG::Client::ExeCode a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_579*, ::Class_0_16E4307DCC419505_581*, ::System::Object*, ::RPG::Client::ExeCode))((::PBYTE)hIl2Cpp + CLASS_1_275454CE65A12492___C__DISPLAYCLASS3_0___MAKETEXTMAPPACKPROGRESS_B__0_OFFSET))(this, a1, a2, a3, a4);
	}
};
