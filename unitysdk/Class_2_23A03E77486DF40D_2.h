#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3713064DEE761936.h"

#define CLASS_2_23A03E77486DF40D_2_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x15475A10)
#define CLASS_2_23A03E77486DF40D_2__CTOR_OFFSET UNITYSDK_OFFSET(0x15475A00)

inline static constexpr unsigned int Class_2_23A03E77486DF40D_2_TypeDefinitionIndex = 75060;

class Class_2_23A03E77486DF40D_2 : public ::Class_1_3713064DEE761936
{
public:
	::System::UInt32 DNAPDJADAJN; // 0x20

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_23A03E77486DF40D_2__CTOR_OFFSET))(this, a1);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_23A03E77486DF40D_2_ONEXECUTE_OFFSET))(this);
	}
};
