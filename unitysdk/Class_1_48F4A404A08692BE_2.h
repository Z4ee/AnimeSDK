#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_14.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_13;

#define CLASS_1_48F4A404A08692BE_2_METHOD_1_51652EAB9A014635_OFFSET UNITYSDK_OFFSET(0x190DCFD0)
#define CLASS_1_48F4A404A08692BE_2_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x190DD210)
#define CLASS_1_48F4A404A08692BE_2_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x190DD120)
#define CLASS_1_48F4A404A08692BE_2_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x190DCFC0)
#define CLASS_1_48F4A404A08692BE_2__CTOR_OFFSET UNITYSDK_OFFSET(0x190DCFB0)

inline static constexpr unsigned int Class_1_48F4A404A08692BE_2_TypeDefinitionIndex = 9725;

class Class_1_48F4A404A08692BE_2 : public ::System::Object
{
public:
	::Struct_2_3E75877A2888D88A_14 Field_1_0; // 0x10
	::Class_0_16E4307DCC419505_13* Field_1_1; // 0x20
	::System::Byte Field_1_3; // 0x28
	::System::Boolean Field_1_2; // 0x29
	::System::Byte Field_1_4; // 0x2A
	::System::Int32 Field_1_5; // 0x2C

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_14 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_14, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_1_48F4A404A08692BE_2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48F4A404A08692BE_2_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Int32 Method_1_51652EAB9A014635()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48F4A404A08692BE_2_METHOD_1_51652EAB9A014635_OFFSET))(this);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48F4A404A08692BE_2_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_48F4A404A08692BE_2_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}
};
