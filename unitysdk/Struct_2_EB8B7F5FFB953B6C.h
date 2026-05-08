#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_A47ACAABA9AAFE92.h"
#include "unitysdk/Struct_2_EB8B7F5FFB953B6C_Enum_3_9491FD024FA2BEE6.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_EB8B7F5FFB953B6C__CTOR_1_OFFSET UNITYSDK_OFFSET(0x762BD0)
#define STRUCT_2_EB8B7F5FFB953B6C__CTOR_OFFSET UNITYSDK_OFFSET(0x762BA0)

inline static constexpr unsigned int Struct_2_EB8B7F5FFB953B6C_TypeDefinitionIndex = 59514;

struct alignas(8) Struct_2_EB8B7F5FFB953B6C
{
	::Struct_2_EB8B7F5FFB953B6C_Enum_3_9491FD024FA2BEE6 Field_2_0; // 0x10
	::Struct_2_A47ACAABA9AAFE92 Field_2_1; // 0x18

	::System::Void _ctor(::Struct_2_A47ACAABA9AAFE92 a1, ::Struct_2_EB8B7F5FFB953B6C_Enum_3_9491FD024FA2BEE6 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_A47ACAABA9AAFE92, ::Struct_2_EB8B7F5FFB953B6C_Enum_3_9491FD024FA2BEE6))((::PBYTE)hIl2Cpp + STRUCT_2_EB8B7F5FFB953B6C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_EB8B7F5FFB953B6C__CTOR_1_OFFSET))(this, a1);
	}
};
