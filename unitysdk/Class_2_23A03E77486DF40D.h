#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7ACCB923E979A908.h"

#define CLASS_2_23A03E77486DF40D_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xA074A70)
#define CLASS_2_23A03E77486DF40D__CTOR_OFFSET UNITYSDK_OFFSET(0xA074A60)
#define CLASS_2_23A03E77486DF40D___IFIXBASEPROXY_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xA074D20)

inline static constexpr unsigned int Class_2_23A03E77486DF40D_TypeDefinitionIndex = 69416;

class Class_2_23A03E77486DF40D : public ::Class_1_7ACCB923E979A908
{
public:
	::System::UInt32 Field_2_0; // 0x20

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_23A03E77486DF40D__CTOR_OFFSET))(this, a1);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_23A03E77486DF40D_ONEXECUTE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_23A03E77486DF40D___IFIXBASEPROXY_ONEXECUTE_OFFSET))(this);
	}
};
