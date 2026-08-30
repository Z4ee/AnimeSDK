#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_023C175BBB7E6D29.h"

class Class_1_E38D48D6A33D0614;

#define CLASS_2_8CB2236D4E227244_METHOD_2_369BB5E7FA6A1768_OFFSET UNITYSDK_OFFSET(0x1C27E3B0)
#define CLASS_2_8CB2236D4E227244_TICK_OFFSET UNITYSDK_OFFSET(0x1C27E550)
#define CLASS_2_8CB2236D4E227244__CTOR_OFFSET UNITYSDK_OFFSET(0x1C27E3A0)

inline static constexpr unsigned int Class_2_8CB2236D4E227244_TypeDefinitionIndex = 36655;

class Class_2_8CB2236D4E227244 : public ::Class_1_023C175BBB7E6D29
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8CB2236D4E227244__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_369BB5E7FA6A1768(::Class_1_E38D48D6A33D0614* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E38D48D6A33D0614*))((::PBYTE)hIl2Cpp + CLASS_2_8CB2236D4E227244_METHOD_2_369BB5E7FA6A1768_OFFSET))(this, a1);
	}

	::System::Void Tick(::Class_1_E38D48D6A33D0614* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E38D48D6A33D0614*))((::PBYTE)hIl2Cpp + CLASS_2_8CB2236D4E227244_TICK_OFFSET))(this, a1);
	}
};
