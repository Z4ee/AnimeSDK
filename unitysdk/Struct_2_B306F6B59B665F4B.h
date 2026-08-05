#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_719F2FEB651EFA63.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_B306F6B59B665F4B_METHOD_2_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x815B90)
#define STRUCT_2_B306F6B59B665F4B_TOSTRING_OFFSET UNITYSDK_OFFSET(0x815B80)
#define STRUCT_2_B306F6B59B665F4B__CTOR_1_OFFSET UNITYSDK_OFFSET(0x712100)
#define STRUCT_2_B306F6B59B665F4B__CTOR_OFFSET UNITYSDK_OFFSET(0x815B60)

inline static constexpr unsigned int Struct_2_B306F6B59B665F4B_TypeDefinitionIndex = 51496;

struct alignas(8) Struct_2_B306F6B59B665F4B
{
	::Enum_3_719F2FEB651EFA63 Field_2_0; // 0x10
	::System::String* Field_2_7; // 0x18
	::System::String* Field_2_6; // 0x20
	::System::String* Field_2_5; // 0x28

	::System::Void _ctor(::Enum_3_719F2FEB651EFA63 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_719F2FEB651EFA63))((::PBYTE)hIl2Cpp + STRUCT_2_B306F6B59B665F4B__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1(::Enum_3_719F2FEB651EFA63 a1, ::System::String* a2, ::System::String* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_719F2FEB651EFA63, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_B306F6B59B665F4B__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_B306F6B59B665F4B_TOSTRING_OFFSET))(this);
	}

	::System::String* Method_2_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_B306F6B59B665F4B_METHOD_2_35EA095E1AFDD9C8_OFFSET))(this);
	}
};
