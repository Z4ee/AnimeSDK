#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_16F410D309DC331F__CCTOR_OFFSET UNITYSDK_OFFSET(0x167ABDF0)

inline static constexpr unsigned int Struct_2_16F410D309DC331F_TypeDefinitionIndex = 32284;

struct alignas(8) Struct_2_16F410D309DC331F
{
	static ::Struct_2_16F410D309DC331F* StaticGet_Field_2_7()
	{
		return (::Struct_2_16F410D309DC331F*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_16F410D309DC331F_TypeDefinitionIndex)->GetStaticField(0xE3C0);
	}
	::System::Boolean Field_2_0; // 0x10
	::System::String* Field_2_1; // 0x18
	::System::Int32 Field_2_2; // 0x20
	::System::Single Field_2_3; // 0x24
	::System::Single Field_2_4; // 0x28
	::System::Int32 Field_2_5; // 0x2C
	::System::Single Field_2_6; // 0x30

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_16F410D309DC331F__CCTOR_OFFSET))();
	}
};
