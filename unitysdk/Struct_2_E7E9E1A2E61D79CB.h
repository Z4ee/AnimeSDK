#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define STRUCT_2_E7E9E1A2E61D79CB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x69A8C0)
#define STRUCT_2_E7E9E1A2E61D79CB_EQUALS_OFFSET UNITYSDK_OFFSET(0x69A810)
#define STRUCT_2_E7E9E1A2E61D79CB_METHOD_2_67AB4D27061DAF44_OFFSET UNITYSDK_OFFSET(0x69A940)
#define STRUCT_2_E7E9E1A2E61D79CB_METHOD_2_6D0360BD23602584_OFFSET UNITYSDK_OFFSET(0x69A8D0)

inline static constexpr unsigned int Struct_2_E7E9E1A2E61D79CB_TypeDefinitionIndex = 59496;

struct alignas(4) Struct_2_E7E9E1A2E61D79CB
{
	::System::Single Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x14
	::System::Int32 Field_2_2; // 0x18
	::System::Int32 Field_2_3; // 0x1C

	::System::Boolean Equals(::Struct_2_E7E9E1A2E61D79CB a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_E7E9E1A2E61D79CB))((::PBYTE)hIl2Cpp + STRUCT_2_E7E9E1A2E61D79CB_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_E7E9E1A2E61D79CB_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_6D0360BD23602584(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_E7E9E1A2E61D79CB_METHOD_2_6D0360BD23602584_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_67AB4D27061DAF44(::Struct_2_E7E9E1A2E61D79CB a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Struct_2_E7E9E1A2E61D79CB))((::PBYTE)hIl2Cpp + STRUCT_2_E7E9E1A2E61D79CB_METHOD_2_67AB4D27061DAF44_OFFSET))(this, a1);
	}
};
