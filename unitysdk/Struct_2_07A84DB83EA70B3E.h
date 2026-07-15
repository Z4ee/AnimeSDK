#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_07A84DB83EA70B3E__CTOR_OFFSET UNITYSDK_OFFSET(0x676D90)

inline static constexpr unsigned int Struct_2_07A84DB83EA70B3E_TypeDefinitionIndex = 76832;

struct alignas(8) Struct_2_07A84DB83EA70B3E
{
	static ::Struct_2_07A84DB83EA70B3E* StaticGet_Field_2_0()
	{
		return (::Struct_2_07A84DB83EA70B3E*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_07A84DB83EA70B3E_TypeDefinitionIndex)->GetStaticField(0x84E0);
	}
	::System::UInt64 Field_2_1; // 0x10
	::System::UInt64 Field_2_2; // 0x18

	::System::Void _ctor(::System::UInt64 a1, ::System::UInt64 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + STRUCT_2_07A84DB83EA70B3E__CTOR_OFFSET))(this, a1, a2);
	}
};
