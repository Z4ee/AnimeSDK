#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3851A71600C3C6B9.h"
#include "unitysdk/System/ValueType.h"

class Class_0_16E4307DCC419505_390;
namespace System { class String; }

#define STRUCT_2_BBE6D3C197515027__CCTOR_OFFSET UNITYSDK_OFFSET(0xF09BA50)
#define STRUCT_2_BBE6D3C197515027__CTOR_OFFSET UNITYSDK_OFFSET(0x658080)

inline static constexpr unsigned int Struct_2_BBE6D3C197515027_TypeDefinitionIndex = 64056;

struct alignas(8) Struct_2_BBE6D3C197515027
{
	static ::System::String** StaticGet_Field_2_5()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_BBE6D3C197515027_TypeDefinitionIndex)->GetStaticField(0x35C50);
	}
	static ::System::UInt32* StaticGet_Field_2_6()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_BBE6D3C197515027_TypeDefinitionIndex)->GetStaticField(0xD590);
	}
	::System::String* Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x18
	::System::UInt32 Field_2_2; // 0x1C
	::Enum_3_3851A71600C3C6B9 Field_2_3; // 0x20
	::Class_0_16E4307DCC419505_390* Field_2_4; // 0x28

	::System::Void _ctor(::System::String* a1, ::System::Int32 a2, ::Enum_3_3851A71600C3C6B9 a3, ::Class_0_16E4307DCC419505_390* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::Enum_3_3851A71600C3C6B9, ::Class_0_16E4307DCC419505_390*))((::PBYTE)hIl2Cpp + STRUCT_2_BBE6D3C197515027__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_BBE6D3C197515027__CCTOR_OFFSET))();
	}
};
