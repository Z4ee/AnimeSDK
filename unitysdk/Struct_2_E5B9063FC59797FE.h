#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/InputType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_E5B9063FC59797FE__CCTOR_OFFSET UNITYSDK_OFFSET(0x12A64D80)

inline static constexpr unsigned int Struct_2_E5B9063FC59797FE_TypeDefinitionIndex = 61210;

struct alignas(8) Struct_2_E5B9063FC59797FE
{
	static ::System::String** StaticGet_Field_2_5()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_E5B9063FC59797FE_TypeDefinitionIndex)->GetStaticField(0x34C50);
	}
	::System::String* Field_2_0; // 0x10
	::System::String* Field_2_1; // 0x18
	::System::UInt32 Field_2_2; // 0x20
	::System::Boolean Field_2_3; // 0x24
	::MoleMole::Config::InputType Field_2_4; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_E5B9063FC59797FE__CCTOR_OFFSET))();
	}
};
