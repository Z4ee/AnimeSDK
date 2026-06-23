#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_25290555339097B0.h"
#include "unitysdk/Struct_2_FE9BD044832BC9C3.h"
#include "unitysdk/System/Object.h"

class Class_3_E21759A7CF728BC5;

#define CLASS_3_E21759A7CF728BC5_CLASS_1_E735297E5878C516_1_METHOD_1_25C41A9DAB43155F_OFFSET UNITYSDK_OFFSET(0x1672B550)
#define CLASS_3_E21759A7CF728BC5_CLASS_1_E735297E5878C516_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1672B540)

inline static constexpr unsigned int Class_3_E21759A7CF728BC5_Class_1_E735297E5878C516_1_TypeDefinitionIndex = 80901;

class Class_3_E21759A7CF728BC5_Class_1_E735297E5878C516_1 : public ::System::Object
{
public:
	::Struct_2_FE9BD044832BC9C3 Field_1_2; // 0x10
	::Struct_2_FE9BD044832BC9C3 Field_1_3; // 0x40
	::Class_3_E21759A7CF728BC5* Field_1_4; // 0x70
	::Struct_2_25290555339097B0 Field_1_1; // 0x78
	::System::Int32 Field_1_0; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E21759A7CF728BC5_CLASS_1_E735297E5878C516_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_25C41A9DAB43155F(::System::Boolean a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E21759A7CF728BC5_CLASS_1_E735297E5878C516_1_METHOD_1_25C41A9DAB43155F_OFFSET))(this, a1, a2);
	}
};
