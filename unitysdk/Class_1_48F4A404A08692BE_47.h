#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_332.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_13;

#define CLASS_1_48F4A404A08692BE_47_METHOD_1_51652EAB9A014635_OFFSET UNITYSDK_OFFSET(0x14720910)
#define CLASS_1_48F4A404A08692BE_47_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x14720A60)
#define CLASS_1_48F4A404A08692BE_47_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x14720820)
#define CLASS_1_48F4A404A08692BE_47_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x14720A70)
#define CLASS_1_48F4A404A08692BE_47__CTOR_OFFSET UNITYSDK_OFFSET(0x14720810)

inline static constexpr unsigned int Class_1_48F4A404A08692BE_47_TypeDefinitionIndex = 10613;

class Class_1_48F4A404A08692BE_47 : public ::System::Object
{
public:
	::Struct_2_3E75877A2888D88A_332 Field_1_0; // 0x10
	::Class_0_16E4307DCC419505_13* Field_1_1; // 0x20
	::System::Int32 Field_1_5; // 0x28
	::System::Byte Field_1_3; // 0x2C
	::System::Byte Field_1_4; // 0x2D
	::System::Boolean Field_1_2; // 0x2E

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_332 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_332, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_1_48F4A404A08692BE_47__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48F4A404A08692BE_47_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Int32 Method_1_51652EAB9A014635()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48F4A404A08692BE_47_METHOD_1_51652EAB9A014635_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_48F4A404A08692BE_47_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48F4A404A08692BE_47_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
