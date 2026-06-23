#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7CF131C413C919AF.h"
#include "unitysdk/Enum_3_C6E8F7731271F88A.h"
#include "unitysdk/ProtoScript/NodeState.h"
#include "unitysdk/ProtoScript/NodeVisible.h"
#include "unitysdk/System/ValueType.h"

class Class_3_C72A68CFCDEBE489_1;

#define STRUCT_2_E80D1D3A0BDE4011__CTOR_OFFSET UNITYSDK_OFFSET(0x79D980)

inline static constexpr unsigned int Struct_2_E80D1D3A0BDE4011_TypeDefinitionIndex = 39921;

struct alignas(4) Struct_2_E80D1D3A0BDE4011
{
	::ProtoScript::NodeState Field_2_0; // 0x10
	::ProtoScript::NodeVisible Field_2_1; // 0x14
	::Enum_3_7CF131C413C919AF Field_2_2; // 0x18
	::Enum_3_C6E8F7731271F88A Field_2_3; // 0x1C

	::System::Void _ctor(::Class_3_C72A68CFCDEBE489_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_C72A68CFCDEBE489_1*))((::PBYTE)hIl2Cpp + STRUCT_2_E80D1D3A0BDE4011__CTOR_OFFSET))(this, a1);
	}
};
