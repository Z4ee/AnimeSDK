#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9793A3EE73969A7D_eFileLoaderPosType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_557;
class Class_0_16E4307DCC419505_559;
class Class_0_16E4307DCC419505_69;
class Class_1_8C3AC9786B6764EF;
namespace RPG::Client { template <typename T> class AsyncActionProgress_1; }
namespace System { template <typename T1, typename T2> class Tuple_2; }

#define CLASS_1_8C3AC9786B6764EF___C__DISPLAYCLASS12_0__ADDLOCALVERIFY_B__0_OFFSET UNITYSDK_OFFSET(0x97FFC80)
#define CLASS_1_8C3AC9786B6764EF___C__DISPLAYCLASS12_0__ADDLOCALVERIFY_B__1_OFFSET UNITYSDK_OFFSET(0x97FFBE0)
#define CLASS_1_8C3AC9786B6764EF___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x97FB650)

inline static constexpr unsigned int Class_1_8C3AC9786B6764EF___c__DisplayClass12_0_TypeDefinitionIndex = 54951;

class Class_1_8C3AC9786B6764EF___c__DisplayClass12_0 : public ::System::Object
{
public:
	::Class_1_8C3AC9786B6764EF* __4__this; // 0x10
	::RPG::Client::AsyncActionProgress_1<::System::Tuple_2<::Class_0_16E4307DCC419505_69*, ::Class_1_9793A3EE73969A7D_eFileLoaderPosType>*>* progress; // 0x18
	::System::Boolean isThrow; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8C3AC9786B6764EF___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
	}

	::System::Void _AddLocalVerify_b__1(::Class_0_16E4307DCC419505_557* prog)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_557*))((::PBYTE)hIl2Cpp + CLASS_1_8C3AC9786B6764EF___C__DISPLAYCLASS12_0__ADDLOCALVERIFY_B__1_OFFSET))(this, prog);
	}

	::System::Void _AddLocalVerify_b__0(::Class_0_16E4307DCC419505_559* data, ::System::Tuple_2<::Class_0_16E4307DCC419505_69*, ::Class_1_9793A3EE73969A7D_eFileLoaderPosType>* arg)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_559*, ::System::Tuple_2<::Class_0_16E4307DCC419505_69*, ::Class_1_9793A3EE73969A7D_eFileLoaderPosType>*))((::PBYTE)hIl2Cpp + CLASS_1_8C3AC9786B6764EF___C__DISPLAYCLASS12_0__ADDLOCALVERIFY_B__0_OFFSET))(this, data, arg);
	}
};
