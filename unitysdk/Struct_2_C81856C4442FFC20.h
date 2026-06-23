#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_FA5F50563E60AFBA.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_C81856C4442FFC20__CCTOR_OFFSET UNITYSDK_OFFSET(0x13533940)
#define STRUCT_2_C81856C4442FFC20__CTOR_OFFSET UNITYSDK_OFFSET(0x7B1A20)

inline static constexpr unsigned int Struct_2_C81856C4442FFC20_TypeDefinitionIndex = 55738;

struct alignas(8) Struct_2_C81856C4442FFC20
{
	static ::System::String** StaticGet_Field_2_5()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_C81856C4442FFC20_TypeDefinitionIndex)->GetStaticField(0x37040);
	}
	static ::System::UInt32* StaticGet_Field_2_6()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_C81856C4442FFC20_TypeDefinitionIndex)->GetStaticField(0xD9D0);
	}
	::Struct_2_FA5F50563E60AFBA Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x28
	::System::String* Field_2_2; // 0x30
	::System::UInt32 Field_2_3; // 0x38
	::Struct_2_FA5F50563E60AFBA Field_2_4; // 0x40

	::System::Void _ctor(::Struct_2_FA5F50563E60AFBA a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FA5F50563E60AFBA))((::PBYTE)hIl2Cpp + STRUCT_2_C81856C4442FFC20__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_C81856C4442FFC20__CCTOR_OFFSET))();
	}
};
