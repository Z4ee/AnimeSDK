#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_C2761E57EE0B71AF.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_7745521E55AD9EEA__CCTOR_OFFSET UNITYSDK_OFFSET(0x132491E0)

inline static constexpr unsigned int Struct_2_7745521E55AD9EEA_TypeDefinitionIndex = 61040;

struct alignas(8) Struct_2_7745521E55AD9EEA
{
	static ::System::String** StaticGet_Field_2_2()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_7745521E55AD9EEA_TypeDefinitionIndex)->GetStaticField(0x42960);
	}
	::System::String* Field_2_0; // 0x10
	::Enum_3_C2761E57EE0B71AF Field_2_1; // 0x18

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_7745521E55AD9EEA__CCTOR_OFFSET))();
	}
};
