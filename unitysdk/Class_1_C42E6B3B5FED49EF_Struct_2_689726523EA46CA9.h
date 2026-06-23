#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define CLASS_1_C42E6B3B5FED49EF_STRUCT_2_689726523EA46CA9__CTOR_OFFSET UNITYSDK_OFFSET(0x332CF0)

inline static constexpr unsigned int Class_1_C42E6B3B5FED49EF_Struct_2_689726523EA46CA9_TypeDefinitionIndex = 40275;

struct alignas(8) Class_1_C42E6B3B5FED49EF_Struct_2_689726523EA46CA9
{
	::System::String* Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x18

	::System::Void _ctor(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C42E6B3B5FED49EF_STRUCT_2_689726523EA46CA9__CTOR_OFFSET))(this, a1, a2);
	}
};
