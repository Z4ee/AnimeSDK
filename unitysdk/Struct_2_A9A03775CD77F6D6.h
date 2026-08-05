#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Bounds.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define STRUCT_2_A9A03775CD77F6D6_EQUALS_OFFSET UNITYSDK_OFFSET(0x6CDC30)

inline static constexpr unsigned int Struct_2_A9A03775CD77F6D6_TypeDefinitionIndex = 69369;

struct alignas(8) Struct_2_A9A03775CD77F6D6
{
	::System::Int32 Field_2_2; // 0x10
	::UnityEngine::Bounds Field_2_1; // 0x14
	::System::Collections::Generic::List_1<::UnityEngine::Bounds>* Field_2_0; // 0x30
	::System::Boolean Field_2_7; // 0x38

	::System::Boolean Equals(::Struct_2_A9A03775CD77F6D6 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_A9A03775CD77F6D6))((::PBYTE)hIl2Cpp + STRUCT_2_A9A03775CD77F6D6_EQUALS_OFFSET))(this, a1);
	}
};
