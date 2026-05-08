#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_0190A9212AD9E688_4.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_13;
namespace System { class String; }

#define CLASS_1_EBCA2A4357C4C8BF_68_METHOD_1_51652EAB9A014635_OFFSET UNITYSDK_OFFSET(0x13AB8B30)
#define CLASS_1_EBCA2A4357C4C8BF_68_METHOD_1_5BF0E61BD5CA40A5_OFFSET UNITYSDK_OFFSET(0x13AB8910)
#define CLASS_1_EBCA2A4357C4C8BF_68_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x13AB8A20)
#define CLASS_1_EBCA2A4357C4C8BF_68_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x13AB8A40)
#define CLASS_1_EBCA2A4357C4C8BF_68_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x13AB8A30)
#define CLASS_1_EBCA2A4357C4C8BF_68__CTOR_OFFSET UNITYSDK_OFFSET(0x13AB8900)

inline static constexpr unsigned int Class_1_EBCA2A4357C4C8BF_68_TypeDefinitionIndex = 18183;

class Class_1_EBCA2A4357C4C8BF_68 : public ::System::Object
{
public:
	::System::String* Field_1_5; // 0x10
	::Class_0_16E4307DCC419505_13* Field_1_1; // 0x18
	::Struct_2_0190A9212AD9E688_4 Field_1_0; // 0x20
	::System::Int32 Field_1_6; // 0x30
	::System::Byte Field_1_4; // 0x34
	::System::Boolean Field_1_2; // 0x35
	::System::Byte Field_1_3; // 0x36

	::System::Void _ctor(::Struct_2_0190A9212AD9E688_4 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_0190A9212AD9E688_4, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_1_EBCA2A4357C4C8BF_68__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* Method_1_5BF0E61BD5CA40A5()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBCA2A4357C4C8BF_68_METHOD_1_5BF0E61BD5CA40A5_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EBCA2A4357C4C8BF_68_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBCA2A4357C4C8BF_68_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBCA2A4357C4C8BF_68_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Int32 Method_1_51652EAB9A014635()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBCA2A4357C4C8BF_68_METHOD_1_51652EAB9A014635_OFFSET))(this);
	}
};
