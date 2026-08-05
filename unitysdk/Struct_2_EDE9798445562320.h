#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_C856E655551E512E.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_EDE9798445562320_METHOD_2_9310B2948ECB8752_OFFSET UNITYSDK_OFFSET(0x145A8400)
#define STRUCT_2_EDE9798445562320__CCTOR_OFFSET UNITYSDK_OFFSET(0x145A83B0)
#define STRUCT_2_EDE9798445562320__CTOR_OFFSET UNITYSDK_OFFSET(0x7FC590)

inline static constexpr unsigned int Struct_2_EDE9798445562320_TypeDefinitionIndex = 52917;

struct alignas(8) Struct_2_EDE9798445562320
{
	static ::System::String** StaticGet_Field_2_6()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_EDE9798445562320_TypeDefinitionIndex)->GetStaticField(0x464A0);
	}
	static ::System::UInt32* StaticGet_Field_2_5()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_EDE9798445562320_TypeDefinitionIndex)->GetStaticField(0x104A0);
	}
	::System::String* Field_2_2; // 0x10
	::System::Int32 Field_2_1; // 0x18
	::System::UInt32 Field_2_0; // 0x1C
	::Enum_3_C856E655551E512E Field_2_7; // 0x20

	::System::Void _ctor(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_EDE9798445562320__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_EDE9798445562320__CCTOR_OFFSET))();
	}

	static ::System::Int32 Method_2_9310B2948ECB8752(::Struct_2_EDE9798445562320 a1, ::Struct_2_EDE9798445562320 a2)
	{
		return ((::System::Int32(*)(::Struct_2_EDE9798445562320, ::Struct_2_EDE9798445562320))((::PBYTE)hIl2Cpp + STRUCT_2_EDE9798445562320_METHOD_2_9310B2948ECB8752_OFFSET))(a1, a2);
	}
};
