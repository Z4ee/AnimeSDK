#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_318;
class Class_1_542524E089786F71_Class_1_B41C600EEFF43908;
namespace RPG { template <typename T> class PoolList_1; }

#define CLASS_1_542524E089786F71_CLASS_1_B41C600EEFF43908___C__DISPLAYCLASS22_0__CTOR_OFFSET UNITYSDK_OFFSET(0x97D6900)
#define CLASS_1_542524E089786F71_CLASS_1_B41C600EEFF43908___C__DISPLAYCLASS22_0__RUNASYNCALL2_B__0_OFFSET UNITYSDK_OFFSET(0x97D8760)

inline static constexpr unsigned int Class_1_542524E089786F71_Class_1_B41C600EEFF43908___c__DisplayClass22_0_TypeDefinitionIndex = 45824;

class Class_1_542524E089786F71_Class_1_B41C600EEFF43908___c__DisplayClass22_0 : public ::System::Object
{
public:
	::RPG::PoolList_1<::Class_0_16E4307DCC419505_318*>* handles; // 0x10
	::Class_1_542524E089786F71_Class_1_B41C600EEFF43908* __4__this; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_542524E089786F71_CLASS_1_B41C600EEFF43908___C__DISPLAYCLASS22_0__CTOR_OFFSET))(this);
	}

	::System::Void _RunAsyncAll2_b__0(::System::Boolean v)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_542524E089786F71_CLASS_1_B41C600EEFF43908___C__DISPLAYCLASS22_0__RUNASYNCALL2_B__0_OFFSET))(this, v);
	}
};
