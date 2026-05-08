#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_788.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_13;
namespace System { class String; }

#define CLASS_1_EBCA2A4357C4C8BF_199_METHOD_1_51652EAB9A014635_OFFSET UNITYSDK_OFFSET(0x11CDFE80)
#define CLASS_1_EBCA2A4357C4C8BF_199_METHOD_1_5BF0E61BD5CA40A5_OFFSET UNITYSDK_OFFSET(0x11CE00C0)
#define CLASS_1_EBCA2A4357C4C8BF_199_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x11CDFE70)
#define CLASS_1_EBCA2A4357C4C8BF_199_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x11CDFFD0)
#define CLASS_1_EBCA2A4357C4C8BF_199_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x11CE01D0)
#define CLASS_1_EBCA2A4357C4C8BF_199__CTOR_OFFSET UNITYSDK_OFFSET(0x11CDFE60)

inline static constexpr unsigned int Class_1_EBCA2A4357C4C8BF_199_TypeDefinitionIndex = 13301;

class Class_1_EBCA2A4357C4C8BF_199 : public ::System::Object
{
public:
	::Struct_2_3E75877A2888D88A_788 Field_1_0; // 0x10
	::System::String* Field_1_6; // 0x20
	::Class_0_16E4307DCC419505_13* Field_1_1; // 0x28
	::System::Int32 Field_1_5; // 0x30
	::System::Boolean Field_1_2; // 0x34
	::System::Byte Field_1_4; // 0x35
	::System::Byte Field_1_3; // 0x36

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_788 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_788, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_1_EBCA2A4357C4C8BF_199__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EBCA2A4357C4C8BF_199_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_51652EAB9A014635()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBCA2A4357C4C8BF_199_METHOD_1_51652EAB9A014635_OFFSET))(this);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBCA2A4357C4C8BF_199_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::String* Method_1_5BF0E61BD5CA40A5()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBCA2A4357C4C8BF_199_METHOD_1_5BF0E61BD5CA40A5_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBCA2A4357C4C8BF_199_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
