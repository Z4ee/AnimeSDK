#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_A00D20C1E59ACEC9__CCTOR_OFFSET UNITYSDK_OFFSET(0x16F186E0)

inline static constexpr unsigned int Struct_2_A00D20C1E59ACEC9_TypeDefinitionIndex = 85715;

struct alignas(4) Struct_2_A00D20C1E59ACEC9
{
	static ::Struct_2_A00D20C1E59ACEC9* StaticGet_Field_2_0()
	{
		return (::Struct_2_A00D20C1E59ACEC9*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_A00D20C1E59ACEC9_TypeDefinitionIndex)->GetStaticField(0x13740);
	}
	::System::Single Field_2_2; // 0x10
	::System::Boolean Field_2_1; // 0x14

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_A00D20C1E59ACEC9__CCTOR_OFFSET))();
	}
};
