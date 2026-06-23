#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define CLASS_1_2EB110F542D52C8D_STRUCT_2_6A8005D0FDE749A4__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A0D5ED0)
#define CLASS_1_2EB110F542D52C8D_STRUCT_2_6A8005D0FDE749A4__CTOR_OFFSET UNITYSDK_OFFSET(0x2BDE80)

inline static constexpr unsigned int Class_1_2EB110F542D52C8D_Struct_2_6A8005D0FDE749A4_TypeDefinitionIndex = 73799;

struct alignas(8) Class_1_2EB110F542D52C8D_Struct_2_6A8005D0FDE749A4
{
	static ::Class_1_2EB110F542D52C8D_Struct_2_6A8005D0FDE749A4* StaticGet_Field_2_2()
	{
		return (::Class_1_2EB110F542D52C8D_Struct_2_6A8005D0FDE749A4*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2EB110F542D52C8D_Struct_2_6A8005D0FDE749A4_TypeDefinitionIndex)->GetStaticField(0x41E10);
	}
	static ::Class_1_2EB110F542D52C8D_Struct_2_6A8005D0FDE749A4* StaticGet_Field_2_1()
	{
		return (::Class_1_2EB110F542D52C8D_Struct_2_6A8005D0FDE749A4*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2EB110F542D52C8D_Struct_2_6A8005D0FDE749A4_TypeDefinitionIndex)->GetStaticField(0x41E20);
	}
	static ::Class_1_2EB110F542D52C8D_Struct_2_6A8005D0FDE749A4* StaticGet_Field_2_0()
	{
		return (::Class_1_2EB110F542D52C8D_Struct_2_6A8005D0FDE749A4*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2EB110F542D52C8D_Struct_2_6A8005D0FDE749A4_TypeDefinitionIndex)->GetStaticField(0x41E30);
	}
	::System::UInt64 Field_2_3; // 0x10
	::System::String* Field_2_4; // 0x18

	::System::Void _ctor(::System::UInt64 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2EB110F542D52C8D_STRUCT_2_6A8005D0FDE749A4__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2EB110F542D52C8D_STRUCT_2_6A8005D0FDE749A4__CCTOR_OFFSET))();
	}
};
