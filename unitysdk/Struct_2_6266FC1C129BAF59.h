#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_6266FC1C129BAF59_METHOD_2_7A11106D60C5C746_OFFSET UNITYSDK_OFFSET(0x9C6B60)
#define STRUCT_2_6266FC1C129BAF59__CTOR_OFFSET UNITYSDK_OFFSET(0x9C6B30)

inline static constexpr unsigned int Struct_2_6266FC1C129BAF59_TypeDefinitionIndex = 91681;

struct alignas(4) Struct_2_6266FC1C129BAF59
{
	::System::UInt32 Field_2_3; // 0x10
	::System::UInt32 Field_2_2; // 0x14
	::System::Single Field_2_1; // 0x18
	::System::Int32 Field_2_0; // 0x1C
	::System::Int32 Field_2_7; // 0x20
	::System::Boolean Field_2_6; // 0x24

	::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::System::Single a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Single, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_6266FC1C129BAF59__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::String* Method_2_7A11106D60C5C746()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_6266FC1C129BAF59_METHOD_2_7A11106D60C5C746_OFFSET))(this);
	}
};
