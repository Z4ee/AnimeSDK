#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_A5962C6D9951C09B__CCTOR_OFFSET UNITYSDK_OFFSET(0xF5D44A0)

inline static constexpr unsigned int Struct_2_A5962C6D9951C09B_TypeDefinitionIndex = 59312;

struct alignas(4) Struct_2_A5962C6D9951C09B
{
	static ::Struct_2_A5962C6D9951C09B* StaticGet_Field_2_2()
	{
		return (::Struct_2_A5962C6D9951C09B*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_A5962C6D9951C09B_TypeDefinitionIndex)->GetStaticField(0xC4A0);
	}
	::System::Int32 Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x14

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_A5962C6D9951C09B__CCTOR_OFFSET))();
	}
};
