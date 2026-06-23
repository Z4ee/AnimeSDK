#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_3C89C807BBE37569_Enum_3_93CE986E67979CBB.h"
#include "unitysdk/System/ValueType.h"

#define CLASS_4_3C89C807BBE37569_STRUCT_2_103BC4216212D30B_METHOD_2_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x4D3430)
#define CLASS_4_3C89C807BBE37569_STRUCT_2_103BC4216212D30B__CTOR_1_OFFSET UNITYSDK_OFFSET(0x4D33D0)
#define CLASS_4_3C89C807BBE37569_STRUCT_2_103BC4216212D30B__CTOR_OFFSET UNITYSDK_OFFSET(0x4D33A0)

inline static constexpr unsigned int Class_4_3C89C807BBE37569_Struct_2_103BC4216212D30B_TypeDefinitionIndex = 50685;

struct alignas(4) Class_4_3C89C807BBE37569_Struct_2_103BC4216212D30B
{
	::Class_4_3C89C807BBE37569_Enum_3_93CE986E67979CBB Field_2_0; // 0x10
	::System::Single Field_2_1; // 0x14
	::System::Single Field_2_2; // 0x18

	::System::Void _ctor(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_3C89C807BBE37569_STRUCT_2_103BC4216212D30B__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_3C89C807BBE37569_STRUCT_2_103BC4216212D30B__CTOR_1_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3C89C807BBE37569_STRUCT_2_103BC4216212D30B_METHOD_2_F0E307B84478A272_OFFSET))(this);
	}
};
