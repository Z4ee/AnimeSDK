#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9793A3EE73969A7D_eFileLoaderPosType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_478;
class Class_0_16E4307DCC419505_480;
class Class_0_16E4307DCC419505_69;
class Class_1_B6A8A062463EFFDD;
namespace RPG::Client { template <typename T> class AsyncActionProgress_1; }
namespace System { template <typename T1, typename T2> class Tuple_2; }

#define CLASS_1_B6A8A062463EFFDD___C__DISPLAYCLASS12_0__ADDLOCALVERIFY_B__0_OFFSET UNITYSDK_OFFSET(0x10C438A0)
#define CLASS_1_B6A8A062463EFFDD___C__DISPLAYCLASS12_0__ADDLOCALVERIFY_B__1_OFFSET UNITYSDK_OFFSET(0x10C43810)
#define CLASS_1_B6A8A062463EFFDD___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x10C3F330)

inline static constexpr unsigned int Class_1_B6A8A062463EFFDD___c__DisplayClass12_0_TypeDefinitionIndex = 48206;

class Class_1_B6A8A062463EFFDD___c__DisplayClass12_0 : public ::System::Object
{
public:
	::RPG::Client::AsyncActionProgress_1<::System::Tuple_2<::Class_0_16E4307DCC419505_69*, ::Class_1_9793A3EE73969A7D_eFileLoaderPosType>*>* progress; // 0x10
	::Class_1_B6A8A062463EFFDD* __4__this; // 0x18
	::System::Boolean isThrow; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6A8A062463EFFDD___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
	}

	::System::Void _AddLocalVerify_b__1(::Class_0_16E4307DCC419505_478* prog)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_478*))((::PBYTE)hIl2Cpp + CLASS_1_B6A8A062463EFFDD___C__DISPLAYCLASS12_0__ADDLOCALVERIFY_B__1_OFFSET))(this, prog);
	}

	::System::Void _AddLocalVerify_b__0(::Class_0_16E4307DCC419505_480* data, ::System::Tuple_2<::Class_0_16E4307DCC419505_69*, ::Class_1_9793A3EE73969A7D_eFileLoaderPosType>* arg)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_480*, ::System::Tuple_2<::Class_0_16E4307DCC419505_69*, ::Class_1_9793A3EE73969A7D_eFileLoaderPosType>*))((::PBYTE)hIl2Cpp + CLASS_1_B6A8A062463EFFDD___C__DISPLAYCLASS12_0__ADDLOCALVERIFY_B__0_OFFSET))(this, data, arg);
	}
};
