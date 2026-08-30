#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_374;
class Class_1_6BCEA20C85FCAC30_Class_1_B41C600EEFF43908;
namespace RPG { template <typename T> class PoolList_1; }

#define CLASS_1_6BCEA20C85FCAC30_CLASS_1_B41C600EEFF43908___C__DISPLAYCLASS22_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18FAB9D0)
#define CLASS_1_6BCEA20C85FCAC30_CLASS_1_B41C600EEFF43908___C__DISPLAYCLASS22_0__RUNASYNCALL2_B__0_OFFSET UNITYSDK_OFFSET(0x18FADBC0)

inline static constexpr unsigned int Class_1_6BCEA20C85FCAC30_Class_1_B41C600EEFF43908___c__DisplayClass22_0_TypeDefinitionIndex = 49652;

class Class_1_6BCEA20C85FCAC30_Class_1_B41C600EEFF43908___c__DisplayClass22_0 : public ::System::Object
{
public:
	::Class_1_6BCEA20C85FCAC30_Class_1_B41C600EEFF43908* __4__this; // 0x10
	::RPG::PoolList_1<::Class_0_16E4307DCC419505_374*>* handles; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BCEA20C85FCAC30_CLASS_1_B41C600EEFF43908___C__DISPLAYCLASS22_0__CTOR_OFFSET))(this);
	}

	::System::Void _RunAsyncAll2_b__0(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6BCEA20C85FCAC30_CLASS_1_B41C600EEFF43908___C__DISPLAYCLASS22_0__RUNASYNCALL2_B__0_OFFSET))(this, a1);
	}
};
