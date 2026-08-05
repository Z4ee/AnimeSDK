#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7CF131C413C919AF.h"
#include "unitysdk/ProtoScript/NodeState.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_511CCDBCAFFCE85D_METHOD_2_AB71CB6A7FDDA465_OFFSET UNITYSDK_OFFSET(0x7DAF80)

inline static constexpr unsigned int Struct_2_511CCDBCAFFCE85D_TypeDefinitionIndex = 64912;

struct alignas(4) Struct_2_511CCDBCAFFCE85D
{
	::Enum_3_7CF131C413C919AF Field_2_2; // 0x10
	::ProtoScript::NodeState Field_2_1; // 0x14
	::System::Int32 Field_2_0; // 0x18

	::System::Boolean Method_2_AB71CB6A7FDDA465(::Struct_2_511CCDBCAFFCE85D a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_511CCDBCAFFCE85D))((::PBYTE)hIl2Cpp + STRUCT_2_511CCDBCAFFCE85D_METHOD_2_AB71CB6A7FDDA465_OFFSET))(this, a1);
	}
};
