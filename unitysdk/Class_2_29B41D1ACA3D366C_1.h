#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C5CEA8DD589BD643.h"
#include "unitysdk/Struct_2_E614D3B245F96744_1.h"

#define CLASS_2_29B41D1ACA3D366C_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9A4D00)

inline static constexpr unsigned int Class_2_29B41D1ACA3D366C_1_TypeDefinitionIndex = 88842;

class Class_2_29B41D1ACA3D366C_1 : public ::Class_1_C5CEA8DD589BD643
{
public:
	::Struct_2_E614D3B245F96744_1 Field_2_1; // 0x20
	::System::UInt32 Field_2_0; // 0x28
	::System::Int32 Field_2_2; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_29B41D1ACA3D366C_1__CTOR_OFFSET))(this);
	}
};
