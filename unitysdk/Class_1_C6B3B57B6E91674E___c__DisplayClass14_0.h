#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_579;
class Class_0_16E4307DCC419505_581;
class Class_1_942D03E5A029CB94;
class Class_1_C6B3B57B6E91674E;
namespace RPG::Client { template <typename T> class DataActionProgress_1; }

#define CLASS_1_C6B3B57B6E91674E___C__DISPLAYCLASS14_0__ADDUNPACK_B__0_OFFSET UNITYSDK_OFFSET(0x134EEE10)
#define CLASS_1_C6B3B57B6E91674E___C__DISPLAYCLASS14_0__ADDUNPACK_B__1_OFFSET UNITYSDK_OFFSET(0x134EED70)
#define CLASS_1_C6B3B57B6E91674E___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0x134EAD00)

inline static constexpr unsigned int Class_1_C6B3B57B6E91674E___c__DisplayClass14_0_TypeDefinitionIndex = 55687;

class Class_1_C6B3B57B6E91674E___c__DisplayClass14_0 : public ::System::Object
{
public:
	::Class_1_C6B3B57B6E91674E* __4__this; // 0x10
	::RPG::Client::DataActionProgress_1<::Class_1_942D03E5A029CB94*>* progress; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C6B3B57B6E91674E___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
	}

	::System::Void _AddUnpack_b__1(::Class_0_16E4307DCC419505_579* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_579*))((::PBYTE)hIl2Cpp + CLASS_1_C6B3B57B6E91674E___C__DISPLAYCLASS14_0__ADDUNPACK_B__1_OFFSET))(this, a1);
	}

	::System::Void _AddUnpack_b__0(::Class_0_16E4307DCC419505_581* a1, ::Class_1_942D03E5A029CB94* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_581*, ::Class_1_942D03E5A029CB94*))((::PBYTE)hIl2Cpp + CLASS_1_C6B3B57B6E91674E___C__DISPLAYCLASS14_0__ADDUNPACK_B__0_OFFSET))(this, a1, a2);
	}
};
