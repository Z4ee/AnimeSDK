#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_023C175BBB7E6D29.h"

class Class_1_E38D48D6A33D0614;

#define CLASS_2_9F87D8A7D516DB37_METHOD_2_256303B15A3BB162_OFFSET UNITYSDK_OFFSET(0x1C24C000)
#define CLASS_2_9F87D8A7D516DB37_TICK_OFFSET UNITYSDK_OFFSET(0x1C24C140)
#define CLASS_2_9F87D8A7D516DB37__CTOR_OFFSET UNITYSDK_OFFSET(0x1C24BFF0)

inline static constexpr unsigned int Class_2_9F87D8A7D516DB37_TypeDefinitionIndex = 36669;

class Class_2_9F87D8A7D516DB37 : public ::Class_1_023C175BBB7E6D29
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9F87D8A7D516DB37__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_256303B15A3BB162(::Class_1_E38D48D6A33D0614* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E38D48D6A33D0614*))((::PBYTE)hIl2Cpp + CLASS_2_9F87D8A7D516DB37_METHOD_2_256303B15A3BB162_OFFSET))(this, a1);
	}

	::System::Void Tick(::Class_1_E38D48D6A33D0614* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E38D48D6A33D0614*))((::PBYTE)hIl2Cpp + CLASS_2_9F87D8A7D516DB37_TICK_OFFSET))(this, a1);
	}
};
