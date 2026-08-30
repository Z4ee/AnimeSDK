#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_374;
class Class_1_6BCEA20C85FCAC30_Class_1_B41C600EEFF43908;
namespace RPG { template <typename T> class PoolList_1; }

#define CLASS_1_6BCEA20C85FCAC30_CLASS_1_B41C600EEFF43908___C__DISPLAYCLASS21_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1566E080)
#define CLASS_1_6BCEA20C85FCAC30_CLASS_1_B41C600EEFF43908___C__DISPLAYCLASS21_0__RUNASYNCALL1_B__0_OFFSET UNITYSDK_OFFSET(0x156701F0)

inline static constexpr unsigned int Class_1_6BCEA20C85FCAC30_Class_1_B41C600EEFF43908___c__DisplayClass21_0_TypeDefinitionIndex = 49651;

class Class_1_6BCEA20C85FCAC30_Class_1_B41C600EEFF43908___c__DisplayClass21_0 : public ::System::Object
{
public:
	::Class_1_6BCEA20C85FCAC30_Class_1_B41C600EEFF43908* __4__this; // 0x10
	::RPG::PoolList_1<::Class_0_16E4307DCC419505_374*>* handles; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BCEA20C85FCAC30_CLASS_1_B41C600EEFF43908___C__DISPLAYCLASS21_0__CTOR_OFFSET))(this);
	}

	::System::Void _RunAsyncAll1_b__0(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6BCEA20C85FCAC30_CLASS_1_B41C600EEFF43908___C__DISPLAYCLASS21_0__RUNASYNCALL1_B__0_OFFSET))(this, a1);
	}
};
