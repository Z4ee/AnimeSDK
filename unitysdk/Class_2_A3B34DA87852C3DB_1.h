#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_023C175BBB7E6D29.h"

class Class_1_E38D48D6A33D0614;

#define CLASS_2_A3B34DA87852C3DB_1_METHOD_2_57D6489AC60AE928_OFFSET UNITYSDK_OFFSET(0x1C1876F0)
#define CLASS_2_A3B34DA87852C3DB_1_TICK_OFFSET UNITYSDK_OFFSET(0x1C1878B0)
#define CLASS_2_A3B34DA87852C3DB_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1876E0)

inline static constexpr unsigned int Class_2_A3B34DA87852C3DB_1_TypeDefinitionIndex = 36657;

class Class_2_A3B34DA87852C3DB_1 : public ::Class_1_023C175BBB7E6D29
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3B34DA87852C3DB_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_57D6489AC60AE928(::Class_1_E38D48D6A33D0614* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E38D48D6A33D0614*))((::PBYTE)hIl2Cpp + CLASS_2_A3B34DA87852C3DB_1_METHOD_2_57D6489AC60AE928_OFFSET))(this, a1);
	}

	::System::Void Tick(::Class_1_E38D48D6A33D0614* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E38D48D6A33D0614*))((::PBYTE)hIl2Cpp + CLASS_2_A3B34DA87852C3DB_1_TICK_OFFSET))(this, a1);
	}
};
