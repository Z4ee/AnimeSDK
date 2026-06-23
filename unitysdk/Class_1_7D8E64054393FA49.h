#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_641.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_7;

#define CLASS_1_7D8E64054393FA49_METHOD_1_507A5122CD01412B_OFFSET UNITYSDK_OFFSET(0x1A4ACB10)
#define CLASS_1_7D8E64054393FA49_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1A4ACA00)
#define CLASS_1_7D8E64054393FA49_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x1A4ACA10)
#define CLASS_1_7D8E64054393FA49_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1A4ACB00)
#define CLASS_1_7D8E64054393FA49__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4AC9F0)

inline static constexpr unsigned int Class_1_7D8E64054393FA49_TypeDefinitionIndex = 11136;

class Class_1_7D8E64054393FA49 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_7* Field_1_1; // 0x10
	::Struct_2_3E75877A2888D88A_641 Field_1_0; // 0x18
	::System::Byte Field_1_4; // 0x28
	::System::Boolean Field_1_2; // 0x29
	::System::Byte Field_1_3; // 0x2A
	::System::Boolean Field_1_5; // 0x2B

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_641 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_641, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_1_7D8E64054393FA49__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7D8E64054393FA49_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D8E64054393FA49_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D8E64054393FA49_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_1_507A5122CD01412B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D8E64054393FA49_METHOD_1_507A5122CD01412B_OFFSET))(this);
	}
};
