#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_935.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_7;

#define CLASS_1_48F4A404A08692BE_200_METHOD_1_51652EAB9A014635_OFFSET UNITYSDK_OFFSET(0x1735AEC0)
#define CLASS_1_48F4A404A08692BE_200_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1735B010)
#define CLASS_1_48F4A404A08692BE_200_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x1735ADD0)
#define CLASS_1_48F4A404A08692BE_200_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1735B000)
#define CLASS_1_48F4A404A08692BE_200__CTOR_OFFSET UNITYSDK_OFFSET(0x1735ADC0)

inline static constexpr unsigned int Class_1_48F4A404A08692BE_200_TypeDefinitionIndex = 15519;

class Class_1_48F4A404A08692BE_200 : public ::System::Object
{
public:
	::Struct_2_3E75877A2888D88A_935 Field_1_1; // 0x10
	::Class_0_16E4307DCC419505_7* Field_1_0; // 0x20
	::System::Int32 Field_1_4; // 0x28
	::System::Byte Field_1_6; // 0x2C
	::System::Boolean Field_1_7; // 0x2D
	::System::Byte Field_1_5; // 0x2E

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_935 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_935, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_1_48F4A404A08692BE_200__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48F4A404A08692BE_200_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Int32 Method_1_51652EAB9A014635()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48F4A404A08692BE_200_METHOD_1_51652EAB9A014635_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48F4A404A08692BE_200_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_48F4A404A08692BE_200_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}
};
