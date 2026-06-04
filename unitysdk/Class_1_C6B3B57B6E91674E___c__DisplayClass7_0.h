#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ExeCode.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_579;
class Class_0_16E4307DCC419505_581;
class Class_1_C6B3B57B6E91674E;

#define CLASS_1_C6B3B57B6E91674E___C__DISPLAYCLASS7_0__ADDMULTIDOWNLOAD_B__0_OFFSET UNITYSDK_OFFSET(0x134EEE20)
#define CLASS_1_C6B3B57B6E91674E___C__DISPLAYCLASS7_0__ADDMULTIDOWNLOAD_B__1_OFFSET UNITYSDK_OFFSET(0x134EEEF0)
#define CLASS_1_C6B3B57B6E91674E___C__DISPLAYCLASS7_0__ADDMULTIDOWNLOAD_B__2_OFFSET UNITYSDK_OFFSET(0x134EEF60)
#define CLASS_1_C6B3B57B6E91674E___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x134E9670)

inline static constexpr unsigned int Class_1_C6B3B57B6E91674E___c__DisplayClass7_0_TypeDefinitionIndex = 55688;

class Class_1_C6B3B57B6E91674E___c__DisplayClass7_0 : public ::System::Object
{
public:
	::Class_1_C6B3B57B6E91674E* __4__this; // 0x10
	::System::Int64 timeStart; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C6B3B57B6E91674E___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
	}

	::System::Void _AddMultiDownload_b__0(::Class_0_16E4307DCC419505_579* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_579*))((::PBYTE)hIl2Cpp + CLASS_1_C6B3B57B6E91674E___C__DISPLAYCLASS7_0__ADDMULTIDOWNLOAD_B__0_OFFSET))(this, a1);
	}

	::System::Void _AddMultiDownload_b__1(::Class_0_16E4307DCC419505_579* a1, ::Class_0_16E4307DCC419505_581* a2, ::System::Object* a3, ::RPG::Client::ExeCode a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_579*, ::Class_0_16E4307DCC419505_581*, ::System::Object*, ::RPG::Client::ExeCode))((::PBYTE)hIl2Cpp + CLASS_1_C6B3B57B6E91674E___C__DISPLAYCLASS7_0__ADDMULTIDOWNLOAD_B__1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void _AddMultiDownload_b__2(::Class_0_16E4307DCC419505_579* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_579*))((::PBYTE)hIl2Cpp + CLASS_1_C6B3B57B6E91674E___C__DISPLAYCLASS7_0__ADDMULTIDOWNLOAD_B__2_OFFSET))(this, a1);
	}
};
