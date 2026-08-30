#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9793A3EE73969A7D_eFileLoaderPosType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_650;
class Class_0_16E4307DCC419505_652;
class Class_0_16E4307DCC419505_87;
class Class_1_8CA784D26D9A6CF7;
namespace RPG::Client { template <typename T> class AsyncActionProgress_1; }
namespace System { template <typename T1, typename T2> class Tuple_2; }

#define CLASS_1_8CA784D26D9A6CF7___C__DISPLAYCLASS12_0__ADDLOCALVERIFY_B__0_OFFSET UNITYSDK_OFFSET(0x1792EA40)
#define CLASS_1_8CA784D26D9A6CF7___C__DISPLAYCLASS12_0__ADDLOCALVERIFY_B__1_OFFSET UNITYSDK_OFFSET(0x1792E9D0)
#define CLASS_1_8CA784D26D9A6CF7___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17929310)

inline static constexpr unsigned int Class_1_8CA784D26D9A6CF7___c__DisplayClass12_0_TypeDefinitionIndex = 59710;

class Class_1_8CA784D26D9A6CF7___c__DisplayClass12_0 : public ::System::Object
{
public:
	::Class_1_8CA784D26D9A6CF7* __4__this; // 0x10
	::RPG::Client::AsyncActionProgress_1<::System::Tuple_2<::Class_0_16E4307DCC419505_87*, ::Class_1_9793A3EE73969A7D_eFileLoaderPosType>*>* progress; // 0x18
	::System::Boolean isThrow; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8CA784D26D9A6CF7___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
	}

	::System::Void _AddLocalVerify_b__1(::Class_0_16E4307DCC419505_650* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_650*))((::PBYTE)hIl2Cpp + CLASS_1_8CA784D26D9A6CF7___C__DISPLAYCLASS12_0__ADDLOCALVERIFY_B__1_OFFSET))(this, a1);
	}

	::System::Void _AddLocalVerify_b__0(::Class_0_16E4307DCC419505_652* a1, ::System::Tuple_2<::Class_0_16E4307DCC419505_87*, ::Class_1_9793A3EE73969A7D_eFileLoaderPosType>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_652*, ::System::Tuple_2<::Class_0_16E4307DCC419505_87*, ::Class_1_9793A3EE73969A7D_eFileLoaderPosType>*))((::PBYTE)hIl2Cpp + CLASS_1_8CA784D26D9A6CF7___C__DISPLAYCLASS12_0__ADDLOCALVERIFY_B__0_OFFSET))(this, a1, a2);
	}
};
