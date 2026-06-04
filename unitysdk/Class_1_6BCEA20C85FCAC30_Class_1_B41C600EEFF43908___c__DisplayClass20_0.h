#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_331;
class Class_1_6BCEA20C85FCAC30_Class_1_B41C600EEFF43908;
namespace RPG { template <typename T> class PoolList_1; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_6BCEA20C85FCAC30_CLASS_1_B41C600EEFF43908___C__DISPLAYCLASS20_0__CTOR_OFFSET UNITYSDK_OFFSET(0x13881230)
#define CLASS_1_6BCEA20C85FCAC30_CLASS_1_B41C600EEFF43908___C__DISPLAYCLASS20_0__RUNASYNCALL_B__0_OFFSET UNITYSDK_OFFSET(0x13882C10)
#define CLASS_1_6BCEA20C85FCAC30_CLASS_1_B41C600EEFF43908___C__DISPLAYCLASS20_0__RUNASYNCALL_B__1_OFFSET UNITYSDK_OFFSET(0x13882CB0)
#define CLASS_1_6BCEA20C85FCAC30_CLASS_1_B41C600EEFF43908___C__DISPLAYCLASS20_0__RUNASYNCALL_B__2_OFFSET UNITYSDK_OFFSET(0x13882E80)
#define CLASS_1_6BCEA20C85FCAC30_CLASS_1_B41C600EEFF43908___C__DISPLAYCLASS20_0__RUNASYNCALL_B__3_OFFSET UNITYSDK_OFFSET(0x13882DF0)
#define CLASS_1_6BCEA20C85FCAC30_CLASS_1_B41C600EEFF43908___C__DISPLAYCLASS20_0__RUNASYNCALL_B__4_OFFSET UNITYSDK_OFFSET(0x13882FC0)

inline static constexpr unsigned int Class_1_6BCEA20C85FCAC30_Class_1_B41C600EEFF43908___c__DisplayClass20_0_TypeDefinitionIndex = 46405;

class Class_1_6BCEA20C85FCAC30_Class_1_B41C600EEFF43908___c__DisplayClass20_0 : public ::System::Object
{
public:
	::RPG::PoolList_1<::Class_0_16E4307DCC419505_331*>* handles; // 0x10
	::Class_0_16E4307DCC419505_331* handle; // 0x18
	::System::Action_1<::System::Boolean>* __9__4; // 0x20
	::Class_1_6BCEA20C85FCAC30_Class_1_B41C600EEFF43908* __4__this; // 0x28
	::System::Action* __9__3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BCEA20C85FCAC30_CLASS_1_B41C600EEFF43908___C__DISPLAYCLASS20_0__CTOR_OFFSET))(this);
	}

	::System::Void _RunAsyncAll_b__0(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6BCEA20C85FCAC30_CLASS_1_B41C600EEFF43908___C__DISPLAYCLASS20_0__RUNASYNCALL_B__0_OFFSET))(this, a1);
	}

	::System::Void _RunAsyncAll_b__1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BCEA20C85FCAC30_CLASS_1_B41C600EEFF43908___C__DISPLAYCLASS20_0__RUNASYNCALL_B__1_OFFSET))(this);
	}

	::System::Void _RunAsyncAll_b__3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BCEA20C85FCAC30_CLASS_1_B41C600EEFF43908___C__DISPLAYCLASS20_0__RUNASYNCALL_B__3_OFFSET))(this);
	}

	::System::Void _RunAsyncAll_b__2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BCEA20C85FCAC30_CLASS_1_B41C600EEFF43908___C__DISPLAYCLASS20_0__RUNASYNCALL_B__2_OFFSET))(this);
	}

	::System::Void _RunAsyncAll_b__4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6BCEA20C85FCAC30_CLASS_1_B41C600EEFF43908___C__DISPLAYCLASS20_0__RUNASYNCALL_B__4_OFFSET))(this, a1);
	}
};
