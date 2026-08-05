#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_BF3A4206DCB16EB5_METHOD_2_57A8E11FECF10345_OFFSET UNITYSDK_OFFSET(0x16132080)
#define STRUCT_2_BF3A4206DCB16EB5_METHOD_2_704CAEDCD95E9E98_OFFSET UNITYSDK_OFFSET(0x161320F0)
#define STRUCT_2_BF3A4206DCB16EB5__CCTOR_OFFSET UNITYSDK_OFFSET(0x16132060)

inline static constexpr unsigned int Struct_2_BF3A4206DCB16EB5_TypeDefinitionIndex = 40670;

struct alignas(4) Struct_2_BF3A4206DCB16EB5
{
	static ::Struct_2_BF3A4206DCB16EB5* StaticGet_Field_2_0()
	{
		return (::Struct_2_BF3A4206DCB16EB5*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_BF3A4206DCB16EB5_TypeDefinitionIndex)->GetStaticField(0xC390);
	}
	::System::Int32 Field_2_7; // 0x10
	::System::Single Field_2_6; // 0x14

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_BF3A4206DCB16EB5__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_2_57A8E11FECF10345(::Struct_2_BF3A4206DCB16EB5 a1, ::Struct_2_BF3A4206DCB16EB5 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_BF3A4206DCB16EB5, ::Struct_2_BF3A4206DCB16EB5))((::PBYTE)hIl2Cpp + STRUCT_2_BF3A4206DCB16EB5_METHOD_2_57A8E11FECF10345_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_2_704CAEDCD95E9E98(::Struct_2_BF3A4206DCB16EB5 a1, ::Struct_2_BF3A4206DCB16EB5 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_BF3A4206DCB16EB5, ::Struct_2_BF3A4206DCB16EB5))((::PBYTE)hIl2Cpp + STRUCT_2_BF3A4206DCB16EB5_METHOD_2_704CAEDCD95E9E98_OFFSET))(a1, a2);
	}
};
