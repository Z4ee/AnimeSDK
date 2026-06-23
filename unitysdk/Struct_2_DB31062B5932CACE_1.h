#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_DB31062B5932CACE_1_METHOD_2_126AB3935214AA22_1_OFFSET UNITYSDK_OFFSET(0x2A99F0)
#define STRUCT_2_DB31062B5932CACE_1_METHOD_2_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x246290)
#define STRUCT_2_DB31062B5932CACE_1_METHOD_2_7D201B4343E63821_1_OFFSET UNITYSDK_OFFSET(0x2B6D10)
#define STRUCT_2_DB31062B5932CACE_1_METHOD_2_7D201B4343E63821_OFFSET UNITYSDK_OFFSET(0x446DA0)
#define STRUCT_2_DB31062B5932CACE_1__CTOR_OFFSET UNITYSDK_OFFSET(0x2BDE80)

inline static constexpr unsigned int Struct_2_DB31062B5932CACE_1_TypeDefinitionIndex = 45569;

struct alignas(8) Struct_2_DB31062B5932CACE_1
{
	::System::String* Field_2_0; // 0x10
	::System::String* Field_2_1; // 0x18

	::System::Void _ctor(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_DB31062B5932CACE_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7D201B4343E63821(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_DB31062B5932CACE_1_METHOD_2_7D201B4343E63821_OFFSET))(this, a1);
	}

	::System::String* Method_2_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_DB31062B5932CACE_1_METHOD_2_126AB3935214AA22_OFFSET))(this);
	}

	::System::String* Method_2_126AB3935214AA22_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_DB31062B5932CACE_1_METHOD_2_126AB3935214AA22_1_OFFSET))(this);
	}

	::System::Void Method_2_7D201B4343E63821_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_DB31062B5932CACE_1_METHOD_2_7D201B4343E63821_1_OFFSET))(this, a1);
	}
};
