#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Type; }

#define CLASS_1_6CC143B9599F1FCA_STRUCT_2_9617EA5488CC9DB7_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x39387B0)
#define CLASS_1_6CC143B9599F1FCA_STRUCT_2_9617EA5488CC9DB7__CTOR_OFFSET UNITYSDK_OFFSET(0x387D9D0)

inline static constexpr unsigned int Class_1_6CC143B9599F1FCA_Struct_2_9617EA5488CC9DB7_TypeDefinitionIndex = 68134;

struct alignas(8) Class_1_6CC143B9599F1FCA_Struct_2_9617EA5488CC9DB7
{
	::System::Int32 Field_2_0; // 0x10
	::System::Type* Field_2_1; // 0x18

	::System::Void _ctor(::System::Int32 a1, ::System::Type* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_6CC143B9599F1FCA_STRUCT_2_9617EA5488CC9DB7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CC143B9599F1FCA_STRUCT_2_9617EA5488CC9DB7_GETHASHCODE_OFFSET))(this);
	}
};
