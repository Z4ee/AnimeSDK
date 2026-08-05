#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_DB31062B5932CACE_2_DISPOSE_OFFSET UNITYSDK_OFFSET(0x6CC840)
#define STRUCT_2_DB31062B5932CACE_2__CTOR_OFFSET UNITYSDK_OFFSET(0x346F70)

inline static constexpr unsigned int Struct_2_DB31062B5932CACE_2_TypeDefinitionIndex = 68205;

struct alignas(8) Struct_2_DB31062B5932CACE_2
{
	::System::String* Field_2_1; // 0x10
	::System::String* Field_2_0; // 0x18

	::System::Void _ctor(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_DB31062B5932CACE_2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_DB31062B5932CACE_2_DISPOSE_OFFSET))(this);
	}
};
