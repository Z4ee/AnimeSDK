#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_FE845636D354B5F8__CCTOR_OFFSET UNITYSDK_OFFSET(0x185E95A0)

inline static constexpr unsigned int Struct_2_FE845636D354B5F8_TypeDefinitionIndex = 84862;

struct alignas(1) Struct_2_FE845636D354B5F8
{
	static ::Struct_2_FE845636D354B5F8* StaticGet_Field_2_1()
	{
		return (::Struct_2_FE845636D354B5F8*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_FE845636D354B5F8_TypeDefinitionIndex)->GetStaticField(0xE8E0);
	}
	::System::Boolean Field_2_0; // 0x10

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_FE845636D354B5F8__CCTOR_OFFSET))();
	}
};
