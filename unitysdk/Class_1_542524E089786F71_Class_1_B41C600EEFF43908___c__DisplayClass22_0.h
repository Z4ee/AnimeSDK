#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_310;
class Class_1_542524E089786F71_Class_1_B41C600EEFF43908;
namespace RPG { template <typename T> class PoolList_1; }

#define CLASS_1_542524E089786F71_CLASS_1_B41C600EEFF43908___C__DISPLAYCLASS22_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1112D7D0)
#define CLASS_1_542524E089786F71_CLASS_1_B41C600EEFF43908___C__DISPLAYCLASS22_0__RUNASYNCALL2_B__0_OFFSET UNITYSDK_OFFSET(0x1112F630)

inline static constexpr unsigned int Class_1_542524E089786F71_Class_1_B41C600EEFF43908___c__DisplayClass22_0_TypeDefinitionIndex = 39915;

class Class_1_542524E089786F71_Class_1_B41C600EEFF43908___c__DisplayClass22_0 : public ::System::Object
{
public:
	::Class_1_542524E089786F71_Class_1_B41C600EEFF43908* __4__this; // 0x10
	::RPG::PoolList_1<::Class_0_16E4307DCC419505_310*>* handles; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_542524E089786F71_CLASS_1_B41C600EEFF43908___C__DISPLAYCLASS22_0__CTOR_OFFSET))(this);
	}

	::System::Void _RunAsyncAll2_b__0(::System::Boolean v)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_542524E089786F71_CLASS_1_B41C600EEFF43908___C__DISPLAYCLASS22_0__RUNASYNCALL2_B__0_OFFSET))(this, v);
	}
};
