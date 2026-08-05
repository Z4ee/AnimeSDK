#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTree.h"
#include "unitysdk/StateTreeCore/StateTreeInstanceData.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnrealTypes/ReadOnlyRawPtr_1.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace UnrealTypes { class Object; }

#define STRUCT_2_17931CC8B6AC74E6_EXECUTE_OFFSET UNITYSDK_OFFSET(0x7F4180)

inline static constexpr unsigned int Struct_2_17931CC8B6AC74E6_TypeDefinitionIndex = 63957;

struct alignas(8) Struct_2_17931CC8B6AC74E6
{
	::System::Single Field_2_1; // 0x10
	::Unity::Collections::NativeArray_1<::UnrealTypes::TObjectHandle_1<::UnrealTypes::Object*>> Field_2_0; // 0x18
	::Unity::Collections::NativeArray_1<::UnrealTypes::ReadOnlyRawPtr_1<::StateTreeCore::StateTree>> Field_2_7; // 0x28
	::Unity::Collections::NativeArray_1<::StateTreeCore::StateTreeInstanceData> Field_2_6; // 0x38

	::System::Void Execute(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_17931CC8B6AC74E6_EXECUTE_OFFSET))(this, a1);
	}
};
