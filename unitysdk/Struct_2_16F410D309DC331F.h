#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_16F410D309DC331F__CCTOR_OFFSET UNITYSDK_OFFSET(0x18CFF410)

inline static constexpr unsigned int Struct_2_16F410D309DC331F_TypeDefinitionIndex = 38745;

struct alignas(8) Struct_2_16F410D309DC331F
{
	static ::Struct_2_16F410D309DC331F* StaticGet_Field_2_0()
	{
		return (::Struct_2_16F410D309DC331F*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_16F410D309DC331F_TypeDefinitionIndex)->GetStaticField(0x297E0);
	}
	::System::Boolean Field_2_1; // 0x10
	::System::String* Field_2_2; // 0x18
	::System::Int32 Field_2_3; // 0x20
	::System::Single Field_2_4; // 0x24
	::System::Single Field_2_5; // 0x28
	::System::Int32 Field_2_6; // 0x2C
	::System::Single Field_2_7; // 0x30

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_16F410D309DC331F__CCTOR_OFFSET))();
	}
};
