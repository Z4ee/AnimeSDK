#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_3146A4F7DDD9E0EA_1_METHOD_2_F37D4EBDF7067F90_OFFSET UNITYSDK_OFFSET(0x9B6BB0)

inline static constexpr unsigned int Struct_2_3146A4F7DDD9E0EA_1_TypeDefinitionIndex = 88237;

struct alignas(4) Struct_2_3146A4F7DDD9E0EA_1
{
	::System::UInt32 Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x14

	::System::String* Method_2_F37D4EBDF7067F90()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_3146A4F7DDD9E0EA_1_METHOD_2_F37D4EBDF7067F90_OFFSET))(this);
	}
};
