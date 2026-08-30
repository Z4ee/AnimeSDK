#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_650;
class Class_0_16E4307DCC419505_652;
class Class_0_16E4307DCC419505_87;
class Class_1_8CA784D26D9A6CF7;
namespace RPG::Client { template <typename T> class DataActionProgress_1; }

#define CLASS_1_8CA784D26D9A6CF7___C__DISPLAYCLASS10_0__ADDPREVERIFY_B__0_OFFSET UNITYSDK_OFFSET(0x15243040)
#define CLASS_1_8CA784D26D9A6CF7___C__DISPLAYCLASS10_0__ADDPREVERIFY_B__1_OFFSET UNITYSDK_OFFSET(0x15242FD0)
#define CLASS_1_8CA784D26D9A6CF7___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1523D4C0)

inline static constexpr unsigned int Class_1_8CA784D26D9A6CF7___c__DisplayClass10_0_TypeDefinitionIndex = 59709;

class Class_1_8CA784D26D9A6CF7___c__DisplayClass10_0 : public ::System::Object
{
public:
	::RPG::Client::DataActionProgress_1<::Class_0_16E4307DCC419505_87*>* progress; // 0x10
	::Class_1_8CA784D26D9A6CF7* __4__this; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8CA784D26D9A6CF7___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
	}

	::System::Void _AddPreVerify_b__1(::Class_0_16E4307DCC419505_650* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_650*))((::PBYTE)hIl2Cpp + CLASS_1_8CA784D26D9A6CF7___C__DISPLAYCLASS10_0__ADDPREVERIFY_B__1_OFFSET))(this, a1);
	}

	::System::Void _AddPreVerify_b__0(::Class_0_16E4307DCC419505_652* a1, ::Class_0_16E4307DCC419505_87* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_652*, ::Class_0_16E4307DCC419505_87*))((::PBYTE)hIl2Cpp + CLASS_1_8CA784D26D9A6CF7___C__DISPLAYCLASS10_0__ADDPREVERIFY_B__0_OFFSET))(this, a1, a2);
	}
};
