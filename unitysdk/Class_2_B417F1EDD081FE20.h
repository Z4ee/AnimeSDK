#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_023C175BBB7E6D29.h"

class Class_1_E38D48D6A33D0614;

#define CLASS_2_B417F1EDD081FE20_METHOD_2_D24EF79E293914CD_OFFSET UNITYSDK_OFFSET(0x15456E80)
#define CLASS_2_B417F1EDD081FE20_TICK_OFFSET UNITYSDK_OFFSET(0x154571F0)
#define CLASS_2_B417F1EDD081FE20__CTOR_OFFSET UNITYSDK_OFFSET(0x15456E70)

inline static constexpr unsigned int Class_2_B417F1EDD081FE20_TypeDefinitionIndex = 36662;

class Class_2_B417F1EDD081FE20 : public ::Class_1_023C175BBB7E6D29
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B417F1EDD081FE20__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_D24EF79E293914CD(::Class_1_E38D48D6A33D0614* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E38D48D6A33D0614*))((::PBYTE)hIl2Cpp + CLASS_2_B417F1EDD081FE20_METHOD_2_D24EF79E293914CD_OFFSET))(this, a1);
	}

	::System::Void Tick(::Class_1_E38D48D6A33D0614* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E38D48D6A33D0614*))((::PBYTE)hIl2Cpp + CLASS_2_B417F1EDD081FE20_TICK_OFFSET))(this, a1);
	}
};
