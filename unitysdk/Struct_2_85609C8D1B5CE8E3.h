#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_85609C8D1B5CE8E3_GET_BLOCKNAME_OFFSET UNITYSDK_OFFSET(0x5AB0)
#define STRUCT_2_85609C8D1B5CE8E3_GET_REASON_OFFSET UNITYSDK_OFFSET(0x6020)
#define STRUCT_2_85609C8D1B5CE8E3__CTOR_OFFSET UNITYSDK_OFFSET(0x2DE5BC0)

inline static constexpr unsigned int Struct_2_85609C8D1B5CE8E3_TypeDefinitionIndex = 62249;

struct alignas(8) Struct_2_85609C8D1B5CE8E3
{
	::System::String* _BlockName_k__BackingField; // 0x10
	::System::String* _Reason_k__BackingField; // 0x18

	::System::Void _ctor(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_85609C8D1B5CE8E3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* get_BlockName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_85609C8D1B5CE8E3_GET_BLOCKNAME_OFFSET))(this);
	}

	::System::String* get_Reason()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_85609C8D1B5CE8E3_GET_REASON_OFFSET))(this);
	}
};
