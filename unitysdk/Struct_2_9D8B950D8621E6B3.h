#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F20F6E60E29BD550.h"
#include "unitysdk/System/ValueType.h"

class Class_0_16E4307DCC419505_203;

#define STRUCT_2_9D8B950D8621E6B3__CCTOR_OFFSET UNITYSDK_OFFSET(0x17039F90)
#define STRUCT_2_9D8B950D8621E6B3__CTOR_1_OFFSET UNITYSDK_OFFSET(0x8619B0)
#define STRUCT_2_9D8B950D8621E6B3__CTOR_OFFSET UNITYSDK_OFFSET(0x351680)

inline static constexpr unsigned int Struct_2_9D8B950D8621E6B3_TypeDefinitionIndex = 89787;

struct alignas(8) Struct_2_9D8B950D8621E6B3
{
	static ::Struct_2_9D8B950D8621E6B3* StaticGet_Field_2_1()
	{
		return (::Struct_2_9D8B950D8621E6B3*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_9D8B950D8621E6B3_TypeDefinitionIndex)->GetStaticField(0x351B0);
	}
	static ::Struct_2_9D8B950D8621E6B3* StaticGet_Field_2_2()
	{
		return (::Struct_2_9D8B950D8621E6B3*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_9D8B950D8621E6B3_TypeDefinitionIndex)->GetStaticField(0x351C0);
	}
	static ::Struct_2_9D8B950D8621E6B3* StaticGet_Field_2_3()
	{
		return (::Struct_2_9D8B950D8621E6B3*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_9D8B950D8621E6B3_TypeDefinitionIndex)->GetStaticField(0x351D0);
	}
	::Class_0_16E4307DCC419505_203* Field_2_0; // 0x10
	::Enum_3_F20F6E60E29BD550 Field_2_7; // 0x18

	::System::Void _ctor(::Class_0_16E4307DCC419505_203* a1, ::Enum_3_F20F6E60E29BD550 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_203*, ::Enum_3_F20F6E60E29BD550))((::PBYTE)hIl2Cpp + STRUCT_2_9D8B950D8621E6B3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1(::Class_0_16E4307DCC419505_203* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_203*))((::PBYTE)hIl2Cpp + STRUCT_2_9D8B950D8621E6B3__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_9D8B950D8621E6B3__CCTOR_OFFSET))();
	}
};
