#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3A250D2252735266.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_6AB58C5477BF48DC__CTOR_1_OFFSET UNITYSDK_OFFSET(0x713D80)
#define STRUCT_2_6AB58C5477BF48DC__CTOR_OFFSET UNITYSDK_OFFSET(0x713CE0)

inline static constexpr unsigned int Struct_2_6AB58C5477BF48DC_TypeDefinitionIndex = 63780;

struct alignas(8) Struct_2_6AB58C5477BF48DC
{
	::System::String* Field_2_0; // 0x10
	::Enum_3_3A250D2252735266 Field_2_1; // 0x18
	::System::Int32 Field_2_2; // 0x1C
	::System::Boolean Field_2_3; // 0x20

	::System::Void _ctor(::System::String* a1, ::Enum_3_3A250D2252735266 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Enum_3_3A250D2252735266))((::PBYTE)hIl2Cpp + STRUCT_2_6AB58C5477BF48DC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1(::System::String* a1, ::Enum_3_3A250D2252735266 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Enum_3_3A250D2252735266, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_6AB58C5477BF48DC__CTOR_1_OFFSET))(this, a1, a2, a3);
	}
};
