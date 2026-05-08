#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Config { class ConfigPosRot; }
namespace System { class String; }

#define STRUCT_2_E5666136A508B56A__CCTOR_OFFSET UNITYSDK_OFFSET(0x17A36BB0)

inline static constexpr unsigned int Struct_2_E5666136A508B56A_TypeDefinitionIndex = 67040;

struct alignas(8) Struct_2_E5666136A508B56A
{
	static ::System::String** StaticGet_Field_2_7()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_E5666136A508B56A_TypeDefinitionIndex)->GetStaticField(0x3AFD0);
	}
	::System::String* Field_2_0; // 0x10
	::System::String* Field_2_1; // 0x18
	::System::Boolean Field_2_2; // 0x20
	::System::Int32 Field_2_3; // 0x24
	::MoleMole::Config::ConfigPosRot* Field_2_4; // 0x28
	::MoleMole::Config::ConfigPosRot* Field_2_5; // 0x30
	::MoleMole::Config::ConfigPosRot* Field_2_6; // 0x38

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_E5666136A508B56A__CCTOR_OFFSET))();
	}
};
