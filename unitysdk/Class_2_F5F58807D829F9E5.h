#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_10.h"

class Class_2_099B78418029B3B1_1;
class Class_4_25476C0ECCF1BB17;

#define CLASS_2_F5F58807D829F9E5_METHOD_2_34174C70D4D8D91A_OFFSET UNITYSDK_OFFSET(0x1670D840)
#define CLASS_2_F5F58807D829F9E5_METHOD_2_5AB20B48B8E64C8B_OFFSET UNITYSDK_OFFSET(0x1670DAE0)
#define CLASS_2_F5F58807D829F9E5__CTOR_OFFSET UNITYSDK_OFFSET(0x1670D830)

inline static constexpr unsigned int Class_2_F5F58807D829F9E5_TypeDefinitionIndex = 28565;

class Class_2_F5F58807D829F9E5 : public ::Class_1_43BD383C98B4C0C5_10
{
public:
	::Class_4_25476C0ECCF1BB17* Field_2_0; // 0x10
	::Class_2_099B78418029B3B1_1* Field_2_1; // 0x18

	::System::Void _ctor(::Class_4_25476C0ECCF1BB17* a1, ::Class_2_099B78418029B3B1_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_25476C0ECCF1BB17*, ::Class_2_099B78418029B3B1_1*))((::PBYTE)hIl2Cpp + CLASS_2_F5F58807D829F9E5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_34174C70D4D8D91A(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_F5F58807D829F9E5_METHOD_2_34174C70D4D8D91A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5AB20B48B8E64C8B(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_F5F58807D829F9E5_METHOD_2_5AB20B48B8E64C8B_OFFSET))(this, a1);
	}
};
