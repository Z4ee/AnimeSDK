#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_004403B81CB2D8D4.h"
#include "unitysdk/System/ValueType.h"

class Class_0_16E4307DCC419505_512;

#define STRUCT_2_9D8B950D8621E6B3__CCTOR_OFFSET UNITYSDK_OFFSET(0xD46C290)
#define STRUCT_2_9D8B950D8621E6B3__CTOR_1_OFFSET UNITYSDK_OFFSET(0x5947E0)
#define STRUCT_2_9D8B950D8621E6B3__CTOR_OFFSET UNITYSDK_OFFSET(0x332CF0)

inline static constexpr unsigned int Struct_2_9D8B950D8621E6B3_TypeDefinitionIndex = 54581;

struct alignas(8) Struct_2_9D8B950D8621E6B3
{
	static ::Struct_2_9D8B950D8621E6B3* StaticGet_Field_2_0()
	{
		return (::Struct_2_9D8B950D8621E6B3*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_9D8B950D8621E6B3_TypeDefinitionIndex)->GetStaticField(0x40460);
	}
	static ::Struct_2_9D8B950D8621E6B3* StaticGet_Field_2_2()
	{
		return (::Struct_2_9D8B950D8621E6B3*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_9D8B950D8621E6B3_TypeDefinitionIndex)->GetStaticField(0x40470);
	}
	static ::Struct_2_9D8B950D8621E6B3* StaticGet_Field_2_1()
	{
		return (::Struct_2_9D8B950D8621E6B3*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_9D8B950D8621E6B3_TypeDefinitionIndex)->GetStaticField(0x40480);
	}
	::Class_0_16E4307DCC419505_512* Field_2_3; // 0x10
	::Enum_3_004403B81CB2D8D4 Field_2_4; // 0x18

	::System::Void _ctor(::Class_0_16E4307DCC419505_512* a1, ::Enum_3_004403B81CB2D8D4 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_512*, ::Enum_3_004403B81CB2D8D4))((::PBYTE)hIl2Cpp + STRUCT_2_9D8B950D8621E6B3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1(::Class_0_16E4307DCC419505_512* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_512*))((::PBYTE)hIl2Cpp + STRUCT_2_9D8B950D8621E6B3__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_9D8B950D8621E6B3__CCTOR_OFFSET))();
	}
};
