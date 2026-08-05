#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_5EB52B8C4619C919_METHOD_2_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x31CCF0)
#define STRUCT_2_5EB52B8C4619C919_METHOD_2_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x832870)
#define STRUCT_2_5EB52B8C4619C919_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x325570)
#define STRUCT_2_5EB52B8C4619C919_TOSTRING_OFFSET UNITYSDK_OFFSET(0x832860)
#define STRUCT_2_5EB52B8C4619C919__CTOR_OFFSET UNITYSDK_OFFSET(0x41FE00)

inline static constexpr unsigned int Struct_2_5EB52B8C4619C919_TypeDefinitionIndex = 58507;

struct alignas(8) Struct_2_5EB52B8C4619C919
{
	::System::Int32 Field_2_1; // 0x10
	::System::String* Field_2_0; // 0x18

	::System::Void _ctor(::System::Int32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_5EB52B8C4619C919__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_5EB52B8C4619C919_TOSTRING_OFFSET))(this);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_5EB52B8C4619C919_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::String* Method_2_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_5EB52B8C4619C919_METHOD_2_35EA095E1AFDD9C8_OFFSET))(this);
	}

	::System::String* Method_2_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_5EB52B8C4619C919_METHOD_2_126AB3935214AA22_OFFSET))(this);
	}
};
