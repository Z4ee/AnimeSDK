#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_733B8EC4B9916061__CCTOR_OFFSET UNITYSDK_OFFSET(0x125E8300)
#define STRUCT_2_733B8EC4B9916061__CTOR_OFFSET UNITYSDK_OFFSET(0x48A560)

inline static constexpr unsigned int Struct_2_733B8EC4B9916061_TypeDefinitionIndex = 44887;

struct alignas(4) Struct_2_733B8EC4B9916061
{
	static ::Struct_2_733B8EC4B9916061* StaticGet_Field_2_2()
	{
		return (::Struct_2_733B8EC4B9916061*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_733B8EC4B9916061_TypeDefinitionIndex)->GetStaticField(0xC890);
	}
	::System::Single Field_2_0; // 0x10
	::System::Single Field_2_1; // 0x14

	::System::Void _ctor(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_733B8EC4B9916061__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_733B8EC4B9916061__CCTOR_OFFSET))();
	}
};
