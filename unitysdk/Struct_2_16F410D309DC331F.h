#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_16F410D309DC331F__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C4BD3B0)

inline static constexpr unsigned int Struct_2_16F410D309DC331F_TypeDefinitionIndex = 40426;

struct alignas(8) Struct_2_16F410D309DC331F
{
	static ::Struct_2_16F410D309DC331F* StaticGet_HGLIFJGHADE()
	{
		return (::Struct_2_16F410D309DC331F*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_16F410D309DC331F_TypeDefinitionIndex)->GetStaticField(0x27550);
	}
	::System::Boolean BIGBOOLBPEE; // 0x10
	::System::String* KOIJMPDBMJF; // 0x18
	::System::Int32 MKBNALHKDHF; // 0x20
	::System::Single HBDINFCPLPF; // 0x24
	::System::Single NJBBGOBBJFH; // 0x28
	::System::Int32 KOJFHFAKKFO; // 0x2C
	::System::Single OAMBIELLBJE; // 0x30

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_16F410D309DC331F__CCTOR_OFFSET))();
	}
};
