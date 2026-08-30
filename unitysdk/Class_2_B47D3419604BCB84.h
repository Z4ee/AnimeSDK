#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_023C175BBB7E6D29.h"

class Class_1_E38D48D6A33D0614;

#define CLASS_2_B47D3419604BCB84_METHOD_2_1A0D3B20C2CC55DC_OFFSET UNITYSDK_OFFSET(0x16233A50)
#define CLASS_2_B47D3419604BCB84_TICK_OFFSET UNITYSDK_OFFSET(0x16233B90)
#define CLASS_2_B47D3419604BCB84__CTOR_OFFSET UNITYSDK_OFFSET(0x16233A40)

inline static constexpr unsigned int Class_2_B47D3419604BCB84_TypeDefinitionIndex = 36658;

class Class_2_B47D3419604BCB84 : public ::Class_1_023C175BBB7E6D29
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B47D3419604BCB84__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_1A0D3B20C2CC55DC(::Class_1_E38D48D6A33D0614* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E38D48D6A33D0614*))((::PBYTE)hIl2Cpp + CLASS_2_B47D3419604BCB84_METHOD_2_1A0D3B20C2CC55DC_OFFSET))(this, a1);
	}

	::System::Void Tick(::Class_1_E38D48D6A33D0614* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E38D48D6A33D0614*))((::PBYTE)hIl2Cpp + CLASS_2_B47D3419604BCB84_TICK_OFFSET))(this, a1);
	}
};
