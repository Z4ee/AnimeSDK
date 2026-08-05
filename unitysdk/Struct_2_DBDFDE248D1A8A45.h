#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_C96B5C0D7D46A52D.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_DBDFDE248D1A8A45__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E03A850)

inline static constexpr unsigned int Struct_2_DBDFDE248D1A8A45_TypeDefinitionIndex = 91863;

struct alignas(4) Struct_2_DBDFDE248D1A8A45
{
	static ::Struct_2_DBDFDE248D1A8A45* StaticGet_Field_2_0()
	{
		return (::Struct_2_DBDFDE248D1A8A45*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_DBDFDE248D1A8A45_TypeDefinitionIndex)->GetStaticField(0x12F90);
	}
	::Enum_3_C96B5C0D7D46A52D Field_2_7; // 0x10
	::System::Int32 Field_2_6; // 0x14

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_DBDFDE248D1A8A45__CCTOR_OFFSET))();
	}
};
