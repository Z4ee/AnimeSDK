#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_B28DB1EDFDCFF67F.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_5F20C77812135856_METHOD_2_010145CA7F5361E0_OFFSET UNITYSDK_OFFSET(0x863620)
#define STRUCT_2_5F20C77812135856_METHOD_2_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x863630)
#define STRUCT_2_5F20C77812135856_TOSTRING_OFFSET UNITYSDK_OFFSET(0x863470)
#define STRUCT_2_5F20C77812135856__CCTOR_OFFSET UNITYSDK_OFFSET(0x1717E070)
#define STRUCT_2_5F20C77812135856__CTOR_1_OFFSET UNITYSDK_OFFSET(0x863520)
#define STRUCT_2_5F20C77812135856__CTOR_2_OFFSET UNITYSDK_OFFSET(0x863550)
#define STRUCT_2_5F20C77812135856__CTOR_3_OFFSET UNITYSDK_OFFSET(0x863580)
#define STRUCT_2_5F20C77812135856__CTOR_4_OFFSET UNITYSDK_OFFSET(0x8635B0)
#define STRUCT_2_5F20C77812135856__CTOR_OFFSET UNITYSDK_OFFSET(0x8634F0)

inline static constexpr unsigned int Struct_2_5F20C77812135856_TypeDefinitionIndex = 84600;

struct alignas(8) Struct_2_5F20C77812135856
{
	static ::Struct_2_5F20C77812135856* StaticGet_Field_2_7()
	{
		return (::Struct_2_5F20C77812135856*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_5F20C77812135856_TypeDefinitionIndex)->GetStaticField(0x38820);
	}
	static ::Struct_2_5F20C77812135856* StaticGet_Field_2_1()
	{
		return (::Struct_2_5F20C77812135856*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_5F20C77812135856_TypeDefinitionIndex)->GetStaticField(0x38850);
	}
	static ::Struct_2_5F20C77812135856* StaticGet_Field_2_0()
	{
		return (::Struct_2_5F20C77812135856*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_5F20C77812135856_TypeDefinitionIndex)->GetStaticField(0x38880);
	}
	static ::Struct_2_5F20C77812135856* StaticGet_Field_2_2()
	{
		return (::Struct_2_5F20C77812135856*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_5F20C77812135856_TypeDefinitionIndex)->GetStaticField(0x388B0);
	}
	static ::Struct_2_5F20C77812135856* StaticGet_Field_2_3()
	{
		return (::Struct_2_5F20C77812135856*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_5F20C77812135856_TypeDefinitionIndex)->GetStaticField(0x388E0);
	}
	::Enum_3_B28DB1EDFDCFF67F Field_2_6; // 0x10
	::System::Double Field_2_5; // 0x18
	::System::Boolean Field_2_4; // 0x20
	::System::Boolean Field_2_11; // 0x21
	::System::Double Field_2_10; // 0x28
	::System::Double Field_2_9; // 0x30
	::System::String* Field_2_8; // 0x38

	::System::Void _ctor(::Enum_3_B28DB1EDFDCFF67F a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_B28DB1EDFDCFF67F))((::PBYTE)hIl2Cpp + STRUCT_2_5F20C77812135856__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_5F20C77812135856__CTOR_1_OFFSET))(this, a1);
	}

	::System::Void _ctor_2(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_5F20C77812135856__CTOR_2_OFFSET))(this, a1);
	}

	::System::Void _ctor_3(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + STRUCT_2_5F20C77812135856__CTOR_3_OFFSET))(this, a1);
	}

	::System::Void _ctor_4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_5F20C77812135856__CTOR_4_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_5F20C77812135856__CCTOR_OFFSET))();
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_5F20C77812135856_TOSTRING_OFFSET))(this);
	}

	::System::String* Method_2_010145CA7F5361E0()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_5F20C77812135856_METHOD_2_010145CA7F5361E0_OFFSET))(this);
	}

	::System::String* Method_2_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_5F20C77812135856_METHOD_2_35EA095E1AFDD9C8_OFFSET))(this);
	}
};
