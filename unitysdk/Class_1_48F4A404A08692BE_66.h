#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_72.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_13;

#define CLASS_1_48F4A404A08692BE_66_METHOD_1_51652EAB9A014635_OFFSET UNITYSDK_OFFSET(0x15F58540)
#define CLASS_1_48F4A404A08692BE_66_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x15F58530)
#define CLASS_1_48F4A404A08692BE_66_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x15F58690)
#define CLASS_1_48F4A404A08692BE_66_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x15F58520)
#define CLASS_1_48F4A404A08692BE_66__CTOR_OFFSET UNITYSDK_OFFSET(0x15F58510)

inline static constexpr unsigned int Class_1_48F4A404A08692BE_66_TypeDefinitionIndex = 11269;

class Class_1_48F4A404A08692BE_66 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_13* Field_1_1; // 0x10
	::Struct_2_3E75877A2888D88A_72 Field_1_0; // 0x18
	::System::Int32 Field_1_5; // 0x28
	::System::Byte Field_1_3; // 0x2C
	::System::Byte Field_1_4; // 0x2D
	::System::Boolean Field_1_2; // 0x2E

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_72 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_72, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_1_48F4A404A08692BE_66__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48F4A404A08692BE_66_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_48F4A404A08692BE_66_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_51652EAB9A014635()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48F4A404A08692BE_66_METHOD_1_51652EAB9A014635_OFFSET))(this);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48F4A404A08692BE_66_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}
};
