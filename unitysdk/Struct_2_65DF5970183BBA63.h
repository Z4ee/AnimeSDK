#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Config { class ConfigPosRot; }
namespace System { class String; }

#define STRUCT_2_65DF5970183BBA63__CCTOR_OFFSET UNITYSDK_OFFSET(0x18B84AC0)
#define STRUCT_2_65DF5970183BBA63__CTOR_OFFSET UNITYSDK_OFFSET(0x856B40)

inline static constexpr unsigned int Struct_2_65DF5970183BBA63_TypeDefinitionIndex = 43654;

struct alignas(8) Struct_2_65DF5970183BBA63
{
	static ::System::String** StaticGet_Field_2_6()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_65DF5970183BBA63_TypeDefinitionIndex)->GetStaticField(0x3AD50);
	}
	static ::System::UInt32* StaticGet_Field_2_7()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_65DF5970183BBA63_TypeDefinitionIndex)->GetStaticField(0xE720);
	}
	::System::String* Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x18
	::System::UInt32 Field_2_2; // 0x1C
	::System::Int32 Field_2_3; // 0x20
	::System::String* Field_2_4; // 0x28
	::MoleMole::Config::ConfigPosRot* Field_2_5; // 0x30

	::System::Void _ctor(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_65DF5970183BBA63__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_65DF5970183BBA63__CCTOR_OFFSET))();
	}
};
