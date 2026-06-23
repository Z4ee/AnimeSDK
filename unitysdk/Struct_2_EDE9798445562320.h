#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A6875CC70890641D.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_EDE9798445562320_METHOD_2_9310B2948ECB8752_OFFSET UNITYSDK_OFFSET(0x12DD0290)
#define STRUCT_2_EDE9798445562320__CCTOR_OFFSET UNITYSDK_OFFSET(0x12DD0240)
#define STRUCT_2_EDE9798445562320__CTOR_OFFSET UNITYSDK_OFFSET(0x79DA30)

inline static constexpr unsigned int Struct_2_EDE9798445562320_TypeDefinitionIndex = 67846;

struct alignas(8) Struct_2_EDE9798445562320
{
	static ::System::String** StaticGet_Field_2_4()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_EDE9798445562320_TypeDefinitionIndex)->GetStaticField(0x34C70);
	}
	static ::System::UInt32* StaticGet_Field_2_5()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_EDE9798445562320_TypeDefinitionIndex)->GetStaticField(0xCF20);
	}
	::System::String* Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x18
	::System::UInt32 Field_2_2; // 0x1C
	::Enum_3_A6875CC70890641D Field_2_3; // 0x20

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
