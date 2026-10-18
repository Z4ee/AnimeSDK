#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3713064DEE761936.h"

#define CLASS_2_23A03E77486DF40D_6_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x15727F80)
#define CLASS_2_23A03E77486DF40D_6__CTOR_OFFSET UNITYSDK_OFFSET(0x15727F70)

inline static constexpr unsigned int Class_2_23A03E77486DF40D_6_TypeDefinitionIndex = 75359;

class Class_2_23A03E77486DF40D_6 : public ::Class_1_3713064DEE761936
{
public:
	::System::UInt32 DNAPDJADAJN; // 0x20

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_23A03E77486DF40D_6__CTOR_OFFSET))(this, a1);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_23A03E77486DF40D_6_ONEXECUTE_OFFSET))(this);
	}
};
