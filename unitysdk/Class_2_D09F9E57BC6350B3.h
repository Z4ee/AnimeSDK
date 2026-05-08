#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3D46C5D064952E16_2.h"

class Class_2_1B1C05BC0A38A2D5_1;

#define CLASS_2_D09F9E57BC6350B3_METHOD_2_460F8AE6EF9687FD_OFFSET UNITYSDK_OFFSET(0x13C12380)
#define CLASS_2_D09F9E57BC6350B3_METHOD_2_4B16404ED490414F_OFFSET UNITYSDK_OFFSET(0x13C121D0)
#define CLASS_2_D09F9E57BC6350B3__CTOR_OFFSET UNITYSDK_OFFSET(0x13C18200)

inline static constexpr unsigned int Class_2_D09F9E57BC6350B3_TypeDefinitionIndex = 54425;

class Class_2_D09F9E57BC6350B3 : public ::Class_1_3D46C5D064952E16_2
{
public:
	::System::Int32 Field_2_0; // 0x18

	::System::Void _ctor(::Class_2_1B1C05BC0A38A2D5_1* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1B1C05BC0A38A2D5_1*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D09F9E57BC6350B3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4B16404ED490414F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D09F9E57BC6350B3_METHOD_2_4B16404ED490414F_OFFSET))(this);
	}

	::System::Void Method_2_460F8AE6EF9687FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D09F9E57BC6350B3_METHOD_2_460F8AE6EF9687FD_OFFSET))(this);
	}
};
