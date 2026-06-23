#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_7B2C262B8CE54D23_METHOD_2_C35F9447FBF9C866_OFFSET UNITYSDK_OFFSET(0x1B366C30)
#define STRUCT_2_7B2C262B8CE54D23_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x7D4530)
#define STRUCT_2_7B2C262B8CE54D23__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B366C20)

inline static constexpr unsigned int Struct_2_7B2C262B8CE54D23_TypeDefinitionIndex = 88722;

struct alignas(4) Struct_2_7B2C262B8CE54D23
{
	static ::Struct_2_7B2C262B8CE54D23* StaticGet_Field_2_8()
	{
		return (::Struct_2_7B2C262B8CE54D23*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_7B2C262B8CE54D23_TypeDefinitionIndex)->GetStaticField(0x13190);
	}
	::System::Single Field_2_0; // 0x10
	::System::Boolean Field_2_1; // 0x14
	::System::Single Field_2_2; // 0x18
	::System::Single Field_2_3; // 0x1C
	::System::Single Field_2_4; // 0x20
	::System::Boolean Field_2_5; // 0x24
	::System::Single Field_2_6; // 0x28
	::System::Boolean Field_2_7; // 0x2C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_7B2C262B8CE54D23__CCTOR_OFFSET))();
	}

	static ::Struct_2_7B2C262B8CE54D23 Method_2_C35F9447FBF9C866(::System::Single a1, ::System::Single a2)
	{
		return ((::Struct_2_7B2C262B8CE54D23(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_7B2C262B8CE54D23_METHOD_2_C35F9447FBF9C866_OFFSET))(a1, a2);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_7B2C262B8CE54D23_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}
};
