#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9793A3EE73969A7D_eFileLoaderPosType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_579;
class Class_0_16E4307DCC419505_581;
class Class_0_16E4307DCC419505_68;
class Class_1_C6B3B57B6E91674E;
namespace RPG::Client { template <typename T> class AsyncActionProgress_1; }
namespace System { template <typename T1, typename T2> class Tuple_2; }

#define CLASS_1_C6B3B57B6E91674E___C__DISPLAYCLASS12_0__ADDLOCALVERIFY_B__0_OFFSET UNITYSDK_OFFSET(0x134EEC60)
#define CLASS_1_C6B3B57B6E91674E___C__DISPLAYCLASS12_0__ADDLOCALVERIFY_B__1_OFFSET UNITYSDK_OFFSET(0x134EEBF0)
#define CLASS_1_C6B3B57B6E91674E___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x134EA4C0)

inline static constexpr unsigned int Class_1_C6B3B57B6E91674E___c__DisplayClass12_0_TypeDefinitionIndex = 55685;

class Class_1_C6B3B57B6E91674E___c__DisplayClass12_0 : public ::System::Object
{
public:
	::Class_1_C6B3B57B6E91674E* __4__this; // 0x10
	::RPG::Client::AsyncActionProgress_1<::System::Tuple_2<::Class_0_16E4307DCC419505_68*, ::Class_1_9793A3EE73969A7D_eFileLoaderPosType>*>* progress; // 0x18
	::System::Boolean isThrow; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C6B3B57B6E91674E___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
	}

	::System::Void _AddLocalVerify_b__1(::Class_0_16E4307DCC419505_579* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_579*))((::PBYTE)hIl2Cpp + CLASS_1_C6B3B57B6E91674E___C__DISPLAYCLASS12_0__ADDLOCALVERIFY_B__1_OFFSET))(this, a1);
	}

	::System::Void _AddLocalVerify_b__0(::Class_0_16E4307DCC419505_581* a1, ::System::Tuple_2<::Class_0_16E4307DCC419505_68*, ::Class_1_9793A3EE73969A7D_eFileLoaderPosType>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_581*, ::System::Tuple_2<::Class_0_16E4307DCC419505_68*, ::Class_1_9793A3EE73969A7D_eFileLoaderPosType>*))((::PBYTE)hIl2Cpp + CLASS_1_C6B3B57B6E91674E___C__DISPLAYCLASS12_0__ADDLOCALVERIFY_B__0_OFFSET))(this, a1, a2);
	}
};
