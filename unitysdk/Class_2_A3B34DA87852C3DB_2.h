#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_023C175BBB7E6D29.h"

class Class_1_E38D48D6A33D0614;

#define CLASS_2_A3B34DA87852C3DB_2_METHOD_2_B75B416E58C743E1_OFFSET UNITYSDK_OFFSET(0x17BA6B70)
#define CLASS_2_A3B34DA87852C3DB_2_TICK_OFFSET UNITYSDK_OFFSET(0x17BA7390)
#define CLASS_2_A3B34DA87852C3DB_2__CTOR_OFFSET UNITYSDK_OFFSET(0x17BA6B60)

inline static constexpr unsigned int Class_2_A3B34DA87852C3DB_2_TypeDefinitionIndex = 35800;

class Class_2_A3B34DA87852C3DB_2 : public ::Class_1_023C175BBB7E6D29
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3B34DA87852C3DB_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B75B416E58C743E1(::Class_1_E38D48D6A33D0614* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E38D48D6A33D0614*))((::PBYTE)hIl2Cpp + CLASS_2_A3B34DA87852C3DB_2_METHOD_2_B75B416E58C743E1_OFFSET))(this, a1);
	}

	::System::Void Tick(::Class_1_E38D48D6A33D0614* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E38D48D6A33D0614*))((::PBYTE)hIl2Cpp + CLASS_2_A3B34DA87852C3DB_2_TICK_OFFSET))(this, a1);
	}
};
