#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_384.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_13;
namespace System { class String; }

#define CLASS_1_EBCA2A4357C4C8BF_63_METHOD_1_5BF0E61BD5CA40A5_1_OFFSET UNITYSDK_OFFSET(0x19059950)
#define CLASS_1_EBCA2A4357C4C8BF_63_METHOD_1_5BF0E61BD5CA40A5_OFFSET UNITYSDK_OFFSET(0x19059750)
#define CLASS_1_EBCA2A4357C4C8BF_63_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x19059740)
#define CLASS_1_EBCA2A4357C4C8BF_63_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x19059860)
#define CLASS_1_EBCA2A4357C4C8BF_63_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x19059A60)
#define CLASS_1_EBCA2A4357C4C8BF_63__CTOR_OFFSET UNITYSDK_OFFSET(0x19059730)

inline static constexpr unsigned int Class_1_EBCA2A4357C4C8BF_63_TypeDefinitionIndex = 13236;

class Class_1_EBCA2A4357C4C8BF_63 : public ::System::Object
{
public:
	::System::String* Field_1_7; // 0x10
	::Struct_2_3E75877A2888D88A_384 Field_1_0; // 0x18
	::System::String* Field_1_8; // 0x28
	::System::String* Field_1_6; // 0x30
	::Class_0_16E4307DCC419505_13* Field_1_1; // 0x38
	::System::Byte Field_1_4; // 0x40
	::System::Boolean Field_1_2; // 0x41
	::System::Byte Field_1_3; // 0x42
	::System::Int32 Field_1_5; // 0x44

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_384 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_384, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_1_EBCA2A4357C4C8BF_63__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EBCA2A4357C4C8BF_63_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::String* Method_1_5BF0E61BD5CA40A5()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBCA2A4357C4C8BF_63_METHOD_1_5BF0E61BD5CA40A5_OFFSET))(this);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBCA2A4357C4C8BF_63_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::String* Method_1_5BF0E61BD5CA40A5_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBCA2A4357C4C8BF_63_METHOD_1_5BF0E61BD5CA40A5_1_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBCA2A4357C4C8BF_63_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
