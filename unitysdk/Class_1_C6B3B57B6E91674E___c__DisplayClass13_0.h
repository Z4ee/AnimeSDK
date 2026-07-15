#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_614;
class Class_0_16E4307DCC419505_616;
class Class_1_21DCD4640D389503_44;
class Class_1_C6B3B57B6E91674E;
namespace RPG::Client { template <typename T> class DataActionProgress_1; }

#define CLASS_1_C6B3B57B6E91674E___C__DISPLAYCLASS13_0__ADDBLOCKHPATCH_B__0_OFFSET UNITYSDK_OFFSET(0x16768750)
#define CLASS_1_C6B3B57B6E91674E___C__DISPLAYCLASS13_0__ADDBLOCKHPATCH_B__1_OFFSET UNITYSDK_OFFSET(0x16768690)
#define CLASS_1_C6B3B57B6E91674E___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16763670)

inline static constexpr unsigned int Class_1_C6B3B57B6E91674E___c__DisplayClass13_0_TypeDefinitionIndex = 56923;

class Class_1_C6B3B57B6E91674E___c__DisplayClass13_0 : public ::System::Object
{
public:
	::RPG::Client::DataActionProgress_1<::Class_1_21DCD4640D389503_44*>* progress; // 0x10
	::Class_1_C6B3B57B6E91674E* __4__this; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C6B3B57B6E91674E___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
	}

	::System::Void _AddBlockHPatch_b__1(::Class_0_16E4307DCC419505_614* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_614*))((::PBYTE)hIl2Cpp + CLASS_1_C6B3B57B6E91674E___C__DISPLAYCLASS13_0__ADDBLOCKHPATCH_B__1_OFFSET))(this, a1);
	}

	::System::Void _AddBlockHPatch_b__0(::Class_0_16E4307DCC419505_616* a1, ::Class_1_21DCD4640D389503_44* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_616*, ::Class_1_21DCD4640D389503_44*))((::PBYTE)hIl2Cpp + CLASS_1_C6B3B57B6E91674E___C__DISPLAYCLASS13_0__ADDBLOCKHPATCH_B__0_OFFSET))(this, a1, a2);
	}
};
