#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueReadType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_7C99830C88C15F6F_METHOD_2_E9D092FDFBE8BC73_OFFSET UNITYSDK_OFFSET(0x17748780)

inline static constexpr unsigned int Struct_2_7C99830C88C15F6F_TypeDefinitionIndex = 22591;

struct alignas(8) Struct_2_7C99830C88C15F6F
{
	::RPG::GameCore::DynamicValueReadType Field_2_0; // 0x10
	::System::String* Field_2_1; // 0x18
	::System::Int32 Field_2_2; // 0x20

	static ::Struct_2_7C99830C88C15F6F Method_2_E9D092FDFBE8BC73(::System::String* a1)
	{
		return ((::Struct_2_7C99830C88C15F6F(*)(::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_7C99830C88C15F6F_METHOD_2_E9D092FDFBE8BC73_OFFSET))(a1);
	}
};
