#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7ACCB923E979A908.h"

#define CLASS_2_23A03E77486DF40D_1_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x12AEEF60)
#define CLASS_2_23A03E77486DF40D_1__CTOR_OFFSET UNITYSDK_OFFSET(0x12AEEF50)
#define CLASS_2_23A03E77486DF40D_1___IFIXBASEPROXY_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x12AEF180)

inline static constexpr unsigned int Class_2_23A03E77486DF40D_1_TypeDefinitionIndex = 69418;

class Class_2_23A03E77486DF40D_1 : public ::Class_1_7ACCB923E979A908
{
public:
	::System::UInt32 Field_2_0; // 0x20

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_23A03E77486DF40D_1__CTOR_OFFSET))(this, a1);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_23A03E77486DF40D_1_ONEXECUTE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_23A03E77486DF40D_1___IFIXBASEPROXY_ONEXECUTE_OFFSET))(this);
	}
};
