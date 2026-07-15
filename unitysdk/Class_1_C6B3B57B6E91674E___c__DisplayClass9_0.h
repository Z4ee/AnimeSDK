#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_614;
class Class_0_16E4307DCC419505_616;
class Class_0_16E4307DCC419505_87;
class Class_1_C6B3B57B6E91674E;
namespace RPG::Client { template <typename T> class DataActionProgress_1; }

#define CLASS_1_C6B3B57B6E91674E___C__DISPLAYCLASS9_0__ADDVERIFY_B__0_OFFSET UNITYSDK_OFFSET(0x16768A20)
#define CLASS_1_C6B3B57B6E91674E___C__DISPLAYCLASS9_0__ADDVERIFY_B__1_OFFSET UNITYSDK_OFFSET(0x16768980)
#define CLASS_1_C6B3B57B6E91674E___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16762880)

inline static constexpr unsigned int Class_1_C6B3B57B6E91674E___c__DisplayClass9_0_TypeDefinitionIndex = 56926;

class Class_1_C6B3B57B6E91674E___c__DisplayClass9_0 : public ::System::Object
{
public:
	::RPG::Client::DataActionProgress_1<::Class_0_16E4307DCC419505_87*>* progress; // 0x10
	::Class_1_C6B3B57B6E91674E* __4__this; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C6B3B57B6E91674E___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
	}

	::System::Void _AddVerify_b__1(::Class_0_16E4307DCC419505_614* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_614*))((::PBYTE)hIl2Cpp + CLASS_1_C6B3B57B6E91674E___C__DISPLAYCLASS9_0__ADDVERIFY_B__1_OFFSET))(this, a1);
	}

	::System::Void _AddVerify_b__0(::Class_0_16E4307DCC419505_616* a1, ::Class_0_16E4307DCC419505_87* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_616*, ::Class_0_16E4307DCC419505_87*))((::PBYTE)hIl2Cpp + CLASS_1_C6B3B57B6E91674E___C__DISPLAYCLASS9_0__ADDVERIFY_B__0_OFFSET))(this, a1, a2);
	}
};
