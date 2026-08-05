#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_25290555339097B0.h"
#include "unitysdk/Struct_2_FE9BD044832BC9C3.h"
#include "unitysdk/System/Object.h"

class Class_3_C2BF483F21854F5F;

#define CLASS_3_C2BF483F21854F5F_CLASS_1_E735297E5878C516_1_METHOD_1_25C41A9DAB43155F_OFFSET UNITYSDK_OFFSET(0x147E76F0)
#define CLASS_3_C2BF483F21854F5F_CLASS_1_E735297E5878C516_1__CTOR_OFFSET UNITYSDK_OFFSET(0x147E76E0)

inline static constexpr unsigned int Class_3_C2BF483F21854F5F_Class_1_E735297E5878C516_1_TypeDefinitionIndex = 90833;

class Class_3_C2BF483F21854F5F_Class_1_E735297E5878C516_1 : public ::System::Object
{
public:
	::Struct_2_FE9BD044832BC9C3 Field_1_4; // 0x10
	::Struct_2_FE9BD044832BC9C3 Field_1_5; // 0x40
	::Struct_2_25290555339097B0 Field_1_6; // 0x70
	::Class_3_C2BF483F21854F5F* Field_1_0; // 0x98
	::System::Int32 Field_1_7; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C2BF483F21854F5F_CLASS_1_E735297E5878C516_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_25C41A9DAB43155F(::System::Boolean a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_C2BF483F21854F5F_CLASS_1_E735297E5878C516_1_METHOD_1_25C41A9DAB43155F_OFFSET))(this, a1, a2);
	}
};
